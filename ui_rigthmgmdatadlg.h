/********************************************************************************
** Form generated from reading UI file 'rigthmgmdatadlg.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIGTHMGMDATADLG_H
#define UI_RIGTHMGMDATADLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRigthMgmDataDlg
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *edtName;
    QLabel *label_32;
    QLineEdit *edtCardID;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_2;
    QComboBox *cbxSex;
    QLabel *label_10;
    QComboBox *cbxRType;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *edtAddr;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLineEdit *edtTel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAllOk;
    QPushButton *btnAllCancel;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QCheckBox *chxStartVideo;
    QLabel *label_14;
    QCheckBox *chxStartPlate;
    QLabel *label_15;
    QCheckBox *chxConnectDB;
    QLabel *label_16;
    QCheckBox *chxExit;
    QLabel *label_17;
    QCheckBox *chxMonthCard;
    QLabel *label_6;
    QLabel *label_18;
    QCheckBox *chxValueCard;
    QCheckBox *chxTimeCard;
    QLabel *label_19;
    QLabel *label_20;
    QCheckBox *chxLedInfo;
    QCheckBox *chxDeviceConfig;
    QLabel *label_8;
    QCheckBox *chxSystemSet;
    QLabel *label_9;
    QCheckBox *chxCardRight;
    QLabel *label_21;
    QLabel *label_22;
    QCheckBox *chxSerialPortSet;
    QLabel *label_23;
    QCheckBox *chxPlateSet;
    QLabel *label_24;
    QCheckBox *chxPassRecord;
    QLabel *label_25;
    QCheckBox *chxFeeRecord;
    QLabel *label_26;
    QCheckBox *chxDiscountReport;
    QLabel *label_27;
    QCheckBox *chxDailyReport;
    QLabel *label_28;
    QCheckBox *chxMonthlyReport;
    QLabel *label_29;
    QCheckBox *chxYearlyReport;
    QCheckBox *chxRMgm;
    QLabel *label_7;
    QCheckBox *chxRate;
    QCheckBox *chxData;
    QLabel *label_13;
    QLabel *label_3;
    QCheckBox *chxSysLog;
    QLabel *label_4;
    QLabel *label_5;
    QCheckBox *chxDiscountSet;
    QCheckBox *chxSyncTime;
    QLabel *label_30;
    QCheckBox *chkBlacklist;
    QLabel *label_31;

    void setupUi(QDialog *CRigthMgmDataDlg)
    {
        if (CRigthMgmDataDlg->objectName().isEmpty())
            CRigthMgmDataDlg->setObjectName(QString::fromUtf8("CRigthMgmDataDlg"));
        CRigthMgmDataDlg->resize(435, 439);
        groupBox = new QGroupBox(CRigthMgmDataDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(59, 160, 301, 4));
        layoutWidget = new QWidget(CRigthMgmDataDlg);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 27, 301, 121));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        edtName = new QLineEdit(layoutWidget);
        edtName->setObjectName(QString::fromUtf8("edtName"));

        horizontalLayout_2->addWidget(edtName);

        label_32 = new QLabel(layoutWidget);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_2->addWidget(label_32);

        edtCardID = new QLineEdit(layoutWidget);
        edtCardID->setObjectName(QString::fromUtf8("edtCardID"));

        horizontalLayout_2->addWidget(edtCardID);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_10->addWidget(label_2);

        cbxSex = new QComboBox(layoutWidget);
        cbxSex->setObjectName(QString::fromUtf8("cbxSex"));

        horizontalLayout_10->addWidget(cbxSex);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        cbxRType = new QComboBox(layoutWidget);
        cbxRType->setObjectName(QString::fromUtf8("cbxRType"));

        horizontalLayout_10->addWidget(cbxRType);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_11->addWidget(label_11);

        edtAddr = new QLineEdit(layoutWidget);
        edtAddr->setObjectName(QString::fromUtf8("edtAddr"));

        horizontalLayout_11->addWidget(edtAddr);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        edtTel = new QLineEdit(layoutWidget);
        edtTel->setObjectName(QString::fromUtf8("edtTel"));

        horizontalLayout_12->addWidget(edtTel);


        verticalLayout_2->addLayout(horizontalLayout_12);

        layoutWidget1 = new QWidget(CRigthMgmDataDlg);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 400, 320, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAllOk = new QPushButton(layoutWidget1);
        btnAllOk->setObjectName(QString::fromUtf8("btnAllOk"));

        horizontalLayout->addWidget(btnAllOk);

        btnAllCancel = new QPushButton(layoutWidget1);
        btnAllCancel->setObjectName(QString::fromUtf8("btnAllCancel"));

        horizontalLayout->addWidget(btnAllCancel);

        btnOk = new QPushButton(layoutWidget1);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout->addWidget(btnOk);

        btnCancel = new QPushButton(layoutWidget1);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);

        chxStartVideo = new QCheckBox(CRigthMgmDataDlg);
        chxStartVideo->setObjectName(QString::fromUtf8("chxStartVideo"));
        chxStartVideo->setGeometry(QRect(230, 199, 16, 16));
        label_14 = new QLabel(CRigthMgmDataDlg);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(164, 199, 60, 16));
        chxStartPlate = new QCheckBox(CRigthMgmDataDlg);
        chxStartPlate->setObjectName(QString::fromUtf8("chxStartPlate"));
        chxStartPlate->setGeometry(QRect(340, 199, 16, 16));
        label_15 = new QLabel(CRigthMgmDataDlg);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(274, 199, 60, 16));
        chxConnectDB = new QCheckBox(CRigthMgmDataDlg);
        chxConnectDB->setObjectName(QString::fromUtf8("chxConnectDB"));
        chxConnectDB->setGeometry(QRect(128, 226, 16, 16));
        label_16 = new QLabel(CRigthMgmDataDlg);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(62, 226, 60, 16));
        chxExit = new QCheckBox(CRigthMgmDataDlg);
        chxExit->setObjectName(QString::fromUtf8("chxExit"));
        chxExit->setGeometry(QRect(230, 226, 16, 16));
        label_17 = new QLabel(CRigthMgmDataDlg);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(164, 226, 60, 16));
        chxMonthCard = new QCheckBox(CRigthMgmDataDlg);
        chxMonthCard->setObjectName(QString::fromUtf8("chxMonthCard"));
        chxMonthCard->setGeometry(QRect(340, 226, 16, 16));
        label_6 = new QLabel(CRigthMgmDataDlg);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(274, 226, 48, 16));
        label_18 = new QLabel(CRigthMgmDataDlg);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(62, 253, 48, 16));
        chxValueCard = new QCheckBox(CRigthMgmDataDlg);
        chxValueCard->setObjectName(QString::fromUtf8("chxValueCard"));
        chxValueCard->setGeometry(QRect(128, 253, 16, 16));
        chxTimeCard = new QCheckBox(CRigthMgmDataDlg);
        chxTimeCard->setObjectName(QString::fromUtf8("chxTimeCard"));
        chxTimeCard->setGeometry(QRect(230, 253, 16, 16));
        label_19 = new QLabel(CRigthMgmDataDlg);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(164, 253, 48, 16));
        label_20 = new QLabel(CRigthMgmDataDlg);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(274, 253, 54, 16));
        chxLedInfo = new QCheckBox(CRigthMgmDataDlg);
        chxLedInfo->setObjectName(QString::fromUtf8("chxLedInfo"));
        chxLedInfo->setGeometry(QRect(340, 253, 16, 16));
        chxDeviceConfig = new QCheckBox(CRigthMgmDataDlg);
        chxDeviceConfig->setObjectName(QString::fromUtf8("chxDeviceConfig"));
        chxDeviceConfig->setGeometry(QRect(128, 280, 16, 16));
        label_8 = new QLabel(CRigthMgmDataDlg);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(62, 280, 60, 16));
        chxSystemSet = new QCheckBox(CRigthMgmDataDlg);
        chxSystemSet->setObjectName(QString::fromUtf8("chxSystemSet"));
        chxSystemSet->setGeometry(QRect(230, 280, 16, 16));
        label_9 = new QLabel(CRigthMgmDataDlg);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(164, 280, 60, 16));
        chxCardRight = new QCheckBox(CRigthMgmDataDlg);
        chxCardRight->setObjectName(QString::fromUtf8("chxCardRight"));
        chxCardRight->setGeometry(QRect(340, 280, 16, 16));
        label_21 = new QLabel(CRigthMgmDataDlg);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(274, 280, 48, 16));
        label_22 = new QLabel(CRigthMgmDataDlg);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(164, 306, 60, 16));
        chxSerialPortSet = new QCheckBox(CRigthMgmDataDlg);
        chxSerialPortSet->setObjectName(QString::fromUtf8("chxSerialPortSet"));
        chxSerialPortSet->setGeometry(QRect(230, 306, 16, 16));
        label_23 = new QLabel(CRigthMgmDataDlg);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(274, 306, 60, 16));
        chxPlateSet = new QCheckBox(CRigthMgmDataDlg);
        chxPlateSet->setObjectName(QString::fromUtf8("chxPlateSet"));
        chxPlateSet->setGeometry(QRect(340, 306, 16, 16));
        label_24 = new QLabel(CRigthMgmDataDlg);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(164, 330, 60, 16));
        chxPassRecord = new QCheckBox(CRigthMgmDataDlg);
        chxPassRecord->setObjectName(QString::fromUtf8("chxPassRecord"));
        chxPassRecord->setGeometry(QRect(230, 330, 16, 16));
        label_25 = new QLabel(CRigthMgmDataDlg);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(274, 330, 60, 16));
        chxFeeRecord = new QCheckBox(CRigthMgmDataDlg);
        chxFeeRecord->setObjectName(QString::fromUtf8("chxFeeRecord"));
        chxFeeRecord->setGeometry(QRect(340, 330, 16, 16));
        label_26 = new QLabel(CRigthMgmDataDlg);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(62, 350, 60, 16));
        chxDiscountReport = new QCheckBox(CRigthMgmDataDlg);
        chxDiscountReport->setObjectName(QString::fromUtf8("chxDiscountReport"));
        chxDiscountReport->setGeometry(QRect(128, 350, 16, 16));
        label_27 = new QLabel(CRigthMgmDataDlg);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(164, 350, 48, 16));
        chxDailyReport = new QCheckBox(CRigthMgmDataDlg);
        chxDailyReport->setObjectName(QString::fromUtf8("chxDailyReport"));
        chxDailyReport->setGeometry(QRect(230, 350, 16, 16));
        label_28 = new QLabel(CRigthMgmDataDlg);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(274, 350, 48, 16));
        chxMonthlyReport = new QCheckBox(CRigthMgmDataDlg);
        chxMonthlyReport->setObjectName(QString::fromUtf8("chxMonthlyReport"));
        chxMonthlyReport->setGeometry(QRect(340, 350, 16, 16));
        label_29 = new QLabel(CRigthMgmDataDlg);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(62, 370, 48, 16));
        chxYearlyReport = new QCheckBox(CRigthMgmDataDlg);
        chxYearlyReport->setObjectName(QString::fromUtf8("chxYearlyReport"));
        chxYearlyReport->setGeometry(QRect(128, 370, 16, 16));
        chxRMgm = new QCheckBox(CRigthMgmDataDlg);
        chxRMgm->setObjectName(QString::fromUtf8("chxRMgm"));
        chxRMgm->setGeometry(QRect(128, 172, 16, 16));
        label_7 = new QLabel(CRigthMgmDataDlg);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(274, 172, 60, 16));
        chxRate = new QCheckBox(CRigthMgmDataDlg);
        chxRate->setObjectName(QString::fromUtf8("chxRate"));
        chxRate->setGeometry(QRect(230, 172, 16, 16));
        chxData = new QCheckBox(CRigthMgmDataDlg);
        chxData->setObjectName(QString::fromUtf8("chxData"));
        chxData->setGeometry(QRect(340, 172, 16, 16));
        label_13 = new QLabel(CRigthMgmDataDlg);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(164, 172, 60, 16));
        label_3 = new QLabel(CRigthMgmDataDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(62, 172, 60, 16));
        chxSysLog = new QCheckBox(CRigthMgmDataDlg);
        chxSysLog->setObjectName(QString::fromUtf8("chxSysLog"));
        chxSysLog->setGeometry(QRect(128, 199, 16, 16));
        label_4 = new QLabel(CRigthMgmDataDlg);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(62, 199, 60, 16));
        label_5 = new QLabel(CRigthMgmDataDlg);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(62, 306, 60, 16));
        chxDiscountSet = new QCheckBox(CRigthMgmDataDlg);
        chxDiscountSet->setObjectName(QString::fromUtf8("chxDiscountSet"));
        chxDiscountSet->setGeometry(QRect(128, 306, 16, 16));
        chxSyncTime = new QCheckBox(CRigthMgmDataDlg);
        chxSyncTime->setObjectName(QString::fromUtf8("chxSyncTime"));
        chxSyncTime->setGeometry(QRect(128, 330, 16, 16));
        label_30 = new QLabel(CRigthMgmDataDlg);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(62, 330, 60, 16));
        chkBlacklist = new QCheckBox(CRigthMgmDataDlg);
        chkBlacklist->setObjectName(QString::fromUtf8("chkBlacklist"));
        chkBlacklist->setGeometry(QRect(230, 370, 16, 16));
        label_31 = new QLabel(CRigthMgmDataDlg);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(164, 370, 48, 16));

        retranslateUi(CRigthMgmDataDlg);

        QMetaObject::connectSlotsByName(CRigthMgmDataDlg);
    } // setupUi

    void retranslateUi(QDialog *CRigthMgmDataDlg)
    {
        CRigthMgmDataDlg->setWindowTitle(QApplication::translate("CRigthMgmDataDlg", "\347\224\250\346\210\267\346\235\203\351\231\220\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("CRigthMgmDataDlg", "\345\247\223\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("CRigthMgmDataDlg", "\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CRigthMgmDataDlg", "\346\200\247\345\210\253\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxSex->clear();
        cbxSex->insertItems(0, QStringList()
         << QApplication::translate("CRigthMgmDataDlg", "\347\224\267", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CRigthMgmDataDlg", "\345\245\263", 0, QApplication::UnicodeUTF8)
        );
        label_10->setText(QApplication::translate("CRigthMgmDataDlg", "\346\235\203\351\231\220\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxRType->clear();
        cbxRType->insertItems(0, QStringList()
         << QApplication::translate("CRigthMgmDataDlg", "\346\231\256\351\200\232\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CRigthMgmDataDlg", "\350\266\205\347\272\247\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8)
        );
        label_11->setText(QApplication::translate("CRigthMgmDataDlg", "\344\275\217\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CRigthMgmDataDlg", "\347\224\265\350\257\235\357\274\232", 0, QApplication::UnicodeUTF8));
        btnAllOk->setText(QApplication::translate("CRigthMgmDataDlg", "\345\205\250\351\200\211\344\270\255", 0, QApplication::UnicodeUTF8));
        btnAllCancel->setText(QApplication::translate("CRigthMgmDataDlg", "\345\205\250\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        btnOk->setText(QApplication::translate("CRigthMgmDataDlg", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CRigthMgmDataDlg", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        chxStartVideo->setText(QString());
        label_14->setText(QApplication::translate("CRigthMgmDataDlg", "\345\220\257\345\212\250\350\247\206\351\242\221\357\274\232", 0, QApplication::UnicodeUTF8));
        chxStartPlate->setText(QString());
        label_15->setText(QApplication::translate("CRigthMgmDataDlg", "\345\220\257\345\212\250\350\275\246\347\211\214\357\274\232", 0, QApplication::UnicodeUTF8));
        chxConnectDB->setText(QString());
        label_16->setText(QApplication::translate("CRigthMgmDataDlg", "\350\277\236\346\225\260\346\215\256\345\272\223\357\274\232", 0, QApplication::UnicodeUTF8));
        chxExit->setText(QString());
        label_17->setText(QApplication::translate("CRigthMgmDataDlg", "\351\200\200\345\207\272\350\275\257\344\273\266\357\274\232", 0, QApplication::UnicodeUTF8));
        chxMonthCard->setText(QString());
        label_6->setText(QApplication::translate("CRigthMgmDataDlg", "\346\234\210\347\247\237\345\215\241\357\274\232", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("CRigthMgmDataDlg", "\345\202\250\345\200\274\345\215\241\357\274\232", 0, QApplication::UnicodeUTF8));
        chxValueCard->setText(QString());
        chxTimeCard->setText(QString());
        label_19->setText(QApplication::translate("CRigthMgmDataDlg", "\350\256\241\346\227\266\345\215\241\357\274\232", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("CRigthMgmDataDlg", "LED\344\277\241\346\201\257\357\274\232", 0, QApplication::UnicodeUTF8));
        chxLedInfo->setText(QString());
        chxDeviceConfig->setText(QString());
        label_8->setText(QApplication::translate("CRigthMgmDataDlg", "\350\256\276\345\244\207\351\205\215\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8));
        chxSystemSet->setText(QString());
        label_9->setText(QApplication::translate("CRigthMgmDataDlg", "\347\263\273\347\273\237\350\256\276\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8));
        chxCardRight->setText(QString());
        label_21->setText(QApplication::translate("CRigthMgmDataDlg", "\345\215\241\346\235\203\351\231\220\357\274\232", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("CRigthMgmDataDlg", "\344\270\262\345\217\243\350\256\276\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8));
        chxSerialPortSet->setText(QString());
        label_23->setText(QApplication::translate("CRigthMgmDataDlg", "\350\275\246\347\211\214\350\256\276\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8));
        chxPlateSet->setText(QString());
        label_24->setText(QApplication::translate("CRigthMgmDataDlg", "\350\277\233\345\207\272\350\256\260\345\275\225\357\274\232", 0, QApplication::UnicodeUTF8));
        chxPassRecord->setText(QString());
        label_25->setText(QApplication::translate("CRigthMgmDataDlg", "\347\273\255\350\264\271\347\272\252\345\275\225\357\274\232", 0, QApplication::UnicodeUTF8));
        chxFeeRecord->setText(QString());
        label_26->setText(QApplication::translate("CRigthMgmDataDlg", "\346\212\230\346\211\243\346\212\245\350\241\250\357\274\232", 0, QApplication::UnicodeUTF8));
        chxDiscountReport->setText(QString());
        label_27->setText(QApplication::translate("CRigthMgmDataDlg", "\346\227\245\346\212\245\350\241\250\357\274\232", 0, QApplication::UnicodeUTF8));
        chxDailyReport->setText(QString());
        label_28->setText(QApplication::translate("CRigthMgmDataDlg", "\346\234\210\346\212\245\350\241\250\357\274\232", 0, QApplication::UnicodeUTF8));
        chxMonthlyReport->setText(QString());
        label_29->setText(QApplication::translate("CRigthMgmDataDlg", "\345\271\264\346\212\245\350\241\250\357\274\232", 0, QApplication::UnicodeUTF8));
        chxYearlyReport->setText(QString());
        chxRMgm->setText(QString());
        label_7->setText(QApplication::translate("CRigthMgmDataDlg", "\346\225\260\346\215\256\347\273\264\346\212\244\357\274\232", 0, QApplication::UnicodeUTF8));
        chxRate->setText(QString());
        chxData->setText(QString());
        label_13->setText(QApplication::translate("CRigthMgmDataDlg", "\350\264\271\347\216\207\350\256\276\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CRigthMgmDataDlg", "\346\235\203\351\231\220\347\256\241\347\220\206\357\274\232", 0, QApplication::UnicodeUTF8));
        chxSysLog->setText(QString());
        label_4->setText(QApplication::translate("CRigthMgmDataDlg", "\347\263\273\347\273\237\346\227\245\345\277\227\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CRigthMgmDataDlg", "\346\212\230\346\211\243\350\256\276\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8));
        chxDiscountSet->setText(QString());
        chxSyncTime->setText(QString());
        label_30->setText(QApplication::translate("CRigthMgmDataDlg", "\346\227\266\351\227\264\345\220\214\346\255\245\357\274\232", 0, QApplication::UnicodeUTF8));
        chkBlacklist->setText(QString());
        label_31->setText(QApplication::translate("CRigthMgmDataDlg", "\351\273\221\345\220\215\345\215\225\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CRigthMgmDataDlg: public Ui_CRigthMgmDataDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIGTHMGMDATADLG_H
