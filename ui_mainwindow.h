/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actDeviceConfig;
    QAction *actSysSetting;
    QAction *actBatchSetCardAccess;
    QAction *actTollDiscountTypeSet;
    QAction *actShiftLogout;
    QAction *actRightMgm;
    QAction *actTariffSetting;
    QAction *actDBMaintenance;
    QAction *actSysLog;
    QAction *actPwdModification;
    QAction *actSysExit;
    QAction *actMonthlyCard;
    QAction *actValueCard;
    QAction *actTimeCard;
    QAction *actPublishLEDInfo;
    QAction *actAccess2Records;
    QAction *actReewalRecords;
    QAction *actDiscountSummaryReport;
    QAction *actPrintDaylyReport;
    QAction *actPrintMonthlyReport;
    QAction *actPrintYearlyReport;
    QAction *actHandheldICProcess;
    QAction *actAbout;
    QAction *actDocment;
    QAction *actBlacklist;
    QAction *actSerialPort;
    QAction *actPlateRecognizationSet;
    QAction *actConnectDb;
    QAction *actStartVideoOne;
    QAction *actStartVideoTwo;
    QAction *actStopVideoOne;
    QAction *actStopVideoTwo;
    QAction *actStartPlateOne;
    QAction *actStartPlateTwo;
    QAction *actStopPlateOne;
    QAction *actStopPlateTwo;
    QAction *actStartVideo;
    QAction *actStopVideo;
    QAction *actStartPlate;
    QAction *actStopPlate;
    QAction *actSyncTime;
    QAction *actRestart;
    QAction *actLicense;
    QAction *actStay;
    QAction *actRemoteMgmt;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuSysMgm;
    QMenu *actVideoService;
    QMenu *actPlateService;
    QMenu *menuCardTicketsMgm;
    QMenu *menuAdvSetting;
    QMenu *menuQueryReport;
    QMenu *menuHelp;
    QToolBar *mainTB;
    QStatusBar *statusBar;
    QToolBar *tbTime;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1440, 900);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1440, 900));
        MainWindow->setMaximumSize(QSize(1440, 900));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actDeviceConfig = new QAction(MainWindow);
        actDeviceConfig->setObjectName(QString::fromUtf8("actDeviceConfig"));
        actSysSetting = new QAction(MainWindow);
        actSysSetting->setObjectName(QString::fromUtf8("actSysSetting"));
        actBatchSetCardAccess = new QAction(MainWindow);
        actBatchSetCardAccess->setObjectName(QString::fromUtf8("actBatchSetCardAccess"));
        actTollDiscountTypeSet = new QAction(MainWindow);
        actTollDiscountTypeSet->setObjectName(QString::fromUtf8("actTollDiscountTypeSet"));
        actShiftLogout = new QAction(MainWindow);
        actShiftLogout->setObjectName(QString::fromUtf8("actShiftLogout"));
        QFont font;
        actShiftLogout->setFont(font);
        actRightMgm = new QAction(MainWindow);
        actRightMgm->setObjectName(QString::fromUtf8("actRightMgm"));
        actTariffSetting = new QAction(MainWindow);
        actTariffSetting->setObjectName(QString::fromUtf8("actTariffSetting"));
        actDBMaintenance = new QAction(MainWindow);
        actDBMaintenance->setObjectName(QString::fromUtf8("actDBMaintenance"));
        actSysLog = new QAction(MainWindow);
        actSysLog->setObjectName(QString::fromUtf8("actSysLog"));
        actPwdModification = new QAction(MainWindow);
        actPwdModification->setObjectName(QString::fromUtf8("actPwdModification"));
        actSysExit = new QAction(MainWindow);
        actSysExit->setObjectName(QString::fromUtf8("actSysExit"));
        actMonthlyCard = new QAction(MainWindow);
        actMonthlyCard->setObjectName(QString::fromUtf8("actMonthlyCard"));
        actValueCard = new QAction(MainWindow);
        actValueCard->setObjectName(QString::fromUtf8("actValueCard"));
        actTimeCard = new QAction(MainWindow);
        actTimeCard->setObjectName(QString::fromUtf8("actTimeCard"));
        actPublishLEDInfo = new QAction(MainWindow);
        actPublishLEDInfo->setObjectName(QString::fromUtf8("actPublishLEDInfo"));
        actAccess2Records = new QAction(MainWindow);
        actAccess2Records->setObjectName(QString::fromUtf8("actAccess2Records"));
        actAccess2Records->setVisible(true);
        actReewalRecords = new QAction(MainWindow);
        actReewalRecords->setObjectName(QString::fromUtf8("actReewalRecords"));
        actReewalRecords->setVisible(true);
        actDiscountSummaryReport = new QAction(MainWindow);
        actDiscountSummaryReport->setObjectName(QString::fromUtf8("actDiscountSummaryReport"));
        actDiscountSummaryReport->setEnabled(false);
        actDiscountSummaryReport->setVisible(false);
        actPrintDaylyReport = new QAction(MainWindow);
        actPrintDaylyReport->setObjectName(QString::fromUtf8("actPrintDaylyReport"));
        actPrintDaylyReport->setEnabled(true);
        actPrintDaylyReport->setVisible(true);
        actPrintMonthlyReport = new QAction(MainWindow);
        actPrintMonthlyReport->setObjectName(QString::fromUtf8("actPrintMonthlyReport"));
        actPrintMonthlyReport->setEnabled(false);
        actPrintMonthlyReport->setVisible(false);
        actPrintYearlyReport = new QAction(MainWindow);
        actPrintYearlyReport->setObjectName(QString::fromUtf8("actPrintYearlyReport"));
        actPrintYearlyReport->setEnabled(false);
        actPrintYearlyReport->setVisible(false);
        actHandheldICProcess = new QAction(MainWindow);
        actHandheldICProcess->setObjectName(QString::fromUtf8("actHandheldICProcess"));
        actHandheldICProcess->setEnabled(false);
        actHandheldICProcess->setVisible(false);
        actAbout = new QAction(MainWindow);
        actAbout->setObjectName(QString::fromUtf8("actAbout"));
        actDocment = new QAction(MainWindow);
        actDocment->setObjectName(QString::fromUtf8("actDocment"));
        actDocment->setVisible(false);
        actBlacklist = new QAction(MainWindow);
        actBlacklist->setObjectName(QString::fromUtf8("actBlacklist"));
        actSerialPort = new QAction(MainWindow);
        actSerialPort->setObjectName(QString::fromUtf8("actSerialPort"));
        actPlateRecognizationSet = new QAction(MainWindow);
        actPlateRecognizationSet->setObjectName(QString::fromUtf8("actPlateRecognizationSet"));
        actConnectDb = new QAction(MainWindow);
        actConnectDb->setObjectName(QString::fromUtf8("actConnectDb"));
        actStartVideoOne = new QAction(MainWindow);
        actStartVideoOne->setObjectName(QString::fromUtf8("actStartVideoOne"));
        actStartVideoTwo = new QAction(MainWindow);
        actStartVideoTwo->setObjectName(QString::fromUtf8("actStartVideoTwo"));
        actStopVideoOne = new QAction(MainWindow);
        actStopVideoOne->setObjectName(QString::fromUtf8("actStopVideoOne"));
        actStopVideoTwo = new QAction(MainWindow);
        actStopVideoTwo->setObjectName(QString::fromUtf8("actStopVideoTwo"));
        actStartPlateOne = new QAction(MainWindow);
        actStartPlateOne->setObjectName(QString::fromUtf8("actStartPlateOne"));
        actStartPlateTwo = new QAction(MainWindow);
        actStartPlateTwo->setObjectName(QString::fromUtf8("actStartPlateTwo"));
        actStopPlateOne = new QAction(MainWindow);
        actStopPlateOne->setObjectName(QString::fromUtf8("actStopPlateOne"));
        actStopPlateTwo = new QAction(MainWindow);
        actStopPlateTwo->setObjectName(QString::fromUtf8("actStopPlateTwo"));
        actStartVideo = new QAction(MainWindow);
        actStartVideo->setObjectName(QString::fromUtf8("actStartVideo"));
        actStopVideo = new QAction(MainWindow);
        actStopVideo->setObjectName(QString::fromUtf8("actStopVideo"));
        actStartPlate = new QAction(MainWindow);
        actStartPlate->setObjectName(QString::fromUtf8("actStartPlate"));
        actStartPlate->setVisible(false);
        actStopPlate = new QAction(MainWindow);
        actStopPlate->setObjectName(QString::fromUtf8("actStopPlate"));
        actStopPlate->setVisible(false);
        actSyncTime = new QAction(MainWindow);
        actSyncTime->setObjectName(QString::fromUtf8("actSyncTime"));
        actRestart = new QAction(MainWindow);
        actRestart->setObjectName(QString::fromUtf8("actRestart"));
        actRestart->setVisible(false);
        actLicense = new QAction(MainWindow);
        actLicense->setObjectName(QString::fromUtf8("actLicense"));
        actLicense->setEnabled(false);
        actLicense->setVisible(false);
        actStay = new QAction(MainWindow);
        actStay->setObjectName(QString::fromUtf8("actStay"));
        actRemoteMgmt = new QAction(MainWindow);
        actRemoteMgmt->setObjectName(QString::fromUtf8("actRemoteMgmt"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1440, 19));
        menuSysMgm = new QMenu(menuBar);
        menuSysMgm->setObjectName(QString::fromUtf8("menuSysMgm"));
        actVideoService = new QMenu(menuSysMgm);
        actVideoService->setObjectName(QString::fromUtf8("actVideoService"));
        actPlateService = new QMenu(menuSysMgm);
        actPlateService->setObjectName(QString::fromUtf8("actPlateService"));
        menuCardTicketsMgm = new QMenu(menuBar);
        menuCardTicketsMgm->setObjectName(QString::fromUtf8("menuCardTicketsMgm"));
        menuAdvSetting = new QMenu(menuBar);
        menuAdvSetting->setObjectName(QString::fromUtf8("menuAdvSetting"));
        menuQueryReport = new QMenu(menuBar);
        menuQueryReport->setObjectName(QString::fromUtf8("menuQueryReport"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainTB = new QToolBar(MainWindow);
        mainTB->setObjectName(QString::fromUtf8("mainTB"));
        mainTB->setMinimumSize(QSize(0, 0));
        mainTB->setMovable(false);
        mainTB->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mainTB->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainTB);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        tbTime = new QToolBar(MainWindow);
        tbTime->setObjectName(QString::fromUtf8("tbTime"));
        MainWindow->addToolBar(Qt::TopToolBarArea, tbTime);

        menuBar->addAction(menuSysMgm->menuAction());
        menuBar->addAction(menuCardTicketsMgm->menuAction());
        menuBar->addAction(menuAdvSetting->menuAction());
        menuBar->addAction(menuQueryReport->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuSysMgm->addAction(actShiftLogout);
        menuSysMgm->addAction(actPwdModification);
        menuSysMgm->addSeparator();
        menuSysMgm->addAction(actLicense);
        menuSysMgm->addAction(actRightMgm);
        menuSysMgm->addAction(actTariffSetting);
        menuSysMgm->addAction(actSysLog);
        menuSysMgm->addAction(actRemoteMgmt);
        menuSysMgm->addSeparator();
        menuSysMgm->addAction(actDBMaintenance);
        menuSysMgm->addAction(actConnectDb);
        menuSysMgm->addSeparator();
        menuSysMgm->addAction(actVideoService->menuAction());
        menuSysMgm->addAction(actPlateService->menuAction());
        menuSysMgm->addSeparator();
        menuSysMgm->addAction(actSysExit);
        menuSysMgm->addAction(actRestart);
        actVideoService->addAction(actStartVideo);
        actVideoService->addAction(actStopVideo);
        actPlateService->addAction(actStartPlate);
        actPlateService->addAction(actStopPlate);
        menuCardTicketsMgm->addAction(actMonthlyCard);
        menuCardTicketsMgm->addSeparator();
        menuCardTicketsMgm->addAction(actValueCard);
        menuCardTicketsMgm->addSeparator();
        menuCardTicketsMgm->addAction(actTimeCard);
        menuCardTicketsMgm->addSeparator();
        menuCardTicketsMgm->addAction(actPublishLEDInfo);
        menuAdvSetting->addAction(actDeviceConfig);
        menuAdvSetting->addAction(actSysSetting);
        menuAdvSetting->addSeparator();
        menuAdvSetting->addAction(actSyncTime);
        menuAdvSetting->addSeparator();
        menuAdvSetting->addAction(actBatchSetCardAccess);
        menuAdvSetting->addAction(actTollDiscountTypeSet);
        menuAdvSetting->addAction(actBlacklist);
        menuAdvSetting->addSeparator();
        menuAdvSetting->addAction(actSerialPort);
        menuAdvSetting->addAction(actPlateRecognizationSet);
        menuQueryReport->addAction(actAccess2Records);
        menuQueryReport->addAction(actReewalRecords);
        menuQueryReport->addSeparator();
        menuQueryReport->addAction(actDiscountSummaryReport);
        menuQueryReport->addAction(actPrintDaylyReport);
        menuQueryReport->addAction(actPrintMonthlyReport);
        menuQueryReport->addAction(actPrintYearlyReport);
        menuQueryReport->addAction(actHandheldICProcess);
        menuQueryReport->addSeparator();
        menuQueryReport->addAction(actStay);
        menuHelp->addAction(actDocment);
        menuHelp->addSeparator();
        menuHelp->addAction(actAbout);
        mainTB->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\201\234\350\275\246\345\234\272\347\256\241\347\220\206\347\263\273\347\273\237(PMS)", 0, QApplication::UnicodeUTF8));
        actDeviceConfig->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        actSysSetting->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        actBatchSetCardAccess->setText(QApplication::translate("MainWindow", "\346\211\271\351\207\217\350\256\276\347\275\256\345\215\241\347\211\207\350\277\233\345\207\272\346\235\203", 0, QApplication::UnicodeUTF8));
        actTollDiscountTypeSet->setText(QApplication::translate("MainWindow", "\346\224\266\350\264\271\346\212\230\346\211\243\347\247\215\347\261\273\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        actShiftLogout->setText(QApplication::translate("MainWindow", "\344\272\244\346\216\245\347\217\255\346\263\250\351\224\200", 0, QApplication::UnicodeUTF8));
        actRightMgm->setText(QApplication::translate("MainWindow", "\346\235\203\351\231\220\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        actTariffSetting->setText(QApplication::translate("MainWindow", "\350\264\271\347\216\207\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        actDBMaintenance->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\347\273\264\346\212\244", 0, QApplication::UnicodeUTF8));
        actSysLog->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\346\227\245\345\277\227", 0, QApplication::UnicodeUTF8));
        actPwdModification->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        actSysExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\350\275\257\344\273\266", 0, QApplication::UnicodeUTF8));
        actMonthlyCard->setText(QApplication::translate("MainWindow", "\346\234\210\347\247\237\345\215\241\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        actValueCard->setText(QApplication::translate("MainWindow", "\345\202\250\345\200\274\345\215\241\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        actTimeCard->setText(QApplication::translate("MainWindow", "\350\256\241\346\227\266\345\215\241\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        actPublishLEDInfo->setText(QApplication::translate("MainWindow", "\345\217\221\345\270\203\346\230\276\347\244\272\345\261\217\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        actAccess2Records->setText(QApplication::translate("MainWindow", "\345\207\272\345\205\245\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        actReewalRecords->setText(QApplication::translate("MainWindow", "\347\273\255\350\264\271\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        actDiscountSummaryReport->setText(QApplication::translate("MainWindow", "\346\212\230\346\211\243\346\261\207\346\200\273\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
        actPrintDaylyReport->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
        actPrintMonthlyReport->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260\346\234\210\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
        actPrintYearlyReport->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260\345\271\264\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
        actHandheldICProcess->setText(QApplication::translate("MainWindow", "\346\211\213\346\214\201\346\234\272IC\345\215\241\345\244\204\347\220\206", 0, QApplication::UnicodeUTF8));
        actAbout->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
        actDocment->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251\346\226\207\346\241\243", 0, QApplication::UnicodeUTF8));
        actBlacklist->setText(QApplication::translate("MainWindow", "\351\273\221\345\220\215\345\215\225\345\275\225\345\205\245", 0, QApplication::UnicodeUTF8));
        actSerialPort->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        actSerialPort->setIconText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actSerialPort->setToolTip(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256 \351\205\215\347\275\256\344\270\216\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actPlateRecognizationSet->setText(QApplication::translate("MainWindow", "\350\275\246\347\211\214\350\257\206\345\210\253\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        actConnectDb->setText(QApplication::translate("MainWindow", "\350\277\236\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        actStartVideoOne->setText(QApplication::translate("MainWindow", "\347\254\254\344\270\200\350\267\257\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
        actStartVideoTwo->setText(QApplication::translate("MainWindow", "\347\254\254\344\272\214\350\267\257\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
        actStopVideoOne->setText(QApplication::translate("MainWindow", "\347\254\254\344\270\200\350\267\257\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
        actStopVideoTwo->setText(QApplication::translate("MainWindow", "\347\254\254\344\272\214\350\267\257\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
        actStartPlateOne->setText(QApplication::translate("MainWindow", "\347\254\254\344\270\200\350\267\257\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        actStartPlateTwo->setText(QApplication::translate("MainWindow", "\347\254\254\344\272\214\350\267\257\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        actStopPlateOne->setText(QApplication::translate("MainWindow", "\347\254\254\344\270\200\350\267\257\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        actStopPlateTwo->setText(QApplication::translate("MainWindow", "\347\254\254\344\272\214\350\267\257\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        actStartVideo->setText(QApplication::translate("MainWindow", " \345\274\200\345\220\257\350\247\206\351\242\221\346\234\215\345\212\241", 0, QApplication::UnicodeUTF8));
        actStopVideo->setText(QApplication::translate("MainWindow", " \345\201\234\346\255\242\350\247\206\351\242\221\346\234\215\345\212\241", 0, QApplication::UnicodeUTF8));
        actStartPlate->setText(QApplication::translate("MainWindow", " \345\220\257\345\212\250\350\275\246\347\211\214\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        actStopPlate->setText(QApplication::translate("MainWindow", " \345\201\234\346\255\242\350\275\246\347\211\214\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        actSyncTime->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\345\220\214\346\255\245", 0, QApplication::UnicodeUTF8));
        actRestart->setText(QApplication::translate("MainWindow", "\351\207\215\345\220\257\350\275\257\344\273\266", 0, QApplication::UnicodeUTF8));
        actLicense->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\257\274\345\205\245\346\216\210\346\235\203\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        actStay->setText(QApplication::translate("MainWindow", "\346\273\236\347\225\231\350\275\246\350\276\206", 0, QApplication::UnicodeUTF8));
        actRemoteMgmt->setText(QApplication::translate("MainWindow", "\350\277\234\347\250\213\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        menuSysMgm->setTitle(QApplication::translate("MainWindow", "\347\263\273\347\273\237\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        actVideoService->setTitle(QApplication::translate("MainWindow", "\350\247\206\351\242\221\346\234\215\345\212\241", 0, QApplication::UnicodeUTF8));
        actPlateService->setTitle(QApplication::translate("MainWindow", "\350\275\246\347\211\214\350\257\206\345\210\253\346\234\215\345\212\241", 0, QApplication::UnicodeUTF8));
        menuCardTicketsMgm->setTitle(QApplication::translate("MainWindow", "\345\215\241\347\245\250\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        menuAdvSetting->setTitle(QApplication::translate("MainWindow", "\351\253\230\347\272\247\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        menuQueryReport->setTitle(QApplication::translate("MainWindow", "\346\237\245\350\257\242/\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
        mainTB->setWindowTitle(QApplication::translate("MainWindow", "\344\270\273\346\223\215\344\275\234", 0, QApplication::UnicodeUTF8));
        tbTime->setWindowTitle(QApplication::translate("MainWindow", "\346\227\245\346\234\237\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
