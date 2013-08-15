/****************************************************************************
** Meta object code from reading C++ file 'qcontrollersp.h'
**
** Created: Tue Apr 23 13:32:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcontrollersp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcontrollersp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QControllerSP[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x05,
      48,   37,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QControllerSP[] = {
    "QControllerSP\0\0data\0Data(QByteArray)\0"
    "data,bSend\0Cmd(QByteArray,bool)\0"
    "ReceiveData()\0"
};

void QControllerSP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QControllerSP *_t = static_cast<QControllerSP *>(_o);
        switch (_id) {
        case 0: _t->Data((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->Cmd((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->ReceiveData(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QControllerSP::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QControllerSP::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QControllerSP,
      qt_meta_data_QControllerSP, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QControllerSP::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QControllerSP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QControllerSP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QControllerSP))
        return static_cast<void*>(const_cast< QControllerSP*>(this));
    return QObject::qt_metacast(_clname);
}

int QControllerSP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QControllerSP::Data(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QControllerSP::Cmd(QByteArray _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
