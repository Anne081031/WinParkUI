/****************************************************************************
** Meta object code from reading C++ file 'dlgccstatus.h'
**
** Created: Thu Jun 14 11:40:19 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/dlgccstatus.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgccstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CDlgCCStatus[] = {

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
      14,   13,   13,   13, 0x08,
      49,   13,   13,   13, 0x08,
      72,   13,   13,   13, 0x08,
      93,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CDlgCCStatus[] = {
    "CDlgCCStatus\0\0on_lblClose_linkActivated(QString)\0"
    "on_btnCancel_clicked()\0on_btnSave_clicked()\0"
    "on_btnTest_clicked()\0"
};

const QMetaObject CDlgCCStatus::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CDlgCCStatus,
      qt_meta_data_CDlgCCStatus, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CDlgCCStatus::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CDlgCCStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CDlgCCStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDlgCCStatus))
        return static_cast<void*>(const_cast< CDlgCCStatus*>(this));
    return QDialog::qt_metacast(_clname);
}

int CDlgCCStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lblClose_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_btnCancel_clicked(); break;
        case 2: on_btnSave_clicked(); break;
        case 3: on_btnTest_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
