/****************************************************************************
** Meta object code from reading C++ file 'qlistenerthread.h'
**
** Created: Thu Jun 21 16:22:37 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qlistenerthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlistenerthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QListenerThread[] = {

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
      34,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   17,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QListenerThread[] = {
    "QListenerThread\0\0socketDescriptor\0"
    "Accept(int)\0HandleAccept(int)\0"
};

void QListenerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QListenerThread *_t = static_cast<QListenerThread *>(_o);
        switch (_id) {
        case 0: _t->Accept((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->HandleAccept((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QListenerThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QListenerThread::staticMetaObject = {
    { &QMyBaseThread::staticMetaObject, qt_meta_stringdata_QListenerThread,
      qt_meta_data_QListenerThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QListenerThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QListenerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QListenerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QListenerThread))
        return static_cast<void*>(const_cast< QListenerThread*>(this));
    return QMyBaseThread::qt_metacast(_clname);
}

int QListenerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QListenerThread::Accept(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
