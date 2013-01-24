/****************************************************************************
** Meta object code from reading C++ file 'qmytcpsocket.h'
**
** Created: Wed Jan 23 15:55:56 2013
**      by: The Qt Meta Object Compiler version 67 (Qt 5.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmytcpsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmytcpsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QMyTcpSocket_t {
    QByteArrayData data[16];
    char stringdata[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QMyTcpSocket_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QMyTcpSocket_t qt_meta_stringdata_QMyTcpSocket = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 12),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 7),
QT_MOC_LITERAL(4, 35, 10),
QT_MOC_LITERAL(5, 46, 15),
QT_MOC_LITERAL(6, 62, 11),
QT_MOC_LITERAL(7, 74, 5),
QT_MOC_LITERAL(8, 80, 18),
QT_MOC_LITERAL(9, 99, 9),
QT_MOC_LITERAL(10, 109, 7),
QT_MOC_LITERAL(11, 117, 7),
QT_MOC_LITERAL(12, 125, 11),
QT_MOC_LITERAL(13, 137, 8),
QT_MOC_LITERAL(14, 146, 28),
QT_MOC_LITERAL(15, 175, 11)
    },
    "QMyTcpSocket\0DataIncoming\0\0pSocket\0"
    "pByteArray\0ConnectFinished\0QTcpSocket*\0"
    "bPeer\0DisconnectFinished\0ErrorInfo\0"
    "logType\0strText\0ReceiveData\0TcpError\0"
    "QAbstractSocket::SocketError\0socketError\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMyTcpSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x05,
       5,    2,   49,    2, 0x05,
       8,    2,   54,    2, 0x05,
       9,    2,   59,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      12,    0,   64,    2, 0x09,
      13,    1,   65,    2, 0x09,

 // signals: parameters
    QMetaType::Void, QMetaType::VoidStar, QMetaType::VoidStar,    3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool,    3,    7,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool,    3,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void QMyTcpSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMyTcpSocket *_t = static_cast<QMyTcpSocket *>(_o);
        switch (_id) {
        case 0: _t->DataIncoming((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 1: _t->ConnectFinished((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->DisconnectFinished((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->ErrorInfo((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->ReceiveData(); break;
        case 5: _t->TcpError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
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
        case 2:
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
            typedef void (QMyTcpSocket::*_t)(void * , void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMyTcpSocket::DataIncoming)) {
                *result = 0;
            }
        }
        {
            typedef void (QMyTcpSocket::*_t)(QTcpSocket * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMyTcpSocket::ConnectFinished)) {
                *result = 1;
            }
        }
        {
            typedef void (QMyTcpSocket::*_t)(QTcpSocket * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMyTcpSocket::DisconnectFinished)) {
                *result = 2;
            }
        }
        {
            typedef void (QMyTcpSocket::*_t)(qint32 , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMyTcpSocket::ErrorInfo)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QMyTcpSocket::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_QMyTcpSocket.data,
      qt_meta_data_QMyTcpSocket,  qt_static_metacall, 0, 0}
};


const QMetaObject *QMyTcpSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMyTcpSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMyTcpSocket.stringdata))
        return static_cast<void*>(const_cast< QMyTcpSocket*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int QMyTcpSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
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
void QMyTcpSocket::DataIncoming(void * _t1, void * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMyTcpSocket::ConnectFinished(QTcpSocket * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMyTcpSocket::DisconnectFinished(QTcpSocket * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMyTcpSocket::ErrorInfo(qint32 _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
