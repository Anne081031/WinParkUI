/****************************************************************************
** Meta object code from reading C++ file 'qsocketthread.h'
**
** Created: Fri Jan 25 16:26:25 2013
**      by: The Qt Meta Object Compiler version 67 (Qt 5.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qsocketthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsocketthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSocketThread_t {
    QByteArrayData data[18];
    char stringdata[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QSocketThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QSocketThread_t qt_meta_stringdata_QSocketThread = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 15),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 11),
QT_MOC_LITERAL(4, 43, 7),
QT_MOC_LITERAL(5, 51, 16),
QT_MOC_LITERAL(6, 68, 9),
QT_MOC_LITERAL(7, 78, 12),
QT_MOC_LITERAL(8, 91, 11),
QT_MOC_LITERAL(9, 103, 10),
QT_MOC_LITERAL(10, 114, 18),
QT_MOC_LITERAL(11, 133, 20),
QT_MOC_LITERAL(12, 154, 15),
QT_MOC_LITERAL(13, 170, 7),
QT_MOC_LITERAL(14, 178, 7),
QT_MOC_LITERAL(15, 186, 15),
QT_MOC_LITERAL(16, 202, 21),
QT_MOC_LITERAL(17, 224, 22)
    },
    "QSocketThread\0ClientReconnect\0\0"
    "QTcpSocket*\0pSocket\0ClientDisconnect\0"
    "ErrorCode\0DataIncoming\0QByteArray*\0"
    "pByteArray\0HandleDataIncoming\0"
    "HandlePeerDisconenct\0HandleErrorInfo\0"
    "logType\0strText\0HandleErrorCode\0"
    "HandleClientReconnect\0HandleClientDisconnect\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSocketThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x05,
       5,    1,   67,    2, 0x05,
       6,    1,   70,    2, 0x05,
       7,    2,   73,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      10,    2,   78,    2, 0x09,
      11,    1,   83,    2, 0x09,
      12,    2,   86,    2, 0x09,
      15,    1,   91,    2, 0x09,
      16,    1,   94,    2, 0x09,
      17,    1,   97,    2, 0x09,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 8,    4,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::VoidStar, QMetaType::VoidStar,    4,    9,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   13,   14,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QSocketThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSocketThread *_t = static_cast<QSocketThread *>(_o);
        switch (_id) {
        case 0: _t->ClientReconnect((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 1: _t->ClientDisconnect((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 2: _t->ErrorCode((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 3: _t->DataIncoming((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QByteArray*(*)>(_a[2]))); break;
        case 4: _t->HandleDataIncoming((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 5: _t->HandlePeerDisconenct((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 6: _t->HandleErrorInfo((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->HandleErrorCode((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 8: _t->HandleClientReconnect((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 9: _t->HandleClientDisconnect((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QSocketThread::*_t)(QTcpSocket * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSocketThread::ClientReconnect)) {
                *result = 0;
            }
        }
        {
            typedef void (QSocketThread::*_t)(QTcpSocket * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSocketThread::ClientDisconnect)) {
                *result = 1;
            }
        }
        {
            typedef void (QSocketThread::*_t)(QTcpSocket * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSocketThread::ErrorCode)) {
                *result = 2;
            }
        }
        {
            typedef void (QSocketThread::*_t)(QTcpSocket * , QByteArray * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSocketThread::DataIncoming)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QSocketThread::staticMetaObject = {
    { &QMyThread::staticMetaObject, qt_meta_stringdata_QSocketThread.data,
      qt_meta_data_QSocketThread,  qt_static_metacall, 0, 0}
};


const QMetaObject *QSocketThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSocketThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSocketThread.stringdata))
        return static_cast<void*>(const_cast< QSocketThread*>(this));
    return QMyThread::qt_metacast(_clname);
}

int QSocketThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMyThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QSocketThread::ClientReconnect(QTcpSocket * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSocketThread::ClientDisconnect(QTcpSocket * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSocketThread::ErrorCode(QTcpSocket * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSocketThread::DataIncoming(QTcpSocket * _t1, QByteArray * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
