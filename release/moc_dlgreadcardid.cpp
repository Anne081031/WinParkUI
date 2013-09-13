/****************************************************************************
** Meta object code from reading C++ file 'dlgreadcardid.h'
**
** Created: Thu Sep 12 11:51:05 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/dlgreadcardid.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgreadcardid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CDlgReadCardID[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      42,   15,   15,   15, 0x08,
      71,   15,   15,   15, 0x08,
      90,   15,   15,   15, 0x08,
     118,  113,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CDlgReadCardID[] = {
    "CDlgReadCardID\0\0on_btnDeleteAll_clicked()\0"
    "on_btnDeleteSingle_clicked()\0"
    "on_btnOK_clicked()\0on_btnCancel_clicked()\0"
    "arg1\0on_edtCardID_textChanged(QString)\0"
};

const QMetaObject CDlgReadCardID::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CDlgReadCardID,
      qt_meta_data_CDlgReadCardID, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CDlgReadCardID::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CDlgReadCardID::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CDlgReadCardID::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDlgReadCardID))
        return static_cast<void*>(const_cast< CDlgReadCardID*>(this));
    return QDialog::qt_metacast(_clname);
}

int CDlgReadCardID::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnDeleteAll_clicked(); break;
        case 1: on_btnDeleteSingle_clicked(); break;
        case 2: on_btnOK_clicked(); break;
        case 3: on_btnCancel_clicked(); break;
        case 4: on_edtCardID_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
