/****************************************************************************
** Meta object code from reading C++ file 'qmynetwork.h'
**
** Created: Tue Jul 3 16:09:51 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmynetwork.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmynetwork.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMyNetwork[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   12,   11,   11, 0x05,
      93,   76,   11,   11, 0x05,
     117,  105,   11,   11, 0x05,
     167,  144,   11,   11, 0x05,
     243,  208,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     286,   12,   11,   11, 0x08,
     338,   76,   11,   11, 0x08,
     356,  105,   11,   11, 0x08,
     389,  144,   11,   11, 0x08,
     436,  208,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QMyNetwork[] = {
    "QMyNetwork\0\0strMsg,type\0"
    "NotifyMessage(QString,QManipulateIniFile::LogTypes)\0"
    "socketDescriptor\0Accept(int)\0pPeerSocket\0"
    "EnqueueThread(QTcpSocket*)\0"
    "pPeerSocket,pByteArray\0"
    "GetWholeTcpStreamData(QTcpSocket*,void*)\0"
    "pByteArray,strSenderIP,nSenderPort\0"
    "GetWholeUdpDatagram(void*,QString,quint16)\0"
    "HandleMessage(QString,QManipulateIniFile::LogTypes)\0"
    "HandleAccept(int)\0HandleThreadEnqueue(QTcpSocket*)\0"
    "HandleGetWholeTcpStreamData(QTcpSocket*,void*)\0"
    "HandleGetWholeUdpDatagram(void*,QString,quint16)\0"
};

void QMyNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QMyNetwork *_t = static_cast<QMyNetwork *>(_o);
        switch (_id) {
        case 0: _t->NotifyMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QManipulateIniFile::LogTypes(*)>(_a[2]))); break;
        case 1: _t->Accept((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->EnqueueThread((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 3: _t->GetWholeTcpStreamData((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 4: _t->GetWholeUdpDatagram((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 5: _t->HandleMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QManipulateIniFile::LogTypes(*)>(_a[2]))); break;
        case 6: _t->HandleAccept((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->HandleThreadEnqueue((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 8: _t->HandleGetWholeTcpStreamData((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 9: _t->HandleGetWholeUdpDatagram((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QMyNetwork::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QMyNetwork::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QMyNetwork,
      qt_meta_data_QMyNetwork, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QMyNetwork::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QMyNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QMyNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMyNetwork))
        return static_cast<void*>(const_cast< QMyNetwork*>(this));
    return QObject::qt_metacast(_clname);
}

int QMyNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QMyNetwork::NotifyMessage(QString _t1, QManipulateIniFile::LogTypes _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMyNetwork::Accept(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMyNetwork::EnqueueThread(QTcpSocket * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMyNetwork::GetWholeTcpStreamData(QTcpSocket * _t1, void * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QMyNetwork::GetWholeUdpDatagram(void * _t1, QString _t2, quint16 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
