/********************************************************************************
** Form generated from reading UI file 'syssettingdialog.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSSETTINGDIALOG_H
#define UI_SYSSETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSysSettingDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tabCommonSetting;
    QWidget *wgCommon;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QSpinBox *spMonthlyDay;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QRadioButton *rdxWorkMaster;
    QRadioButton *rdxWorkSlave;
    QGroupBox *groupBox_9;
    QCheckBox *chxLeaveTime;
    QCheckBox *chxLeaveMonth;
    QCheckBox *chxLeaveValue;
    QGroupBox *groupBox_6;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spValueSurplus;
    QLabel *label_2;
    QGroupBox *groupBox_5;
    QPushButton *btnCommonFormat;
    QGroupBox *groupBox_10;
    QCheckBox *chxForceOpenGate;
    QGroupBox *groupBox_4;
    QCheckBox *chxEntranceMonth;
    QCheckBox *chxEntranceValue;
    QCheckBox *chxEntranceTime;
    QGroupBox *groupBox_8;
    QCheckBox *chxMonthlyMode;
    QGroupBox *groupBox;
    QRadioButton *rdxCostSelfDef;
    QRadioButton *rdxCostDll;
    QGroupBox *groupBox_11;
    QCheckBox *chkConfirm;
    QWidget *tabUseTimelLimit;
    QGroupBox *gbTimeLimit;
    QLabel *label_3;
    QDateEdit *dateValid;
    QWidget *tabVideoModeSetting;
    QWidget *wgVideo;
    QGroupBox *gbVideo;
    QRadioButton *rdxVideoWay2;
    QRadioButton *rdxVideoWay3;
    QRadioButton *rdxVideoWay4;
    QListWidget *lsResolution;
    QWidget *tabVechileAutoSetting;
    QWidget *wgVichle;
    QCheckBox *chxStartAuto;
    QGroupBox *gbPrecision;
    QRadioButton *rdxPrecision0;
    QRadioButton *rdxPrecision1;
    QRadioButton *rdxPrecision3;
    QRadioButton *rdxPrecision2;
    QRadioButton *rdxPrecision6;
    QRadioButton *rdxPrecision7;
    QRadioButton *rdxPrecision5;
    QRadioButton *rdxPrecision4;
    QRadioButton *rdxPrecision8;
    QGroupBox *groupBox_18;
    QCheckBox *chxStartBlacklist;
    QWidget *tabSpecitialSetting;
    QWidget *wgSpecial;
    QGroupBox *groupBox_14;
    QCheckBox *chxSpaceMonth;
    QCheckBox *chxSpaceValue;
    QGroupBox *groupBox_15;
    QCheckBox *chxDataSync;
    QGroupBox *groupBox_16;
    QCheckBox *chxCCLeave;
    QCheckBox *chxCCEnter;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *spCCEnterAddr;
    QSpinBox *spCCLeaveAddr;
    QGroupBox *groupBox_17;
    QCheckBox *chxValueCharging;
    QPushButton *btnSpecialSave;
    QPushButton *btnCancel;
    QLabel *lblTilte;
    QLabel *lblClose;

    void setupUi(QDialog *CSysSettingDialog)
    {
        if (CSysSettingDialog->objectName().isEmpty())
            CSysSettingDialog->setObjectName(QString::fromUtf8("CSysSettingDialog"));
        CSysSettingDialog->resize(670, 540);
        CSysSettingDialog->setStyleSheet(QString::fromUtf8("background-image:url(D:/WinParkUI/debug/Image/NewIcon/SysSet.jpg);"));
        tabWidget = new QTabWidget(CSysSettingDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(40, 60, 580, 410));
        tabWidget->setStyleSheet(QString::fromUtf8("backgroud-image:url(D:/WinParkUI/debug/Image/NewIcon/SysMiddleSet.JPG);\n"
"background-image:url(D:/WinParkUI/debug/Image/NewIcon/SysMiddleSet.jpg);"));
        tabCommonSetting = new QWidget();
        tabCommonSetting->setObjectName(QString::fromUtf8("tabCommonSetting"));
        wgCommon = new QWidget(tabCommonSetting);
        wgCommon->setObjectName(QString::fromUtf8("wgCommon"));
        wgCommon->setGeometry(QRect(10, 10, 511, 361));
        wgCommon->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox_3 = new QGroupBox(wgCommon);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 110, 161, 61));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 146, 22));
        layoutWidget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout->addWidget(label_5);

        spMonthlyDay = new QSpinBox(layoutWidget);
        spMonthlyDay->setObjectName(QString::fromUtf8("spMonthlyDay"));
        spMonthlyDay->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        spMonthlyDay->setMaximum(999999);

        horizontalLayout->addWidget(spMonthlyDay);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout->addWidget(label_4);

        groupBox_2 = new QGroupBox(wgCommon);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(190, 10, 131, 81));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        rdxWorkMaster = new QRadioButton(groupBox_2);
        rdxWorkMaster->setObjectName(QString::fromUtf8("rdxWorkMaster"));
        rdxWorkMaster->setGeometry(QRect(10, 20, 89, 16));
        rdxWorkMaster->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        rdxWorkMaster->setChecked(true);
        rdxWorkSlave = new QRadioButton(groupBox_2);
        rdxWorkSlave->setObjectName(QString::fromUtf8("rdxWorkSlave"));
        rdxWorkSlave->setGeometry(QRect(10, 50, 89, 16));
        rdxWorkSlave->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox_9 = new QGroupBox(wgCommon);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(340, 110, 120, 131));
        groupBox_9->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxLeaveTime = new QCheckBox(groupBox_9);
        chxLeaveTime->setObjectName(QString::fromUtf8("chxLeaveTime"));
        chxLeaveTime->setGeometry(QRect(30, 100, 71, 16));
        chxLeaveTime->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxLeaveMonth = new QCheckBox(groupBox_9);
        chxLeaveMonth->setObjectName(QString::fromUtf8("chxLeaveMonth"));
        chxLeaveMonth->setGeometry(QRect(30, 30, 71, 16));
        chxLeaveMonth->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxLeaveValue = new QCheckBox(groupBox_9);
        chxLeaveValue->setObjectName(QString::fromUtf8("chxLeaveValue"));
        chxLeaveValue->setGeometry(QRect(30, 65, 71, 16));
        chxLeaveValue->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox_6 = new QGroupBox(wgCommon);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(630, 620, 120, 80));
        groupBox_6->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox_7 = new QGroupBox(wgCommon);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 180, 161, 61));
        groupBox_7->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget_2 = new QWidget(groupBox_7);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 146, 22));
        layoutWidget_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_2->addWidget(label);

        spValueSurplus = new QSpinBox(layoutWidget_2);
        spValueSurplus->setObjectName(QString::fromUtf8("spValueSurplus"));
        spValueSurplus->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        spValueSurplus->setMaximum(999999);

        horizontalLayout_2->addWidget(spValueSurplus);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_2->addWidget(label_2);

        groupBox_5 = new QGroupBox(wgCommon);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(340, 10, 141, 81));
        groupBox_5->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnCommonFormat = new QPushButton(groupBox_5);
        btnCommonFormat->setObjectName(QString::fromUtf8("btnCommonFormat"));
        btnCommonFormat->setGeometry(QRect(50, 50, 75, 23));
        btnCommonFormat->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox_10 = new QGroupBox(wgCommon);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(190, 260, 131, 71));
        groupBox_10->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxForceOpenGate = new QCheckBox(groupBox_10);
        chxForceOpenGate->setObjectName(QString::fromUtf8("chxForceOpenGate"));
        chxForceOpenGate->setGeometry(QRect(10, 30, 131, 16));
        chxForceOpenGate->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox_4 = new QGroupBox(wgCommon);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(190, 110, 120, 131));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxEntranceMonth = new QCheckBox(groupBox_4);
        chxEntranceMonth->setObjectName(QString::fromUtf8("chxEntranceMonth"));
        chxEntranceMonth->setGeometry(QRect(20, 30, 71, 16));
        chxEntranceMonth->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxEntranceValue = new QCheckBox(groupBox_4);
        chxEntranceValue->setObjectName(QString::fromUtf8("chxEntranceValue"));
        chxEntranceValue->setGeometry(QRect(20, 64, 71, 16));
        chxEntranceValue->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxEntranceTime = new QCheckBox(groupBox_4);
        chxEntranceTime->setObjectName(QString::fromUtf8("chxEntranceTime"));
        chxEntranceTime->setGeometry(QRect(20, 100, 71, 16));
        chxEntranceTime->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox_8 = new QGroupBox(wgCommon);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 260, 161, 71));
        groupBox_8->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxMonthlyMode = new QCheckBox(groupBox_8);
        chxMonthlyMode->setObjectName(QString::fromUtf8("chxMonthlyMode"));
        chxMonthlyMode->setGeometry(QRect(20, 30, 101, 16));
        chxMonthlyMode->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox = new QGroupBox(wgCommon);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 161, 81));
        groupBox->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        rdxCostSelfDef = new QRadioButton(groupBox);
        rdxCostSelfDef->setObjectName(QString::fromUtf8("rdxCostSelfDef"));
        rdxCostSelfDef->setGeometry(QRect(10, 20, 111, 16));
        rdxCostSelfDef->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        rdxCostSelfDef->setChecked(true);
        rdxCostDll = new QRadioButton(groupBox);
        rdxCostDll->setObjectName(QString::fromUtf8("rdxCostDll"));
        rdxCostDll->setGeometry(QRect(10, 50, 111, 16));
        rdxCostDll->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox_11 = new QGroupBox(wgCommon);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(340, 260, 120, 71));
        chkConfirm = new QCheckBox(groupBox_11);
        chkConfirm->setObjectName(QString::fromUtf8("chkConfirm"));
        chkConfirm->setGeometry(QRect(20, 30, 91, 16));
        tabWidget->addTab(tabCommonSetting, QString());
        tabUseTimelLimit = new QWidget();
        tabUseTimelLimit->setObjectName(QString::fromUtf8("tabUseTimelLimit"));
        gbTimeLimit = new QGroupBox(tabUseTimelLimit);
        gbTimeLimit->setObjectName(QString::fromUtf8("gbTimeLimit"));
        gbTimeLimit->setGeometry(QRect(10, 10, 511, 171));
        gbTimeLimit->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label_3 = new QLabel(gbTimeLimit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 30, 471, 91));
        label_3->setTextFormat(Qt::PlainText);
        label_3->setTextInteractionFlags(Qt::NoTextInteraction);
        dateValid = new QDateEdit(gbTimeLimit);
        dateValid->setObjectName(QString::fromUtf8("dateValid"));
        dateValid->setGeometry(QRect(360, 90, 110, 22));
        dateValid->setReadOnly(true);
        tabWidget->addTab(tabUseTimelLimit, QString());
        tabVideoModeSetting = new QWidget();
        tabVideoModeSetting->setObjectName(QString::fromUtf8("tabVideoModeSetting"));
        wgVideo = new QWidget(tabVideoModeSetting);
        wgVideo->setObjectName(QString::fromUtf8("wgVideo"));
        wgVideo->setGeometry(QRect(10, 10, 511, 201));
        wgVideo->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        gbVideo = new QGroupBox(wgVideo);
        gbVideo->setObjectName(QString::fromUtf8("gbVideo"));
        gbVideo->setGeometry(QRect(10, 10, 131, 161));
        gbVideo->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        rdxVideoWay2 = new QRadioButton(gbVideo);
        rdxVideoWay2->setObjectName(QString::fromUtf8("rdxVideoWay2"));
        rdxVideoWay2->setGeometry(QRect(30, 30, 89, 16));
        rdxVideoWay2->setChecked(true);
        rdxVideoWay3 = new QRadioButton(gbVideo);
        rdxVideoWay3->setObjectName(QString::fromUtf8("rdxVideoWay3"));
        rdxVideoWay3->setGeometry(QRect(30, 70, 89, 16));
        rdxVideoWay4 = new QRadioButton(gbVideo);
        rdxVideoWay4->setObjectName(QString::fromUtf8("rdxVideoWay4"));
        rdxVideoWay4->setGeometry(QRect(30, 110, 89, 16));
        lsResolution = new QListWidget(wgVideo);
        new QListWidgetItem(lsResolution);
        new QListWidgetItem(lsResolution);
        new QListWidgetItem(lsResolution);
        new QListWidgetItem(lsResolution);
        lsResolution->setObjectName(QString::fromUtf8("lsResolution"));
        lsResolution->setGeometry(QRect(180, 20, 201, 151));
        lsResolution->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lsResolution->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lsResolution->setSelectionBehavior(QAbstractItemView::SelectItems);
        lsResolution->setProperty("isWrapping", QVariant(false));
        lsResolution->setLayoutMode(QListView::SinglePass);
        lsResolution->setSpacing(3);
        lsResolution->setViewMode(QListView::ListMode);
        tabWidget->addTab(tabVideoModeSetting, QString());
        tabVechileAutoSetting = new QWidget();
        tabVechileAutoSetting->setObjectName(QString::fromUtf8("tabVechileAutoSetting"));
        wgVichle = new QWidget(tabVechileAutoSetting);
        wgVichle->setObjectName(QString::fromUtf8("wgVichle"));
        wgVichle->setGeometry(QRect(10, 10, 391, 351));
        wgVichle->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxStartAuto = new QCheckBox(wgVichle);
        chxStartAuto->setObjectName(QString::fromUtf8("chxStartAuto"));
        chxStartAuto->setGeometry(QRect(20, 10, 141, 16));
        chxStartAuto->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        gbPrecision = new QGroupBox(wgVichle);
        gbPrecision->setObjectName(QString::fromUtf8("gbPrecision"));
        gbPrecision->setGeometry(QRect(20, 40, 151, 291));
        gbPrecision->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        rdxPrecision0 = new QRadioButton(gbPrecision);
        rdxPrecision0->setObjectName(QString::fromUtf8("rdxPrecision0"));
        rdxPrecision0->setGeometry(QRect(20, 20, 95, 16));
        rdxPrecision0->setChecked(true);
        rdxPrecision1 = new QRadioButton(gbPrecision);
        rdxPrecision1->setObjectName(QString::fromUtf8("rdxPrecision1"));
        rdxPrecision1->setGeometry(QRect(20, 50, 95, 16));
        rdxPrecision3 = new QRadioButton(gbPrecision);
        rdxPrecision3->setObjectName(QString::fromUtf8("rdxPrecision3"));
        rdxPrecision3->setGeometry(QRect(20, 110, 95, 16));
        rdxPrecision2 = new QRadioButton(gbPrecision);
        rdxPrecision2->setObjectName(QString::fromUtf8("rdxPrecision2"));
        rdxPrecision2->setGeometry(QRect(20, 80, 95, 16));
        rdxPrecision6 = new QRadioButton(gbPrecision);
        rdxPrecision6->setObjectName(QString::fromUtf8("rdxPrecision6"));
        rdxPrecision6->setGeometry(QRect(20, 200, 95, 16));
        rdxPrecision7 = new QRadioButton(gbPrecision);
        rdxPrecision7->setObjectName(QString::fromUtf8("rdxPrecision7"));
        rdxPrecision7->setGeometry(QRect(20, 230, 95, 16));
        rdxPrecision5 = new QRadioButton(gbPrecision);
        rdxPrecision5->setObjectName(QString::fromUtf8("rdxPrecision5"));
        rdxPrecision5->setGeometry(QRect(20, 170, 95, 16));
        rdxPrecision4 = new QRadioButton(gbPrecision);
        rdxPrecision4->setObjectName(QString::fromUtf8("rdxPrecision4"));
        rdxPrecision4->setGeometry(QRect(20, 140, 95, 16));
        rdxPrecision8 = new QRadioButton(gbPrecision);
        rdxPrecision8->setObjectName(QString::fromUtf8("rdxPrecision8"));
        rdxPrecision8->setGeometry(QRect(20, 260, 95, 16));
        groupBox_18 = new QGroupBox(wgVichle);
        groupBox_18->setObjectName(QString::fromUtf8("groupBox_18"));
        groupBox_18->setGeometry(QRect(190, 40, 161, 91));
        groupBox_18->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxStartBlacklist = new QCheckBox(groupBox_18);
        chxStartBlacklist->setObjectName(QString::fromUtf8("chxStartBlacklist"));
        chxStartBlacklist->setGeometry(QRect(20, 40, 111, 16));
        tabWidget->addTab(tabVechileAutoSetting, QString());
        tabSpecitialSetting = new QWidget();
        tabSpecitialSetting->setObjectName(QString::fromUtf8("tabSpecitialSetting"));
        wgSpecial = new QWidget(tabSpecitialSetting);
        wgSpecial->setObjectName(QString::fromUtf8("wgSpecial"));
        wgSpecial->setGeometry(QRect(10, 0, 561, 231));
        wgSpecial->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox_14 = new QGroupBox(wgSpecial);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setGeometry(QRect(10, 10, 151, 80));
        groupBox_14->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxSpaceMonth = new QCheckBox(groupBox_14);
        chxSpaceMonth->setObjectName(QString::fromUtf8("chxSpaceMonth"));
        chxSpaceMonth->setGeometry(QRect(10, 20, 131, 16));
        chxSpaceValue = new QCheckBox(groupBox_14);
        chxSpaceValue->setObjectName(QString::fromUtf8("chxSpaceValue"));
        chxSpaceValue->setGeometry(QRect(10, 50, 131, 16));
        groupBox_15 = new QGroupBox(wgSpecial);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setGeometry(QRect(10, 120, 151, 80));
        groupBox_15->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxDataSync = new QCheckBox(groupBox_15);
        chxDataSync->setObjectName(QString::fromUtf8("chxDataSync"));
        chxDataSync->setGeometry(QRect(20, 30, 121, 16));
        groupBox_16 = new QGroupBox(wgSpecial);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        groupBox_16->setGeometry(QRect(180, 10, 371, 80));
        groupBox_16->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxCCLeave = new QCheckBox(groupBox_16);
        chxCCLeave->setObjectName(QString::fromUtf8("chxCCLeave"));
        chxCCLeave->setGeometry(QRect(10, 50, 151, 16));
        chxCCEnter = new QCheckBox(groupBox_16);
        chxCCEnter->setObjectName(QString::fromUtf8("chxCCEnter"));
        chxCCEnter->setGeometry(QRect(10, 20, 151, 16));
        label_6 = new QLabel(groupBox_16);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(170, 20, 131, 16));
        label_7 = new QLabel(groupBox_16);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 50, 131, 16));
        spCCEnterAddr = new QSpinBox(groupBox_16);
        spCCEnterAddr->setObjectName(QString::fromUtf8("spCCEnterAddr"));
        spCCEnterAddr->setGeometry(QRect(310, 20, 42, 22));
        spCCEnterAddr->setValue(1);
        spCCLeaveAddr = new QSpinBox(groupBox_16);
        spCCLeaveAddr->setObjectName(QString::fromUtf8("spCCLeaveAddr"));
        spCCLeaveAddr->setGeometry(QRect(310, 50, 42, 22));
        spCCLeaveAddr->setValue(1);
        groupBox_17 = new QGroupBox(wgSpecial);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        groupBox_17->setGeometry(QRect(180, 120, 191, 80));
        groupBox_17->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxValueCharging = new QCheckBox(groupBox_17);
        chxValueCharging->setObjectName(QString::fromUtf8("chxValueCharging"));
        chxValueCharging->setGeometry(QRect(10, 30, 171, 16));
        tabWidget->addTab(tabSpecitialSetting, QString());
        btnSpecialSave = new QPushButton(CSysSettingDialog);
        btnSpecialSave->setObjectName(QString::fromUtf8("btnSpecialSave"));
        btnSpecialSave->setGeometry(QRect(446, 480, 75, 23));
        btnSpecialSave->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnCancel = new QPushButton(CSysSettingDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(536, 480, 75, 23));
        btnCancel->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblTilte = new QLabel(CSysSettingDialog);
        lblTilte->setObjectName(QString::fromUtf8("lblTilte"));
        lblTilte->setGeometry(QRect(30, 5, 141, 21));
        lblTilte->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"color: rgb(85, 0, 0);"));
        lblClose = new QLabel(CSysSettingDialog);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(630, 6, 30, 15));

        retranslateUi(CSysSettingDialog);

        tabWidget->setCurrentIndex(0);
        lsResolution->setCurrentRow(0);


        QMetaObject::connectSlotsByName(CSysSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *CSysSettingDialog)
    {
        CSysSettingDialog->setWindowTitle(QApplication::translate("CSysSettingDialog", "\347\263\273\347\273\237\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("CSysSettingDialog", "\346\234\210\347\247\237\345\215\241\346\227\266\351\227\264\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CSysSettingDialog", "\345\211\251\344\275\231", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CSysSettingDialog", "\345\244\251\346\227\266\346\217\220\351\206\222", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("CSysSettingDialog", "\345\267\245\344\275\234\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        rdxWorkMaster->setText(QApplication::translate("CSysSettingDialog", "\344\270\273\346\234\272\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        rdxWorkSlave->setText(QApplication::translate("CSysSettingDialog", "\344\273\216\346\234\272\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("CSysSettingDialog", "\347\246\273\345\274\200\346\227\266\351\234\200\350\246\201\347\241\256\350\256\244\346\224\276\350\241\214", 0, QApplication::UnicodeUTF8));
        chxLeaveTime->setText(QApplication::translate("CSysSettingDialog", "\350\256\241\346\227\266\345\215\241", 0, QApplication::UnicodeUTF8));
        chxLeaveMonth->setText(QApplication::translate("CSysSettingDialog", "\346\234\210\347\247\237\345\215\241", 0, QApplication::UnicodeUTF8));
        chxLeaveValue->setText(QApplication::translate("CSysSettingDialog", "\345\202\250\345\200\274\345\215\241", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("CSysSettingDialog", "GroupBox", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("CSysSettingDialog", "\345\202\250\345\200\274\345\215\241\344\275\231\351\242\235\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CSysSettingDialog", "\345\211\251\344\275\231", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CSysSettingDialog", "\345\205\203\346\227\266\346\217\220\351\206\222", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("CSysSettingDialog", "\346\240\274\345\274\217\345\214\226\350\204\261\346\234\272\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        btnCommonFormat->setText(QApplication::translate("CSysSettingDialog", "\345\274\200\345\247\213\346\240\274\345\274\217\345\214\226", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("CSysSettingDialog", "\345\274\272\350\241\214\345\274\200\351\227\270", 0, QApplication::UnicodeUTF8));
        chxForceOpenGate->setText(QApplication::translate("CSysSettingDialog", "\347\246\201\346\255\242\351\274\240\346\240\207\347\202\271\345\207\273\345\274\200\351\227\270", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("CSysSettingDialog", "\350\277\233\345\205\245\346\227\266\351\234\200\350\246\201\347\241\256\350\256\244\346\224\276\350\241\214", 0, QApplication::UnicodeUTF8));
        chxEntranceMonth->setText(QApplication::translate("CSysSettingDialog", "\346\234\210\347\247\237\345\215\241", 0, QApplication::UnicodeUTF8));
        chxEntranceValue->setText(QApplication::translate("CSysSettingDialog", "\345\202\250\345\200\274\345\215\241", 0, QApplication::UnicodeUTF8));
        chxEntranceTime->setText(QApplication::translate("CSysSettingDialog", "\350\256\241\346\227\266\345\215\241", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("CSysSettingDialog", "\346\234\210\347\247\237\345\215\241\345\267\245\344\275\234\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        chxMonthlyMode->setText(QApplication::translate("CSysSettingDialog", "\345\205\201\350\256\270\345\244\232\350\277\233\345\244\232\345\207\272", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CSysSettingDialog", "\350\264\271\347\224\250\350\256\241\347\256\227\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        rdxCostSelfDef->setText(QApplication::translate("CSysSettingDialog", "\344\275\277\347\224\250\350\207\252\345\256\232\344\271\211\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        rdxCostDll->setText(QApplication::translate("CSysSettingDialog", "\344\275\277\347\224\250\345\244\226\346\216\245DLL\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QApplication::translate("CSysSettingDialog", "\345\210\267\345\215\241\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        chkConfirm->setText(QApplication::translate("CSysSettingDialog", "\345\207\272\345\217\243\345\210\267\345\215\241\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabCommonSetting), QApplication::translate("CSysSettingDialog", "\345\270\270\347\224\250\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        gbTimeLimit->setTitle(QApplication::translate("CSysSettingDialog", "\350\275\257\344\273\266\346\234\211\346\225\210\346\234\237\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CSysSettingDialog", "\345\275\223\350\275\257\344\273\266\350\266\205\350\277\207\346\255\244\345\244\204\346\234\211\346\225\210\350\256\276\347\275\256\347\232\204\346\227\266\351\227\264\345\220\216\345\260\206\344\270\215\350\203\275\346\255\243\345\270\270\344\275\277\347\224\250\357\274\214\350\213\245\351\235\236\347\211\271\346\256\212\345\216\237\350\257\267\345\234\250\346\255\244\345\244\204\350\256\276\347\275\256\350\276\203\345\244\247\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabUseTimelLimit), QApplication::translate("CSysSettingDialog", "\344\275\277\347\224\250\346\227\266\351\227\264\351\231\220\345\210\266", 0, QApplication::UnicodeUTF8));
        gbVideo->setTitle(QApplication::translate("CSysSettingDialog", "\350\247\206\351\242\221\346\225\260\347\233\256\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        rdxVideoWay2->setText(QApplication::translate("CSysSettingDialog", "2\350\267\257", 0, QApplication::UnicodeUTF8));
        rdxVideoWay3->setText(QApplication::translate("CSysSettingDialog", "3\350\267\257", 0, QApplication::UnicodeUTF8));
        rdxVideoWay4->setText(QApplication::translate("CSysSettingDialog", "4\350\267\257", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = lsResolution->isSortingEnabled();
        lsResolution->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lsResolution->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("CSysSettingDialog", "RGB24  320 X 240", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = lsResolution->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("CSysSettingDialog", "RGB24  640 X 480", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = lsResolution->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("CSysSettingDialog", "RGB24  720 X 288", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = lsResolution->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("CSysSettingDialog", "RGB24  720 X 576", 0, QApplication::UnicodeUTF8));
        lsResolution->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tabVideoModeSetting), QApplication::translate("CSysSettingDialog", "\350\247\206\351\242\221\346\250\241\345\274\217\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        chxStartAuto->setText(QApplication::translate("CSysSettingDialog", "\345\220\257\345\212\250\350\275\246\347\211\214\350\257\206\345\210\253\345\212\237\350\203\275", 0, QApplication::UnicodeUTF8));
        gbPrecision->setTitle(QApplication::translate("CSysSettingDialog", "\350\257\206\345\210\253\347\262\276\345\272\246\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        rdxPrecision0->setText(QApplication::translate("CSysSettingDialog", "\344\270\215\345\205\201\350\256\270\350\257\257\345\267\256", 0, QApplication::UnicodeUTF8));
        rdxPrecision1->setText(QApplication::translate("CSysSettingDialog", "\345\205\201\350\256\270\350\257\257\345\267\256\344\270\200\344\275\215", 0, QApplication::UnicodeUTF8));
        rdxPrecision3->setText(QApplication::translate("CSysSettingDialog", "\345\205\201\350\256\270\350\257\257\345\267\256\344\270\211\344\275\215", 0, QApplication::UnicodeUTF8));
        rdxPrecision2->setText(QApplication::translate("CSysSettingDialog", "\345\205\201\350\256\270\350\257\257\345\267\256\344\272\214\344\275\215", 0, QApplication::UnicodeUTF8));
        rdxPrecision6->setText(QApplication::translate("CSysSettingDialog", "\345\205\201\350\256\270\350\257\257\345\267\256\345\205\255\344\275\215", 0, QApplication::UnicodeUTF8));
        rdxPrecision7->setText(QApplication::translate("CSysSettingDialog", "\345\205\201\350\256\270\350\257\257\345\267\256\344\270\203\344\275\215", 0, QApplication::UnicodeUTF8));
        rdxPrecision5->setText(QApplication::translate("CSysSettingDialog", "\345\205\201\350\256\270\350\257\257\345\267\256\344\272\224\344\275\215", 0, QApplication::UnicodeUTF8));
        rdxPrecision4->setText(QApplication::translate("CSysSettingDialog", "\345\205\201\350\256\270\350\257\257\345\267\256\345\233\233\344\275\215", 0, QApplication::UnicodeUTF8));
        rdxPrecision8->setText(QApplication::translate("CSysSettingDialog", "\345\205\201\350\256\270\350\257\257\345\267\256\345\205\253\344\275\215", 0, QApplication::UnicodeUTF8));
        groupBox_18->setTitle(QApplication::translate("CSysSettingDialog", "\351\273\221\345\220\215\345\215\225\345\212\237\350\203\275", 0, QApplication::UnicodeUTF8));
        chxStartBlacklist->setText(QApplication::translate("CSysSettingDialog", "\345\220\257\347\224\250\351\273\221\345\220\215\345\215\225\346\243\200\346\237\245", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabVechileAutoSetting), QApplication::translate("CSysSettingDialog", "\350\275\246\347\211\214\350\207\252\345\212\250\350\257\206\345\210\253\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBox_14->setTitle(QApplication::translate("CSysSettingDialog", "\350\275\246\344\275\215\350\256\241\347\256\227", 0, QApplication::UnicodeUTF8));
        chxSpaceMonth->setText(QApplication::translate("CSysSettingDialog", "\346\234\210\347\247\237\345\215\241\344\270\215\350\256\241\345\205\245\350\275\246\344\275\215", 0, QApplication::UnicodeUTF8));
        chxSpaceValue->setText(QApplication::translate("CSysSettingDialog", "\345\202\250\345\200\274\345\215\241\344\270\215\350\256\241\345\205\245\350\275\246\344\275\215", 0, QApplication::UnicodeUTF8));
        groupBox_15->setTitle(QApplication::translate("CSysSettingDialog", "\346\225\260\346\215\256\345\220\214\346\255\245\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        chxDataSync->setText(QApplication::translate("CSysSettingDialog", "\344\270\215\345\220\214\346\255\245\350\204\261\346\234\272\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        groupBox_16->setTitle(QApplication::translate("CSysSettingDialog", "\344\270\255\345\277\203\346\216\247\345\210\266\345\231\250\345\210\267\345\215\241\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        chxCCLeave->setText(QApplication::translate("CSysSettingDialog", "\345\205\201\350\256\270\344\273\243\346\233\277\345\207\272\345\234\272\345\210\267\345\215\241\344\275\277\347\224\250", 0, QApplication::UnicodeUTF8));
        chxCCEnter->setText(QApplication::translate("CSysSettingDialog", "\345\205\201\350\256\270\344\273\243\346\233\277\345\205\245\345\234\272\345\210\267\345\215\241\344\275\277\347\224\250", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CSysSettingDialog", "\345\205\245\345\217\243\351\200\232\351\201\223\346\216\247\345\210\266\345\231\250\345\234\260\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CSysSettingDialog", "\345\207\272\345\217\243\351\200\232\351\201\223\346\216\247\345\210\266\345\231\250\345\234\260\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox_17->setTitle(QApplication::translate("CSysSettingDialog", "\345\202\250\345\200\274\345\215\241\350\256\241\350\264\271", 0, QApplication::UnicodeUTF8));
        chxValueCharging->setText(QApplication::translate("CSysSettingDialog", "\345\202\250\345\200\274\345\215\24124\345\260\217\346\227\266\345\206\205\344\270\215\351\207\215\345\244\215\344\275\277\347\224\250", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabSpecitialSetting), QApplication::translate("CSysSettingDialog", "\347\211\271\346\256\212\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        btnSpecialSave->setText(QApplication::translate("CSysSettingDialog", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CSysSettingDialog", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        lblTilte->setText(QString());
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CSysSettingDialog: public Ui_CSysSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSSETTINGDIALOG_H
