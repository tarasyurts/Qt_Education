/****************************************************************************
** Meta object code from reading C++ file 'Watch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Watch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Watch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Watch_t {
    QByteArrayData data[8];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Watch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Watch_t qt_meta_stringdata_Watch = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Watch"
QT_MOC_LITERAL(1, 6, 13), // "updateDisplay"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "switchLight"
QT_MOC_LITERAL(4, 33, 16), // "switchTimeFormat"
QT_MOC_LITERAL(5, 50, 14), // "switchShowDate"
QT_MOC_LITERAL(6, 65, 15), // "addSecondToTime"
QT_MOC_LITERAL(7, 81, 16) // "addMSecondToTime"

    },
    "Watch\0updateDisplay\0\0switchLight\0"
    "switchTimeFormat\0switchShowDate\0"
    "addSecondToTime\0addMSecondToTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Watch[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Watch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Watch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateDisplay(); break;
        case 1: _t->switchLight(); break;
        case 2: _t->switchTimeFormat(); break;
        case 3: _t->switchShowDate(); break;
        case 4: _t->addSecondToTime(); break;
        case 5: _t->addMSecondToTime(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Watch::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Watch::updateDisplay)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Watch::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Watch::switchLight)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Watch::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Watch::switchTimeFormat)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Watch::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Watch::switchShowDate)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Watch::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Watch.data,
    qt_meta_data_Watch,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Watch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Watch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Watch.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Watch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Watch::updateDisplay()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Watch::switchLight()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Watch::switchTimeFormat()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Watch::switchShowDate()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
