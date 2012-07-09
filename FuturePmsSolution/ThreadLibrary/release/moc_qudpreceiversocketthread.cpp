/****************************************************************************
** Meta object code from reading C++ file 'qudpreceiversocketthread.h'
**
** Created: Mon Jul 9 11:28:05 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qudpreceiversocketthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qudpreceiversocketthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QUdpReceiverSocketThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      61,   26,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QUdpReceiverSocketThread[] = {
    "QUdpReceiverSocketThread\0\0"
    "pByteArray,strSenderIP,nSenderPort\0"
    "HandleGetWholeUdpDatagram(void*,QString,quint16)\0"
};

void QUdpReceiverSocketThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QUdpReceiverSocketThread *_t = static_cast<QUdpReceiverSocketThread *>(_o);
        switch (_id) {
        case 0: _t->HandleGetWholeUdpDatagram((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QUdpReceiverSocketThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QUdpReceiverSocketThread::staticMetaObject = {
    { &QMyBaseThread::staticMetaObject, qt_meta_stringdata_QUdpReceiverSocketThread,
      qt_meta_data_QUdpReceiverSocketThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QUdpReceiverSocketThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QUdpReceiverSocketThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QUdpReceiverSocketThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QUdpReceiverSocketThread))
        return static_cast<void*>(const_cast< QUdpReceiverSocketThread*>(this));
    return QMyBaseThread::qt_metacast(_clname);
}

int QUdpReceiverSocketThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMyBaseThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
