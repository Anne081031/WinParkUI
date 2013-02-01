/********************************************************************************
** Form generated from reading UI file 'dbmaintenance.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBMAINTENANCE_H
#define UI_DBMAINTENANCE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTimeEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDBMaintenance
{
public:
    QWidget *widget;
    QGroupBox *groupBox_6;
    QCheckBox *chxDay2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpinBox *spDay2;
    QGroupBox *gb2;
    QPushButton *btnClear2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QDateEdit *date2;
    QLabel *label_2;
    QPushButton *btnClose;
    QGroupBox *groupBox_10;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QLineEdit *edtBackupPath;
    QToolButton *btnBackupPath;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *chxBackup;
    QPushButton *btnBackup;
    QGroupBox *groupBox_5;
    QCheckBox *chxDay1;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *spDay1;
    QGroupBox *gb3;
    QPushButton *btnClear3;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_3;
    QDateEdit *date3;
    QLabel *label_3;
    QGroupBox *groupBox_11;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QLineEdit *edtRecoveryPath;
    QToolButton *btnRecoveyPath;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *chxOverwrite;
    QPushButton *btnRecovery;
    QGroupBox *groupBox_8;
    QCheckBox *chxDay4;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpinBox *spDay4;
    QGroupBox *groupBox_9;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout;
    QTimeEdit *timeAuto;
    QCheckBox *chxAuto1;
    QCheckBox *chxAuto2;
    QDateEdit *dtNext;
    QGroupBox *gb1;
    QPushButton *btnClear1;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout;
    QDateEdit *date1;
    QLabel *label;
    QGroupBox *gb4;
    QPushButton *btnClear4;
    QWidget *layoutWidget11;
    QHBoxLayout *horizontalLayout_4;
    QDateEdit *date4;
    QLabel *label_4;
    QGroupBox *groupBox_7;
    QCheckBox *chxDay3;
    QWidget *layoutWidget12;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpinBox *spDay3;
    QPushButton *btnSave;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QTimeEdit *timeDelete;
    QLabel *lblTitle;
    QLabel *lblClose;

    void setupUi(QFrame *CDBMaintenance)
    {
        if (CDBMaintenance->objectName().isEmpty())
            CDBMaintenance->setObjectName(QString::fromUtf8("CDBMaintenance"));
        CDBMaintenance->resize(730, 692);
        CDBMaintenance->setStyleSheet(QString::fromUtf8("background-image:url(D:/WinParkUI/debug/Image/NewIcon/CommonMiddleBG-normal.jpg);"));
        CDBMaintenance->setFrameShape(QFrame::StyledPanel);
        CDBMaintenance->setFrameShadow(QFrame::Raised);
        widget = new QWidget(CDBMaintenance);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 85, 651, 561));
        widget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox_6 = new QGroupBox(widget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(180, 120, 191, 91));
        groupBox_6->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxDay2 = new QCheckBox(groupBox_6);
        chxDay2->setObjectName(QString::fromUtf8("chxDay2"));
        chxDay2->setGeometry(QRect(10, 60, 151, 16));
        chxDay2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget = new QWidget(groupBox_6);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 160, 22));
        layoutWidget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_6->addWidget(label_6);

        spDay2 = new QSpinBox(layoutWidget);
        spDay2->setObjectName(QString::fromUtf8("spDay2"));
        spDay2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        spDay2->setMinimum(1);
        spDay2->setMaximum(999);

        horizontalLayout_6->addWidget(spDay2);

        gb2 = new QGroupBox(widget);
        gb2->setObjectName(QString::fromUtf8("gb2"));
        gb2->setGeometry(QRect(0, 120, 171, 91));
        gb2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnClear2 = new QPushButton(gb2);
        btnClear2->setObjectName(QString::fromUtf8("btnClear2"));
        btnClear2->setGeometry(QRect(90, 60, 75, 23));
        btnClear2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget1 = new QWidget(gb2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 166, 22));
        layoutWidget1->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        date2 = new QDateEdit(layoutWidget1);
        date2->setObjectName(QString::fromUtf8("date2"));
        date2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_2->addWidget(date2);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_2->addWidget(label_2);

        btnClose = new QPushButton(widget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(490, 530, 131, 31));
        btnClose->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox_10 = new QGroupBox(widget);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(380, 270, 261, 91));
        groupBox_10->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget2 = new QWidget(groupBox_10);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(21, 21, 221, 23));
        layoutWidget2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_9->addWidget(label_12);

        edtBackupPath = new QLineEdit(layoutWidget2);
        edtBackupPath->setObjectName(QString::fromUtf8("edtBackupPath"));
        edtBackupPath->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_9->addWidget(edtBackupPath);

        btnBackupPath = new QToolButton(layoutWidget2);
        btnBackupPath->setObjectName(QString::fromUtf8("btnBackupPath"));
        btnBackupPath->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_9->addWidget(btnBackupPath);

        layoutWidget3 = new QWidget(groupBox_10);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 60, 226, 25));
        layoutWidget3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        chxBackup = new QCheckBox(layoutWidget3);
        chxBackup->setObjectName(QString::fromUtf8("chxBackup"));
        chxBackup->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_11->addWidget(chxBackup);

        btnBackup = new QPushButton(layoutWidget3);
        btnBackup->setObjectName(QString::fromUtf8("btnBackup"));
        btnBackup->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_11->addWidget(btnBackup);

        groupBox_5 = new QGroupBox(widget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(180, 10, 191, 91));
        groupBox_5->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxDay1 = new QCheckBox(groupBox_5);
        chxDay1->setObjectName(QString::fromUtf8("chxDay1"));
        chxDay1->setGeometry(QRect(10, 60, 151, 16));
        chxDay1->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget4 = new QWidget(groupBox_5);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 20, 160, 22));
        layoutWidget4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_5->addWidget(label_5);

        spDay1 = new QSpinBox(layoutWidget4);
        spDay1->setObjectName(QString::fromUtf8("spDay1"));
        spDay1->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        spDay1->setMinimum(1);
        spDay1->setMaximum(999);

        horizontalLayout_5->addWidget(spDay1);

        gb3 = new QGroupBox(widget);
        gb3->setObjectName(QString::fromUtf8("gb3"));
        gb3->setGeometry(QRect(0, 240, 171, 91));
        gb3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnClear3 = new QPushButton(gb3);
        btnClear3->setObjectName(QString::fromUtf8("btnClear3"));
        btnClear3->setGeometry(QRect(90, 60, 75, 23));
        btnClear3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget5 = new QWidget(gb3);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 20, 166, 22));
        layoutWidget5->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        date3 = new QDateEdit(layoutWidget5);
        date3->setObjectName(QString::fromUtf8("date3"));
        date3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_3->addWidget(date3);

        label_3 = new QLabel(layoutWidget5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_3->addWidget(label_3);

        groupBox_11 = new QGroupBox(widget);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(380, 410, 261, 91));
        groupBox_11->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget6 = new QWidget(groupBox_11);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(11, 20, 231, 23));
        layoutWidget6->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_10->addWidget(label_13);

        edtRecoveryPath = new QLineEdit(layoutWidget6);
        edtRecoveryPath->setObjectName(QString::fromUtf8("edtRecoveryPath"));
        edtRecoveryPath->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_10->addWidget(edtRecoveryPath);

        btnRecoveyPath = new QToolButton(layoutWidget6);
        btnRecoveyPath->setObjectName(QString::fromUtf8("btnRecoveyPath"));
        btnRecoveyPath->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_10->addWidget(btnRecoveyPath);

        layoutWidget7 = new QWidget(groupBox_11);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(10, 50, 231, 25));
        layoutWidget7->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        chxOverwrite = new QCheckBox(layoutWidget7);
        chxOverwrite->setObjectName(QString::fromUtf8("chxOverwrite"));
        chxOverwrite->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_12->addWidget(chxOverwrite);

        btnRecovery = new QPushButton(layoutWidget7);
        btnRecovery->setObjectName(QString::fromUtf8("btnRecovery"));
        btnRecovery->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_12->addWidget(btnRecovery);

        groupBox_8 = new QGroupBox(widget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(180, 360, 191, 91));
        groupBox_8->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxDay4 = new QCheckBox(groupBox_8);
        chxDay4->setObjectName(QString::fromUtf8("chxDay4"));
        chxDay4->setGeometry(QRect(10, 60, 151, 16));
        chxDay4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget8 = new QWidget(groupBox_8);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(10, 20, 160, 22));
        layoutWidget8->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget8);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_8->addWidget(label_8);

        spDay4 = new QSpinBox(layoutWidget8);
        spDay4->setObjectName(QString::fromUtf8("spDay4"));
        spDay4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        spDay4->setMinimum(1);
        spDay4->setMaximum(999);

        horizontalLayout_8->addWidget(spDay4);

        groupBox_9 = new QGroupBox(widget);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(380, 10, 261, 221));
        groupBox_9->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label_9 = new QLabel(groupBox_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 22, 91, 16));
        label_9->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label_10 = new QLabel(groupBox_9);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 160, 91, 16));
        label_10->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget9 = new QWidget(groupBox_9);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(110, 20, 145, 101));
        layoutWidget9->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        verticalLayout = new QVBoxLayout(layoutWidget9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        timeAuto = new QTimeEdit(layoutWidget9);
        timeAuto->setObjectName(QString::fromUtf8("timeAuto"));
        timeAuto->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        verticalLayout->addWidget(timeAuto);

        chxAuto1 = new QCheckBox(layoutWidget9);
        chxAuto1->setObjectName(QString::fromUtf8("chxAuto1"));
        chxAuto1->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        verticalLayout->addWidget(chxAuto1);

        chxAuto2 = new QCheckBox(layoutWidget9);
        chxAuto2->setObjectName(QString::fromUtf8("chxAuto2"));
        chxAuto2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        verticalLayout->addWidget(chxAuto2);

        dtNext = new QDateEdit(groupBox_9);
        dtNext->setObjectName(QString::fromUtf8("dtNext"));
        dtNext->setGeometry(QRect(13, 188, 110, 22));
        gb1 = new QGroupBox(widget);
        gb1->setObjectName(QString::fromUtf8("gb1"));
        gb1->setGeometry(QRect(0, 10, 171, 91));
        gb1->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnClear1 = new QPushButton(gb1);
        btnClear1->setObjectName(QString::fromUtf8("btnClear1"));
        btnClear1->setGeometry(QRect(90, 60, 75, 23));
        btnClear1->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget10 = new QWidget(gb1);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(10, 20, 166, 22));
        layoutWidget10->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout = new QHBoxLayout(layoutWidget10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        date1 = new QDateEdit(layoutWidget10);
        date1->setObjectName(QString::fromUtf8("date1"));
        date1->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout->addWidget(date1);

        label = new QLabel(layoutWidget10);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout->addWidget(label);

        gb4 = new QGroupBox(widget);
        gb4->setObjectName(QString::fromUtf8("gb4"));
        gb4->setGeometry(QRect(0, 360, 171, 91));
        gb4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnClear4 = new QPushButton(gb4);
        btnClear4->setObjectName(QString::fromUtf8("btnClear4"));
        btnClear4->setGeometry(QRect(90, 60, 75, 23));
        btnClear4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget11 = new QWidget(gb4);
        layoutWidget11->setObjectName(QString::fromUtf8("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(10, 20, 166, 22));
        layoutWidget11->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        date4 = new QDateEdit(layoutWidget11);
        date4->setObjectName(QString::fromUtf8("date4"));
        date4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_4->addWidget(date4);

        label_4 = new QLabel(layoutWidget11);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_4->addWidget(label_4);

        groupBox_7 = new QGroupBox(widget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(180, 240, 191, 91));
        groupBox_7->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        chxDay3 = new QCheckBox(groupBox_7);
        chxDay3->setObjectName(QString::fromUtf8("chxDay3"));
        chxDay3->setGeometry(QRect(10, 60, 151, 16));
        chxDay3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget12 = new QWidget(groupBox_7);
        layoutWidget12->setObjectName(QString::fromUtf8("layoutWidget12"));
        layoutWidget12->setGeometry(QRect(10, 20, 160, 22));
        layoutWidget12->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget12);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget12);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_7->addWidget(label_7);

        spDay3 = new QSpinBox(layoutWidget12);
        spDay3->setObjectName(QString::fromUtf8("spDay3"));
        spDay3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        spDay3->setMinimum(1);
        spDay3->setMaximum(999);

        horizontalLayout_7->addWidget(spDay3);

        btnSave = new QPushButton(widget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(340, 530, 131, 31));
        btnSave->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 470, 341, 22));
        horizontalLayout_13 = new QHBoxLayout(widget1);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_13->addWidget(label_11);

        timeDelete = new QTimeEdit(widget1);
        timeDelete->setObjectName(QString::fromUtf8("timeDelete"));

        horizontalLayout_13->addWidget(timeDelete);

        lblTitle = new QLabel(CDBMaintenance);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(170, 0, 0);"));
        lblClose = new QLabel(CDBMaintenance);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(690, 7, 30, 15));

        retranslateUi(CDBMaintenance);

        QMetaObject::connectSlotsByName(CDBMaintenance);
    } // setupUi

    void retranslateUi(QFrame *CDBMaintenance)
    {
        CDBMaintenance->setWindowTitle(QApplication::translate("CDBMaintenance", "\346\225\260\346\215\256\345\272\223\347\273\264\346\212\244", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("CDBMaintenance", "\345\207\272\345\205\245\350\256\260\345\275\225\350\207\252\345\212\250\345\210\240\351\231\244\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        chxDay2->setText(QApplication::translate("CDBMaintenance", "\350\207\252\345\212\250\345\210\240\351\231\244\350\277\207\346\234\237\345\207\272\345\205\245\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CDBMaintenance", "\345\207\272\345\205\245\350\256\260\345\275\225\344\277\235\347\225\231\345\244\251\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        gb2->setTitle(QApplication::translate("CDBMaintenance", "\346\270\205\351\231\244\345\207\272\345\205\245\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        btnClear2->setText(QApplication::translate("CDBMaintenance", "\346\270\205\351\231\244", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CDBMaintenance", "\344\271\213\345\211\215\347\232\204\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("CDBMaintenance", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("CDBMaintenance", "\345\244\207\344\273\275\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CDBMaintenance", "\344\277\235\345\255\230\350\267\257\345\276\204\357\274\232", 0, QApplication::UnicodeUTF8));
        btnBackupPath->setText(QApplication::translate("CDBMaintenance", "...", 0, QApplication::UnicodeUTF8));
        chxBackup->setText(QApplication::translate("CDBMaintenance", "\345\220\214\346\227\266\345\244\207\344\273\275\350\277\233\345\207\272\345\233\276\345\203\217\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        btnBackup->setText(QApplication::translate("CDBMaintenance", "\345\274\200\345\247\213\345\244\207\344\273\275", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("CDBMaintenance", "\347\273\255\350\264\271\350\256\260\345\275\225\350\207\252\345\212\250\345\210\240\351\231\244\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        chxDay1->setText(QApplication::translate("CDBMaintenance", "\350\207\252\345\212\250\345\210\240\351\231\244\350\277\207\346\234\237\347\273\255\350\264\271\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CDBMaintenance", "\347\273\255\350\264\271\350\256\260\345\275\225\344\277\235\347\225\231\345\244\251\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        gb3->setTitle(QApplication::translate("CDBMaintenance", "\346\270\205\351\231\244\347\263\273\347\273\237\346\227\245\345\277\227", 0, QApplication::UnicodeUTF8));
        btnClear3->setText(QApplication::translate("CDBMaintenance", "\346\270\205\351\231\244", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CDBMaintenance", "\344\271\213\345\211\215\347\232\204\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QApplication::translate("CDBMaintenance", "\346\201\242\345\244\215\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("CDBMaintenance", "\346\226\207\344\273\266\350\267\257\345\276\204\357\274\232", 0, QApplication::UnicodeUTF8));
        btnRecoveyPath->setText(QApplication::translate("CDBMaintenance", "...", 0, QApplication::UnicodeUTF8));
        chxOverwrite->setText(QApplication::translate("CDBMaintenance", "\347\233\270\345\220\214\346\225\260\346\215\256\350\246\206\347\233\226", 0, QApplication::UnicodeUTF8));
        btnRecovery->setText(QApplication::translate("CDBMaintenance", "\345\274\200\345\247\213\346\201\242\345\244\215", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("CDBMaintenance", "\350\277\233\345\207\272\345\233\276\345\203\217\350\207\252\345\212\250\345\210\240\351\231\244\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        chxDay4->setText(QApplication::translate("CDBMaintenance", "\350\207\252\345\212\250\345\210\240\351\231\244\350\277\207\346\234\237\345\233\276\345\203\217\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CDBMaintenance", "\345\233\276\345\203\217\346\225\260\346\215\256\344\277\235\347\225\231\345\244\251\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("CDBMaintenance", "\346\225\260\346\215\256\350\207\252\345\212\250\345\244\207\344\273\275\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CDBMaintenance", "\345\274\200\345\247\213\345\244\207\344\273\275\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CDBMaintenance", "\344\270\213\346\254\241\345\244\207\344\273\275\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        chxAuto1->setText(QApplication::translate("CDBMaintenance", "\346\211\223\345\274\200\350\207\252\345\212\250\346\225\260\346\215\256\345\244\207\344\273\275", 0, QApplication::UnicodeUTF8));
        chxAuto2->setText(QApplication::translate("CDBMaintenance", "\345\220\214\346\227\266\345\244\207\344\273\275\350\277\233\345\207\272\345\233\276\345\203\217\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        gb1->setTitle(QApplication::translate("CDBMaintenance", "\346\270\205\351\231\244\347\273\255\350\264\271\347\272\252\345\275\225", 0, QApplication::UnicodeUTF8));
        btnClear1->setText(QApplication::translate("CDBMaintenance", "\346\270\205\351\231\244", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDBMaintenance", "\344\271\213\345\211\215\347\232\204\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        gb4->setTitle(QApplication::translate("CDBMaintenance", "\346\270\205\351\231\244\345\233\276\345\203\217\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        btnClear4->setText(QApplication::translate("CDBMaintenance", "\346\270\205\351\231\244", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CDBMaintenance", "\344\271\213\345\211\215\347\232\204\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("CDBMaintenance", "\347\263\273\347\273\237\346\227\245\345\277\227\350\207\252\345\212\250\345\210\240\351\231\244\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        chxDay3->setText(QApplication::translate("CDBMaintenance", "\350\207\252\345\212\250\345\210\240\351\231\244\350\277\207\346\234\237\346\227\245\345\277\227\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CDBMaintenance", "\346\227\245\345\277\227\350\256\260\345\275\225\344\277\235\347\225\231\345\244\251\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CDBMaintenance", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CDBMaintenance", "\346\257\217\345\244\251\346\225\260\346\215\256\345\210\240\351\231\244\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        lblClose->setText(QApplication::translate("CDBMaintenance", "4", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDBMaintenance: public Ui_CDBMaintenance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBMAINTENANCE_H
