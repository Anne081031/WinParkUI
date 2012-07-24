/****************************************************************************
** Meta object code from reading C++ file 'qudpserver.h'
**
** Created: Tue Jul 24 13:25:07 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qudpserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qudpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QUdpServer[] = {

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
      47,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     102,   90,   11,   11, 0x08,
     144,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QUdpServer[] = {
    "QUdpServer\0\0pByteArray,strSenderIP,nSenderPort\0"
    "GetWholeUdpDatagram(void*,QString,quint16)\0"
    "socketError\0HandleError(QAbstractSocket::SocketError)\0"
    "IncomingData()\0"
};

void QUdpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QUdpServer *_t = static_cast<QUdpServer *>(_o);
        switch (_id) {
        case 0: _t->GetWholeUdpDatagram((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 1: _t->HandleError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 2: _t->IncomingData(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QUdpServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QUdpServer::staticMetaObject = {
    { &QMyUdpSocket::staticMetaObject, qt_meta_stringdata_QUdpServer,
      qt_meta_data_QUdpServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QUdpServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QUdpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QUdpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QUdpServer))
        return static_cast<void*>(const_cast< QUdpServer*>(this));
    return QMyUdpSocket::qt_metacast(_clname);
}

int QUdpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMyUdpSocket::qt_metacall(_c, _id, _a);
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
void QUdpServer::GetWholeUdpDatagram(void * _t1, QString _t2, quint16 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
