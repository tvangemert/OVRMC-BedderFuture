/****************************************************************************
** Meta object code from reading C++ file 'DeviceManipulationTabController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/tabcontrollers/DeviceManipulationTabController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceManipulationTabController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_motioncompensation__DeviceManipulationTabController_t {
    QByteArrayData data[66];
    char stringdata0[1042];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_motioncompensation__DeviceManipulationTabController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_motioncompensation__DeviceManipulationTabController_t qt_meta_stringdata_motioncompensation__DeviceManipulationTabController = {
    {
QT_MOC_LITERAL(0, 0, 51), // "motioncompensation::DeviceMan..."
QT_MOC_LITERAL(1, 52, 18), // "deviceCountChanged"
QT_MOC_LITERAL(2, 71, 0), // ""
QT_MOC_LITERAL(3, 72, 17), // "deviceInfoChanged"
QT_MOC_LITERAL(4, 90, 5), // "index"
QT_MOC_LITERAL(5, 96, 14), // "settingChanged"
QT_MOC_LITERAL(6, 111, 13), // "offsetChanged"
QT_MOC_LITERAL(7, 125, 16), // "debugModeChanged"
QT_MOC_LITERAL(8, 142, 6), // "newKey"
QT_MOC_LITERAL(9, 149, 2), // "id"
QT_MOC_LITERAL(10, 152, 7), // "Qt::Key"
QT_MOC_LITERAL(11, 160, 3), // "key"
QT_MOC_LITERAL(12, 164, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(13, 186, 8), // "modifier"
QT_MOC_LITERAL(14, 195, 9), // "removeKey"
QT_MOC_LITERAL(15, 205, 16), // "getStringFromKey"
QT_MOC_LITERAL(16, 222, 22), // "getStringFromModifiers"
QT_MOC_LITERAL(17, 245, 12), // "getKey_AsKey"
QT_MOC_LITERAL(18, 258, 15), // "getKey_AsString"
QT_MOC_LITERAL(19, 274, 24), // "getModifiers_AsModifiers"
QT_MOC_LITERAL(20, 299, 21), // "getModifiers_AsString"
QT_MOC_LITERAL(21, 321, 17), // "getKeyDescription"
QT_MOC_LITERAL(22, 339, 14), // "getDeviceCount"
QT_MOC_LITERAL(23, 354, 15), // "getDeviceSerial"
QT_MOC_LITERAL(24, 370, 11), // "getOpenVRId"
QT_MOC_LITERAL(25, 382, 14), // "getDeviceClass"
QT_MOC_LITERAL(26, 397, 14), // "getDeviceState"
QT_MOC_LITERAL(27, 412, 13), // "getDeviceMode"
QT_MOC_LITERAL(28, 426, 17), // "setTrackerArrayID"
QT_MOC_LITERAL(29, 444, 8), // "deviceID"
QT_MOC_LITERAL(30, 453, 7), // "ArrayID"
QT_MOC_LITERAL(31, 461, 18), // "getTrackerDeviceID"
QT_MOC_LITERAL(32, 480, 13), // "setHMDArrayID"
QT_MOC_LITERAL(33, 494, 14), // "getHMDDeviceID"
QT_MOC_LITERAL(34, 509, 16), // "updateDeviceInfo"
QT_MOC_LITERAL(35, 526, 8), // "OpenVRId"
QT_MOC_LITERAL(36, 535, 13), // "applySettings"
QT_MOC_LITERAL(37, 549, 6), // "Dindex"
QT_MOC_LITERAL(38, 556, 7), // "RTindex"
QT_MOC_LITERAL(39, 564, 24), // "EnableMotionCompensation"
QT_MOC_LITERAL(40, 589, 12), // "applyOffsets"
QT_MOC_LITERAL(41, 602, 24), // "getDeviceModeErrorString"
QT_MOC_LITERAL(42, 627, 19), // "isDesktopModeActive"
QT_MOC_LITERAL(43, 647, 10), // "setLPFBeta"
QT_MOC_LITERAL(44, 658, 5), // "value"
QT_MOC_LITERAL(45, 664, 10), // "getLPFBeta"
QT_MOC_LITERAL(46, 675, 10), // "setSamples"
QT_MOC_LITERAL(47, 686, 10), // "getSamples"
QT_MOC_LITERAL(48, 697, 11), // "setZeroMode"
QT_MOC_LITERAL(49, 709, 7), // "setZero"
QT_MOC_LITERAL(50, 717, 11), // "getZeroMode"
QT_MOC_LITERAL(51, 729, 15), // "increaseLPFBeta"
QT_MOC_LITERAL(52, 745, 15), // "increaseSamples"
QT_MOC_LITERAL(53, 761, 28), // "setHMDtoRefTranslationOffset"
QT_MOC_LITERAL(54, 790, 4), // "axis"
QT_MOC_LITERAL(55, 795, 25), // "setHMDtoRefRotationOffset"
QT_MOC_LITERAL(56, 821, 28), // "increaseRefTranslationOffset"
QT_MOC_LITERAL(57, 850, 25), // "increaseRefRotationOffset"
QT_MOC_LITERAL(58, 876, 28), // "getHMDtoRefTranslationOffset"
QT_MOC_LITERAL(59, 905, 25), // "getHMDtoRefRotationOffset"
QT_MOC_LITERAL(60, 931, 25), // "setMotionCompensationMode"
QT_MOC_LITERAL(61, 957, 7), // "NewMode"
QT_MOC_LITERAL(62, 965, 25), // "getMotionCompensationMode"
QT_MOC_LITERAL(63, 991, 12), // "setDebugMode"
QT_MOC_LITERAL(64, 1004, 14), // "TestForStandby"
QT_MOC_LITERAL(65, 1019, 22) // "getDebugModeButtonText"

    },
    "motioncompensation::DeviceManipulationTabController\0"
    "deviceCountChanged\0\0deviceInfoChanged\0"
    "index\0settingChanged\0offsetChanged\0"
    "debugModeChanged\0newKey\0id\0Qt::Key\0"
    "key\0Qt::KeyboardModifiers\0modifier\0"
    "removeKey\0getStringFromKey\0"
    "getStringFromModifiers\0getKey_AsKey\0"
    "getKey_AsString\0getModifiers_AsModifiers\0"
    "getModifiers_AsString\0getKeyDescription\0"
    "getDeviceCount\0getDeviceSerial\0"
    "getOpenVRId\0getDeviceClass\0getDeviceState\0"
    "getDeviceMode\0setTrackerArrayID\0"
    "deviceID\0ArrayID\0getTrackerDeviceID\0"
    "setHMDArrayID\0getHMDDeviceID\0"
    "updateDeviceInfo\0OpenVRId\0applySettings\0"
    "Dindex\0RTindex\0EnableMotionCompensation\0"
    "applyOffsets\0getDeviceModeErrorString\0"
    "isDesktopModeActive\0setLPFBeta\0value\0"
    "getLPFBeta\0setSamples\0getSamples\0"
    "setZeroMode\0setZero\0getZeroMode\0"
    "increaseLPFBeta\0increaseSamples\0"
    "setHMDtoRefTranslationOffset\0axis\0"
    "setHMDtoRefRotationOffset\0"
    "increaseRefTranslationOffset\0"
    "increaseRefRotationOffset\0"
    "getHMDtoRefTranslationOffset\0"
    "getHMDtoRefRotationOffset\0"
    "setMotionCompensationMode\0NewMode\0"
    "getMotionCompensationMode\0setDebugMode\0"
    "TestForStandby\0getDebugModeButtonText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_motioncompensation__DeviceManipulationTabController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  249,    2, 0x06 /* Public */,
       3,    1,  250,    2, 0x06 /* Public */,
       5,    0,  253,    2, 0x06 /* Public */,
       6,    0,  254,    2, 0x06 /* Public */,
       7,    0,  255,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    3,  256,    2, 0x02 /* Public */,
      14,    1,  263,    2, 0x02 /* Public */,
      15,    1,  266,    2, 0x02 /* Public */,
      16,    1,  269,    2, 0x02 /* Public */,
      17,    1,  272,    2, 0x02 /* Public */,
      18,    1,  275,    2, 0x02 /* Public */,
      19,    1,  278,    2, 0x02 /* Public */,
      20,    1,  281,    2, 0x02 /* Public */,
      21,    1,  284,    2, 0x02 /* Public */,
      22,    0,  287,    2, 0x02 /* Public */,
      23,    1,  288,    2, 0x02 /* Public */,
      24,    1,  291,    2, 0x02 /* Public */,
      25,    1,  294,    2, 0x02 /* Public */,
      26,    1,  297,    2, 0x02 /* Public */,
      27,    1,  300,    2, 0x02 /* Public */,
      28,    2,  303,    2, 0x02 /* Public */,
      31,    1,  308,    2, 0x02 /* Public */,
      32,    2,  311,    2, 0x02 /* Public */,
      33,    1,  316,    2, 0x02 /* Public */,
      34,    1,  319,    2, 0x02 /* Public */,
      36,    3,  322,    2, 0x02 /* Public */,
      40,    0,  329,    2, 0x02 /* Public */,
      41,    0,  330,    2, 0x02 /* Public */,
      42,    0,  331,    2, 0x02 /* Public */,
      43,    1,  332,    2, 0x02 /* Public */,
      45,    0,  335,    2, 0x02 /* Public */,
      46,    1,  336,    2, 0x02 /* Public */,
      47,    0,  339,    2, 0x02 /* Public */,
      48,    1,  340,    2, 0x02 /* Public */,
      50,    0,  343,    2, 0x02 /* Public */,
      51,    1,  344,    2, 0x02 /* Public */,
      52,    1,  347,    2, 0x02 /* Public */,
      53,    2,  350,    2, 0x02 /* Public */,
      55,    2,  355,    2, 0x02 /* Public */,
      56,    2,  360,    2, 0x02 /* Public */,
      57,    2,  365,    2, 0x02 /* Public */,
      58,    1,  370,    2, 0x02 /* Public */,
      59,    1,  373,    2, 0x02 /* Public */,
      60,    1,  376,    2, 0x02 /* Public */,
      62,    0,  379,    2, 0x02 /* Public */,
      63,    1,  380,    2, 0x02 /* Public */,
      65,    0,  383,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10, 0x80000000 | 12,    9,   11,   13,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::QString, 0x80000000 | 10,   11,
    QMetaType::QString, 0x80000000 | 12,   11,
    0x80000000 | 10, QMetaType::Int,    9,
    QMetaType::QString, QMetaType::Int,    9,
    0x80000000 | 12, QMetaType::Int,    9,
    QMetaType::QString, QMetaType::Int,    9,
    QMetaType::QString, QMetaType::Int,    9,
    QMetaType::UInt,
    QMetaType::QString, QMetaType::UInt,    4,
    QMetaType::UInt, QMetaType::UInt,    4,
    QMetaType::Int, QMetaType::UInt,    4,
    QMetaType::Int, QMetaType::UInt,    4,
    QMetaType::Int, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   29,   30,
    QMetaType::Int, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   29,   30,
    QMetaType::Int, QMetaType::UInt,   30,
    QMetaType::Bool, QMetaType::UInt,   35,
    QMetaType::Bool, QMetaType::UInt, QMetaType::UInt, QMetaType::Bool,   37,   38,   39,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Double,   44,
    QMetaType::Double,
    QMetaType::Bool, QMetaType::UInt,   44,
    QMetaType::UInt,
    QMetaType::Void, QMetaType::Bool,   49,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Double,   44,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, QMetaType::UInt, QMetaType::Double,   54,   44,
    QMetaType::Void, QMetaType::UInt, QMetaType::Double,   54,   44,
    QMetaType::Void, QMetaType::UInt, QMetaType::Double,   54,   44,
    QMetaType::Void, QMetaType::UInt, QMetaType::Double,   54,   44,
    QMetaType::Double, QMetaType::UInt,   54,
    QMetaType::Double, QMetaType::UInt,   54,
    QMetaType::Void, QMetaType::UInt,   61,
    QMetaType::Int,
    QMetaType::Bool, QMetaType::Bool,   64,
    QMetaType::QString,

       0        // eod
};

