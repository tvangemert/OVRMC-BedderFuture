/****************************************************************************
** Meta object code from reading C++ file 'overlaycontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/overlaycontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overlaycontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_motioncompensation__OverlayController_t {
    QByteArrayData data[16];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_motioncompensation__OverlayController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_motioncompensation__OverlayController_t qt_meta_stringdata_motioncompensation__OverlayController = {
    {
QT_MOC_LITERAL(0, 0, 37), // "motioncompensation::OverlayCo..."
QT_MOC_LITERAL(1, 38, 19), // "keyBoardInputSignal"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 5), // "input"
QT_MOC_LITERAL(4, 65, 9), // "userValue"
QT_MOC_LITERAL(5, 75, 13), // "renderOverlay"
QT_MOC_LITERAL(6, 89, 15), // "OnRenderRequest"
QT_MOC_LITERAL(7, 105, 19), // "OnTimeoutPumpEvents"
QT_MOC_LITERAL(8, 125, 12), // "showKeyboard"
QT_MOC_LITERAL(9, 138, 12), // "existingText"
QT_MOC_LITERAL(10, 151, 19), // "playActivationSound"
QT_MOC_LITERAL(11, 171, 21), // "playFocusChangedSound"
QT_MOC_LITERAL(12, 193, 16), // "getVersionString"
QT_MOC_LITERAL(13, 210, 19), // "getVRRuntimePathUrl"
QT_MOC_LITERAL(14, 230, 13), // "soundDisabled"
QT_MOC_LITERAL(15, 244, 11) // "desktopMode"

    },
    "motioncompensation::OverlayController\0"
    "keyBoardInputSignal\0\0input\0userValue\0"
    "renderOverlay\0OnRenderRequest\0"
    "OnTimeoutPumpEvents\0showKeyboard\0"
    "existingText\0playActivationSound\0"
    "playFocusChangedSound\0getVersionString\0"
    "getVRRuntimePathUrl\0soundDisabled\0"
    "desktopMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_motioncompensation__OverlayController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       1,    1,   79,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    2,   85,    2, 0x0a /* Public */,
       8,    1,   90,    2, 0x2a /* Public | MethodCloned */,
      10,    0,   93,    2, 0x0a /* Public */,
      11,    0,   94,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    0,   95,    2, 0x02 /* Public */,
      13,    0,   96,    2, 0x02 /* Public */,
      14,    0,   97,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::ULong,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::ULong,    9,    4,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QUrl,
    QMetaType::Bool,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00095001,

       0        // eod
};

void motioncompensation::OverlayController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OverlayController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyBoardInputSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 1: _t->keyBoardInputSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->renderOverlay(); break;
        case 3: _t->OnRenderRequest(); break;
        case 4: _t->OnTimeoutPumpEvents(); break;
        case 5: _t->showKeyboard((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        case 6: _t->showKeyboard((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->playActivationSound(); break;
        case 8: _t->playFocusChangedSound(); break;
        case 9: { QString _r = _t->getVersionString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QUrl _r = _t->getVRRuntimePathUrl();
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->soundDisabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OverlayController::*)(QString , unsigned long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverlayController::keyBoardInputSignal)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OverlayController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isDesktopMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject motioncompensation::OverlayController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_motioncompensation__OverlayController.data,
    qt_meta_data_motioncompensation__OverlayController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *motioncompensation::OverlayController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *motioncompensation::OverlayController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_motioncompensation__OverlayController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int motioncompensation::OverlayController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void motioncompensation::OverlayController::keyBoardInputSignal(QString _t1, unsigned long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
