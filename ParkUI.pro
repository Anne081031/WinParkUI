#-------------------------------------------------
#
# Project created by QtCreator 2011-04-18T14:19:11
#
#-------------------------------------------------
#
QT       += core gui network webkit sql phonon #low case

TARGET = ParkUI
TEMPLATE = app
#QTPLUGIN     += qjpeg
#CONFIG += static
CONFIG += qaxcontainer

INCLUDEPATH += "./Mysql/include"

LIBS += "./lib/libmysqlclient.a"
LIBS += "./lib/libmysql.a"
LIBS += "./lib/libMultimedia.a"
LIBS += "./lib/libVehicleLicense.a"
LIBS += "./lib/libpsapi.a"
LIBS += "./lib/libiphlpapi.a"
LIBS += "./lib/libws2_32.a"
LIBS += "./lib/libDongle.a"
LIBS += "./lib/libQAxContainer.a"
LIBS += "./lib/liboleaut32.a"
LIBS += "./lib/libole32.a"
LIBS += "./lib/libgdi32.a"

DEFINES += PARK_UI RAW_API COMMON_DB _WIN32_WINNT=0x0501

SOURCES += mainwindow.cpp \
    main.cpp \
    Implement/valuecard.cpp \
    Implement/tolldiscounttypeset.cpp \
    Implement/timecard.cpp \
    Implement/tariffsetting.cpp \
    Implement/syslog.cpp \
    Implement/shiftlogout.cpp \
    Implement/rightmgm.cpp \
    Implement/reewalrecords.cpp \
    Implement/pwdmodification.cpp \
    Implement/publishledinfo.cpp \
    Implement/printyearlyreport.cpp \
    Implement/printmonthlyreport.cpp \
    Implement/printdaylyreport.cpp \
    Implement/monthlycard.cpp \
    Implement/handheldicprocess.cpp \
    Implement/discountsummaryreport.cpp \
    Implement/deviceconfig.cpp \
    Implement/dbmaintenance.cpp \
    Implement/batchsetcardaccess.cpp \
    Implement/access2records.cpp \
    Implement/logindialog.cpp \
    Implement/toolbardockwidget.cpp \
    Implement/syssetting.cpp \
    Implement/monitor.cpp \
    Implement/picturecontrast.cpp \
    Common/logicinterface.cpp \
    Dialog/rigthmgmdatadlg.cpp \
    Common/ommonfunction.cpp \
    Dialog/pwddialog.cpp \
    Dialog/rechargedialog.cpp \
    Dialog/valuerechargedialog.cpp \
    Dialog/ledinfodialog.cpp \
    Dialog/syssettingdialog.cpp \
    Implement/blacklist.cpp \
    Dialog/handicdialog.cpp \
    Dialog/parkspacelotdialog.cpp \
    Common/mytimer.cpp \
    Dialog/monthlycarddialog.cpp \
    Dialog/timecarddialog.cpp \
    Dialog/valuecarddialog.cpp \
    Dialog/monchargedlg.cpp \
    SerialPort/winserialport.cpp \
    SerialPort/portcmd.cpp \
    Qextserialport/win_qextserialport.cpp \
    Qextserialport/qextserialport.cpp \
    Qextserialport/qextserialbase.cpp \
    Database/mysqldatabase.cpp \
    Dialog/serialportdialog.cpp \
    SerialPort/processdata.cpp \
    Dialog/spacedialog.cpp \
    Dialog/passdlg.cpp \
    Dialog/picturecontrastdlg.cpp \
    Dialog/recognizeparamdlg.cpp \
    Dialog/channelattribute.cpp \
    Dialog/dlgccstatus.cpp \
    Dialog/dlgperipheralstatus.cpp \
    Dialog/dlgsmsnotification.cpp \
    Dialog/dlgpassdetail.cpp \
    Dialog/feeframe.cpp \
    Dialog/dlgqueryowner.cpp \
    Report/reporter.cpp \
    Dialog/dlgserach.cpp \
    startupprocess.cpp \
    dlgstartupprocess.cpp \
    startupthread.cpp \
    Lunar/SolarDate.cpp \
    Lunar/ChineseDate.cpp \
    Lunar/ChineseCalendarDB.cpp \
    License/license.cpp \
    License/checkthread.cpp \
    Implement/mylabel.cpp \
    DbBackup/dbbackupthread.cpp \
    DbBackup/RdAutoDeleteThread.cpp \
    ParkDataSender/parkdatasender.cpp \
    Heartbeat/heartbeatthread.cpp \
    Database/mssqlserver.cpp \
    Network/parkintranet.cpp \
    Network/http.cpp \
    Scanner/scanner.cpp \
    Network/udpdispatcher.cpp \
    Network/tcpdispatcher.cpp \
    Network/mytcpserver.cpp \
    Network/netprocessdata.cpp \
    Network/svrthread.cpp \
    Network/tcpclient.cpp \
    Database/bulkinsert.cpp \
    Network/udpclient.cpp \
    Network/manipulatemessage.cpp \
    Network/netcommfunction.cpp \
    Network/httpserver.cpp \
    Implement/picturescale.cpp \
    Network/httpevent.cpp \
    Network/netclient.cpp \
    Network/localsvrcommunication.cpp \
    Network/peersocket.cpp \
    Heartbeat/hbevent.cpp \
    Network/localcltcommunication.cpp \
    Network/ftp.cpp \
    Network/ftpevent.cpp \
    Dialog/dlgalert.cpp \
    Dialog/dlggarageingarage.cpp \
    Dialog/dlginconformity.cpp \
    Dialog/dlgabout.cpp \
    Dialog/dlgbulkregister.cpp \
    SerialPort/writethread.cpp \
    PmsLog/pmslog.cpp \
    SerialPort/serialevent.cpp \
    SMS/sms.cpp \
    DbCache/dbinoutrecordthread.cpp \
    DbCache/recordevent.cpp \
    Dialog/dlgmakelicense.cpp \
    License/processcpuid.cpp \
    Dialog/dlgparkdongleinfo.cpp \
    SerialPort/dbwritethread.cpp \
    SerialPort/dbevent.cpp \
    SerialPort/dbhistorythread.cpp \
    SMS/smsevent.cpp \
    CenterMgmt/mgmtthread.cpp \
    CenterMgmt/getconfig.cpp \
    CenterMgmt/sendrequest.cpp \
    Dialog/dlgreadcardid.cpp \
    Dialog/dlgstaying.cpp

