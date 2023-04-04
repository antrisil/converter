/****************************************************************************
** Meta object code from reading C++ file 'pcan.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../conversor_frequencias/pcan.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pcan.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_pcan_t {
    uint offsetsAndSizes[40];
    char stringdata0[5];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[10];
    char stringdata5[10];
    char stringdata6[21];
    char stringdata7[21];
    char stringdata8[21];
    char stringdata9[10];
    char stringdata10[12];
    char stringdata11[8];
    char stringdata12[6];
    char stringdata13[6];
    char stringdata14[6];
    char stringdata15[17];
    char stringdata16[17];
    char stringdata17[17];
    char stringdata18[12];
    char stringdata19[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_pcan_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_pcan_t qt_meta_stringdata_pcan = {
    {
        QT_MOC_LITERAL(0, 4),  // "pcan"
        QT_MOC_LITERAL(5, 11),  // "LoadChanged"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 9),  // "ABChanged"
        QT_MOC_LITERAL(28, 9),  // "BCChanged"
        QT_MOC_LITERAL(38, 9),  // "CAChanged"
        QT_MOC_LITERAL(48, 20),  // "InvPhaseAVoltChanged"
        QT_MOC_LITERAL(69, 20),  // "InvPhaseBVoltChanged"
        QT_MOC_LITERAL(90, 20),  // "InvPhaseCVoltChanged"
        QT_MOC_LITERAL(111, 9),  // "RHChanged"
        QT_MOC_LITERAL(121, 11),  // "TempChanged"
        QT_MOC_LITERAL(133, 7),  // "getLoad"
        QT_MOC_LITERAL(141, 5),  // "getAB"
        QT_MOC_LITERAL(147, 5),  // "getBC"
        QT_MOC_LITERAL(153, 5),  // "getCA"
        QT_MOC_LITERAL(159, 16),  // "getInvPhaseAVolt"
        QT_MOC_LITERAL(176, 16),  // "getInvPhaseBVolt"
        QT_MOC_LITERAL(193, 16),  // "getInvPhaseCVolt"
        QT_MOC_LITERAL(210, 11),  // "getHumidity"
        QT_MOC_LITERAL(222, 7)   // "getTemp"
    },
    "pcan",
    "LoadChanged",
    "",
    "ABChanged",
    "BCChanged",
    "CAChanged",
    "InvPhaseAVoltChanged",
    "InvPhaseBVoltChanged",
    "InvPhaseCVoltChanged",
    "RHChanged",
    "TempChanged",
    "getLoad",
    "getAB",
    "getBC",
    "getCA",
    "getInvPhaseAVolt",
    "getInvPhaseBVolt",
    "getInvPhaseCVolt",
    "getHumidity",
    "getTemp"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_pcan[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       9,   77, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,   10 /* Public */,
       3,    0,   69,    2, 0x06,   11 /* Public */,
       4,    0,   70,    2, 0x06,   12 /* Public */,
       5,    0,   71,    2, 0x06,   13 /* Public */,
       6,    0,   72,    2, 0x06,   14 /* Public */,
       7,    0,   73,    2, 0x06,   15 /* Public */,
       8,    0,   74,    2, 0x06,   16 /* Public */,
       9,    0,   75,    2, 0x06,   17 /* Public */,
      10,    0,   76,    2, 0x06,   18 /* Public */,

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

 // properties: name, type, flags
      11, QMetaType::Int, 0x00015001, uint(0), 0,
      12, QMetaType::Int, 0x00015001, uint(1), 0,
      13, QMetaType::Int, 0x00015001, uint(2), 0,
      14, QMetaType::Int, 0x00015001, uint(3), 0,
      15, QMetaType::Int, 0x00015001, uint(4), 0,
      16, QMetaType::Int, 0x00015001, uint(5), 0,
      17, QMetaType::Int, 0x00015001, uint(6), 0,
      18, QMetaType::Int, 0x00015001, uint(7), 0,
      19, QMetaType::Int, 0x00015001, uint(8), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject pcan::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_pcan.offsetsAndSizes,
    qt_meta_data_pcan,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_pcan_t,
        // property 'getLoad'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'getAB'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'getBC'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'getCA'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'getInvPhaseAVolt'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'getInvPhaseBVolt'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'getInvPhaseCVolt'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'getHumidity'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'getTemp'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<pcan, std::true_type>,
        // method 'LoadChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ABChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'BCChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CAChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'InvPhaseAVoltChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'InvPhaseBVoltChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'InvPhaseCVoltChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RHChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TempChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void pcan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<pcan *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->LoadChanged(); break;
        case 1: _t->ABChanged(); break;
        case 2: _t->BCChanged(); break;
        case 3: _t->CAChanged(); break;
        case 4: _t->InvPhaseAVoltChanged(); break;
        case 5: _t->InvPhaseBVoltChanged(); break;
        case 6: _t->InvPhaseCVoltChanged(); break;
        case 7: _t->RHChanged(); break;
        case 8: _t->TempChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (pcan::*)();
            if (_t _q_method = &pcan::LoadChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (pcan::*)();
            if (_t _q_method = &pcan::ABChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (pcan::*)();
            if (_t _q_method = &pcan::BCChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (pcan::*)();
            if (_t _q_method = &pcan::CAChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (pcan::*)();
            if (_t _q_method = &pcan::InvPhaseAVoltChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (pcan::*)();
            if (_t _q_method = &pcan::InvPhaseBVoltChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (pcan::*)();
            if (_t _q_method = &pcan::InvPhaseCVoltChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (pcan::*)();
            if (_t _q_method = &pcan::RHChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (pcan::*)();
            if (_t _q_method = &pcan::TempChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<pcan *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getLoad(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getAB(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getBC(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getCA(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getInvPhaseAVolt(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getInvPhaseBVolt(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getInvPhaseCVolt(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getHumidity(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->getTemp(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *pcan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pcan::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pcan.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pcan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void pcan::LoadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pcan::ABChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pcan::BCChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void pcan::CAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void pcan::InvPhaseAVoltChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void pcan::InvPhaseBVoltChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void pcan::InvPhaseCVoltChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void pcan::RHChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void pcan::TempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