void motioncompensation::DeviceManipulationTabController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceManipulationTabController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceCountChanged(); break;
        case 1: _t->deviceInfoChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->settingChanged(); break;
        case 3: _t->offsetChanged(); break;
        case 4: _t->debugModeChanged(); break;
        case 5: _t->newKey((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::Key(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3]))); break;
        case 6: _t->removeKey((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: { QString _r = _t->getStringFromKey((*reinterpret_cast< Qt::Key(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->getStringFromModifiers((*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { Qt::Key _r = _t->getKey_AsKey((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Key*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->getKey_AsString((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { Qt::KeyboardModifiers _r = _t->getModifiers_AsModifiers((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::KeyboardModifiers*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->getModifiers_AsString((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->getKeyDescription((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { uint _r = _t->getDeviceCount();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->getDeviceSerial((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { uint _r = _t->getOpenVRId((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 17: { int _r = _t->getDeviceClass((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: { int _r = _t->getDeviceState((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 19: { int _r = _t->getDeviceMode((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->setTrackerArrayID((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 21: { int _r = _t->getTrackerDeviceID((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->setHMDArrayID((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 23: { int _r = _t->getHMDDeviceID((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 24: { bool _r = _t->updateDeviceInfo((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->applySettings((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->applyOffsets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { QString _r = _t->getDeviceModeErrorString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->isDesktopModeActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->setLPFBeta((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { double _r = _t->getLPFBeta();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 31: { bool _r = _t->setSamples((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { uint _r = _t->getSamples();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->setZeroMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: { bool _r = _t->getZeroMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->increaseLPFBeta((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 36: _t->increaseSamples((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->setHMDtoRefTranslationOffset((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 38: _t->setHMDtoRefRotationOffset((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 39: _t->increaseRefTranslationOffset((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 40: _t->increaseRefRotationOffset((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 41: { double _r = _t->getHMDtoRefTranslationOffset((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 42: { double _r = _t->getHMDtoRefRotationOffset((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->setMotionCompensationMode((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 44: { int _r = _t->getMotionCompensationMode();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 45: { bool _r = _t->setDebugMode((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 46: { QString _r = _t->getDebugModeButtonText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceManipulationTabController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManipulationTabController::deviceCountChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceManipulationTabController::*)(unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManipulationTabController::deviceInfoChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceManipulationTabController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManipulationTabController::settingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeviceManipulationTabController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManipulationTabController::offsetChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeviceManipulationTabController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManipulationTabController::debugModeChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject motioncompensation::DeviceManipulationTabController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_motioncompensation__DeviceManipulationTabController.data,
    qt_meta_data_motioncompensation__DeviceManipulationTabController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *motioncompensation::DeviceManipulationTabController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *motioncompensation::DeviceManipulationTabController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_motioncompensation__DeviceManipulationTabController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int motioncompensation::DeviceManipulationTabController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 47;
    }
    return _id;
}

// SIGNAL 0
void motioncompensation::DeviceManipulationTabController::deviceCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void motioncompensation::DeviceManipulationTabController::deviceInfoChanged(unsigned  _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void motioncompensation::DeviceManipulationTabController::settingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void motioncompensation::DeviceManipulationTabController::offsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void motioncompensation::DeviceManipulationTabController::debugModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
