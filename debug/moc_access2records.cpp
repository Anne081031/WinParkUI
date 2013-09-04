/****************************************************************************
** Meta object code from reading C++ file 'access2records.h'
**
** Created: Mon Sep 2 12:18:33 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Header/access2records.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'access2records.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CAccess2Records[] = {

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
      28,   17,   16,   16, 0x08,
      76,   16,   16,   16, 0x08,
     111,   17,   16,   16, 0x08,
     153,   16,   16,   16, 0x08,
     189,  180,   16,   16, 0x08,
     204,   16,   16,   16, 0x08,
     226,   16,   16,   16, 0x08,
     254,  249,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CAccess2Records[] = {
    "CAccess2Records\0\0row,column\0"
    "on_tableAccessRecord_cellDoubleClicked(int,int)\0"
    "on_lblClose_linkActivated(QString)\0"
    "on_tableAccessRecord_cellClicked(int,int)\0"
    "on_btnMinimalize_clicked()\0bVisible\0"
    "HideCtrl(bool)\0on_btnQuery_clicked()\0"
    "on_btnSerach_clicked()\0arg1\0"
    "on_lineEdit_textChanged(QString)\0"
};

const QMetaObject CAccess2Records::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CAccess2Records,
      qt_meta_data_CAccess2Records, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CAccess2Records::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CAccess2Records::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CAccess2Records::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CAccess2Records))
        return static_cast<void*>(const_cast< CAccess2Records*>(this));
    return QFrame::qt_metacast(_clname);
}

int CAccess2Records::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_tableAccessRecord_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: on_lblClose_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: on_tableAccessRecord_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: on_btnMinimalize_clicked(); break;
        case 4: HideCtrl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_btnQuery_clicked(); break;
        case 6: on_btnSerach_clicked(); break;
        case 7: on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
