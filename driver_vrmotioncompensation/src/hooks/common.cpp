#include "common.h"

#include "IVRDriverContextHooks.h"
#include "IVRServerDriverHost004Hooks.h"
#include "IVRServerDriverHost005Hooks.h"
#include "IVRServerDriverHost006Hooks.h"
#include "ITrackedDeviceServerDriver005Hooks.h"


namespace vrmotioncompensation
{
	namespace driver
	{
		ServerDriver* InterfaceHooks::serverDriver = nullptr;

		std::shared_ptr<InterfaceHooks> InterfaceHooks::hookInterface(void* interfaceRef, std::string interfaceVersion)
		{
			std::shared_ptr<InterfaceHooks> retval;
			if (interfaceVersion.compare("IVRDriverContext") == 0)
			{
				retval = IVRDriverContextHooks::createHooks(interfaceRef);
			}
			else if (interfaceVersion.compare("IVRServerDriverHost_004") == 0)
			{
				retval = IVRServerDriverHost004Hooks::createHooks(interfaceRef);
			}
			else if (interfaceVersion.compare("IVRServerDriverHost_005") == 0)
			{
				retval = IVRServerDriverHost005Hooks::createHooks(interfaceRef);
			}
			else if (interfaceVersion.compare("IVRServerDriverHost_006") == 0)
			{
				retval = IVRServerDriverHost006Hooks::createHooks(interfaceRef);
			}
			else if (interfaceVersion.compare("ITrackedDeviceServerDriver_005") == 0)
			{
				retval = ITrackedDeviceServerDriver005Hooks::createHooks(interfaceRef);
			}
			return retval;
		}
	}
}