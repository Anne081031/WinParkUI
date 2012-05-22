/****************************************************************************
** Meta object code from reading C++ file 'monchargedlg.h'
**
** Created: Fri May 18 09:17:44 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/monchargedlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'monchargedlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CMonChargeDlg[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      38,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CMonChargeDlg[] = {
    "CMonChargeDlg\0\0on_btnCancel_clicked()\0"
    "on_btnSave_clicked()\0"
};

const QMetaObject CMonChargeDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CMonChargeDlg,
      qt_meta_data_CMonChargeDlg, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CMonChargeDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CMonChargeDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CMonChargeDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMonChargeDlg))
        return static_cast<void*>(const_cast< CMonChargeDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CMonChargeDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnCancel_clicked(); break;
        case 1: on_btnSave_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
