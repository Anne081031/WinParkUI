/****************************************************************************
** Meta object code from reading C++ file 'dlgmakelicense.h'
**
** Created: Wed Jan 30 10:53:05 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/dlgmakelicense.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgmakelicense.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CDlgMakeLicense[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      37,   16,   16,   16, 0x08,
      58,   16,   16,   16, 0x08,
      80,   16,   16,   16, 0x08,
     101,   16,   16,   16, 0x08,
     121,   16,   16,   16, 0x08,
     144,   16,   16,   16, 0x08,
     167,   16,   16,   16, 0x08,
     197,  190,   16,   16, 0x08,
     218,   16,   16,   16, 0x08,
     250,  240,   16,   16, 0x08,
     279,  274,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CDlgMakeLicense[] = {
    "CDlgMakeLicense\0\0on_btnPSN_clicked()\0"
    "on_btnSave_clicked()\0on_btnClose_clicked()\0"
    "on_btnData_clicked()\0on_btnAdd_clicked()\0"
    "on_btnDelete_clicked()\0on_btnExport_clicked()\0"
    "on_btnImport_clicked()\0nIndex\0"
    "CbxIndexChanged(int)\0on_btnBatch_clicked()\0"
    "strParkID\0ParkIDChanged(QString&)\0"
    "link\0on_lblClose_linkActivated(QString)\0"
};

const QMetaObject CDlgMakeLicense::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CDlgMakeLicense,
      qt_meta_data_CDlgMakeLicense, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CDlgMakeLicense::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CDlgMakeLicense::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CDlgMakeLicense::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDlgMakeLicense))
        return static_cast<void*>(const_cast< CDlgMakeLicense*>(this));
    return QDialog::qt_metacast(_clname);
}

int CDlgMakeLicense::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnPSN_clicked(); break;
        case 1: on_btnSave_clicked(); break;
        case 2: on_btnClose_clicked(); break;
        case 3: on_btnData_clicked(); break;
        case 4: on_btnAdd_clicked(); break;
        case 5: on_btnDelete_clicked(); break;
        case 6: on_btnExport_clicked(); break;
        case 7: on_btnImport_clicked(); break;
        case 8: CbxIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: on_btnBatch_clicked(); break;
        case 10: ParkIDChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: on_lblClose_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
