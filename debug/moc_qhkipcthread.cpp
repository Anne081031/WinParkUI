/****************************************************************************
** Meta object code from reading C++ file 'qhkipcthread.h'
**
** Created: Thu Sep 5 10:43:50 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../HKIPC/qhkipcthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhkipcthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QHkIPCThread[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   14,   13,   13, 0x05,
      65,   44,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      99,   13,   13,   13, 0x09,
     115,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QHkIPCThread[] = {
    "QHkIPCThread\0\0strMsg\0NotifyMessage(QString)\0"
    "nChannel,strFileName\0"
    "CapturedJPGImage(quint32,QString)\0"
    "HandleStarted()\0HandleFinished()\0"
};

const QMetaObject QHkIPCThread::staticMetaObject = {
    { &QIPCThread::staticMetaObject, qt_meta_stringdata_QHkIPCThread,
      qt_meta_data_QHkIPCThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QHkIPCThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QHkIPCThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QHkIPCThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QHkIPCThread))
        return static_cast<void*>(const_cast< QHkIPCThread*>(this));
    return QIPCThread::qt_metacast(_clname);
}

int QHkIPCThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIPCThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: NotifyMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: CapturedJPGImage((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: HandleStarted(); break;
        case 3: HandleFinished(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QHkIPCThread::NotifyMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QHkIPCThread::CapturedJPGImage(quint32 _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
