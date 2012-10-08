/****************************************************************************
** Meta object code from reading C++ file 'blacklist.h'
**
** Created: Mon Oct 8 16:29:38 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Header/blacklist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blacklist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CBlacklist[] = {

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
      12,   11,   11,   11, 0x08,
      47,   11,   11,   11, 0x08,
      74,   11,   11,   11, 0x08,
      94,   11,   11,   11, 0x08,
     117,   11,   11,   11, 0x08,
     140,   11,   11,   11, 0x08,
     159,   11,   11,   11, 0x08,
     193,  182,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CBlacklist[] = {
    "CBlacklist\0\0on_lblClose_linkActivated(QString)\0"
    "on_btnMinimalize_clicked()\0"
    "on_btnAdd_clicked()\0on_btnDelete_clicked()\0"
    "on_btnModify_clicked()\0on_btnOk_clicked()\0"
    "on_btnCancel_clicked()\0row,column\0"
    "on_tableBlacklist_cellClicked(int,int)\0"
};

const QMetaObject CBlacklist::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CBlacklist,
      qt_meta_data_CBlacklist, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CBlacklist::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CBlacklist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CBlacklist::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CBlacklist))
        return static_cast<void*>(const_cast< CBlacklist*>(this));
    return QFrame::qt_metacast(_clname);
}

int CBlacklist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lblClose_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_btnMinimalize_clicked(); break;
        case 2: on_btnAdd_clicked(); break;
        case 3: on_btnDelete_clicked(); break;
        case 4: on_btnModify_clicked(); break;
        case 5: on_btnOk_clicked(); break;
        case 6: on_btnCancel_clicked(); break;
        case 7: on_tableBlacklist_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
