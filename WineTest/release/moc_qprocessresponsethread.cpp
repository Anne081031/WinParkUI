/****************************************************************************
** Meta object code from reading C++ file 'qprocessresponsethread.h'
**
** Created: Tue Oct 23 13:24:54 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qprocessresponsethread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprocessresponsethread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QProcessResponseThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   24,   23,   23, 0x05,
      57,   49,   23,   23, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QProcessResponseThread[] = {
    "QProcessResponseThread\0\0strMsg\0"
    "Response(QString)\0strFile\0PlateImg(QString)\0"
};

void QProcessResponseThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QProcessResponseThread *_t = static_cast<QProcessResponseThread *>(_o);
        switch (_id) {
        case 0: _t->Response((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->PlateImg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QProcessResponseThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QProcessResponseThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QProcessResponseThread,
      qt_meta_data_QProcessResponseThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QProcessResponseThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QProcessResponseThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QProcessResponseThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QProcessResponseThread))
        return static_cast<void*>(const_cast< QProcessResponseThread*>(this));
    return QThread::qt_metacast(_clname);
}

int QProcessResponseThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void QProcessResponseThread::Response(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QProcessResponseThread::PlateImg(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
