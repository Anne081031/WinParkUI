/****************************************************************************
** Meta object code from reading C++ file 'batchsetcardaccess.h'
**
** Created: Mon Apr 23 09:31:11 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Header/batchsetcardaccess.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchsetcardaccess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CBatchSetCardAccess[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      53,   20,   20,   20, 0x08,
      83,   20,   20,   20, 0x08,
     124,  118,   20,   20, 0x08,
     159,   20,   20,   20, 0x08,
     186,   20,   20,   20, 0x08,
     214,   20,   20,   20, 0x08,
     244,   20,   20,   20, 0x08,
     263,   20,   20,   20, 0x08,
     287,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CBatchSetCardAccess[] = {
    "CBatchSetCardAccess\0\0"
    "on_btnAllUnselected_2_clicked()\0"
    "on_btnAllSecleted_2_clicked()\0"
    "on_lblClose_linkActivated(QString)\0"
    "index\0on_tableWidget_currentChanged(int)\0"
    "on_btnMinimalize_clicked()\0"
    "on_btnAllSecleted_clicked()\0"
    "on_btnAllUnselected_clicked()\0"
    "on_btnOk_clicked()\0on_btnAllTime_clicked()\0"
    "on_btnForbidden_clicked()\0"
};

const QMetaObject CBatchSetCardAccess::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CBatchSetCardAccess,
      qt_meta_data_CBatchSetCardAccess, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CBatchSetCardAccess::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CBatchSetCardAccess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CBatchSetCardAccess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CBatchSetCardAccess))
        return static_cast<void*>(const_cast< CBatchSetCardAccess*>(this));
    return QFrame::qt_metacast(_clname);
}

int CBatchSetCardAccess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnAllUnselected_2_clicked(); break;
        case 1: on_btnAllSecleted_2_clicked(); break;
        case 2: on_lblClose_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: on_tableWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: on_btnMinimalize_clicked(); break;
        case 5: on_btnAllSecleted_clicked(); break;
        case 6: on_btnAllUnselected_clicked(); break;
        case 7: on_btnOk_clicked(); break;
        case 8: on_btnAllTime_clicked(); break;
        case 9: on_btnForbidden_clicked(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
