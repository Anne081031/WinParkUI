/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Jan 29 11:37:17 2013
**      by: Qt User Interface Compiler version 4.8.1
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
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnSet;
    QPushButton *btnTestFlash;
    QPushButton *btnSaveSet;
    QPushButton *tbnReadSet;
    QLabel *label_3;
    QLabel *lblMode;
    QTabWidget *tabWidgetDevice;
    QWidget *tab;
    QPlainTextEdit *edtState;
    QWidget *tab_2;
    QPlainTextEdit *edtSendCmd;
    QWidget *tab_3;
    QPlainTextEdit *edtReceiveCmd;
    QWidget *tab_4;
    QPlainTextEdit *edtDataStream;
    QTabWidget *tabWidget;
    QWidget *tab_5;
    QFrame *frame;
    QGroupBox *groupBox;
    QLabel *lblFreq;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QRadioButton *rb05;
    QRadioButton *rb06;
    QRadioButton *rb07;
    QRadioButton *rb08;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QSpinBox *spFreqTime;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QSpinBox *spFreqLight;
    QGroupBox *groupBox_2;
    QLabel *lblFlash;
    QCheckBox *chkBaseLight;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rb01;
    QRadioButton *rb02;
    QRadioButton *rb03;
    QRadioButton *rb04;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QSpinBox *spFlashTime;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QSpinBox *spFlashLight;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QRadioButton *rbSync01;
    QRadioButton *rbSync02;
    QRadioButton *rbSync03;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *chkLightSensitive;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QLineEdit *edtLocation;
    QCheckBox *chkQuery;
    QComboBox *cbMode;
    QPushButton *btnQuery;
    QCheckBox *chkDevType;
    QWidget *tab_6;
    QFrame *frame_2;
    QGroupBox *groupBox_4;
    QLabel *lblFreq_2;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QSpinBox *spFreqTimeNew;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_14;
    QSpinBox *spFreqLightNew;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_19;
    QComboBox *cbLightSensitiveFreq;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_21;
    QCheckBox *chkLightSensitiveFreq;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_17;
    QRadioButton *rbSync07;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_22;
    QRadioButton *rbSync08;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_23;
    QRadioButton *rbSync09;
    QGroupBox *groupBox_5;
    QLabel *lblFlash_2;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_15;
    QSpinBox *spFlashTimeNew;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_16;
    QSpinBox *spFlashLightNew;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_20;
    QComboBox *cbLightSensitiveFlash;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_27;
    QCheckBox *chkLightSensitiveFlash;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_26;
    QRadioButton *rbSync04;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_25;
    QRadioButton *rbSync05;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_24;
    QRadioButton *rbSync06;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_18;
    QLineEdit *edtLocationNew;
    QSpinBox *spLightSensitiveFlash;
    QSpinBox *spLightSensitiveFreq;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(551, 673);
        MainWindow->setMinimumSize(QSize(551, 673));
        MainWindow->setMaximumSize(QSize(551, 673));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 167, 167);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 171, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/LOGO.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 10, 151, 16));
        btnSet = new QPushButton(centralWidget);
        btnSet->setObjectName(QString::fromUtf8("btnSet"));
        btnSet->setGeometry(QRect(370, 40, 75, 23));
        btnSet->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(72, 72, 72);"));
        btnTestFlash = new QPushButton(centralWidget);
        btnTestFlash->setObjectName(QString::fromUtf8("btnTestFlash"));
        btnTestFlash->setGeometry(QRect(450, 40, 75, 23));
        btnTestFlash->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(72, 72, 72);"));
        btnSaveSet = new QPushButton(centralWidget);
        btnSaveSet->setObjectName(QString::fromUtf8("btnSaveSet"));
        btnSaveSet->setGeometry(QRect(370, 70, 75, 23));
        btnSaveSet->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(72, 72, 72);"));
        tbnReadSet = new QPushButton(centralWidget);
        tbnReadSet->setObjectName(QString::fromUtf8("tbnReadSet"));
        tbnReadSet->setGeometry(QRect(450, 70, 75, 23));
        tbnReadSet->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(72, 72, 72);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 20, 161, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);
        lblMode = new QLabel(centralWidget);
        lblMode->setObjectName(QString::fromUtf8("lblMode"));
        lblMode->setGeometry(QRect(200, 70, 161, 16));
        lblMode->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lblMode->setAlignment(Qt::AlignCenter);
        tabWidgetDevice = new QTabWidget(centralWidget);
        tabWidgetDevice->setObjectName(QString::fromUtf8("tabWidgetDevice"));
        tabWidgetDevice->setGeometry(QRect(9, 435, 531, 231));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        edtState = new QPlainTextEdit(tab);
        edtState->setObjectName(QString::fromUtf8("edtState"));
        edtState->setGeometry(QRect(0, 0, 531, 201));
        edtState->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        edtState->setReadOnly(true);
        tabWidgetDevice->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        edtSendCmd = new QPlainTextEdit(tab_2);
        edtSendCmd->setObjectName(QString::fromUtf8("edtSendCmd"));
        edtSendCmd->setGeometry(QRect(0, 0, 531, 201));
        edtSendCmd->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        edtSendCmd->setReadOnly(false);
        tabWidgetDevice->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        edtReceiveCmd = new QPlainTextEdit(tab_3);
        edtReceiveCmd->setObjectName(QString::fromUtf8("edtReceiveCmd"));
        edtReceiveCmd->setGeometry(QRect(0, 0, 531, 201));
        edtReceiveCmd->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        edtReceiveCmd->setReadOnly(false);
        tabWidgetDevice->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        edtDataStream = new QPlainTextEdit(tab_4);
        edtDataStream->setObjectName(QString::fromUtf8("edtDataStream"));
        edtDataStream->setGeometry(QRect(0, 0, 531, 201));
        edtDataStream->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        edtDataStream->setReadOnly(false);
        tabWidgetDevice->addTab(tab_4, QString());
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 100, 531, 331));
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        frame = new QFrame(tab_5);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 531, 311));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 118, 118);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 211, 221));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(90, 90, 90);"));
        lblFreq = new QLabel(groupBox);
        lblFreq->setObjectName(QString::fromUtf8("lblFreq"));
        lblFreq->setGeometry(QRect(20, 10, 61, 21));
        lblFreq->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 40, 117, 142));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rb05 = new QRadioButton(layoutWidget);
        rb05->setObjectName(QString::fromUtf8("rb05"));

        verticalLayout->addWidget(rb05);

        rb06 = new QRadioButton(layoutWidget);
        rb06->setObjectName(QString::fromUtf8("rb06"));

        verticalLayout->addWidget(rb06);

        rb07 = new QRadioButton(layoutWidget);
        rb07->setObjectName(QString::fromUtf8("rb07"));

        verticalLayout->addWidget(rb07);

        rb08 = new QRadioButton(layoutWidget);
        rb08->setObjectName(QString::fromUtf8("rb08"));

        verticalLayout->addWidget(rb08);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_7);

        spFreqTime = new QSpinBox(layoutWidget);
        spFreqTime->setObjectName(QString::fromUtf8("spFreqTime"));
        spFreqTime->setMaximum(32);

        horizontalLayout->addWidget(spFreqTime);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_8);

        spFreqLight = new QSpinBox(layoutWidget);
        spFreqLight->setObjectName(QString::fromUtf8("spFreqLight"));
        spFreqLight->setMaximum(32);

        horizontalLayout_2->addWidget(spFreqLight);


        verticalLayout_4->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(300, 10, 211, 221));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(90, 90, 90);"));
        lblFlash = new QLabel(groupBox_2);
        lblFlash->setObjectName(QString::fromUtf8("lblFlash"));
        lblFlash->setGeometry(QRect(20, 10, 71, 21));
        lblFlash->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        chkBaseLight = new QCheckBox(groupBox_2);
        chkBaseLight->setObjectName(QString::fromUtf8("chkBaseLight"));
        chkBaseLight->setGeometry(QRect(40, 190, 71, 16));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 40, 117, 142));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rb01 = new QRadioButton(layoutWidget1);
        rb01->setObjectName(QString::fromUtf8("rb01"));
        rb01->setChecked(true);

        verticalLayout_2->addWidget(rb01);

        rb02 = new QRadioButton(layoutWidget1);
        rb02->setObjectName(QString::fromUtf8("rb02"));

        verticalLayout_2->addWidget(rb02);

        rb03 = new QRadioButton(layoutWidget1);
        rb03->setObjectName(QString::fromUtf8("rb03"));

        verticalLayout_2->addWidget(rb03);

        rb04 = new QRadioButton(layoutWidget1);
        rb04->setObjectName(QString::fromUtf8("rb04"));

        verticalLayout_2->addWidget(rb04);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_9);

        spFlashTime = new QSpinBox(layoutWidget1);
        spFlashTime->setObjectName(QString::fromUtf8("spFlashTime"));
        spFlashTime->setMaximum(100);

        horizontalLayout_3->addWidget(spFlashTime);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_10);

        spFlashLight = new QSpinBox(layoutWidget1);
        spFlashLight->setObjectName(QString::fromUtf8("spFlashLight"));
        spFlashLight->setMaximum(100);

        horizontalLayout_4->addWidget(spFlashLight);


        verticalLayout_3->addLayout(horizontalLayout_4);

        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 240, 511, 61));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(90, 90, 90);"));
        layoutWidget2 = new QWidget(groupBox_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 491, 18));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_11);

        rbSync01 = new QRadioButton(layoutWidget2);
        rbSync01->setObjectName(QString::fromUtf8("rbSync01"));

        horizontalLayout_5->addWidget(rbSync01);

        rbSync02 = new QRadioButton(layoutWidget2);
        rbSync02->setObjectName(QString::fromUtf8("rbSync02"));

        horizontalLayout_5->addWidget(rbSync02);

        rbSync03 = new QRadioButton(layoutWidget2);
        rbSync03->setObjectName(QString::fromUtf8("rbSync03"));

        horizontalLayout_5->addWidget(rbSync03);

        layoutWidget3 = new QWidget(groupBox_3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 30, 491, 24));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        chkLightSensitive = new QCheckBox(layoutWidget3);
        chkLightSensitive->setObjectName(QString::fromUtf8("chkLightSensitive"));

        horizontalLayout_7->addWidget(chkLightSensitive);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_12 = new QLabel(layoutWidget3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(label_12);

        edtLocation = new QLineEdit(layoutWidget3);
        edtLocation->setObjectName(QString::fromUtf8("edtLocation"));
        edtLocation->setStyleSheet(QString::fromUtf8("background-color: rgb(56, 56, 56);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(edtLocation);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        chkQuery = new QCheckBox(frame);
        chkQuery->setObjectName(QString::fromUtf8("chkQuery"));
        chkQuery->setEnabled(false);
        chkQuery->setGeometry(QRect(240, 130, 31, 20));
        chkQuery->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        cbMode = new QComboBox(frame);
        cbMode->setObjectName(QString::fromUtf8("cbMode"));
        cbMode->setEnabled(true);
        cbMode->setGeometry(QRect(234, 36, 41, 20));
        cbMode->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btnQuery = new QPushButton(frame);
        btnQuery->setObjectName(QString::fromUtf8("btnQuery"));
        btnQuery->setEnabled(true);
        btnQuery->setGeometry(QRect(234, 62, 41, 23));
        btnQuery->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(72, 72, 72);"));
        chkDevType = new QCheckBox(tab_5);
        chkDevType->setObjectName(QString::fromUtf8("chkDevType"));
        chkDevType->setGeometry(QRect(230, 10, 41, 16));
        chkDevType->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_5, QString());
        chkDevType->raise();
        frame->raise();
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        frame_2 = new QFrame(tab_6);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 531, 311));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 118, 118);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        groupBox_4 = new QGroupBox(frame_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 10, 211, 221));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(90, 90, 90);"));
        lblFreq_2 = new QLabel(groupBox_4);
        lblFreq_2->setObjectName(QString::fromUtf8("lblFreq_2"));
        lblFreq_2->setGeometry(QRect(70, 10, 61, 21));
        lblFreq_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget4 = new QWidget(groupBox_4);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(50, 40, 127, 164));
        verticalLayout_5 = new QVBoxLayout(layoutWidget4);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_13 = new QLabel(layoutWidget4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(label_13);

        spFreqTimeNew = new QSpinBox(layoutWidget4);
        spFreqTimeNew->setObjectName(QString::fromUtf8("spFreqTimeNew"));
        spFreqTimeNew->setMinimum(1);
        spFreqTimeNew->setMaximum(100);

        horizontalLayout_8->addWidget(spFreqTimeNew);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_14 = new QLabel(layoutWidget4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(label_14);

        spFreqLightNew = new QSpinBox(layoutWidget4);
        spFreqLightNew->setObjectName(QString::fromUtf8("spFreqLightNew"));
        spFreqLightNew->setMinimum(1);
        spFreqLightNew->setMaximum(100);

        horizontalLayout_9->addWidget(spFreqLightNew);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_19 = new QLabel(layoutWidget4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(label_19);

        cbLightSensitiveFreq = new QComboBox(layoutWidget4);
        cbLightSensitiveFreq->setObjectName(QString::fromUtf8("cbLightSensitiveFreq"));

        horizontalLayout_10->addWidget(cbLightSensitiveFreq);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_21 = new QLabel(layoutWidget4);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(label_21);

        chkLightSensitiveFreq = new QCheckBox(layoutWidget4);
        chkLightSensitiveFreq->setObjectName(QString::fromUtf8("chkLightSensitiveFreq"));

        horizontalLayout_11->addWidget(chkLightSensitiveFreq);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_17 = new QLabel(layoutWidget4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_12->addWidget(label_17);

        rbSync07 = new QRadioButton(layoutWidget4);
        rbSync07->setObjectName(QString::fromUtf8("rbSync07"));

        horizontalLayout_12->addWidget(rbSync07);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_22 = new QLabel(layoutWidget4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_13->addWidget(label_22);

        rbSync08 = new QRadioButton(layoutWidget4);
        rbSync08->setObjectName(QString::fromUtf8("rbSync08"));

        horizontalLayout_13->addWidget(rbSync08);


        verticalLayout_5->addLayout(horizontalLayout_13);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_23 = new QLabel(layoutWidget4);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_15->addWidget(label_23);

        rbSync09 = new QRadioButton(layoutWidget4);
        rbSync09->setObjectName(QString::fromUtf8("rbSync09"));

        horizontalLayout_15->addWidget(rbSync09);


        verticalLayout_5->addLayout(horizontalLayout_15);

        groupBox_5 = new QGroupBox(frame_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(300, 10, 211, 221));
        groupBox_5->setStyleSheet(QString::fromUtf8("background-color: rgb(90, 90, 90);"));
        lblFlash_2 = new QLabel(groupBox_5);
        lblFlash_2->setObjectName(QString::fromUtf8("lblFlash_2"));
        lblFlash_2->setGeometry(QRect(70, 10, 71, 21));
        lblFlash_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget5 = new QWidget(groupBox_5);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(50, 40, 127, 164));
        verticalLayout_6 = new QVBoxLayout(layoutWidget5);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_15 = new QLabel(layoutWidget5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_20->addWidget(label_15);

        spFlashTimeNew = new QSpinBox(layoutWidget5);
        spFlashTimeNew->setObjectName(QString::fromUtf8("spFlashTimeNew"));
        spFlashTimeNew->setMinimum(1);
        spFlashTimeNew->setMaximum(100);

        horizontalLayout_20->addWidget(spFlashTimeNew);


        verticalLayout_6->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_16 = new QLabel(layoutWidget5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_21->addWidget(label_16);

        spFlashLightNew = new QSpinBox(layoutWidget5);
        spFlashLightNew->setObjectName(QString::fromUtf8("spFlashLightNew"));
        spFlashLightNew->setMinimum(1);
        spFlashLightNew->setMaximum(100);

        horizontalLayout_21->addWidget(spFlashLightNew);


        verticalLayout_6->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_20 = new QLabel(layoutWidget5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_22->addWidget(label_20);

        cbLightSensitiveFlash = new QComboBox(layoutWidget5);
        cbLightSensitiveFlash->setObjectName(QString::fromUtf8("cbLightSensitiveFlash"));

        horizontalLayout_22->addWidget(cbLightSensitiveFlash);


        verticalLayout_6->addLayout(horizontalLayout_22);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_27 = new QLabel(layoutWidget5);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_16->addWidget(label_27);

        chkLightSensitiveFlash = new QCheckBox(layoutWidget5);
        chkLightSensitiveFlash->setObjectName(QString::fromUtf8("chkLightSensitiveFlash"));

        horizontalLayout_16->addWidget(chkLightSensitiveFlash);


        verticalLayout_6->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_26 = new QLabel(layoutWidget5);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_17->addWidget(label_26);

        rbSync04 = new QRadioButton(layoutWidget5);
        rbSync04->setObjectName(QString::fromUtf8("rbSync04"));

        horizontalLayout_17->addWidget(rbSync04);


        verticalLayout_6->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_25 = new QLabel(layoutWidget5);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_18->addWidget(label_25);

        rbSync05 = new QRadioButton(layoutWidget5);
        rbSync05->setObjectName(QString::fromUtf8("rbSync05"));

        horizontalLayout_18->addWidget(rbSync05);


        verticalLayout_6->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_24 = new QLabel(layoutWidget5);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_19->addWidget(label_24);

        rbSync06 = new QRadioButton(layoutWidget5);
        rbSync06->setObjectName(QString::fromUtf8("rbSync06"));

        horizontalLayout_19->addWidget(rbSync06);


        verticalLayout_6->addLayout(horizontalLayout_19);

        layoutWidget->raise();
        lblFlash_2->raise();
        groupBox_6 = new QGroupBox(frame_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 246, 511, 51));
        groupBox_6->setStyleSheet(QString::fromUtf8("background-color: rgb(90, 90, 90);"));
        layoutWidget6 = new QWidget(groupBox_6);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 17, 489, 22));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget6);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_14->addWidget(label_18);

        edtLocationNew = new QLineEdit(layoutWidget6);
        edtLocationNew->setObjectName(QString::fromUtf8("edtLocationNew"));
        edtLocationNew->setStyleSheet(QString::fromUtf8("background-color: rgb(56, 56, 56);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_14->addWidget(edtLocationNew);

        tabWidget->addTab(tab_6, QString());
        spLightSensitiveFlash = new QSpinBox(centralWidget);
        spLightSensitiveFlash->setObjectName(QString::fromUtf8("spLightSensitiveFlash"));
        spLightSensitiveFlash->setGeometry(QRect(290, 80, 42, 20));
        spLightSensitiveFlash->setMinimum(1);
        spLightSensitiveFlash->setMaximum(100);
        spLightSensitiveFreq = new QSpinBox(centralWidget);
        spLightSensitiveFreq->setObjectName(QString::fromUtf8("spLightSensitiveFreq"));
        spLightSensitiveFreq->setGeometry(QRect(230, 80, 42, 20));
        spLightSensitiveFreq->setMinimum(1);
        spLightSensitiveFreq->setMaximum(100);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidgetDevice->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\231\272\350\203\275\350\241\245\345\205\211\347\201\257\347\263\273\347\273\237-\344\270\262\345\217\243:COM", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "http://www.foracctv.com/", 0, QApplication::UnicodeUTF8));
        btnSet->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        btnTestFlash->setText(QApplication::translate("MainWindow", "\350\257\225\351\227\252\345\205\263", 0, QApplication::UnicodeUTF8));
        btnSaveSet->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        tbnReadSet->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "LED\346\231\272\350\203\275\350\241\245\345\205\211\347\201\257", 0, QApplication::UnicodeUTF8));
        lblMode->setText(QString());
        edtState->setPlainText(QApplication::translate("MainWindow", "\347\205\247\345\272\246(\345\205\211\346\225\217\347\224\265\351\230\273) %1\n"
"\346\270\251\345\272\246 %2\346\221\204\346\260\217\345\272\246\n"
"\347\201\257\345\267\245\344\275\234\347\212\266\346\200\201 %3\n"
"\351\242\221\351\227\252\350\247\246\345\217\221\346\226\271\345\274\217 %4\n"
"\351\227\252\345\205\211\350\247\246\345\217\221\346\226\271\345\274\217 %5\n"
"\351\242\221\351\227\252\346\227\266\351\227\264\357\274\210\347\231\276\345\210\206\346\257\224\346\230\276\347\244\272\357\274\211\351\242\221\351\227\252\346\227\266\351\227\264 %6%\n"
"\351\227\252\345\205\211\346\227\266\351\227\264\357\274\210\347\231\276\345\210\206\346\257\224\346\230\276\347\244\272\357\274\211\351\227\252\345\205\211\346\227\266\351\227\264 %7%\n"
"\351\242\221\351\227\252\344\272\256\345\272\246\357\274\210\347\231\276\345\210\206\346\257\224\346\230\276\347\244\272\357\274\211\351\242\221\351\227\252\344\272\256\345\272\246 %8%\n"
"\351\227\252\345\205\211\344\272\256\345\272\246\357\274\210\347\231\276\345\210"
                        "\206\346\257\224\346\230\276\347\244\272\357\274\211\351\227\252\345\205\211\344\272\256\345\272\246 %9%\n"
"\351\242\221\351\227\252\351\242\221\347\216\207 %10Hz\n"
"LED\347\201\257\345\267\245\344\275\234\347\224\265\345\216\213 %11\344\274\217\n"
"\345\244\226\351\203\250\350\247\246\345\217\221\344\277\241\345\217\267\347\212\266\346\200\201 %12\n"
"", 0, QApplication::UnicodeUTF8));
        tabWidgetDevice->setTabText(tabWidgetDevice->indexOf(tab), QApplication::translate("MainWindow", "\346\237\245\350\257\242\347\232\204\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        edtSendCmd->setPlainText(QString());
        tabWidgetDevice->setTabText(tabWidgetDevice->indexOf(tab_2), QApplication::translate("MainWindow", "\345\217\221\351\200\201\347\232\204\345\221\275\344\273\244", 0, QApplication::UnicodeUTF8));
        edtReceiveCmd->setPlainText(QString());
        tabWidgetDevice->setTabText(tabWidgetDevice->indexOf(tab_3), QApplication::translate("MainWindow", "\346\216\245\346\224\266\347\232\204\345\221\275\344\273\244", 0, QApplication::UnicodeUTF8));
        edtDataStream->setPlainText(QString());
        tabWidgetDevice->setTabText(tabWidgetDevice->indexOf(tab_4), QApplication::translate("MainWindow", "\344\270\262\345\217\243\346\225\260\346\215\256\346\265\201", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        lblFreq->setText(QApplication::translate("MainWindow", "\351\242\221\351\227\252\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        rb05->setText(QApplication::translate("MainWindow", "\350\241\245\345\205\211\347\201\257\345\274\272\345\272\246-\351\253\230", 0, QApplication::UnicodeUTF8));
        rb06->setText(QApplication::translate("MainWindow", "\350\241\245\345\205\211\347\201\257\345\274\272\345\272\246-\350\276\203\351\253\230", 0, QApplication::UnicodeUTF8));
        rb07->setText(QApplication::translate("MainWindow", "\350\241\245\345\205\211\347\201\257\345\274\272\345\272\246-\344\270\255", 0, QApplication::UnicodeUTF8));
        rb08->setText(QApplication::translate("MainWindow", "\350\241\245\345\205\211\347\201\257\345\274\272\345\272\246-\344\275\216", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\351\225\277\345\272\246", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        lblFlash->setText(QApplication::translate("MainWindow", "\351\227\252\345\205\211\347\201\257\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        chkBaseLight->setText(QApplication::translate("MainWindow", "\345\237\272\347\241\200\344\272\256\345\272\246", 0, QApplication::UnicodeUTF8));
        rb01->setText(QApplication::translate("MainWindow", "\351\227\252\345\205\211\347\201\257\345\274\272\345\272\246-\351\253\230", 0, QApplication::UnicodeUTF8));
        rb02->setText(QApplication::translate("MainWindow", "\351\227\252\345\205\211\347\201\257\345\274\272\345\272\246-\350\276\203\351\253\230", 0, QApplication::UnicodeUTF8));
        rb03->setText(QApplication::translate("MainWindow", "\351\227\252\345\205\211\347\201\257\345\274\272\345\272\246-\344\270\255", 0, QApplication::UnicodeUTF8));
        rb04->setText(QApplication::translate("MainWindow", "\351\227\252\345\205\211\347\201\257\345\274\272\345\272\246-\344\275\216", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QString());
        label_11->setText(QApplication::translate("MainWindow", "\345\220\214\346\255\245\346\250\241\345\274\217\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        rbSync01->setText(QApplication::translate("MainWindow", "\344\270\213\351\231\215\346\262\277\350\247\246\345\217\221", 0, QApplication::UnicodeUTF8));
        rbSync02->setText(QApplication::translate("MainWindow", "\344\270\212\345\215\207\346\262\277\350\247\246\345\217\221", 0, QApplication::UnicodeUTF8));
        rbSync03->setText(QApplication::translate("MainWindow", "\350\267\237\351\232\217\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        chkLightSensitive->setText(QApplication::translate("MainWindow", "\345\205\211\346\225\217\347\246\201\347\224\250", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        edtLocation->setText(QString());
        chkQuery->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\346\237\245\350\257\242\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        cbMode->clear();
        cbMode->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\351\242\221\351\227\252\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\351\227\252\345\205\211\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8)
        );
        btnQuery->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        chkDevType->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\346\226\260\350\256\276\345\244\207", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\350\200\201\350\256\276\345\244\207", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QString());
        lblFreq_2->setText(QApplication::translate("MainWindow", "\351\242\221\351\227\252\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "\345\205\211\346\225\217\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        cbLightSensitiveFreq->clear();
        cbLightSensitiveFreq->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1.5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1.6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1.8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2.2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2.4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2.6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2.8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3.0", 0, QApplication::UnicodeUTF8)
        );
        label_21->setText(QApplication::translate("MainWindow", "\345\205\211\346\225\217\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        chkLightSensitiveFreq->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "\344\270\213\351\231\215\346\262\277\350\247\246\345\217\221", 0, QApplication::UnicodeUTF8));
        rbSync07->setText(QString());
        label_22->setText(QApplication::translate("MainWindow", "\344\270\212\345\215\207\346\262\277\350\247\246\345\217\221", 0, QApplication::UnicodeUTF8));
        rbSync08->setText(QString());
        label_23->setText(QApplication::translate("MainWindow", "\350\267\237\351\232\217\350\247\246\345\217\221  ", 0, QApplication::UnicodeUTF8));
        rbSync09->setText(QString());
        groupBox_5->setTitle(QString());
        lblFlash_2->setText(QApplication::translate("MainWindow", "\351\227\252\345\205\211\347\201\257\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "\345\205\211\346\225\217\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        cbLightSensitiveFlash->clear();
        cbLightSensitiveFlash->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1.5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1.6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1.8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2.0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2.2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2.4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2.6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2.8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3.0", 0, QApplication::UnicodeUTF8)
        );
        label_27->setText(QApplication::translate("MainWindow", "\345\205\211\346\225\217\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        chkLightSensitiveFlash->setText(QString());
        label_26->setText(QApplication::translate("MainWindow", "\344\270\213\351\231\215\346\262\277\350\247\246\345\217\221", 0, QApplication::UnicodeUTF8));
        rbSync04->setText(QString());
        label_25->setText(QApplication::translate("MainWindow", "\344\270\212\345\215\207\346\262\277\350\247\246\345\217\221", 0, QApplication::UnicodeUTF8));
        rbSync05->setText(QString());
        label_24->setText(QApplication::translate("MainWindow", "\350\267\237\351\232\217\350\247\246\345\217\221  ", 0, QApplication::UnicodeUTF8));
        rbSync06->setText(QString());
        groupBox_6->setTitle(QString());
        label_18->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        edtLocationNew->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "\346\226\260\350\256\276\345\244\207", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
