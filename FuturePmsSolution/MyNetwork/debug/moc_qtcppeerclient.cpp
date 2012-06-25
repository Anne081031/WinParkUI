/****************************************************************************
** Meta object code from reading C++ file 'qtcppeerclient.h'
**
** Created: Mon Jun 25 14:28:38 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtcppeerclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtcppeerclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTcpPeerClient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      43,   32,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      72,   15,   15,   15, 0x08,
      93,   15,   15,   15, 0x08,
     123,  111,   15,   15, 0x08,
     165,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QTcpPeerClient[] = {
    "QTcpPeerClient\0\0EnqueueThread()\0"
    "pByteArray\0GetWholeTcpStreamData(void*)\0"
    "HandleDisconnected()\0HandleConnected()\0"
    "socketError\0HandleError(QAbstractSocket::SocketError)\0"
    "IncomingData()\0"
};

void QTcpPeerClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTcpPeerClient *_t = static_cast<QTcpPeerClient *>(_o);
        switch (_id) {
        case 0: _t->EnqueueThread(); break;
        case 1: _t->GetWholeTcpStreamData((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 2: _t->HandleDisconnected(); break;
        case 3: _t->HandleConnected(); break;
        case 4: _t->HandleError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 5: _t->IncomingData(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QTcpPeerClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTcpPeerClient::staticMetaObject = {
    { &QMyTcpSocket::staticMetaObject, qt_meta_stringdata_QTcpPeerClient,
      qt_meta_data_QTcpPeerClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTcpPeerClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTcpPeerClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTcpPeerClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTcpPeerClient))
        return static_cast<void*>(const_cast< QTcpPeerClient*>(this));
    return QMyTcpSocket::qt_metacast(_clname);
}

int QTcpPeerClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMyTcpSocket::qt_metacall(_c, _id, _a);
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
void QTcpPeerClient::EnqueueThread()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QTcpPeerClient::GetWholeTcpStreamData(void * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
