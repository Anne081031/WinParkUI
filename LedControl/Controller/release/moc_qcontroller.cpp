/****************************************************************************
** Meta object code from reading C++ file 'qcontroller.h'
**
** Created: Thu Feb 21 12:30:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcontroller.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   13,   12,   12, 0x05,
      50,   45,   12,   12, 0x05,
      89,   67,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     121,   13,   12,   12, 0x08,
     148,   45,   12,   12, 0x08,
     171,   67,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QController[] = {
    "QController\0\0data,bSend\0Cmd(QByteArray,bool)\0"
    "data\0Data(QByteArray)\0strInfo,nIndex,byData\0"
    "Query(QString,qint8,QByteArray)\0"
    "HandleCmd(QByteArray,bool)\0"
    "HandleData(QByteArray)\0"
    "HandleQuery(QString,qint8,QByteArray)\0"
};

void QController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QController *_t = static_cast<QController *>(_o);
        switch (_id) {
        case 0: _t->Cmd((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->Data((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->Query((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 3: _t->HandleCmd((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->HandleData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->HandleQuery((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QController,
      qt_meta_data_QController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QController))
        return static_cast<void*>(const_cast< QController*>(this));
    return QObject::qt_metacast(_clname);
}

int QController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QController::Cmd(QByteArray _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QController::Data(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QController::Query(QString _t1, qint8 _t2, QByteArray _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
