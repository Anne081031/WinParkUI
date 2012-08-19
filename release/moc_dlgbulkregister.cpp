/****************************************************************************
** Meta object code from reading C++ file 'dlgbulkregister.h'
**
** Created: Sun Aug 19 17:15:52 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/dlgbulkregister.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgbulkregister.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CDlgBulkRegister[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x08,
      57,   17,   17,   17, 0x08,
      92,   17,   17,   17, 0x08,
     113,   17,   17,   17, 0x08,
     143,  135,   17,   17, 0x08,
     173,  166,   17,   17, 0x08,
     199,  192,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CDlgBulkRegister[] = {
    "CDlgBulkRegister\0\0arg1\0"
    "on_edtCardID_textChanged(QString)\0"
    "on_lblClose_linkActivated(QString)\0"
    "on_btnSave_clicked()\0on_btnClose_clicked()\0"
    "checked\0on_chkID_clicked(bool)\0nIndex\0"
    "OnBulkCarType(int)\0nMonth\0OnBulkMonth(int)\0"
};

const QMetaObject CDlgBulkRegister::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CDlgBulkRegister,
      qt_meta_data_CDlgBulkRegister, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CDlgBulkRegister::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CDlgBulkRegister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CDlgBulkRegister::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDlgBulkRegister))
        return static_cast<void*>(const_cast< CDlgBulkRegister*>(this));
    return QDialog::qt_metacast(_clname);
}

int CDlgBulkRegister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_edtCardID_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: on_lblClose_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: on_btnSave_clicked(); break;
        case 3: on_btnClose_clicked(); break;
        case 4: on_chkID_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: OnBulkCarType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: OnBulkMonth((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
