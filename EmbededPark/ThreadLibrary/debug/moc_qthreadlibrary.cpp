/****************************************************************************
** Meta object code from reading C++ file 'qthreadlibrary.h'
**
** Created: Wed Jan 23 17:12:06 2013
**      by: The Qt Meta Object Compiler version 67 (Qt 5.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qthreadlibrary.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qthreadlibrary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QThreadLibrary_t {
    QByteArrayData data[9];
    char stringdata[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QThreadLibrary_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QThreadLibrary_t qt_meta_stringdata_QThreadLibrary = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 10),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 7),
QT_MOC_LITERAL(4, 35, 21),
QT_MOC_LITERAL(5, 57, 11),
QT_MOC_LITERAL(6, 69, 7),
QT_MOC_LITERAL(7, 77, 22),
QT_MOC_LITERAL(8, 100, 16)
    },
    "QThreadLibrary\0DisplayLog\0\0strText\0"
    "HandleClientReconnect\0QTcpSocket*\0"
    "pSocket\0HandleClientDisconnect\0"
    "HandleDisplayLog\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QThreadLibrary[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x09,
       7,    1,   40,    2, 0x09,
       8,    1,   43,    2, 0x09,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void QThreadLibrary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QThreadLibrary *_t = static_cast<QThreadLibrary *>(_o);
        switch (_id) {
        case 0: _t->DisplayLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->HandleClientReconnect((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 2: _t->HandleClientDisconnect((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 3: _t->HandleDisplayLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QThreadLibrary::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QThreadLibrary::DisplayLog)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QThreadLibrary::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QThreadLibrary.data,
      qt_meta_data_QThreadLibrary,  qt_static_metacall, 0, 0}
};


const QMetaObject *QThreadLibrary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QThreadLibrary::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QThreadLibrary.stringdata))
        return static_cast<void*>(const_cast< QThreadLibrary*>(this));
    return QObject::qt_metacast(_clname);
}

int QThreadLibrary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QThreadLibrary::DisplayLog(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
