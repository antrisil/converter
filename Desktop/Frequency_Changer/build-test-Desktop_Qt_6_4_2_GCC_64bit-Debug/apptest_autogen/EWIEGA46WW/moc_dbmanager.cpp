/****************************************************************************
** Meta object code from reading C++ file 'dbmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Jonathan/Frequency_Changer/test/dbmanager.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbmanager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DbManager_t {
    uint offsetsAndSizes[18];
    char stringdata0[10];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[18];
    char stringdata5[12];
    char stringdata6[9];
    char stringdata7[14];
    char stringdata8[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DbManager_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DbManager_t qt_meta_stringdata_DbManager = {
    {
        QT_MOC_LITERAL(0, 9),  // "DbManager"
        QT_MOC_LITERAL(10, 12),  // "LoaddChanged"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 11),  // "DataChanged"
        QT_MOC_LITERAL(36, 17),  // "insertIntoTimeout"
        QT_MOC_LITERAL(54, 11),  // "getdatataim"
        QT_MOC_LITERAL(66, 8),  // "getloadd"
        QT_MOC_LITERAL(75, 13),  // "QList<double>"
        QT_MOC_LITERAL(89, 5)   // "loadd"
    },
    "DbManager",
    "LoaddChanged",
    "",
    "DataChanged",
    "insertIntoTimeout",
    "getdatataim",
    "getloadd",
    "QList<double>",
    "loadd"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DbManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    3 /* Public */,
       3,    0,   45,    2, 0x06,    4 /* Public */,
       4,    0,   46,    2, 0x06,    5 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   47,    2, 0x102,    6 /* Public | MethodIsConst  */,
       6,    0,   48,    2, 0x102,    7 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QStringList,
    0x80000000 | 7,

 // properties: name, type, flags
       8, 0x80000000 | 7, 0x00015009, uint(0), 0,
       5, QMetaType::QStringList, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject DbManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DbManager.offsetsAndSizes,
    qt_meta_data_DbManager,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DbManager_t,
        // property 'loadd'
        QtPrivate::TypeAndForceComplete<QList<double>, std::true_type>,
        // property 'getdatataim'
        QtPrivate::TypeAndForceComplete<QList<QString>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DbManager, std::true_type>,
        // method 'LoaddChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'insertIntoTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getdatataim'
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>,
        // method 'getloadd'
        QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>
    >,
    nullptr
} };

void DbManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DbManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->LoaddChanged(); break;
        case 1: _t->DataChanged(); break;
        case 2: _t->insertIntoTimeout(); break;
        case 3: { QList<QString> _r = _t->getdatataim();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QList<double> _r = _t->getloadd();
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::LoaddChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::DataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::insertIntoTimeout; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DbManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<double>*>(_v) = _t->getloadd(); break;
        case 1: *reinterpret_cast< QList<QString>*>(_v) = _t->getdatataim(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *DbManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DbManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DbManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DbManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DbManager::LoaddChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DbManager::DataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DbManager::insertIntoTimeout()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
