/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Nov 8 14:13:32 2012
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
    QCheckBox *chkDevType;
    QCheckBox *chkQuery;
    QComboBox *cbMode;
    QPushButton *btnQuery;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPlainTextEdit *edtState;
    QWidget *tab_2;
    QPlainTextEdit *edtSendCmd;
    QWidget *tab_3;
    QPlainTextEdit *edtReceiveCmd;
    QWidget *tab_4;
    QPlainTextEdit *edtDataStream;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(551, 653);
        MainWindow->setMinimumSize(QSize(551, 415));
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
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 104, 741, 391));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 118, 118);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 211, 221));
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
        groupBox_2->setGeometry(QRect(330, 10, 211, 221));
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
        groupBox_3->setGeometry(QRect(10, 240, 531, 61));
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

        chkDevType = new QCheckBox(frame);
        chkDevType->setObjectName(QString::fromUtf8("chkDevType"));
        chkDevType->setGeometry(QRect(234, 14, 83, 16));
        chkDevType->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        chkQuery = new QCheckBox(frame);
        chkQuery->setObjectName(QString::fromUtf8("chkQuery"));
        chkQuery->setEnabled(false);
        chkQuery->setGeometry(QRect(225, 130, 91, 20));
        chkQuery->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        cbMode = new QComboBox(frame);
        cbMode->setObjectName(QString::fromUtf8("cbMode"));
        cbMode->setEnabled(true);
        cbMode->setGeometry(QRect(234, 36, 74, 20));
        cbMode->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btnQuery = new QPushButton(frame);
        btnQuery->setObjectName(QString::fromUtf8("btnQuery"));
        btnQuery->setEnabled(true);
        btnQuery->setGeometry(QRect(234, 62, 75, 23));
        btnQuery->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(72, 72, 72);"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(9, 420, 531, 231));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        edtState = new QPlainTextEdit(tab);
        edtState->setObjectName(QString::fromUtf8("edtState"));
        edtState->setGeometry(QRect(0, 0, 531, 201));
        edtState->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        edtState->setReadOnly(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        edtSendCmd = new QPlainTextEdit(tab_2);
        edtSendCmd->setObjectName(QString::fromUtf8("edtSendCmd"));
        edtSendCmd->setGeometry(QRect(0, 0, 531, 201));
        edtSendCmd->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        edtSendCmd->setReadOnly(false);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        edtReceiveCmd = new QPlainTextEdit(tab_3);
        edtReceiveCmd->setObjectName(QString::fromUtf8("edtReceiveCmd"));
        edtReceiveCmd->setGeometry(QRect(0, 0, 531, 201));
        edtReceiveCmd->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        edtReceiveCmd->setReadOnly(false);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        edtDataStream = new QPlainTextEdit(tab_4);
        edtDataStream->setObjectName(QString::fromUtf8("edtDataStream"));
        edtDataStream->setGeometry(QRect(0, 0, 531, 201));
        edtDataStream->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        edtDataStream->setReadOnly(false);
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

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
        groupBox->setTitle(QString());
        lblFreq->setText(QApplication::translate("MainWindow", "\351\242\221\351\227\252\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        rb05->setText(QApplication::translate("MainWindow", "\350\241\245\345\205\211\347\201\257\345\274\272\345\272\246-\351\253\230", 0, QApplication::UnicodeUTF8));
        rb06->setText(QApplication::translate("MainWindow", "\350\241\245\345\205\211\347\201\257\345\274\272\345\272\246-\350\276\203\351\253\230", 0, QApplication::UnicodeUTF8));
        rb07->setText(QApplication::translate("MainWindow", "\350\241\245\345\205\211\347\201\257\345\274\272\345\272\246-\344\270\255", 0, QApplication::UnicodeUTF8));
        rb08->setText(QApplication::translate("MainWindow", "\350\241\245\345\205\211\347\201\257\345\274\272\345\272\246-\344\275\216", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\351\225\277\345\272\246", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246", 0, QApplication::UnicodeUTF8));
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
        chkDevType->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\346\226\260\350\256\276\345\244\207", 0, QApplication::UnicodeUTF8));
        chkQuery->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\346\237\245\350\257\242\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        cbMode->clear();
        cbMode->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\351\242\221\351\227\252\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\351\227\252\345\205\211\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8)
        );
        btnQuery->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
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
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\346\237\245\350\257\242\347\232\204\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        edtSendCmd->setPlainText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\345\217\221\351\200\201\347\232\204\345\221\275\344\273\244", 0, QApplication::UnicodeUTF8));
        edtReceiveCmd->setPlainText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\346\216\245\346\224\266\347\232\204\345\221\275\344\273\244", 0, QApplication::UnicodeUTF8));
        edtDataStream->setPlainText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\344\270\262\345\217\243\346\225\260\346\215\256\346\265\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
