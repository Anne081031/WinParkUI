/****************************************************************************
** Meta object code from reading C++ file 'qthreadspparser.h'
**
** Created: Tue Jan 29 12:01:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qthreadspparser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qthreadspparser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QThreadSPParser[] = {

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
      28,   17,   16,   16, 0x05,
      64,   49,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QThreadSPParser[] = {
    "QThreadSPParser\0\0data,bSend\0"
    "Cmd(QByteArray,bool)\0strInfo,nIndex\0"
    "Query(QString,qint8)\0"
};

void QThreadSPParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QThreadSPParser *_t = static_cast<QThreadSPParser *>(_o);
        switch (_id) {
        case 0: _t->Cmd((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->Query((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QThreadSPParser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QThreadSPParser::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QThreadSPParser,
      qt_meta_data_QThreadSPParser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QThreadSPParser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QThreadSPParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QThreadSPParser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QThreadSPParser))
        return static_cast<void*>(const_cast< QThreadSPParser*>(this));
    return QThread::qt_metacast(_clname);
}

int QThreadSPParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QThreadSPParser::Cmd(QByteArray _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QThreadSPParser::Query(QString _t1, qint8 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
