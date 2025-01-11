/****************************************************************************
** Meta object code from reading C++ file 'TelemetryBackend.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../TelemetryBackend.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TelemetryBackend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTelemetryBackendENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTelemetryBackendENDCLASS = QtMocHelpers::stringData(
    "TelemetryBackend",
    "connectionStatusChanged",
    "",
    "batteryLevelChanged",
    "altitudeChanged",
    "speedChanged",
    "simulateTelemetryUpdate",
    "connectionStatus",
    "batteryLevel",
    "altitude",
    "speed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTelemetryBackendENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[17];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[16];
    char stringdata5[13];
    char stringdata6[24];
    char stringdata7[17];
    char stringdata8[13];
    char stringdata9[9];
    char stringdata10[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTelemetryBackendENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTelemetryBackendENDCLASS_t qt_meta_stringdata_CLASSTelemetryBackendENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "TelemetryBackend"
        QT_MOC_LITERAL(17, 23),  // "connectionStatusChanged"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 19),  // "batteryLevelChanged"
        QT_MOC_LITERAL(62, 15),  // "altitudeChanged"
        QT_MOC_LITERAL(78, 12),  // "speedChanged"
        QT_MOC_LITERAL(91, 23),  // "simulateTelemetryUpdate"
        QT_MOC_LITERAL(115, 16),  // "connectionStatus"
        QT_MOC_LITERAL(132, 12),  // "batteryLevel"
        QT_MOC_LITERAL(145, 8),  // "altitude"
        QT_MOC_LITERAL(154, 5)   // "speed"
    },
    "TelemetryBackend",
    "connectionStatusChanged",
    "",
    "batteryLevelChanged",
    "altitudeChanged",
    "speedChanged",
    "simulateTelemetryUpdate",
    "connectionStatus",
    "batteryLevel",
    "altitude",
    "speed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTelemetryBackendENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    5 /* Public */,
       3,    0,   45,    2, 0x06,    6 /* Public */,
       4,    0,   46,    2, 0x06,    7 /* Public */,
       5,    0,   47,    2, 0x06,    8 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   48,    2, 0x02,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00015103, uint(0), 0,
       8, QMetaType::Int, 0x00015103, uint(1), 0,
       9, QMetaType::Double, 0x00015103, uint(2), 0,
      10, QMetaType::Double, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject TelemetryBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTelemetryBackendENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTelemetryBackendENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTelemetryBackendENDCLASS_t,
        // property 'connectionStatus'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'batteryLevel'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'altitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'speed'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TelemetryBackend, std::true_type>,
        // method 'connectionStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'batteryLevelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'altitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'speedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'simulateTelemetryUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TelemetryBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TelemetryBackend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectionStatusChanged(); break;
        case 1: _t->batteryLevelChanged(); break;
        case 2: _t->altitudeChanged(); break;
        case 3: _t->speedChanged(); break;
        case 4: _t->simulateTelemetryUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TelemetryBackend::*)();
            if (_t _q_method = &TelemetryBackend::connectionStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TelemetryBackend::*)();
            if (_t _q_method = &TelemetryBackend::batteryLevelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TelemetryBackend::*)();
            if (_t _q_method = &TelemetryBackend::altitudeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TelemetryBackend::*)();
            if (_t _q_method = &TelemetryBackend::speedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TelemetryBackend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->connectionStatus(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->batteryLevel(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->altitude(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->speed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TelemetryBackend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setConnectionStatus(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setBatteryLevel(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setAltitude(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setSpeed(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *TelemetryBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelemetryBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTelemetryBackendENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TelemetryBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TelemetryBackend::connectionStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TelemetryBackend::batteryLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TelemetryBackend::altitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TelemetryBackend::speedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
