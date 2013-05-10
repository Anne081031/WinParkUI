/****************************************************************************
** Meta object code from reading C++ file 'recognizeparamdlg.h'
**
** Created: Wed May 8 17:22:40 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/recognizeparamdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recognizeparamdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRecognizeParamDlg[] = {

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
      20,   19,   19,   19, 0x08,
      55,   19,   19,   19, 0x08,
      79,   19,   19,   19, 0x08,
     100,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CRecognizeParamDlg[] = {
    "CRecognizeParamDlg\0\0"
    "on_lblClose_linkActivated(QString)\0"
    "on_btnDefault_clicked()\0on_btnSave_clicked()\0"
    "on_btnExit_clicked()\0"
};

const QMetaObject CRecognizeParamDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CRecognizeParamDlg,
      qt_meta_data_CRecognizeParamDlg, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRecognizeParamDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRecognizeParamDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRecognizeParamDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRecognizeParamDlg))
        return static_cast<void*>(const_cast< CRecognizeParamDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CRecognizeParamDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lblClose_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_btnDefault_clicked(); break;
        case 2: on_btnSave_clicked(); break;
        case 3: on_btnExit_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
