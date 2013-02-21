/****************************************************************************
** Meta object code from reading C++ file 'dlgparkdongleinfo.h'
**
** Created: Wed Feb 20 12:15:21 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/dlgparkdongleinfo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgparkdongleinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CDlgParkDongleInfo[] = {

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
      20,   19,   19,   19, 0x08,
      40,   19,   19,   19, 0x08,
      66,   19,   19,   19, 0x08,
     106,   95,   19,   19, 0x08,
     142,   19,   19,   19, 0x08,
     165,   19,   19,   19, 0x08,
     187,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CDlgParkDongleInfo[] = {
    "CDlgParkDongleInfo\0\0on_btnAdd_clicked()\0"
    "on_btnAddParkID_clicked()\0"
    "on_btnDeleteParkID_clicked()\0row,column\0"
    "on_tableWidget_cellClicked(int,int)\0"
    "on_btnDelete_clicked()\0on_btnClose_clicked()\0"
    "on_btnSave_clicked()\0"
};

const QMetaObject CDlgParkDongleInfo::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CDlgParkDongleInfo,
      qt_meta_data_CDlgParkDongleInfo, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CDlgParkDongleInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CDlgParkDongleInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CDlgParkDongleInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDlgParkDongleInfo))
        return static_cast<void*>(const_cast< CDlgParkDongleInfo*>(this));
    return QDialog::qt_metacast(_clname);
}

int CDlgParkDongleInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnAdd_clicked(); break;
        case 1: on_btnAddParkID_clicked(); break;
        case 2: on_btnDeleteParkID_clicked(); break;
        case 3: on_tableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: on_btnDelete_clicked(); break;
        case 5: on_btnClose_clicked(); break;
        case 6: on_btnSave_clicked(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
