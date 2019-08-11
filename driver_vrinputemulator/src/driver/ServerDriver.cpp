
#include "ServerDriver.h"

#include <boost/date_time/posix_time/posix_time_types.hpp>
#include "VirtualDeviceDriver.h"
#include "../devicemanipulation/DeviceManipulationHandle.h"


namespace vrinputemulator {
namespace driver {



ServerDriver* ServerDriver::singleton = nullptr;
std::string ServerDriver::installDir;


ServerDriver::ServerDriver() : m_motionCompensation(this) {
	singleton = this;
	memset(_openvrIdToDeviceManipulationHandleMap, 0, sizeof(DeviceManipulationHandle*) * vr::k_unMaxTrackedDeviceCount);
}


ServerDriver::~ServerDriver() {
	LOG(TRACE) << "CServerDriver::~CServerDriver_InputEmulator()";
}


bool ServerDriver::hooksTrackedDevicePoseUpdated(void* serverDriverHost, int version, uint32_t& unWhichDevice, vr::DriverPose_t& newPose, uint32_t& unPoseStructSize) {
	if (_openvrIdToDeviceManipulationHandleMap[unWhichDevice] && _openvrIdToDeviceManipulationHandleMap[unWhichDevice]->isValid()) {
		return _openvrIdToDeviceManipulationHandleMap[unWhichDevice]->handlePoseUpdate(unWhichDevice, newPose, unPoseStructSize);
	}
	return true;
}

bool ServerDriver::hooksPollNextEvent(void* serverDriverHost, int version, void* pEvent, uint32_t uncbVREvent) {
		vr::VREvent_t* event = (vr::VREvent_t*)pEvent;
		LOG(DEBUG) << "ServerDriver::hooksPollNextEvent(" << serverDriverHost << ", " << version << ", " << pEvent << ", " << uncbVREvent << ")"
			<< " : " << event->eventType << ", " << event->trackedDeviceIndex;		
	return true;
}

void ServerDriver::hooksTrackedDeviceAdded(void* serverDriverHost, int version, const char *pchDeviceSerialNumber, vr::ETrackedDeviceClass& eDeviceClass, void* pDriver) {
	LOG(TRACE) << "ServerDriver::hooksTrackedDeviceAdded(" << serverDriverHost << ", " << version << ", " << pchDeviceSerialNumber << ", " << (int)eDeviceClass << ", " << pDriver << ")";

	LOG(INFO) << "Found device " << pchDeviceSerialNumber << " (deviceClass: " << (int)eDeviceClass << ")";

	// Device Class Override
	if (eDeviceClass == vr::TrackedDeviceClass_GenericTracker && _propertiesOverrideGenericTrackerFakeController) {
		eDeviceClass = vr::TrackedDeviceClass_Controller;
		LOG(INFO) << "Disguised GenericTracker " << pchDeviceSerialNumber << " as Controller.";
	}

	// Create ManipulationInfo entry
	auto handle = std::make_shared<DeviceManipulationHandle>(pchDeviceSerialNumber, eDeviceClass, pDriver, serverDriverHost, version);
	_deviceManipulationHandles.insert({pDriver, handle});

	// Hook into server driver interface
	handle->setServerDriverHooks(InterfaceHooks::hookInterface(pDriver, "ITrackedDeviceServerDriver_005"));

}


void ServerDriver::hooksTrackedDeviceActivated(void* serverDriver, int version, uint32_t unObjectId) {
	LOG(TRACE) << "ServerDriver::hooksTrackedDeviceActivated(" << serverDriver << ", " << version << ", " << unObjectId << ")";
	auto i = _deviceManipulationHandles.find(serverDriver);
	if (i != _deviceManipulationHandles.end()) {
		auto handle = i->second;
		handle->setOpenvrId(unObjectId);
		_openvrIdToDeviceManipulationHandleMap[unObjectId] = handle.get();

		// get device property container
		auto container = vr::VRPropertiesRaw()->TrackedDeviceToPropertyContainer(unObjectId);
		handle->setPropertyContainer(container);
		_propertyContainerToDeviceManipulationHandleMap[container] = handle.get();

		LOG(INFO) << "Successfully added device " << handle->serialNumber() << " (OpenVR Id: " << handle->openvrId() << ")";
	}
}


std::string _propertyValueToString(void *pvBuffer, uint32_t unBufferSize, vr::PropertyTypeTag_t unTag) {
	switch (unTag) {
	case vr::k_unFloatPropertyTag:
		return std::to_string(*(float*)pvBuffer) + " [float]";
		break;
	case vr::k_unInt32PropertyTag:
		return std::to_string(*(int32_t*)pvBuffer) + " [int32]";
		break;
	case vr::k_unUint64PropertyTag:
		return std::to_string(*(uint64_t*)pvBuffer) + " [uint64]";
		break;
	case vr::k_unBoolPropertyTag:
		return std::to_string(*(bool*)pvBuffer) + " [bool]";
		break;
	case vr::k_unStringPropertyTag:
		return std::string((const char*)pvBuffer) + " [string]";
		break;
	case vr::k_unHmdMatrix34PropertyTag:
		return std::string("[matrix34]");
		break;
	case vr::k_unHmdMatrix44PropertyTag:
		return std::string("[matrix44]");
		break;
	case vr::k_unHmdVector3PropertyTag:
		return std::string("[vector3]");
		break;
	case vr::k_unHmdVector4PropertyTag:
		return std::string("[vector4]");
		break;
	case vr::k_unHiddenAreaPropertyTag:
		return std::string("[HiddenAreaProperty]");
		break;
	case vr::k_unInvalidPropertyTag:
		return std::string("[Invalid]");
		break;
	default:
		return std::string("<Unknown>");
		break;
	}
}

void ServerDriver::hooksPropertiesReadPropertyBatch(void* properties, int version, vr::PropertyContainerHandle_t ulContainer, void* pBatch, uint32_t unBatchEntryCount) {
}


void ServerDriver::hooksPropertiesWritePropertyBatch(void* properties, int version, vr::PropertyContainerHandle_t ulContainer, void* pBatch, uint32_t unBatchEntryCount) {
	//LOG(TRACE) << "ServerDriver::hooksPropertiesWritePropertyBatch(" << properties << ", " << (uint64_t)ulContainer << ", " << (void*)pBatch << ", " << unBatchEntryCount << ")";
	uint32_t deviceId = vr::k_unTrackedDeviceIndexInvalid;
	DeviceManipulationHandle* deviceHandle = nullptr;
	auto entryIt = _propertyContainerToDeviceManipulationHandleMap.find(ulContainer);
	if (entryIt != _propertyContainerToDeviceManipulationHandleMap.end()) {
		deviceHandle = entryIt->second;
		deviceId = deviceHandle->openvrId();
	} else {
		for (uint32_t id = 0; id < vr::k_unMaxTrackedDeviceCount; id++) {
			auto propsContainer = vr::VRPropertiesRaw()->TrackedDeviceToPropertyContainer(id);
			if (propsContainer == ulContainer) {
				deviceId = id;
				break;
			}
		}
	}
	for (uint32_t i = 0; i < unBatchEntryCount; i++) {
		vr::PropertyWrite_t& be = ((vr::PropertyWrite_t*)pBatch)[i];
		//LOG(TRACE) << "\tProperty "<< i << ": " << (int)be.prop << " = " << _propertyValueToString(be.pvBuffer, be.unBufferSize, be.unTag);
		if (be.prop == vr::Prop_ManufacturerName_String && !_propertiesOverrideHmdManufacturer.empty()) {
			LOG(INFO) << "Overwriting Device Manufacturer: " << be.pvBuffer << " => " << _propertiesOverrideHmdManufacturer;
			be.pvBuffer = (void*)_propertiesOverrideHmdManufacturer.c_str();
			be.unBufferSize = (uint32_t)_propertiesOverrideHmdManufacturer.size() + 1;
		} else if (deviceId == vr::k_unTrackedDeviceIndex_Hmd && be.prop == vr::Prop_ModelNumber_String && !_propertiesOverrideHmdModel.empty()) {
			LOG(INFO) << "Overwriting Hmd Model: " << be.pvBuffer << " => " << _propertiesOverrideHmdModel;
			be.pvBuffer = (void*)_propertiesOverrideHmdModel.c_str();
			be.unBufferSize = (uint32_t)_propertiesOverrideHmdModel.size() + 1;
		} else if (be.prop == vr::Prop_TrackingSystemName_String && !_propertiesOverrideHmdTrackingSystem.empty()) {
			LOG(INFO) << "Overwriting Device TrackingSystem: " << be.pvBuffer << " => " << _propertiesOverrideHmdTrackingSystem;
			be.pvBuffer = (void*)_propertiesOverrideHmdTrackingSystem.c_str();
			be.unBufferSize = (uint32_t)_propertiesOverrideHmdTrackingSystem.size() + 1;
		}
	}
}

vr::EVRInitError ServerDriver::Init(vr::IVRDriverContext *pDriverContext) {
	LOG(TRACE) << "CServerDriver::Init()";

	// Initialize Hooking
	InterfaceHooks::setServerDriver(this);
	auto mhError = MH_Initialize();
	if (mhError == MH_OK) {
		_driverContextHooks = InterfaceHooks::hookInterface(pDriverContext, "IVRDriverContext");
	} else {
		LOG(ERROR) << "Error while initialising minHook: " << MH_StatusToString(mhError);
	}

	LOG(DEBUG) << "Initialize driver context.";
	VR_INIT_SERVER_DRIVER_CONTEXT(pDriverContext);

	// Read installation directory
	vr::ETrackedPropertyError tpeError;
	installDir = vr::VRProperties()->GetStringProperty(pDriverContext->GetDriverHandle(), vr::Prop_InstallPath_String, &tpeError);
	if (tpeError == vr::TrackedProp_Success) {
		LOG(INFO) << "Install Dir:" << installDir;
	} else {
		LOG(INFO) << "Could not get Install Dir: " << vr::VRPropertiesRaw()->GetPropErrorNameFromEnum(tpeError);
	}

	// Read vrsettings
	char buffer[vr::k_unMaxPropertyStringSize];
	vr::EVRSettingsError peError;
	vr::VRSettings()->GetString(vrsettings_SectionName, vrsettings_overrideHmdManufacturer_string, buffer, vr::k_unMaxPropertyStringSize, &peError);
	if (peError == vr::VRSettingsError_None) {
		_propertiesOverrideHmdManufacturer = buffer;
		LOG(INFO) << vrsettings_SectionName << "::" << vrsettings_overrideHmdManufacturer_string << " = " << _propertiesOverrideHmdManufacturer;
	}
	vr::VRSettings()->GetString(vrsettings_SectionName, vrsettings_overrideHmdModel_string, buffer, vr::k_unMaxPropertyStringSize, &peError);
	if (peError == vr::VRSettingsError_None) {
		_propertiesOverrideHmdModel = buffer;
		LOG(INFO) << vrsettings_SectionName << "::" << vrsettings_overrideHmdModel_string << " = " << _propertiesOverrideHmdModel;
	}
	vr::VRSettings()->GetString(vrsettings_SectionName, vrsettings_overrideHmdTrackingSystem_string, buffer, vr::k_unMaxPropertyStringSize, &peError);
	if (peError == vr::VRSettingsError_None) {
		_propertiesOverrideHmdTrackingSystem = buffer;
		LOG(INFO) << vrsettings_SectionName << "::" << vrsettings_overrideHmdTrackingSystem_string << " = " << _propertiesOverrideHmdTrackingSystem;
	}
	auto boolVal = vr::VRSettings()->GetBool(vrsettings_SectionName, vrsettings_genericTrackerFakeController_bool, &peError);
	if (peError == vr::VRSettingsError_None) {
		_propertiesOverrideGenericTrackerFakeController = boolVal;
		LOG(INFO) << vrsettings_SectionName << "::" << vrsettings_genericTrackerFakeController_bool << " = " << boolVal;
	}

	// Start IPC thread
	shmCommunicator.init(this);
	return vr::VRInitError_None;
}


void ServerDriver::Cleanup() {
	LOG(TRACE) << "CServerDriver::Cleanup()";
	_driverContextHooks.reset();
	MH_Uninitialize();
	shmCommunicator.shutdown();
	VR_CLEANUP_SERVER_DRIVER_CONTEXT();
}


// Call frequency: ~93Hz
void ServerDriver::RunFrame() {
	for (auto d : _deviceManipulationHandles) {
		d.second->RunFrame();
	}
	m_motionCompensation.runFrame();
}

void ServerDriver::_trackedDeviceActivated(uint32_t deviceId, VirtualDeviceDriver * device) {
	m_openvrIdToVirtualDeviceMap[deviceId] = device;
}

void ServerDriver::_trackedDeviceDeactivated(uint32_t deviceId) {
	m_openvrIdToVirtualDeviceMap[deviceId] = nullptr;
}

void ServerDriver::openvr_poseUpdate(uint32_t unWhichDevice, vr::DriverPose_t & newPose, int64_t timestamp) {
	auto devicePtr = this->m_openvrIdToVirtualDeviceMap[unWhichDevice];
	auto now = std::chrono::duration_cast <std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
	auto diff = 0.0;
	if (timestamp < now) {
		diff = ((double)now - timestamp) / 1000.0;
	}
	if (devicePtr) {
		devicePtr->updatePose(newPose, -diff);
	} else {
		if (_openvrIdToDeviceManipulationHandleMap[unWhichDevice] && _openvrIdToDeviceManipulationHandleMap[unWhichDevice]->isValid()) {
			newPose.poseTimeOffset -= diff;
			_openvrIdToDeviceManipulationHandleMap[unWhichDevice]->ll_sendPoseUpdate(newPose);
		}
	}
}

void ServerDriver::openvr_vendorSpecificEvent(uint32_t unWhichDevice, vr::EVREventType eventType, vr::VREvent_Data_t & eventData, double eventTimeOffset) {
	vr::VRServerDriverHost()->VendorSpecificEvent(unWhichDevice, eventType, eventData, eventTimeOffset);
}

DeviceManipulationHandle* ServerDriver::getDeviceManipulationHandleById(uint32_t unWhichDevice) {
	std::lock_guard<std::recursive_mutex> lock(_deviceManipulationHandlesMutex);
	if (_openvrIdToDeviceManipulationHandleMap[unWhichDevice] && _openvrIdToDeviceManipulationHandleMap[unWhichDevice]->isValid()) {
		return _openvrIdToDeviceManipulationHandleMap[unWhichDevice];
	}
	return nullptr;
}


DeviceManipulationHandle* ServerDriver::getDeviceManipulationHandleByPropertyContainer(vr::PropertyContainerHandle_t container) {
	std::lock_guard<std::recursive_mutex> lock(_deviceManipulationHandlesMutex);
	auto it = _propertyContainerToDeviceManipulationHandleMap.find(container);
	if (it != _propertyContainerToDeviceManipulationHandleMap.end()) {
		return it->second;
	}
	return nullptr;
}


void ServerDriver::sendReplySetMotionCompensationMode(bool success) {
	shmCommunicator.sendReplySetMotionCompensationMode(success);
}


void ServerDriver::addDriverEventForInjection(void* serverDriverHost, std::shared_ptr<void> event, uint32_t size) {
	std::lock_guard<std::mutex> lock(_driverEventInjectionMutex);
	m_eventsToInjectQueues[serverDriverHost].push({event, size});
}

std::pair<std::shared_ptr<void>, uint32_t> ServerDriver::getDriverEventForInjection(void* serverDriverHost) {
	std::lock_guard<std::mutex> lock(_driverEventInjectionMutex);
	auto it = m_eventsToInjectQueues.find(serverDriverHost);
	if (it != m_eventsToInjectQueues.end()) {
		if (it->second.size() > 0) {
			auto retval = it->second.front();
			it->second.pop();
			return retval;
		}
	}
	return std::pair<std::shared_ptr<void>, uint32_t>({ std::shared_ptr<void>(), 0});
}


} // end namespace driver
} // end namespace vrinputemulator
