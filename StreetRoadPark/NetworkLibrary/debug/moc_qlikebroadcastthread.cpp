/****************************************************************************
** Meta object code from reading C++ file 'qlikebroadcastthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qlikebroadcastthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlikebroadcastthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QLikeBroadcastThread_t {
    QByteArrayData data[15];
    char stringdata[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QLikeBroadcastThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QLikeBroadcastThread_t qt_meta_stringdata_QLikeBroadcastThread = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 3),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 6),
QT_MOC_LITERAL(4, 33, 7),
QT_MOC_LITERAL(5, 41, 18),
QT_MOC_LITERAL(6, 60, 21),
QT_MOC_LITERAL(7, 82, 24),
QT_MOC_LITERAL(8, 107, 12),
QT_MOC_LITERAL(9, 120, 7),
QT_MOC_LITERAL(10, 128, 16),
QT_MOC_LITERAL(11, 145, 17),
QT_MOC_LITERAL(12, 163, 28),
QT_MOC_LITERAL(13, 192, 11),
QT_MOC_LITERAL(14, 204, 11)
    },
    "QLikeBroadcastThread\0Log\0\0strLog\0"
    "bStatic\0HandleDataIncoming\0"
    "HandleConnectFinished\0HandleDisconnectFinished\0"
    "HandleAccept\0qintptr\0socketDescriptor\0"
    "HandleAcceptError\0QAbstractSocket::SocketError\0"
    "socketError\0HandleError\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLikeBroadcastThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       5,    0,   54,    2, 0x09,
       6,    0,   55,    2, 0x09,
       7,    0,   56,    2, 0x09,
       8,    1,   57,    2, 0x09,
      11,    1,   60,    2, 0x09,
      14,    1,   63,    2, 0x09,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void QLikeBroadcastThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLikeBroadcastThread *_t = static_cast<QLikeBroadcastThread *>(_o);
        switch (_id) {
        case 0: _t->Log((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->HandleDataIncoming(); break;
        case 2: _t->HandleConnectFinished(); break;
        case 3: _t->HandleDisconnectFinished(); break;
        case 4: _t->HandleAccept((*reinterpret_cast< qintptr(*)>(_a[1]))); break;
        case 5: _t->HandleAcceptError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 6: _t->HandleError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 6:
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
            typedef void (QLikeBroadcastThread::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLikeBroadcastThread::Log)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QLikeBroadcastThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QLikeBroadcastThread.data,
      qt_meta_data_QLikeBroadcastThread,  qt_static_metacall, 0, 0}
};


const QMetaObject *QLikeBroadcastThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLikeBroadcastThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLikeBroadcastThread.stringdata))
        return static_cast<void*>(const_cast< QLikeBroadcastThread*>(this));
    return QThread::qt_metacast(_clname);
}

int QLikeBroadcastThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QLikeBroadcastThread::Log(QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
