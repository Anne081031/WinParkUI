/****************************************************************************
** Meta object code from reading C++ file 'qtcpclientsocketthread.h'
**
** Created: Wed Jun 27 15:18:26 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtcpclientsocketthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtcpclientsocketthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTcpClientSocketThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   24,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QTcpClientSocketThread[] = {
    "QTcpClientSocketThread\0\0pByteArray\0"
    "GetWholeTcpStreamData(void*)\0"
    "HandleGetWholeTcpStreamData(void*)\0"
};

void QTcpClientSocketThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTcpClientSocketThread *_t = static_cast<QTcpClientSocketThread *>(_o);
        switch (_id) {
        case 0: _t->GetWholeTcpStreamData((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 1: _t->HandleGetWholeTcpStreamData((*reinterpret_cast< void*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QTcpClientSocketThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTcpClientSocketThread::staticMetaObject = {
    { &QMyBaseThread::staticMetaObject, qt_meta_stringdata_QTcpClientSocketThread,
      qt_meta_data_QTcpClientSocketThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTcpClientSocketThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTcpClientSocketThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTcpClientSocketThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTcpClientSocketThread))
        return static_cast<void*>(const_cast< QTcpClientSocketThread*>(this));
    return QMyBaseThread::qt_metacast(_clname);
}

int QTcpClientSocketThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMyBaseThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QTcpClientSocketThread::GetWholeTcpStreamData(void * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
