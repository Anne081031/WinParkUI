/****************************************************************************
** Meta object code from reading C++ file 'cdataparser.h'
**
** Created: Mon Sep 17 10:44:00 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PlateDilivery/cdataparser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cdataparser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CDataParser[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CDataParser[] = {
    "CDataParser\0\0byResponse\0Response(QByteArray)\0"
    "DataMayRead()\0"
};

const QMetaObject CDataParser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CDataParser,
      qt_meta_data_CDataParser, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CDataParser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CDataParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CDataParser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDataParser))
        return static_cast<void*>(const_cast< CDataParser*>(this));
    return QObject::qt_metacast(_clname);
}

int CDataParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Response((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: DataMayRead(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CDataParser::Response(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
