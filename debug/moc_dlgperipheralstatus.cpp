/****************************************************************************
** Meta object code from reading C++ file 'dlgperipheralstatus.h'
**
** Created: Wed May 8 17:22:49 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/dlgperipheralstatus.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgperipheralstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CDlgPeripheralStatus[] = {

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
      22,   21,   21,   21, 0x08,
      57,   21,   21,   21, 0x08,
      80,   21,   21,   21, 0x08,
     101,   21,   21,   21, 0x08,
     130,  116,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CDlgPeripheralStatus[] = {
    "CDlgPeripheralStatus\0\0"
    "on_lblClose_linkActivated(QString)\0"
    "on_btnCancel_clicked()\0on_btnSave_clicked()\0"
    "OnBtnClicked()\0byData,nMinor\0"
    "ResponseUserRequest(QByteArray&,int)\0"
};

const QMetaObject CDlgPeripheralStatus::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CDlgPeripheralStatus,
      qt_meta_data_CDlgPeripheralStatus, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CDlgPeripheralStatus::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CDlgPeripheralStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CDlgPeripheralStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDlgPeripheralStatus))
        return static_cast<void*>(const_cast< CDlgPeripheralStatus*>(this));
    return QDialog::qt_metacast(_clname);
}

int CDlgPeripheralStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lblClose_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_btnCancel_clicked(); break;
        case 2: on_btnSave_clicked(); break;
        case 3: OnBtnClicked(); break;
        case 4: ResponseUserRequest((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
