/****************************************************************************
** Meta object code from reading C++ file 'qtsoap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/qtsoap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtsoap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtSoapHttpTransport_t {
    QByteArrayData data[8];
    char stringdata[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QtSoapHttpTransport_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QtSoapHttpTransport_t qt_meta_stringdata_QtSoapHttpTransport = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 13),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 13),
QT_MOC_LITERAL(4, 49, 8),
QT_MOC_LITERAL(5, 58, 12),
QT_MOC_LITERAL(6, 71, 14),
QT_MOC_LITERAL(7, 86, 5)
    },
    "QtSoapHttpTransport\0responseReady\0\0"
    "QtSoapMessage\0response\0readResponse\0"
    "QNetworkReply*\0reply\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtSoapHttpTransport[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x05,
       1,    1,   30,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       5,    1,   33,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void QtSoapHttpTransport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtSoapHttpTransport *_t = static_cast<QtSoapHttpTransport *>(_o);
        switch (_id) {
        case 0: _t->responseReady(); break;
        case 1: _t->responseReady((*reinterpret_cast< const QtSoapMessage(*)>(_a[1]))); break;
        case 2: _t->readResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtSoapHttpTransport::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtSoapHttpTransport::responseReady)) {
                *result = 0;
            }
        }
        {
            typedef void (QtSoapHttpTransport::*_t)(const QtSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtSoapHttpTransport::responseReady)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QtSoapHttpTransport::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtSoapHttpTransport.data,
      qt_meta_data_QtSoapHttpTransport,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtSoapHttpTransport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtSoapHttpTransport::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtSoapHttpTransport.stringdata))
        return static_cast<void*>(const_cast< QtSoapHttpTransport*>(this));
    return QObject::qt_metacast(_clname);
}

int QtSoapHttpTransport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QtSoapHttpTransport::responseReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QtSoapHttpTransport::responseReady(const QtSoapMessage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
