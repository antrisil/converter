/****************************************************************************
** Meta object code from reading C++ file 'dbmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../conversor_frequencias/dbmanager.h"
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
    uint offsetsAndSizes[32];
    char stringdata0[10];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[17];
    char stringdata5[12];
    char stringdata6[16];
    char stringdata7[14];
    char stringdata8[14];
    char stringdata9[13];
    char stringdata10[8];
    char stringdata11[9];
    char stringdata12[5];
    char stringdata13[6];
    char stringdata14[8];
    char stringdata15[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DbManager_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DbManager_t qt_meta_stringdata_DbManager = {
    {
        QT_MOC_LITERAL(0, 9),  // "DbManager"
        QT_MOC_LITERAL(10, 11),  // "LoadChanged"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 12),  // "LoadChanged2"
        QT_MOC_LITERAL(36, 16),  // "AllTablesChanged"
        QT_MOC_LITERAL(53, 11),  // "LastChanged"
        QT_MOC_LITERAL(65, 15),  // "selectAllTables"
        QT_MOC_LITERAL(81, 13),  // "loadParameter"
        QT_MOC_LITERAL(95, 13),  // "QList<double>"
        QT_MOC_LITERAL(109, 12),  // "currentTable"
        QT_MOC_LITERAL(122, 7),  // "getLoad"
        QT_MOC_LITERAL(130, 8),  // "getLoad2"
        QT_MOC_LITERAL(139, 4),  // "load"
        QT_MOC_LITERAL(144, 5),  // "load2"
        QT_MOC_LITERAL(150, 7),  // "getlast"
        QT_MOC_LITERAL(158, 11)   // "deleteFirst"
    },
    "DbManager",
    "LoadChanged",
    "",
    "LoadChanged2",
    "AllTablesChanged",
    "LastChanged",
    "selectAllTables",
    "loadParameter",
    "QList<double>",
    "currentTable",
    "getLoad",
    "getLoad2",
    "load",
    "load2",
    "getlast",
    "deleteFirst"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DbManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    5 /* Public */,
       3,    0,   63,    2, 0x06,    6 /* Public */,
       4,    0,   64,    2, 0x06,    7 /* Public */,
       5,    0,   65,    2, 0x06,    8 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   66,    2, 0x02,    9 /* Public */,
       7,    1,   67,    2, 0x02,   10 /* Public */,
      10,    0,   70,    2, 0x102,   12 /* Public | MethodIsConst  */,
      11,    0,   71,    2, 0x102,   13 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QStringList,
    0x80000000 | 8, QMetaType::QString,    9,
    0x80000000 | 8,
    0x80000000 | 8,

 // properties: name, type, flags
      12, 0x80000000 | 8, 0x00015009, uint(0), 0,
      13, 0x80000000 | 8, 0x00015009, uint(1), 0,
      14, QMetaType::QString, 0x00015001, uint(3), 0,
      15, QMetaType::QString, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject DbManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DbManager.offsetsAndSizes,
    qt_meta_data_DbManager,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DbManager_t,
        // property 'load'
        QtPrivate::TypeAndForceComplete<QList<double>, std::true_type>,
        // property 'load2'
        QtPrivate::TypeAndForceComplete<QList<double>, std::true_type>,
        // property 'getlast'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'deleteFirst'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DbManager, std::true_type>,
        // method 'LoadChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoadChanged2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AllTablesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LastChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectAllTables'
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>,
        // method 'loadParameter'
        QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getLoad'
        QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>,
        // method 'getLoad2'
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
        case 0: _t->LoadChanged(); break;
        case 1: _t->LoadChanged2(); break;
        case 2: _t->AllTablesChanged(); break;
        case 3: _t->LastChanged(); break;
        case 4: { QList<QString> _r = _t->selectAllTables();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QList<double> _r = _t->loadParameter((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QList<double> _r = _t->getLoad();
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QList<double> _r = _t->getLoad2();
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::LoadChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::LoadChanged2; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::AllTablesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DbManager::*)();
            if (_t _q_method = &DbManager::LastChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DbManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<double>*>(_v) = _t->getLoad(); break;
        case 1: *reinterpret_cast< QList<double>*>(_v) = _t->getLoad2(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getlast(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->deleteFirst(); break;
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DbManager::LoadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DbManager::LoadChanged2()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DbManager::AllTablesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DbManager::LastChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