HEADERS  += Header/valuecard.h \
    Header/tolldiscounttypeset.h \
    Header/timecard.h \
    Header/tariffsetting.h \
    Header/syslog.h \
    Header/shiftlogout.h \
    Header/rightmgm.h \
    Header/reewalrecords.h \
    Header/pwdmodification.h \
    Header/publishledinfo.h \
    Header/printyearlyreport.h \
    Header/printmonthlyreport.h \
    Header/printdaylyreport.h \
    Header/monthlycard.h \
    mainwindow.h \
    Header/handheldicprocess.h \
    Header/discountsummaryreport.h \
    Header/deviceconfig.h \
    Header/dbmaintenance.h \
    Header/batchsetcardaccess.h \
    Header/access2records.h \
    Header/logindialog.h \
    Header/toolbardockwidget.h \
    Header/syssetting.h \
    Header/monitor.h \
    Header/picturecontrast.h \
    Common/CommonType.h \
    Common/logicinterface.h \
    Dialog/rigthmgmdatadlg.h \
    Common/commonfunction.h \
    Dialog/pwddialog.h \
    Dialog/rechargedialog.h \
    Dialog/valuerechargedialog.h \
    Dialog/ledinfodialog.h \
    Dialog/syssettingdialog.h \
    Header/blacklist.h \
    Dialog/handicdialog.h \
    Dialog/parkspacelotdialog.h \
    Common/mytimer.h \
    Dialog/monthlycarddialog.h \
    Dialog/timecarddialog.h \
    Dialog/valuecarddialog.h \
    Dialog/monchargedlg.h \
    SerialPort/winserialport.h \
    SerialPort/portcmd.h \
    Qextserialport/win_qextserialport.h \
    Qextserialport/qextserialport.h \
    Qextserialport/qextserialbase.h \
    Database/mysqldatabase.h \
    Dialog/serialportdialog.h \
    SerialPort/processdata.h \
    Dialog/spacedialog.h \
    Dialog/passdlg.h \
    Dialog/picturecontrastdlg.h \
    Dialog/recognizeparamdlg.h \
    Dialog/channelattribute.h \
    Dialog/dlgccstatus.h \
    Dialog/dlgperipheralstatus.h \
    Dialog/dlgsmsnotification.h \
    Dialog/dlgpassdetail.h \
    Dialog/feeframe.h \
    Dialog/dlgqueryowner.h \
    Report/reporter.h \
    Dialog/dlgserach.h \
    startupprocess.h \
    dlgstartupprocess.h \
    startupthread.h \
    Lunar/SolarDate.h \
    Lunar/ChineseDate.h \
    Lunar/ChineseCalendarDB.h \
    License/license.h \
    License/checkthread.h \
    Header/mylabel.h \
    DbBackup/dbbackupthread.h \
    DbBackup/RdAutoDeleteThread.h \
    ParkDataSender/parkdatasender.h \
    Heartbeat/heartbeatthread.h \
    Database/mssqlserver.h \
    Network/parkintranet.h \
    Network/http.h \
    Scanner/scanner.h \
    Network/udpdispatcher.h \
    Network/tcpdispatcher.h \
    Network/mytcpserver.h \
    Network/CommonData.h \
    Network/netprocessdata.h \
    Network/svrthread.h \
    Network/tcpclient.h \
    Database/bulkinsert.h \
    Network/udpclient.h \
    Network/manipulatemessage.h \
    Network/netcommfunction.h \
    Network/httpserver.h \
    Header/picturescale.h \
    Network/httpevent.h \
    Network/netclient.h \
    Network/localsvrcommunication.h \
    Network/peersocket.h \
    Heartbeat/hbevent.h \
    Network/localcltcommunication.h \
    Network/ftp.h \
    Network/ftpevent.h \
    Dialog/dlgalert.h \
    Dialog/dlggarageingarage.h \
    Dialog/dlginconformity.h \
    Dialog/dlgabout.h \
    Dialog/dlgbulkregister.h \
    SerialPort/writethread.h \
    PmsLog/pmslog.h \
    SerialPort/serialevent.h \
    SMS/sms.h \
    DbCache/dbinoutrecordthread.h \
    DbCache/recordevent.h \
    Dialog/dlgmakelicense.h \
    License/processcpuid.h \
    Dialog/dlgparkdongleinfo.h \
    SerialPort/dbwritethread.h \
    SerialPort/dbevent.h \
    SerialPort/dbhistorythread.h \
    SMS/smsevent.h \
    CenterMgmt/mgmtthread.h \
    CenterMgmt/getconfig.h \
    CenterMgmt/DataType.h \
    CenterMgmt/sendrequest.h \
    Dialog/dlgreadcardid.h \
    Dialog/dlgstaying.h

