/****************************************************************************
** Meta object code from reading C++ file 'vehicleinfo.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Example1/VanBus/CarStatistics/vehicleinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicleinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VehicleInfo_t {
    const uint offsetsAndSize[8];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_VehicleInfo_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_VehicleInfo_t qt_meta_stringdata_VehicleInfo = {
    {
QT_MOC_LITERAL(0, 11), // "VehicleInfo"
QT_MOC_LITERAL(12, 14), // "reverseEngaged"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 17) // "reverseDisengaged"

    },
    "VehicleInfo\0reverseEngaged\0\0"
    "reverseDisengaged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleInfo[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,
       3,    0,   27,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VehicleInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VehicleInfo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->reverseEngaged(); break;
        case 1: _t->reverseDisengaged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VehicleInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleInfo::reverseEngaged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VehicleInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleInfo::reverseDisengaged)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject VehicleInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_VehicleInfo.offsetsAndSize,
    qt_meta_data_VehicleInfo,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_VehicleInfo_t
, QtPrivate::TypeAndForceComplete<VehicleInfo, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *VehicleInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VehicleInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void VehicleInfo::reverseEngaged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VehicleInfo::reverseDisengaged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
