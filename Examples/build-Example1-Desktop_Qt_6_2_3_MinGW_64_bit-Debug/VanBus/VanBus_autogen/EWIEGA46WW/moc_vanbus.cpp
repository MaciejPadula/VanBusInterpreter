/****************************************************************************
** Meta object code from reading C++ file 'vanbus.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Example1/VanBus/vanbus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vanbus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VanBus_t {
    const uint offsetsAndSize[30];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_VanBus_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_VanBus_t qt_meta_stringdata_VanBus = {
    {
QT_MOC_LITERAL(0, 6), // "VanBus"
QT_MOC_LITERAL(7, 18), // "bothControlClicked"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 11), // "nextClicked"
QT_MOC_LITERAL(39, 15), // "previousClicked"
QT_MOC_LITERAL(55, 15), // "volumeUpClicked"
QT_MOC_LITERAL(71, 17), // "volumeDownClicked"
QT_MOC_LITERAL(89, 13), // "sourceClicked"
QT_MOC_LITERAL(103, 11), // "tripClicked"
QT_MOC_LITERAL(115, 14), // "reverseEngaged"
QT_MOC_LITERAL(130, 17), // "reverseDisengaged"
QT_MOC_LITERAL(148, 7), // "wheelUp"
QT_MOC_LITERAL(156, 9), // "wheelDown"
QT_MOC_LITERAL(166, 11), // "wheelStatic"
QT_MOC_LITERAL(178, 8) // "dataRead"

    },
    "VanBus\0bothControlClicked\0\0nextClicked\0"
    "previousClicked\0volumeUpClicked\0"
    "volumeDownClicked\0sourceClicked\0"
    "tripClicked\0reverseEngaged\0reverseDisengaged\0"
    "wheelUp\0wheelDown\0wheelStatic\0dataRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VanBus[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    1 /* Public */,
       3,    0,   93,    2, 0x06,    2 /* Public */,
       4,    0,   94,    2, 0x06,    3 /* Public */,
       5,    0,   95,    2, 0x06,    4 /* Public */,
       6,    0,   96,    2, 0x06,    5 /* Public */,
       7,    0,   97,    2, 0x06,    6 /* Public */,
       8,    0,   98,    2, 0x06,    7 /* Public */,
       9,    0,   99,    2, 0x06,    8 /* Public */,
      10,    0,  100,    2, 0x06,    9 /* Public */,
      11,    0,  101,    2, 0x06,   10 /* Public */,
      12,    0,  102,    2, 0x06,   11 /* Public */,
      13,    0,  103,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    0,  104,    2, 0x08,   13 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void VanBus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VanBus *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->bothControlClicked(); break;
        case 1: _t->nextClicked(); break;
        case 2: _t->previousClicked(); break;
        case 3: _t->volumeUpClicked(); break;
        case 4: _t->volumeDownClicked(); break;
        case 5: _t->sourceClicked(); break;
        case 6: _t->tripClicked(); break;
        case 7: _t->reverseEngaged(); break;
        case 8: _t->reverseDisengaged(); break;
        case 9: _t->wheelUp(); break;
        case 10: _t->wheelDown(); break;
        case 11: _t->wheelStatic(); break;
        case 12: _t->dataRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VanBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VanBus::bothControlClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VanBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VanBus::nextClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VanBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VanBus::previousClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VanBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VanBus::volumeUpClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VanBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VanBus::volumeDownClicked)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VanBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VanBus::sourceClicked)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VanBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VanBus::tripClicked)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (VanBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VanBus::reverseEngaged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (VanBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VanBus::reverseDisengaged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (VanBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VanBus::wheelUp)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (VanBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VanBus::wheelDown)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (VanBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VanBus::wheelStatic)) {
                *result = 11;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject VanBus::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_VanBus.offsetsAndSize,
    qt_meta_data_VanBus,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_VanBus_t
, QtPrivate::TypeAndForceComplete<VanBus, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *VanBus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VanBus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VanBus.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VanBus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void VanBus::bothControlClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VanBus::nextClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VanBus::previousClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void VanBus::volumeUpClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void VanBus::volumeDownClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void VanBus::sourceClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void VanBus::tripClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void VanBus::reverseEngaged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void VanBus::reverseDisengaged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void VanBus::wheelUp()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void VanBus::wheelDown()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void VanBus::wheelStatic()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
