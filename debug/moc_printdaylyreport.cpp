/****************************************************************************
** Meta object code from reading C++ file 'printdaylyreport.h'
**
** Created: Mon Oct 8 12:08:29 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Header/printdaylyreport.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printdaylyreport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CPrintDaylyReport[] = {

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
      19,   18,   18,   18, 0x08,
      54,   18,   18,   18, 0x08,
      76,   18,   18,   18, 0x08,
      98,   18,   18,   18, 0x08,
     123,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CPrintDaylyReport[] = {
    "CPrintDaylyReport\0\0"
    "on_lblClose_linkActivated(QString)\0"
    "on_btnClose_clicked()\0on_btnPrint_clicked()\0"
    "on_btnGenerate_clicked()\0OnRdChkClicked()\0"
};

const QMetaObject CPrintDaylyReport::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CPrintDaylyReport,
      qt_meta_data_CPrintDaylyReport, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CPrintDaylyReport::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CPrintDaylyReport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CPrintDaylyReport::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CPrintDaylyReport))
        return static_cast<void*>(const_cast< CPrintDaylyReport*>(this));
    return QFrame::qt_metacast(_clname);
}

int CPrintDaylyReport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lblClose_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_btnClose_clicked(); break;
        case 2: on_btnPrint_clicked(); break;
        case 3: on_btnGenerate_clicked(); break;
        case 4: OnRdChkClicked(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
