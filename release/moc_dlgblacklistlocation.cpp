/****************************************************************************
** Meta object code from reading C++ file 'dlgblacklistlocation.h'
**
** Created: Wed Nov 13 10:05:26 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/dlgblacklistlocation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgblacklistlocation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CDlgBlacklistLocation[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   23,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   22,   22,   22, 0x08,
      69,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CDlgBlacklistLocation[] = {
    "CDlgBlacklistLocation\0\0strPlate\0"
    "Location(QString)\0on_btnOk_clicked()\0"
    "on_btnClose_clicked()\0"
};

const QMetaObject CDlgBlacklistLocation::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CDlgBlacklistLocation,
      qt_meta_data_CDlgBlacklistLocation, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CDlgBlacklistLocation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CDlgBlacklistLocation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CDlgBlacklistLocation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDlgBlacklistLocation))
        return static_cast<void*>(const_cast< CDlgBlacklistLocation*>(this));
    return QDialog::qt_metacast(_clname);
}

int CDlgBlacklistLocation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Location((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_btnOk_clicked(); break;
        case 2: on_btnClose_clicked(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CDlgBlacklistLocation::Location(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
