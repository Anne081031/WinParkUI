/****************************************************************************
** Meta object code from reading C++ file 'qnetworklibrary.h'
**
** Created: Wed Jan 23 17:11:05 2013
**      by: The Qt Meta Object Compiler version 67 (Qt 5.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qnetworklibrary.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworklibrary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNetworkLibrary_t {
    QByteArrayData data[21];
    char stringdata[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QNetworkLibrary_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QNetworkLibrary_t qt_meta_stringdata_QNetworkLibrary = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 6),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 7),
QT_MOC_LITERAL(4, 32, 16),
QT_MOC_LITERAL(5, 49, 12),
QT_MOC_LITERAL(6, 62, 7),
QT_MOC_LITERAL(7, 70, 10),
QT_MOC_LITERAL(8, 81, 14),
QT_MOC_LITERAL(9, 96, 11),
QT_MOC_LITERAL(10, 108, 9),
QT_MOC_LITERAL(11, 118, 7),
QT_MOC_LITERAL(12, 126, 15),
QT_MOC_LITERAL(13, 142, 16),
QT_MOC_LITERAL(14, 159, 12),
QT_MOC_LITERAL(15, 172, 18),
QT_MOC_LITERAL(16, 191, 21),
QT_MOC_LITERAL(17, 213, 5),
QT_MOC_LITERAL(18, 219, 24),
QT_MOC_LITERAL(19, 244, 15),
QT_MOC_LITERAL(20, 260, 7)
    },
    "QNetworkLibrary\0Accept\0\0qintptr\0"
    "socketDescriptor\0DataIncoming\0pSocket\0"
    "pByteArray\0PeerDisconenct\0QTcpSocket*\0"
    "ErrorInfo\0strText\0ClientReconnect\0"
    "ClientDisconnect\0HandleAccept\0"
    "HandleDataIncoming\0HandleConnectFinished\0"
    "bPeer\0HandleDisconnectFinished\0"
    "HandleErrorInfo\0logType\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkLibrary[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x05,
       5,    2,   72,    2, 0x05,
       8,    1,   77,    2, 0x05,
      10,    2,   80,    2, 0x05,
      12,    1,   85,    2, 0x05,
      13,    1,   88,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      14,    1,   91,    2, 0x09,
      15,    2,   94,    2, 0x09,
      16,    2,   99,    2, 0x09,
      18,    2,  104,    2, 0x09,
      19,    2,  109,    2, 0x09,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::VoidStar, QMetaType::VoidStar,    6,    7,
    QMetaType::Void, 0x80000000 | 9,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,   11,
    QMetaType::Void, 0x80000000 | 9,    6,
    QMetaType::Void, 0x80000000 | 9,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::VoidStar, QMetaType::VoidStar,    6,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,    6,   17,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,    6,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   20,   11,

       0        // eod
};

void QNetworkLibrary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkLibrary *_t = static_cast<QNetworkLibrary *>(_o);
        switch (_id) {
        case 0: _t->Accept((*reinterpret_cast< qintptr(*)>(_a[1]))); break;
        case 1: _t->DataIncoming((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 2: _t->PeerDisconenct((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 3: _t->ErrorInfo((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->ClientReconnect((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 5: _t->ClientDisconnect((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 6: _t->HandleAccept((*reinterpret_cast< qintptr(*)>(_a[1]))); break;
        case 7: _t->HandleDataIncoming((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 8: _t->HandleConnectFinished((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->HandleDisconnectFinished((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->HandleErrorInfo((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 4:
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
            typedef void (QNetworkLibrary::*_t)(qintptr );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkLibrary::Accept)) {
                *result = 0;
            }
        }
        {
            typedef void (QNetworkLibrary::*_t)(void * , void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkLibrary::DataIncoming)) {
                *result = 1;
            }
        }
        {
            typedef void (QNetworkLibrary::*_t)(QTcpSocket * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkLibrary::PeerDisconenct)) {
                *result = 2;
            }
        }
        {
            typedef void (QNetworkLibrary::*_t)(qint32 , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkLibrary::ErrorInfo)) {
                *result = 3;
            }
        }
        {
            typedef void (QNetworkLibrary::*_t)(QTcpSocket * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkLibrary::ClientReconnect)) {
                *result = 4;
            }
        }
        {
            typedef void (QNetworkLibrary::*_t)(QTcpSocket * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkLibrary::ClientDisconnect)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject QNetworkLibrary::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNetworkLibrary.data,
      qt_meta_data_QNetworkLibrary,  qt_static_metacall, 0, 0}
};


const QMetaObject *QNetworkLibrary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkLibrary::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkLibrary.stringdata))
        return static_cast<void*>(const_cast< QNetworkLibrary*>(this));
    return QObject::qt_metacast(_clname);
}

int QNetworkLibrary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QNetworkLibrary::Accept(qintptr _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkLibrary::DataIncoming(void * _t1, void * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNetworkLibrary::PeerDisconenct(QTcpSocket * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkLibrary::ErrorInfo(qint32 _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QNetworkLibrary::ClientReconnect(QTcpSocket * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QNetworkLibrary::ClientDisconnect(QTcpSocket * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
