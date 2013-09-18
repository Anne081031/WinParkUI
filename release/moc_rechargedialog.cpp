/****************************************************************************
** Meta object code from reading C++ file 'rechargedialog.h'
**
** Created: Tue Sep 17 15:16:48 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/rechargedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rechargedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRechargeDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   17,   16,   16, 0x08,
      58,   17,   16,   16, 0x08,
      96,   16,   16,   16, 0x08,
     115,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CRechargeDialog[] = {
    "CRechargeDialog\0\0date\0"
    "on_dtEnd_dateTimeChanged(QDateTime)\0"
    "on_dtStart_dateTimeChanged(QDateTime)\0"
    "on_btnOk_clicked()\0on_btnCancel_clicked()\0"
};

const QMetaObject CRechargeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CRechargeDialog,
      qt_meta_data_CRechargeDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRechargeDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRechargeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRechargeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRechargeDialog))
        return static_cast<void*>(const_cast< CRechargeDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CRechargeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_dtEnd_dateTimeChanged((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 1: on_dtStart_dateTimeChanged((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 2: on_btnOk_clicked(); break;
        case 3: on_btnCancel_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
