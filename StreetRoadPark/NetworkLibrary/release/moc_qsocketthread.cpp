/****************************************************************************
** Meta object code from reading C++ file 'qsocketthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qsocketthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsocketthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSocketThread_t {
    QByteArrayData data[16];
    char stringdata[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QSocketThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QSocketThread_t qt_meta_stringdata_QSocketThread = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 3),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 6),
QT_MOC_LITERAL(4, 26, 7),
QT_MOC_LITERAL(5, 34, 12),
QT_MOC_LITERAL(6, 47, 11),
QT_MOC_LITERAL(7, 59, 7),
QT_MOC_LITERAL(8, 67, 11),
QT_MOC_LITERAL(9, 79, 10),
QT_MOC_LITERAL(10, 90, 18),
QT_MOC_LITERAL(11, 109, 21),
QT_MOC_LITERAL(12, 131, 24),
QT_MOC_LITERAL(13, 156, 11),
QT_MOC_LITERAL(14, 168, 28),
QT_MOC_LITERAL(15, 197, 11)
    },
    "QSocketThread\0Log\0\0strLog\0bStatic\0"
    "DataIncoming\0QTcpSocket*\0pSocket\0"
    "QByteArray*\0pByteArray\0HandleDataIncoming\0"
    "HandleConnectFinished\0HandleDisconnectFinished\0"
    "HandleError\0QAbstractSocket::SocketError\0"
    "socketError\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSocketThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x05,
       5,    2,   49,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      10,    0,   54,    2, 0x09,
      11,    0,   55,    2, 0x09,
      12,    0,   56,    2, 0x09,
      13,    1,   57,    2, 0x09,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void QSocketThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSocketThread *_t = static_cast<QSocketThread *>(_o);
        switch (_id) {
        case 0: _t->Log((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->DataIncoming((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QByteArray*(*)>(_a[2]))); break;
        case 2: _t->HandleDataIncoming(); break;
        case 3: _t->HandleConnectFinished(); break;
        case 4: _t->HandleDisconnectFinished(); break;
        case 5: _t->HandleError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QSocketThread::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSocketThread::Log)) {
                *result = 0;
            }
        }
        {
            typedef void (QSocketThread::*_t)(QTcpSocket * , QByteArray * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSocketThread::DataIncoming)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QSocketThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QSocketThread.data,
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
    return QThread::qt_metacast(_clname);
}

int QSocketThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QSocketThread::Log(QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSocketThread::DataIncoming(QTcpSocket * _t1, QByteArray * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
