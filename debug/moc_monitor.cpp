/****************************************************************************
** Meta object code from reading C++ file 'monitor.h'
**
** Created: Thu Jul 18 15:20:37 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Header/monitor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'monitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CMonitor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   10,    9,    9, 0x05,
      91,   74,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     133,  122,    9,    9, 0x08,
     173,    9,    9,    9, 0x08,
     196,    9,    9,    9, 0x08,
     220,    9,    9,    9, 0x08,
     246,  241,    9,    9, 0x08,
     271,    9,    9,    9, 0x08,
     303,    9,    9,    9, 0x08,
     327,    9,    9,    9, 0x08,
     358,    9,    9,    9, 0x08,
     387,    9,    9,    9, 0x08,
     416,    9,    9,    9, 0x08,
     445,    9,    9,    9, 0x08,
     476,    9,    9,    9, 0x08,
     489,    9,    9,    9, 0x08,
     501,    9,    9,    9, 0x08,
     514,    9,    9,    9, 0x08,
     540,  526,    9,    9, 0x08,
     570,    9,    9,    9, 0x08,
     583,    9,    9,    9, 0x08,
     612,  597,    9,    9, 0x08,
     636,   74,    9,    9, 0x08,
     665,    9,    9,    9, 0x08,
     685,    9,    9,    9, 0x08,
     721,  697,    9,    9, 0x08,
     758,  749,    9,    9, 0x08,
     802,  784,    9,    9, 0x08,
     852,  836,    9,    9, 0x08,
     885,  871,    9,    9, 0x08,
     908,  901,    9,    9, 0x08,
     932,  901,    9,    9, 0x08,
     954,    9,    9,    9, 0x08,
     978,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CMonitor[] = {
    "CMonitor\0\0strPlate,nChannel,nConfidence\0"
    "OnRecognizePlate(QString,int,int)\0"
    "nChannel,bMoving\0OnDirectionIndicator(int,bool)\0"
    "row,column\0on_tabRecord_cellDoubleClicked(int,int)\0"
    "onBtnVerifyInClicked()\0onBtnVerifyOutClicked()\0"
    "on_btnPass_clicked()\0link\0"
    "onLinkActivated(QString)\0"
    "on_btnDispatcherClose_clicked()\0"
    "on_btnBarcode_clicked()\0"
    "on_btnDispatcherOpen_clicked()\0"
    "on_btnGate3Channel_clicked()\0"
    "on_btnGateChannel2_clicked()\0"
    "on_btnGateChannel1_clicked()\0"
    "on_btnDispatcherInfo_clicked()\0"
    "GateClose2()\0GateOpen2()\0GateClose1()\0"
    "GateOpen1()\0strUser,strID\0"
    "ChangeUser(QString&,QString&)\0"
    "BtnPressed()\0BtnReleased()\0bNormal,nIndex\0"
    "BtnPermission(bool,int)\0"
    "DirectionIndicator(int,bool)\0"
    "OnClickedDlgPopup()\0SpaceInfo()\0"
    "strChar,nChannel,nIndex\0"
    "PlateCheck(QString,int,int)\0nChannel\0"
    "ManualRecogonization(int)\0nChannel,strPlate\0"
    "ManualRecogonization(int,QString)\0"
    "nIndex,bVisible\0HideCtrl(int,bool)\0"
    "nPlateChannel\0ClearPlate(int)\0strMsg\0"
    "DisplayDbError(QString)\0HandleIPCMsg(QString)\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
};

const QMetaObject CMonitor::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CMonitor,
      qt_meta_data_CMonitor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CMonitor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMonitor))
        return static_cast<void*>(const_cast< CMonitor*>(this));
    return QFrame::qt_metacast(_clname);
}

int CMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: OnRecognizePlate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: OnDirectionIndicator((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: on_tabRecord_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: onBtnVerifyInClicked(); break;
        case 4: onBtnVerifyOutClicked(); break;
        case 5: on_btnPass_clicked(); break;
        case 6: onLinkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: on_btnDispatcherClose_clicked(); break;
        case 8: on_btnBarcode_clicked(); break;
        case 9: on_btnDispatcherOpen_clicked(); break;
        case 10: on_btnGate3Channel_clicked(); break;
        case 11: on_btnGateChannel2_clicked(); break;
        case 12: on_btnGateChannel1_clicked(); break;
        case 13: on_btnDispatcherInfo_clicked(); break;
        case 14: GateClose2(); break;
        case 15: GateOpen2(); break;
        case 16: GateClose1(); break;
        case 17: GateOpen1(); break;
        case 18: ChangeUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: BtnPressed(); break;
        case 20: BtnReleased(); break;
        case 21: BtnPermission((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: DirectionIndicator((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: OnClickedDlgPopup(); break;
        case 24: SpaceInfo(); break;
        case 25: PlateCheck((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 26: ManualRecogonization((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: ManualRecogonization((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 28: HideCtrl((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 29: ClearPlate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: DisplayDbError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: HandleIPCMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: on_pushButton_clicked(); break;
        case 33: on_pushButton_2_clicked(); break;
        default: ;
        }
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void CMonitor::OnRecognizePlate(QString _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CMonitor::OnDirectionIndicator(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
