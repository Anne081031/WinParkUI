/****************************************************************************
** Meta object code from reading C++ file 'timecard.h'
**
** Created: Mon Nov 26 12:59:44 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Header/timecard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timecard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CTimeCard[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      57,   46,   10,   10, 0x08,
      93,   10,   10,   10, 0x08,
     120,   46,   10,   10, 0x08,
     154,   10,   10,   10, 0x08,
     202,   10,   10,   10, 0x08,
     214,   10,   10,   10, 0x08,
     230,   10,   10,   10, 0x08,
     245,   10,   10,   10, 0x08,
     260,   10,   10,   10, 0x08,
     269,   10,   10,   10, 0x08,
     279,   10,   10,   10, 0x08,
     295,   10,   10,   10, 0x08,
     309,   10,   10,   10, 0x08,
     337,  327,   10,   10, 0x08,
     358,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CTimeCard[] = {
    "CTimeCard\0\0on_lblClose_linkActivated(QString)\0"
    "row,column\0on_tableAccess_cellClicked(int,int)\0"
    "on_btnMinimalize_clicked()\0"
    "on_tableTime_cellClicked(int,int)\0"
    "on_tableTime_customContextMenuRequested(QPoint)\0"
    "AddRecord()\0AddBulkRecord()\0ModifyRecord()\0"
    "DeleteRecord()\0Serach()\0Refresh()\0"
    "PrintCardInfo()\0Download2CC()\0"
    "CardLossProcess()\0strCardID\0"
    "PositionRow(QString)\0on_pushButton_8_clicked()\0"
};

const QMetaObject CTimeCard::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CTimeCard,
      qt_meta_data_CTimeCard, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CTimeCard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CTimeCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CTimeCard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CTimeCard))
        return static_cast<void*>(const_cast< CTimeCard*>(this));
    return QFrame::qt_metacast(_clname);
}

int CTimeCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lblClose_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_tableAccess_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: on_btnMinimalize_clicked(); break;
        case 3: on_tableTime_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: on_tableTime_customContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 5: AddRecord(); break;
        case 6: AddBulkRecord(); break;
        case 7: ModifyRecord(); break;
        case 8: DeleteRecord(); break;
        case 9: Serach(); break;
        case 10: Refresh(); break;
        case 11: PrintCardInfo(); break;
        case 12: Download2CC(); break;
        case 13: CardLossProcess(); break;
        case 14: PositionRow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: on_pushButton_8_clicked(); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
