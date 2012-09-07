/****************************************************************************
** Meta object code from reading C++ file 'valuecarddialog.h'
**
** Created: Fri Sep 7 15:26:41 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/valuecarddialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'valuecarddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CValueCardDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   18,   17,   17, 0x08,
      60,   17,   17,   17, 0x08,
      81,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CValueCardDialog[] = {
    "CValueCardDialog\0\0strText\0"
    "on_edtNumber_textChanged(QString)\0"
    "on_btnExit_clicked()\0on_btnSave_clicked()\0"
};

const QMetaObject CValueCardDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CValueCardDialog,
      qt_meta_data_CValueCardDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CValueCardDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CValueCardDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CValueCardDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CValueCardDialog))
        return static_cast<void*>(const_cast< CValueCardDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CValueCardDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_edtNumber_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_btnExit_clicked(); break;
        case 2: on_btnSave_clicked(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
