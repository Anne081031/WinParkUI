/****************************************************************************
** Meta object code from reading C++ file 'syssettingdialog.h'
**
** Created: Thu Sep 12 11:46:11 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/syssettingdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syssettingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CSysSettingDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      54,   18,   18,   18, 0x08,
      82,   18,   18,   18, 0x08,
     105,   18,   18,   18, 0x08,
     135,   18,   18,   18, 0x08,
     154,   18,   18,   18, 0x08,
     183,   18,   18,   18, 0x08,
     206,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CSysSettingDialog[] = {
    "CSysSettingDialog\0\0"
    "on_lblClose_linkActivated(QString)\0"
    "on_btnSpecialSave_clicked()\0"
    "on_btnVichle_clicked()\0"
    "on_btnVideoModeSave_clicked()\0"
    "on_btnOK_clicked()\0on_btnCommonFormat_clicked()\0"
    "on_btnCancel_clicked()\0"
    "on_btnCommonSave_clicked()\0"
};

const QMetaObject CSysSettingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CSysSettingDialog,
      qt_meta_data_CSysSettingDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CSysSettingDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CSysSettingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CSysSettingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CSysSettingDialog))
        return static_cast<void*>(const_cast< CSysSettingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CSysSettingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lblClose_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_btnSpecialSave_clicked(); break;
        case 2: on_btnVichle_clicked(); break;
        case 3: on_btnVideoModeSave_clicked(); break;
        case 4: on_btnOK_clicked(); break;
        case 5: on_btnCommonFormat_clicked(); break;
        case 6: on_btnCancel_clicked(); break;
        case 7: on_btnCommonSave_clicked(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
