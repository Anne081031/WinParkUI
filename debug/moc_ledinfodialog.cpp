/****************************************************************************
** Meta object code from reading C++ file 'ledinfodialog.h'
**
** Created: Mon Dec 16 14:09:57 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/ledinfodialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ledinfodialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CLedInfoDialog[] = {

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
      16,   15,   15,   15, 0x08,
      51,   15,   15,   15, 0x08,
      80,   15,   15,   15, 0x08,
     102,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CLedInfoDialog[] = {
    "CLedInfoDialog\0\0on_lblClose_linkActivated(QString)\0"
    "on_btnDownloadTime_clicked()\0"
    "on_btnClose_clicked()\0on_btnDownload_clicked()\0"
};

const QMetaObject CLedInfoDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CLedInfoDialog,
      qt_meta_data_CLedInfoDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CLedInfoDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CLedInfoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CLedInfoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CLedInfoDialog))
        return static_cast<void*>(const_cast< CLedInfoDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CLedInfoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lblClose_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_btnDownloadTime_clicked(); break;
        case 2: on_btnClose_clicked(); break;
        case 3: on_btnDownload_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
