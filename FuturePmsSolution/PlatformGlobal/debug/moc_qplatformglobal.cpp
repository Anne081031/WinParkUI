/****************************************************************************
** Meta object code from reading C++ file 'qplatformglobal.h'
**
** Created: Tue Jul 24 15:39:36 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qplatformglobal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformglobal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPlatformGlobal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      64,   17,   16,   16, 0x05,
     169,  113,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     262,  239,   16,   16, 0x08,
     361,  319,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QPlatformGlobal[] = {
    "QPlatformGlobal\0\0"
    "strServer,pSenderThread,pPeerSocket,pByteArray\0"
    "ParseTcpData(QString,QThread*,QTcpSocket*,void*)\0"
    "strSenderIP,nSenderPort,pSenderThread,pByteArray,dgType\0"
    "ParseUdpData(QString,quint16,QThread*,void*,MyEnums::UdpDatagramType)\0"
    "pPeerSocket,pByteArray\0"
    "HandleGetWholeTcpStreamDataFromServer(QTcpSocket*,void*)\0"
    "pByteArray,strSenderIP,nSenderPort,dgType\0"
    "HandleGetWholeUdpDatagram(void*,QString,quint16,MyEnums::UdpDatagramTy"
    "pe)\0"
};

void QPlatformGlobal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPlatformGlobal *_t = static_cast<QPlatformGlobal *>(_o);
        switch (_id) {
        case 0: _t->ParseTcpData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QThread*(*)>(_a[2])),(*reinterpret_cast< QTcpSocket*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 1: _t->ParseUdpData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QThread*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4])),(*reinterpret_cast< MyEnums::UdpDatagramType(*)>(_a[5]))); break;
        case 2: _t->HandleGetWholeTcpStreamDataFromServer((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 3: _t->HandleGetWholeUdpDatagram((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3])),(*reinterpret_cast< MyEnums::UdpDatagramType(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPlatformGlobal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPlatformGlobal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QPlatformGlobal,
      qt_meta_data_QPlatformGlobal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPlatformGlobal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPlatformGlobal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPlatformGlobal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPlatformGlobal))
        return static_cast<void*>(const_cast< QPlatformGlobal*>(this));
    return QObject::qt_metacast(_clname);
}

int QPlatformGlobal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QPlatformGlobal::ParseTcpData(QString _t1, QThread * _t2, QTcpSocket * _t3, void * _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlatformGlobal::ParseUdpData(QString _t1, quint16 _t2, QThread * _t3, void * _t4, MyEnums::UdpDatagramType _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
