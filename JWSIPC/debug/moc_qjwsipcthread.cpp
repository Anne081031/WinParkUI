/****************************************************************************
** Meta object code from reading C++ file 'qjwsipcthread.h'
**
** Created: Sun Apr 28 09:48:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qjwsipcthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjwsipcthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QJwsIPCThread[] = {

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
      22,   15,   14,   14, 0x05,
      66,   45,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     100,   14,   14,   14, 0x09,
     116,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QJwsIPCThread[] = {
    "QJwsIPCThread\0\0strMsg\0NotifyMessage(QString)\0"
    "nChannel,strFileName\0"
    "CapturedJPGImage(quint32,QString)\0"
    "HandleStarted()\0HandleFinished()\0"
};

void QJwsIPCThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QJwsIPCThread *_t = static_cast<QJwsIPCThread *>(_o);
        switch (_id) {
        case 0: _t->NotifyMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->CapturedJPGImage((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->HandleStarted(); break;
        case 3: _t->HandleFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QJwsIPCThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QJwsIPCThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QJwsIPCThread,
      qt_meta_data_QJwsIPCThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QJwsIPCThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QJwsIPCThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QJwsIPCThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QJwsIPCThread))
        return static_cast<void*>(const_cast< QJwsIPCThread*>(this));
    return QThread::qt_metacast(_clname);
}

int QJwsIPCThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void QJwsIPCThread::NotifyMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QJwsIPCThread::CapturedJPGImage(quint32 _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