FORMS    += UIWnd/valuecard.ui \
    UIWnd/tolldiscounttypeset.ui \
    UIWnd/timecard.ui \
    UIWnd/tariffsetting.ui \
    UIWnd/syslog.ui \
    UIWnd/shiftlogout.ui \
    UIWnd/rightmgm.ui \
    UIWnd/reewalrecords.ui \
    UIWnd/pwdmodification.ui \
    UIWnd/publishledinfo.ui \
    UIWnd/printyearlyreport.ui \
    UIWnd/printmonthlyreport.ui \
    UIWnd/printdaylyreport.ui \
    UIWnd/monthlycard.ui \
    mainwindow.ui \
    UIWnd/handheldicprocess.ui \
    UIWnd/discountsummaryreport.ui \
    UIWnd/deviceconfig.ui \
    UIWnd/dbmaintenance.ui \
    UIWnd/batchsetcardaccess.ui \
    UIWnd/access2records.ui \
    UIWnd/logindialog.ui \
    UIWnd/toolbardockwidget.ui \
    UIWnd/syssetting.ui \
    UIWnd/monitor.ui \
    UIWnd/picturecontrast.ui \
    Dialog/rigthmgmdatadlg.ui \
    Dialog/pwddialog.ui \
    Dialog/rechargedialog.ui \
    Dialog/valuerechargedialog.ui \
    Dialog/ledinfodialog.ui \
    Dialog/syssettingdialog.ui \
    UIWnd/blacklist.ui \
    Dialog/handicdialog.ui \
    Dialog/parkspacelotdialog.ui \
    Dialog/monthlycarddialog.ui \
    Dialog/timecarddialog.ui \
    Dialog/valuecarddialog.ui \
    Dialog/monchargedlg.ui \
    Dialog/serialportdialog.ui \
    Dialog/spacedialog.ui \
    Dialog/passdlg.ui \
    Dialog/picturecontrastdlg.ui \
    Dialog/recognizeparamdlg.ui \
    Dialog/channelattribute.ui \
    Dialog/dlgccstatus.ui \
    Dialog/dlgperipheralstatus.ui \
    Dialog/dlgsmsnotification.ui \
    Dialog/dlgpassdetail.ui \
    Dialog/feeframe.ui \
    Dialog/dlgqueryowner.ui \
    Dialog/dlgserach.ui \
    startupprocess.ui \
    dlgstartupprocess.ui \
    Dialog/dlgalert.ui \
    Dialog/dlggarageingarage.ui \
    Dialog/dlginconformity.ui \
    Dialog/dlgabout.ui \
    Dialog/dlgbulkregister.ui \
    Dialog/dlgmakelicense.ui \
    Dialog/dlgparkdongleinfo.ui \
    Dialog/dlgreadcardid.ui \
    Dialog/dlgstaying.ui

OTHER_FILES += \
    Doc/LedProtocol.doc \
    Doc/Command.xls \
    Doc/AudioCode.xls \
    Doc/http1-1.pdf \
    Doc/PMS.vsd



