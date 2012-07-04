/****************************************************************************
** Meta object code from reading C++ file 'qtcppeersocketthread.h'
**
** Created: Wed Jul 4 15:40:33 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtcppeersocketthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtcppeersocketthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTcpPeerSocketThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   22,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   67,   21,   21, 0x08,
     135,  112,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QTcpPeerSocketThread[] = {
    "QTcpPeerSocketThread\0\0pThread\0"
    "ReleaseMyself(QTcpPeerSocketThread*)\0"
    "pPeerSocket\0HandleThreadEnqueue(QTcpSocket*)\0"
    "pPeerSocket,pByteArray\0"
    "HandleGetWholeTcpStreamData(QTcpSocket*,void*)\0"
};

void QTcpPeerSocketThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTcpPeerSocketThread *_t = static_cast<QTcpPeerSocketThread *>(_o);
        switch (_id) {
        case 0: _t->ReleaseMyself((*reinterpret_cast< QTcpPeerSocketThread*(*)>(_a[1]))); break;
        case 1: _t->HandleThreadEnqueue((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 2: _t->HandleGetWholeTcpStreamData((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QTcpPeerSocketThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTcpPeerSocketThread::staticMetaObject = {
    { &QMyBaseThread::staticMetaObject, qt_meta_stringdata_QTcpPeerSocketThread,
      qt_meta_data_QTcpPeerSocketThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTcpPeerSocketThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTcpPeerSocketThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTcpPeerSocketThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTcpPeerSocketThread))
        return static_cast<void*>(const_cast< QTcpPeerSocketThread*>(this));
    return QMyBaseThread::qt_metacast(_clname);
}

int QTcpPeerSocketThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMyBaseThread::qt_metacall(_c, _id, _a);
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
void QTcpPeerSocketThread::ReleaseMyself(QTcpPeerSocketThread * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
