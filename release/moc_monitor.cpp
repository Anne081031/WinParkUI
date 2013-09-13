/****************************************************************************
** Meta object code from reading C++ file 'monitor.h'
**
** Created: Fri Sep 13 09:47:32 2013
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
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      55,   10,    9,    9, 0x05,
     122,  105,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     153,    9,    9,    9, 0x08,
     189,  178,    9,    9, 0x08,
     229,    9,    9,    9, 0x08,
     252,    9,    9,    9, 0x08,
     276,    9,    9,    9, 0x08,
     302,  297,    9,    9, 0x08,
     327,    9,    9,    9, 0x08,
     359,    9,    9,    9, 0x08,
     383,    9,    9,    9, 0x08,
     414,    9,    9,    9, 0x08,
     443,    9,    9,    9, 0x08,
     472,    9,    9,    9, 0x08,
     501,    9,    9,    9, 0x08,
     532,    9,    9,    9, 0x08,
     545,    9,    9,    9, 0x08,
     557,    9,    9,    9, 0x08,
     570,    9,    9,    9, 0x08,
     596,  582,    9,    9, 0x08,
     626,    9,    9,    9, 0x08,
     639,    9,    9,    9, 0x08,
     668,  653,    9,    9, 0x08,
     692,  105,    9,    9, 0x08,
     721,    9,    9,    9, 0x08,
     741,    9,    9,    9, 0x08,
     777,  753,    9,    9, 0x08,
     814,  805,    9,    9, 0x08,
     858,  840,    9,    9, 0x08,
     908,  892,    9,    9, 0x08,
     941,  927,    9,    9, 0x08,
     964,  957,    9,    9, 0x08,
     988,  957,    9,    9, 0x08,
    1111, 1010,    9,    9, 0x08,
    1214, 1197,    9,    9, 0x08,
    1241,    9,    9,    9, 0x08,
    1265,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CMonitor[] = {
    "CMonitor\0\0strPlate,nChannel,nConfidence,bNocard,byData\0"
    "OnRecognizePlate(QString,int,int,bool,QByteArray)\0"
    "nChannel,bMoving\0OnDirectionIndicator(int,bool)\0"
    "GateButtonRightClicked()\0row,column\0"
    "on_tabRecord_cellDoubleClicked(int,int)\0"
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
    "strPlate,nChannel,bSuccess,bVideo,nWidth,nHeight,nConfidence,strDirect"
    "ion,byData,rectPlate,rectVideo\0"
    "HandleUIPlateResult(QString,int,bool,bool,int,int,int,QString,QByteArr"
    "ay,QRect,QRect)\0"
    "nChannel,bMotion\0HandleDetectInfo(int,bool)\0"
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
        case 0: OnRecognizePlate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5]))); break;
        case 1: OnDirectionIndicator((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: GateButtonRightClicked(); break;
        case 3: on_tabRecord_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: onBtnVerifyInClicked(); break;
        case 5: onBtnVerifyOutClicked(); break;
        case 6: on_btnPass_clicked(); break;
        case 7: onLinkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: on_btnDispatcherClose_clicked(); break;
        case 9: on_btnBarcode_clicked(); break;
        case 10: on_btnDispatcherOpen_clicked(); break;
        case 11: on_btnGate3Channel_clicked(); break;
        case 12: on_btnGateChannel2_clicked(); break;
        case 13: on_btnGateChannel1_clicked(); break;
        case 14: on_btnDispatcherInfo_clicked(); break;
        case 15: GateClose2(); break;
        case 16: GateOpen2(); break;
        case 17: GateClose1(); break;
        case 18: GateOpen1(); break;
        case 19: ChangeUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 20: BtnPressed(); break;
        case 21: BtnReleased(); break;
        case 22: BtnPermission((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: DirectionIndicator((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 24: OnClickedDlgPopup(); break;
        case 25: SpaceInfo(); break;
        case 26: PlateCheck((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 27: ManualRecogonization((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: ManualRecogonization((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 29: HideCtrl((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: ClearPlate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: DisplayDbError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: HandleIPCMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: HandleUIPlateResult((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< QByteArray(*)>(_a[9])),(*reinterpret_cast< QRect(*)>(_a[10])),(*reinterpret_cast< QRect(*)>(_a[11]))); break;
        case 34: HandleDetectInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: on_pushButton_clicked(); break;
        case 36: on_pushButton_2_clicked(); break;
        default: ;
        }
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void CMonitor::OnRecognizePlate(QString _t1, int _t2, int _t3, bool _t4, QByteArray _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CMonitor::OnDirectionIndicator(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
