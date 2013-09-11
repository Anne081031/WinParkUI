/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Sep 11 12:23:05 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      53,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   12,   11,   11, 0x05,
      74,   59,   11,   11, 0x05,
      97,   11,   11,   11, 0x05,
     110,   11,   11,   11, 0x05,
     133,  125,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     155,   11,   11,   11, 0x08,
     181,   11,   11,   11, 0x08,
     209,   11,   11,   11, 0x08,
     242,   11,   11,   11, 0x08,
     269,   11,   11,   11, 0x08,
     298,   11,   11,   11, 0x08,
     326,   11,   11,   11, 0x08,
     355,   11,   11,   11, 0x08,
     383,   11,   11,   11, 0x08,
     411,   11,   11,   11, 0x08,
     451,   11,   11,   11, 0x08,
     480,   11,   11,   11, 0x08,
     508,   11,   11,   11, 0x08,
     534,   11,   11,   11, 0x08,
     558,   11,   11,   11, 0x08,
     594,   11,   11,   11, 0x08,
     630,   11,   11,   11, 0x08,
     667,   11,   11,   11, 0x08,
     702,   11,   11,   11, 0x08,
     742,   11,   11,   11, 0x08,
     774,   11,   11,   11, 0x08,
     807,   11,   11,   11, 0x08,
     834,   11,   11,   11, 0x08,
     862,   11,   11,   11, 0x08,
     892,   11,   11,   11, 0x08,
     918,   11,   11,   11, 0x08,
     952,   11,   11,   11, 0x08,
     977,   11,   11,   11, 0x08,
    1009,   11,   11,   11, 0x08,
    1041,   11,   11,   11, 0x08,
    1068,   11,   11,   11, 0x08,
    1098,   11,   11,   11, 0x08,
    1136,   11,   11,   11, 0x08,
    1173,   11,   11,   11, 0x08,
    1202,   11,   11,   11, 0x08,
    1233,   11,   11,   11, 0x08,
    1255, 1247,   11,   11, 0x08,
    1299, 1285,   11,   11, 0x08,
    1360,   11,   11,   11, 0x08,
    1378,   11,   11,   11, 0x08,
    1392,   11,   11,   11, 0x08,
    1457, 1412,   11,   11, 0x08,
    1505,   11,   11,   11, 0x08,
    1542, 1516,   11,   11, 0x08,
    1572,   11,   11,   11, 0x08,
    1598,   11,   11,   11, 0x08,
    1621,   11,   11,   11, 0x08,
    1650,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0strUser,strID\0"
    "OnUserChanged(QString&,QString&)\0"
    "bNormal,nIndex\0OnPermission(bool,int)\0"
    "OnStartDlg()\0OnDestroyDlg()\0strInfo\0"
    "OnUpdateInfo(QString)\0on_actRestart_triggered()\0"
    "on_actShiftLogout_hovered()\0"
    "on_actPublishLEDInfo_triggered()\0"
    "on_actSyncTime_triggered()\0"
    "on_actStartPlate_triggered()\0"
    "on_actStopPlate_triggered()\0"
    "on_actStartVideo_triggered()\0"
    "on_actStopVideo_triggered()\0"
    "on_actConnectDb_triggered()\0"
    "on_actPlateRecognizationSet_triggered()\0"
    "on_actSerialPort_triggered()\0"
    "on_actBlacklist_triggered()\0"
    "on_actDocment_triggered()\0"
    "on_actAbout_triggered()\0"
    "on_actHandheldICProcess_triggered()\0"
    "on_actPrintYearlyReport_triggered()\0"
    "on_actPrintMonthlyReport_triggered()\0"
    "on_actPrintDaylyReport_triggered()\0"
    "on_actDiscountSummaryReport_triggered()\0"
    "on_actReewalRecords_triggered()\0"
    "on_actAccess2Records_triggered()\0"
    "on_actTimeCard_triggered()\0"
    "on_actValueCard_triggered()\0"
    "on_actMonthlyCard_triggered()\0"
    "on_actSysExit_triggered()\0"
    "on_actPwdModification_triggered()\0"
    "on_actSysLog_triggered()\0"
    "on_actDBMaintenance_triggered()\0"
    "on_actTariffSetting_triggered()\0"
    "on_actRightMgm_triggered()\0"
    "on_actShiftLogout_triggered()\0"
    "on_actTollDiscountTypeSet_triggered()\0"
    "on_actBatchSetCardAccess_triggered()\0"
    "on_actSysSetting_triggered()\0"
    "on_actDeviceConfig_triggered()\0"
    "DataMayRead()\0lstData\0"
    "ProcessDatagram(QStringList&)\0"
    "nType,lstData\0"
    "ProcessMonitorMsg(CommonDataType::DatagramType,QStringList&)\0"
    "UpdateLableText()\0SendStateHB()\0"
    "ReconnectDatabase()\0"
    "strPlate,nChannel,nConfidence,bNocard,byData\0"
    "RecognizePlate(QString,int,int,bool,QByteArray)\0"
    "SendTime()\0strMsg,bExpiration,bRetry\0"
    "Expiration(QString,bool,bool)\0"
    "on_actLicense_triggered()\0"
    "on_actStay_triggered()\0"
    "on_actRemoteMgmt_triggered()\0"
    "on_actIPC_triggered()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: OnUserChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: OnPermission((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: OnStartDlg(); break;
        case 3: OnDestroyDlg(); break;
        case 4: OnUpdateInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: on_actRestart_triggered(); break;
        case 6: on_actShiftLogout_hovered(); break;
        case 7: on_actPublishLEDInfo_triggered(); break;
        case 8: on_actSyncTime_triggered(); break;
        case 9: on_actStartPlate_triggered(); break;
        case 10: on_actStopPlate_triggered(); break;
        case 11: on_actStartVideo_triggered(); break;
        case 12: on_actStopVideo_triggered(); break;
        case 13: on_actConnectDb_triggered(); break;
        case 14: on_actPlateRecognizationSet_triggered(); break;
        case 15: on_actSerialPort_triggered(); break;
        case 16: on_actBlacklist_triggered(); break;
        case 17: on_actDocment_triggered(); break;
        case 18: on_actAbout_triggered(); break;
        case 19: on_actHandheldICProcess_triggered(); break;
        case 20: on_actPrintYearlyReport_triggered(); break;
        case 21: on_actPrintMonthlyReport_triggered(); break;
        case 22: on_actPrintDaylyReport_triggered(); break;
        case 23: on_actDiscountSummaryReport_triggered(); break;
        case 24: on_actReewalRecords_triggered(); break;
        case 25: on_actAccess2Records_triggered(); break;
        case 26: on_actTimeCard_triggered(); break;
        case 27: on_actValueCard_triggered(); break;
        case 28: on_actMonthlyCard_triggered(); break;
        case 29: on_actSysExit_triggered(); break;
        case 30: on_actPwdModification_triggered(); break;
        case 31: on_actSysLog_triggered(); break;
        case 32: on_actDBMaintenance_triggered(); break;
        case 33: on_actTariffSetting_triggered(); break;
        case 34: on_actRightMgm_triggered(); break;
        case 35: on_actShiftLogout_triggered(); break;
        case 36: on_actTollDiscountTypeSet_triggered(); break;
        case 37: on_actBatchSetCardAccess_triggered(); break;
        case 38: on_actSysSetting_triggered(); break;
        case 39: on_actDeviceConfig_triggered(); break;
        case 40: DataMayRead(); break;
        case 41: ProcessDatagram((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 42: ProcessMonitorMsg((*reinterpret_cast< CommonDataType::DatagramType(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 43: UpdateLableText(); break;
        case 44: SendStateHB(); break;
        case 45: ReconnectDatabase(); break;
        case 46: RecognizePlate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5]))); break;
        case 47: SendTime(); break;
        case 48: Expiration((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 49: on_actLicense_triggered(); break;
        case 50: on_actStay_triggered(); break;
        case 51: on_actRemoteMgmt_triggered(); break;
        case 52: on_actIPC_triggered(); break;
        default: ;
        }
        _id -= 53;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::OnUserChanged(QString & _t1, QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::OnPermission(bool _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::OnStartDlg()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MainWindow::OnDestroyDlg()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void MainWindow::OnUpdateInfo(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
