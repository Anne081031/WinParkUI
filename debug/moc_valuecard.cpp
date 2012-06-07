/****************************************************************************
** Meta object code from reading C++ file 'valuecard.h'
**
** Created: Thu Jun 7 15:09:51 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Header/valuecard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'valuecard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CValueCard[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      58,   47,   11,   11, 0x08,
      94,   11,   11,   11, 0x08,
     121,   47,   11,   11, 0x08,
     156,   11,   11,   11, 0x08,
     205,   11,   11,   11, 0x08,
     217,   11,   11,   11, 0x08,
     233,   11,   11,   11, 0x08,
     248,   11,   11,   11, 0x08,
     263,   11,   11,   11, 0x08,
     274,   11,   11,   11, 0x08,
     283,   11,   11,   11, 0x08,
     296,   11,   11,   11, 0x08,
     306,   11,   11,   11, 0x08,
     322,   11,   11,   11, 0x08,
     336,   11,   11,   11, 0x08,
     354,   11,   11,   11, 0x08,
     384,   11,   11,   11, 0x08,
     410,   11,   11,   11, 0x08,
     444,  439,   11,   11, 0x08,
     475,  465,   11,   11, 0x08,
     496,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CValueCard[] = {
    "CValueCard\0\0on_lblClose_linkActivated(QString)\0"
    "row,column\0on_tableAccess_cellClicked(int,int)\0"
    "on_btnMinimalize_clicked()\0"
    "on_tableValue_cellClicked(int,int)\0"
    "on_tableValue_customContextMenuRequested(QPoint)\0"
    "AddRecord()\0AddBulkRecord()\0ModifyRecord()\0"
    "DeleteRecord()\0Recharge()\0Serach()\0"
    "ChangeCard()\0Refresh()\0PrintCardInfo()\0"
    "Download2CC()\0CardLossProcess()\0"
    "on_btnValueRecharge_clicked()\0"
    "on_btnValueSave_clicked()\0"
    "on_btnEntranceSave_clicked()\0text\0"
    "textChanged(QString)\0strCardID\0"
    "PositionRow(QString)\0on_btnSaveRight_clicked()\0"
};

const QMetaObject CValueCard::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CValueCard,
      qt_meta_data_CValueCard, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CValueCard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CValueCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CValueCard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CValueCard))
        return static_cast<void*>(const_cast< CValueCard*>(this));
    return QFrame::qt_metacast(_clname);
}

int CValueCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lblClose_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_tableAccess_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: on_btnMinimalize_clicked(); break;
        case 3: on_tableValue_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: on_tableValue_customContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 5: AddRecord(); break;
        case 6: AddBulkRecord(); break;
        case 7: ModifyRecord(); break;
        case 8: DeleteRecord(); break;
        case 9: Recharge(); break;
        case 10: Serach(); break;
        case 11: ChangeCard(); break;
        case 12: Refresh(); break;
        case 13: PrintCardInfo(); break;
        case 14: Download2CC(); break;
        case 15: CardLossProcess(); break;
        case 16: on_btnValueRecharge_clicked(); break;
        case 17: on_btnValueSave_clicked(); break;
        case 18: on_btnEntranceSave_clicked(); break;
        case 19: textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: PositionRow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: on_btnSaveRight_clicked(); break;
        default: ;
        }
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
