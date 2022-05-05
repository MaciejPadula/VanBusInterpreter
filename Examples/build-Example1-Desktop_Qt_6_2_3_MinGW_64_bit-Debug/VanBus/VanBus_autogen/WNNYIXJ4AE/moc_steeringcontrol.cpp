/****************************************************************************
** Meta object code from reading C++ file 'steeringcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Example1/VanBus/MultimediaInfo/steeringcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'steeringcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SteeringControl_t {
    const uint offsetsAndSize[24];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SteeringControl_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SteeringControl_t qt_meta_stringdata_SteeringControl = {
    {
QT_MOC_LITERAL(0, 15), // "SteeringControl"
QT_MOC_LITERAL(16, 18), // "bothControlClicked"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 11), // "nextClicked"
QT_MOC_LITERAL(48, 15), // "previousClicked"
QT_MOC_LITERAL(64, 15), // "volumeUpClicked"
QT_MOC_LITERAL(80, 17), // "volumeDownClicked"
QT_MOC_LITERAL(98, 13), // "sourceClicked"
QT_MOC_LITERAL(112, 11), // "tripClicked"
QT_MOC_LITERAL(124, 7), // "wheelUp"
QT_MOC_LITERAL(132, 9), // "wheelDown"
QT_MOC_LITERAL(142, 11) // "wheelStatic"

    },
    "SteeringControl\0bothControlClicked\0\0"
    "nextClicked\0previousClicked\0volumeUpClicked\0"
    "volumeDownClicked\0sourceClicked\0"
    "tripClicked\0wheelUp\0wheelDown\0wheelStatic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SteeringControl[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    0,   75,    2, 0x06,    2 /* Public */,
       4,    0,   76,    2, 0x06,    3 /* Public */,
       5,    0,   77,    2, 0x06,    4 /* Public */,
       6,    0,   78,    2, 0x06,    5 /* Public */,
       7,    0,   79,    2, 0x06,    6 /* Public */,
       8,    0,   80,    2, 0x06,    7 /* Public */,
       9,    0,   81,    2, 0x06,    8 /* Public */,
      10,    0,   82,    2, 0x06,    9 /* Public */,
      11,    0,   83,    2, 0x06,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SteeringControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SteeringControl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->bothControlClicked(); break;
        case 1: _t->nextClicked(); break;
        case 2: _t->previousClicked(); break;
        case 3: _t->volumeUpClicked(); break;
        case 4: _t->volumeDownClicked(); break;
        case 5: _t->sourceClicked(); break;
        case 6: _t->tripClicked(); break;
        case 7: _t->wheelUp(); break;
        case 8: _t->wheelDown(); break;
        case 9: _t->wheelStatic(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SteeringControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SteeringControl::bothControlClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SteeringControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SteeringControl::nextClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SteeringControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SteeringControl::previousClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SteeringControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SteeringControl::volumeUpClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SteeringControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SteeringControl::volumeDownClicked)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SteeringControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SteeringControl::sourceClicked)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SteeringControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SteeringControl::tripClicked)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SteeringControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SteeringControl::wheelUp)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SteeringControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SteeringControl::wheelDown)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SteeringControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SteeringControl::wheelStatic)) {
                *result = 9;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject SteeringControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SteeringControl.offsetsAndSize,
    qt_meta_data_SteeringControl,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SteeringControl_t
, QtPrivate::TypeAndForceComplete<SteeringControl, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *SteeringControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SteeringControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SteeringControl.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SteeringControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SteeringControl::bothControlClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SteeringControl::nextClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SteeringControl::previousClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SteeringControl::volumeUpClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SteeringControl::volumeDownClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SteeringControl::sourceClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SteeringControl::tripClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SteeringControl::wheelUp()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void SteeringControl::wheelDown()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void SteeringControl::wheelStatic()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
