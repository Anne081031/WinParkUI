/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Jun 1 10:30:58 2012
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
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtDbIp;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *edtHostIp;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *spTime;
    QLabel *label_6;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QCheckBox *chkServer;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QCheckBox *chkVideo;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QCheckBox *chkPlate;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QCheckBox *chkCarPic;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QSpinBox *sp2;
    QLineEdit *edt2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QSpinBox *sp3;
    QLineEdit *edt3;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QSpinBox *sp4;
    QLineEdit *edt4;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpinBox *sp1;
    QLineEdit *edt1;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QLineEdit *edtMsSqlIp;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QLineEdit *edtReceiverIp;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_18;
    QLineEdit *edtFtpIP;
    QCheckBox *chkAlert;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QLineEdit *edtAgentlIp;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_17;
    QCheckBox *chkToInternet;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_20;
    QComboBox *cbxCapture2;
    QWidget *layoutWidget_11;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_21;
    QComboBox *cbxCapture3;
    QWidget *layoutWidget_12;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_22;
    QComboBox *cbxCapture4;
    QWidget *layoutWidget_13;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_23;
    QComboBox *cbxCapture1;
    QGroupBox *groupBox_8;
    QCheckBox *chkOpenGate;
    QLineEdit *edtLedCan;
    QLabel *label_19;
    QCheckBox *chkCapture;
    QLabel *label_24;
    QLabel *label_25;
    QSpinBox *spRemoteTime;
    QLabel *label_29;
    QLineEdit *edtParkID;
    QCheckBox *chkBroadcastData;
    QGroupBox *groupBox_9;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QCheckBox *chkPlateReal1;
    QWidget *layoutWidget_14;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_26;
    QCheckBox *chkPlateReal2;
    QWidget *layoutWidget_15;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_27;
    QCheckBox *chkPlateReal3;
    QWidget *layoutWidget_16;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_28;
    QCheckBox *chkPlateReal4;
    QGroupBox *groupBox_10;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_26;
    QCheckBox *chkPublish;
    QLabel *label_30;
    QLineEdit *edtPublishIP;
    QLabel *label_31;
    QLineEdit *edtPublishPort;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_32;
    QLineEdit *edtPublishDevType;
    QLabel *label_33;
    QLineEdit *edtPublishDevID;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(554, 728);
        MainWindow->setMinimumSize(QSize(293, 347));
        MainWindow->setMaximumSize(QSize(554, 16777215));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 231, 80));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 211, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        edtDbIp = new QLineEdit(layoutWidget);
        edtDbIp->setObjectName(QString::fromUtf8("edtDbIp"));

        horizontalLayout->addWidget(edtDbIp);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 50, 213, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        edtHostIp = new QLineEdit(layoutWidget1);
        edtHostIp->setObjectName(QString::fromUtf8("edtHostIp"));

        horizontalLayout_2->addWidget(edtHostIp);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 320, 231, 75));
        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 43, 164, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        spTime = new QSpinBox(layoutWidget2);
        spTime->setObjectName(QString::fromUtf8("spTime"));
        spTime->setMinimum(1);
        spTime->setValue(1);

        horizontalLayout_5->addWidget(spTime);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        layoutWidget3 = new QWidget(groupBox_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(11, 20, 161, 16));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        chkServer = new QCheckBox(layoutWidget3);
        chkServer->setObjectName(QString::fromUtf8("chkServer"));

        horizontalLayout_6->addWidget(chkServer);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 110, 231, 91));
        layoutWidget4 = new QWidget(groupBox_3);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 20, 153, 15));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        chkVideo = new QCheckBox(layoutWidget4);
        chkVideo->setObjectName(QString::fromUtf8("chkVideo"));

        horizontalLayout_3->addWidget(chkVideo);

        layoutWidget5 = new QWidget(groupBox_3);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 44, 153, 15));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        chkPlate = new QCheckBox(layoutWidget5);
        chkPlate->setObjectName(QString::fromUtf8("chkPlate"));

        horizontalLayout_4->addWidget(chkPlate);

        layoutWidget6 = new QWidget(groupBox_3);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 68, 161, 16));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget6);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_13->addWidget(label_13);

        chkCarPic = new QCheckBox(layoutWidget6);
        chkCarPic->setObjectName(QString::fromUtf8("chkCarPic"));

        horizontalLayout_13->addWidget(chkCarPic);

        layoutWidget7 = new QWidget(centralWidget);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(200, 660, 158, 25));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        btnOk = new QPushButton(layoutWidget7);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout_7->addWidget(btnOk);

        btnCancel = new QPushButton(layoutWidget7);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_7->addWidget(btnCancel);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(30, 400, 231, 141));
        layoutWidget_2 = new QWidget(groupBox_4);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 50, 201, 22));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        sp2 = new QSpinBox(layoutWidget_2);
        sp2->setObjectName(QString::fromUtf8("sp2"));
        sp2->setMinimum(0);
        sp2->setMaximum(63);

        horizontalLayout_9->addWidget(sp2);

        edt2 = new QLineEdit(layoutWidget_2);
        edt2->setObjectName(QString::fromUtf8("edt2"));

        horizontalLayout_9->addWidget(edt2);

        layoutWidget_3 = new QWidget(groupBox_4);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 80, 201, 22));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        sp3 = new QSpinBox(layoutWidget_3);
        sp3->setObjectName(QString::fromUtf8("sp3"));
        sp3->setMinimum(0);
        sp3->setMaximum(63);

        horizontalLayout_10->addWidget(sp3);

        edt3 = new QLineEdit(layoutWidget_3);
        edt3->setObjectName(QString::fromUtf8("edt3"));

        horizontalLayout_10->addWidget(edt3);

        layoutWidget_4 = new QWidget(groupBox_4);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 110, 201, 22));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_11->addWidget(label_11);

        sp4 = new QSpinBox(layoutWidget_4);
        sp4->setObjectName(QString::fromUtf8("sp4"));
        sp4->setMinimum(0);
        sp4->setMaximum(63);

        horizontalLayout_11->addWidget(sp4);

        edt4 = new QLineEdit(layoutWidget_4);
        edt4->setObjectName(QString::fromUtf8("edt4"));

        horizontalLayout_11->addWidget(edt4);

        layoutWidget8 = new QWidget(groupBox_4);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(20, 20, 201, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget8);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        sp1 = new QSpinBox(layoutWidget8);
        sp1->setObjectName(QString::fromUtf8("sp1"));
        sp1->setMinimum(0);
        sp1->setMaximum(63);

        horizontalLayout_8->addWidget(sp1);

        edt1 = new QLineEdit(layoutWidget8);
        edt1->setObjectName(QString::fromUtf8("edt1"));

        horizontalLayout_8->addWidget(edt1);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(290, 418, 231, 131));
        layoutWidget_5 = new QWidget(groupBox_5);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 20, 211, 22));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_14->addWidget(label_14);

        edtMsSqlIp = new QLineEdit(layoutWidget_5);
        edtMsSqlIp->setObjectName(QString::fromUtf8("edtMsSqlIp"));

        horizontalLayout_14->addWidget(edtMsSqlIp);

        layoutWidget_6 = new QWidget(groupBox_5);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 50, 213, 22));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_15->addWidget(label_15);

        edtReceiverIp = new QLineEdit(layoutWidget_6);
        edtReceiverIp->setObjectName(QString::fromUtf8("edtReceiverIp"));

        horizontalLayout_15->addWidget(edtReceiverIp);

        layoutWidget_9 = new QWidget(groupBox_5);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(10, 80, 211, 22));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget_9);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_18->addWidget(label_18);

        edtFtpIP = new QLineEdit(layoutWidget_9);
        edtFtpIP->setObjectName(QString::fromUtf8("edtFtpIP"));

        horizontalLayout_18->addWidget(edtFtpIP);

        chkAlert = new QCheckBox(groupBox_5);
        chkAlert->setObjectName(QString::fromUtf8("chkAlert"));
        chkAlert->setGeometry(QRect(10, 110, 201, 16));
        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(290, 328, 231, 80));
        layoutWidget_7 = new QWidget(groupBox_6);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 20, 211, 22));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_16->addWidget(label_16);

        edtAgentlIp = new QLineEdit(layoutWidget_7);
        edtAgentlIp->setObjectName(QString::fromUtf8("edtAgentlIp"));

        horizontalLayout_16->addWidget(edtAgentlIp);

        layoutWidget_8 = new QWidget(groupBox_6);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(10, 50, 213, 22));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget_8);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_17->addWidget(label_17);

        chkToInternet = new QCheckBox(layoutWidget_8);
        chkToInternet->setObjectName(QString::fromUtf8("chkToInternet"));

        horizontalLayout_17->addWidget(chkToInternet);

        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(290, 178, 231, 141));
        layoutWidget_10 = new QWidget(groupBox_7);
        layoutWidget_10->setObjectName(QString::fromUtf8("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(20, 50, 201, 22));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget_10);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_19->addWidget(label_20);

        cbxCapture2 = new QComboBox(layoutWidget_10);
        cbxCapture2->setObjectName(QString::fromUtf8("cbxCapture2"));

        horizontalLayout_19->addWidget(cbxCapture2);

        layoutWidget_11 = new QWidget(groupBox_7);
        layoutWidget_11->setObjectName(QString::fromUtf8("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(20, 80, 201, 22));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget_11);
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget_11);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_20->addWidget(label_21);

        cbxCapture3 = new QComboBox(layoutWidget_11);
        cbxCapture3->setObjectName(QString::fromUtf8("cbxCapture3"));

        horizontalLayout_20->addWidget(cbxCapture3);

        layoutWidget_12 = new QWidget(groupBox_7);
        layoutWidget_12->setObjectName(QString::fromUtf8("layoutWidget_12"));
        layoutWidget_12->setGeometry(QRect(20, 110, 201, 22));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget_12);
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget_12);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_21->addWidget(label_22);

        cbxCapture4 = new QComboBox(layoutWidget_12);
        cbxCapture4->setObjectName(QString::fromUtf8("cbxCapture4"));

        horizontalLayout_21->addWidget(cbxCapture4);

        layoutWidget_13 = new QWidget(groupBox_7);
        layoutWidget_13->setObjectName(QString::fromUtf8("layoutWidget_13"));
        layoutWidget_13->setGeometry(QRect(20, 20, 201, 22));
        horizontalLayout_22 = new QHBoxLayout(layoutWidget_13);
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget_13);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_22->addWidget(label_23);

        cbxCapture1 = new QComboBox(layoutWidget_13);
        cbxCapture1->setObjectName(QString::fromUtf8("cbxCapture1"));

        horizontalLayout_22->addWidget(cbxCapture1);

        groupBox_8 = new QGroupBox(centralWidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(290, 10, 231, 161));
        chkOpenGate = new QCheckBox(groupBox_8);
        chkOpenGate->setObjectName(QString::fromUtf8("chkOpenGate"));
        chkOpenGate->setGeometry(QRect(10, 43, 211, 16));
        edtLedCan = new QLineEdit(groupBox_8);
        edtLedCan->setObjectName(QString::fromUtf8("edtLedCan"));
        edtLedCan->setGeometry(QRect(140, 20, 81, 20));
        label_19 = new QLabel(groupBox_8);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 20, 121, 20));
        chkCapture = new QCheckBox(groupBox_8);
        chkCapture->setObjectName(QString::fromUtf8("chkCapture"));
        chkCapture->setGeometry(QRect(10, 60, 211, 16));
        label_24 = new QLabel(groupBox_8);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(150, 79, 24, 20));
        label_25 = new QLabel(groupBox_8);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(12, 79, 84, 20));
        spRemoteTime = new QSpinBox(groupBox_8);
        spRemoteTime->setObjectName(QString::fromUtf8("spRemoteTime"));
        spRemoteTime->setGeometry(QRect(102, 79, 42, 20));
        spRemoteTime->setMinimum(0);
        spRemoteTime->setMaximum(10000);
        spRemoteTime->setValue(0);
        label_29 = new QLabel(groupBox_8);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(13, 108, 54, 12));
        edtParkID = new QLineEdit(groupBox_8);
        edtParkID->setObjectName(QString::fromUtf8("edtParkID"));
        edtParkID->setGeometry(QRect(78, 105, 141, 20));
        chkBroadcastData = new QCheckBox(groupBox_8);
        chkBroadcastData->setObjectName(QString::fromUtf8("chkBroadcastData"));
        chkBroadcastData->setGeometry(QRect(20, 130, 141, 16));
        groupBox_9 = new QGroupBox(centralWidget);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(30, 210, 230, 101));
        layoutWidget9 = new QWidget(groupBox_9);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(10, 10, 153, 16));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget9);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        chkPlateReal1 = new QCheckBox(layoutWidget9);
        chkPlateReal1->setObjectName(QString::fromUtf8("chkPlateReal1"));

        horizontalLayout_12->addWidget(chkPlateReal1);

        layoutWidget_14 = new QWidget(groupBox_9);
        layoutWidget_14->setObjectName(QString::fromUtf8("layoutWidget_14"));
        layoutWidget_14->setGeometry(QRect(10, 34, 153, 16));
        horizontalLayout_23 = new QHBoxLayout(layoutWidget_14);
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(layoutWidget_14);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_23->addWidget(label_26);

        chkPlateReal2 = new QCheckBox(layoutWidget_14);
        chkPlateReal2->setObjectName(QString::fromUtf8("chkPlateReal2"));

        horizontalLayout_23->addWidget(chkPlateReal2);

        layoutWidget_15 = new QWidget(groupBox_9);
        layoutWidget_15->setObjectName(QString::fromUtf8("layoutWidget_15"));
        layoutWidget_15->setGeometry(QRect(10, 57, 153, 16));
        horizontalLayout_24 = new QHBoxLayout(layoutWidget_15);
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(layoutWidget_15);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_24->addWidget(label_27);

        chkPlateReal3 = new QCheckBox(layoutWidget_15);
        chkPlateReal3->setObjectName(QString::fromUtf8("chkPlateReal3"));

        horizontalLayout_24->addWidget(chkPlateReal3);

        layoutWidget_16 = new QWidget(groupBox_9);
        layoutWidget_16->setObjectName(QString::fromUtf8("layoutWidget_16"));
        layoutWidget_16->setGeometry(QRect(10, 80, 153, 16));
        horizontalLayout_25 = new QHBoxLayout(layoutWidget_16);
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(layoutWidget_16);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_25->addWidget(label_28);

        chkPlateReal4 = new QCheckBox(layoutWidget_16);
        chkPlateReal4->setObjectName(QString::fromUtf8("chkPlateReal4"));

        horizontalLayout_25->addWidget(chkPlateReal4);

        groupBox_10 = new QGroupBox(centralWidget);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(30, 560, 491, 91));
        widget = new QWidget(groupBox_10);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 461, 22));
        horizontalLayout_26 = new QHBoxLayout(widget);
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        chkPublish = new QCheckBox(widget);
        chkPublish->setObjectName(QString::fromUtf8("chkPublish"));

        horizontalLayout_26->addWidget(chkPublish);

        label_30 = new QLabel(widget);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout_26->addWidget(label_30);

        edtPublishIP = new QLineEdit(widget);
        edtPublishIP->setObjectName(QString::fromUtf8("edtPublishIP"));

        horizontalLayout_26->addWidget(edtPublishIP);

        label_31 = new QLabel(widget);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_26->addWidget(label_31);

        edtPublishPort = new QLineEdit(widget);
        edtPublishPort->setObjectName(QString::fromUtf8("edtPublishPort"));

        horizontalLayout_26->addWidget(edtPublishPort);

        widget1 = new QWidget(groupBox_10);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 50, 461, 22));
        horizontalLayout_27 = new QHBoxLayout(widget1);
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        horizontalLayout_27->setContentsMargins(0, 0, 0, 0);
        label_32 = new QLabel(widget1);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_27->addWidget(label_32);

        edtPublishDevType = new QLineEdit(widget1);
        edtPublishDevType->setObjectName(QString::fromUtf8("edtPublishDevType"));

        horizontalLayout_27->addWidget(edtPublishDevType);

        label_33 = new QLabel(widget1);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_27->addWidget(label_33);

        edtPublishDevID = new QLineEdit(widget1);
        edtPublishDevID->setObjectName(QString::fromUtf8("edtPublishDevID"));

        horizontalLayout_27->addWidget(edtPublishDevID);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 554, 19));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PMS\351\200\232\347\224\250\345\217\202\346\225\260\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "IP\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223IP\345\234\260\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\346\234\254\346\234\272IP\345\234\260\345\235\200\343\200\200\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\227\266\351\227\264\345\220\214\346\255\245\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\345\220\214\346\255\245\351\227\264\351\232\224\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\345\260\217\346\227\266", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\345\205\205\345\275\223\346\234\215\345\212\241\345\231\250\343\200\200\357\274\232", 0, QApplication::UnicodeUTF8));
        chkServer->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\350\247\206\351\242\221\343\200\201\350\275\246\347\211\214\350\257\206\345\210\253\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\351\273\230\350\256\244\345\274\200\345\220\257\350\247\206\351\242\221\343\200\200\343\200\200\357\274\232", 0, QApplication::UnicodeUTF8));
        chkVideo->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\351\273\230\350\256\244\345\274\200\345\220\257\350\275\246\347\211\214\350\257\206\345\210\253\357\274\232", 0, QApplication::UnicodeUTF8));
        chkPlate->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "\350\275\246\350\276\206\345\233\276\347\211\207\346\230\257\345\220\246\345\256\236\346\227\266\344\277\235\345\255\230\357\274\232", 0, QApplication::UnicodeUTF8));
        chkCarPic->setText(QString());
        btnOk->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256\351\200\232\351\201\223\346\216\247\345\210\266\345\231\250\345\234\260\345\235\200\344\270\216\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\347\254\254\344\272\214\347\252\227\345\217\243\357\274\232", 0, QApplication::UnicodeUTF8));
        edt2->setText(QApplication::translate("MainWindow", "\345\207\272\345\217\243\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\347\254\254\344\270\211\347\252\227\345\217\243\357\274\232", 0, QApplication::UnicodeUTF8));
        edt3->setText(QApplication::translate("MainWindow", "\345\205\245\345\217\243\346\212\223\345\233\276", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "\347\254\254\345\233\233\347\252\227\345\217\243\357\274\232", 0, QApplication::UnicodeUTF8));
        edt4->setText(QApplication::translate("MainWindow", "\345\207\272\345\217\243\346\212\223\345\233\276", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\347\254\254\344\270\200\347\252\227\345\217\243\357\274\232", 0, QApplication::UnicodeUTF8));
        edt1->setText(QApplication::translate("MainWindow", "\345\205\245\345\217\243\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\344\270\255\345\277\203\346\234\215\345\212\241", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223IP\345\234\260\345\235\200  \357\274\232", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\346\216\245\346\224\266IP\345\234\260\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "FTP   IP\345\234\260\345\235\200  \357\274\232", 0, QApplication::UnicodeUTF8));
        chkAlert->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\346\212\245\350\255\246\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\350\275\254\345\217\221\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "\344\273\243\347\220\206IP\345\234\260\345\235\200  \357\274\232", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\350\277\236\346\216\245\344\270\255\345\277\203\357\274\232", 0, QApplication::UnicodeUTF8));
        chkToInternet->setText(QString());
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\346\212\223\345\233\276\346\227\266\346\234\272", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "\347\254\254\344\272\214\347\252\227\345\217\243\346\212\223\345\233\276\346\227\266\346\234\272\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxCapture2->clear();
        cbxCapture2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\234\247\345\234\260\346\204\237", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\345\210\267\345\215\241", 0, QApplication::UnicodeUTF8)
        );
        label_21->setText(QApplication::translate("MainWindow", "\347\254\254\344\270\211\347\252\227\345\217\243\346\212\223\345\233\276\346\227\266\346\234\272\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxCapture3->clear();
        cbxCapture3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\234\247\345\234\260\346\204\237", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\345\210\267\345\215\241", 0, QApplication::UnicodeUTF8)
        );
        label_22->setText(QApplication::translate("MainWindow", "\347\254\254\345\233\233\347\252\227\345\217\243\346\212\223\345\233\276\346\227\266\346\234\272\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxCapture4->clear();
        cbxCapture4->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\234\247\345\234\260\346\204\237", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\345\210\267\345\215\241", 0, QApplication::UnicodeUTF8)
        );
        label_23->setText(QApplication::translate("MainWindow", "\347\254\254\344\270\200\347\252\227\345\217\243\346\212\223\345\233\276\346\227\266\346\234\272\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxCapture1->clear();
        cbxCapture1->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\234\247\345\234\260\346\204\237", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\345\210\267\345\215\241", 0, QApplication::UnicodeUTF8)
        );
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\345\205\266\344\273\226", 0, QApplication::UnicodeUTF8));
        chkOpenGate->setText(QApplication::translate("MainWindow", "\345\234\260\346\204\237\345\274\200\351\227\270", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        edtLedCan->setToolTip(QApplication::translate("MainWindow", "\347\254\254\344\270\200\344\270\252CAN\345\234\260\345\235\200\344\270\272\346\200\273\347\251\272\351\227\262LED\357\274\214\n"
"\350\275\246\344\275\215\345\244\232\344\270\252CAN\345\234\260\345\235\200\347\224\250\351\200\227\345\217\267\345\210\206\351\232\224\345\274\200\345\215\263\345\217\257\343\200\202", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_19->setText(QApplication::translate("MainWindow", "\347\213\254\347\253\213\346\230\276\347\244\272\345\261\217CAN\345\234\260\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        chkCapture->setText(QApplication::translate("MainWindow", "\345\234\260\346\204\237\346\212\223\345\233\276\346\214\211\351\230\237\346\226\271\345\274\217\345\210\227\345\217\226\345\233\276", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "\347\247\222", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindow", "\350\277\234\350\267\235\347\246\273\345\215\241\350\257\206\345\210\253\351\227\264\351\232\224\357\274\232", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("MainWindow", "\345\201\234\350\275\246\345\234\272ID", 0, QApplication::UnicodeUTF8));
        chkBroadcastData->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\345\271\277\346\222\255\350\277\233\345\207\272\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "\350\275\246\347\211\214\345\256\236\346\227\266\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "\347\254\254\344\270\200\350\267\257\357\274\232", 0, QApplication::UnicodeUTF8));
        chkPlateReal1->setText(QString());
        label_26->setText(QApplication::translate("MainWindow", "\347\254\254\344\272\214\350\267\257\357\274\232", 0, QApplication::UnicodeUTF8));
        chkPlateReal2->setText(QString());
        label_27->setText(QApplication::translate("MainWindow", "\347\254\254\344\270\211\350\267\257\357\274\232", 0, QApplication::UnicodeUTF8));
        chkPlateReal3->setText(QString());
        label_28->setText(QApplication::translate("MainWindow", "\347\254\254\345\233\233\350\267\257\357\274\232", 0, QApplication::UnicodeUTF8));
        chkPlateReal4->setText(QString());
        groupBox_10->setTitle(QApplication::translate("MainWindow", "\350\275\246\344\275\215\344\277\241\346\201\257\344\270\212\344\274\240\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        chkPublish->setText(QApplication::translate("MainWindow", "\345\220\257\347\224\250\344\270\212\344\274\240\345\212\237\350\203\275", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("MainWindow", "\346\266\210\346\201\257\344\270\255\345\277\203IP\357\274\232", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("MainWindow", "\346\266\210\346\201\257\344\270\255\345\277\203\347\253\257\345\217\243\357\274\232", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\347\261\273\345\236\213(0-255)\357\274\232", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207ID(10\344\275\215ASIIC\345\255\227\347\254\246)\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
