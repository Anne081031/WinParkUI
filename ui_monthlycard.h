/********************************************************************************
** Form generated from reading UI file 'monthlycard.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONTHLYCARD_H
#define UI_MONTHLYCARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMonthlyCard
{
public:
    QWidget *widget;
    QTableWidget *tableMonthly;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *gbOwner;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *edtUnit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QLineEdit *edtAddr;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_14;
    QLineEdit *edtDriveID;
    QGroupBox *groupBox_4;
    QLabel *lblOwner;
    QGroupBox *groupBox_3;
    QLabel *lblCar;
    QLabel *lblUserID;
    QLabel *lblCardNo;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_11;
    QLineEdit *edtID;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_9;
    QLineEdit *edtTel;
    QComboBox *cbxCarType;
    QLabel *label_15;
    QLabel *label_2;
    QComboBox *cbxSex;
    QLabel *label_8;
    QLineEdit *edtName;
    QLineEdit *edtVechileID6;
    QLabel *label_19;
    QLineEdit *edtVechileID9;
    QLabel *label_22;
    QLineEdit *edtVechileID3;
    QLabel *label_16;
    QLabel *label_23;
    QLineEdit *edtVechileID1;
    QLineEdit *edtVechileID4;
    QLabel *label_17;
    QLineEdit *edtVechileID8;
    QLabel *label_21;
    QLabel *label_24;
    QLineEdit *edtVechileID0;
    QLabel *label_20;
    QLineEdit *edtVechileID7;
    QLineEdit *edtVechileID5;
    QLabel *label_18;
    QLabel *label_13;
    QLineEdit *edtVechileID2;
    QLineEdit *edtCarModel;
    QPushButton *btnMonthRecharge;
    QPushButton *btnMonthSave;
    QWidget *tab_2;
    QTableWidget *tableRecharge;
    QWidget *tab_3;
    QTableWidget *tableAccess;
    QGroupBox *groupBox_6;
    QLabel *lblImg2;
    QGroupBox *groupBox_8;
    QLabel *lblImg4;
    QGroupBox *groupBox_7;
    QLabel *lblImg3;
    QGroupBox *groupBox_5;
    QLabel *lblImg1;
    QWidget *tab_4;
    QPushButton *btnEntranceSave;
    QTableWidget *tableEntranceRight;
    QPushButton *btnSaveRight;
    QPushButton *btnMinimalize;
    QLabel *lblTitle;
    QLabel *lblClose;

    void setupUi(QFrame *CMonthlyCard)
    {
        if (CMonthlyCard->objectName().isEmpty())
            CMonthlyCard->setObjectName(QString::fromUtf8("CMonthlyCard"));
        CMonthlyCard->resize(1390, 818);
        CMonthlyCard->setStyleSheet(QString::fromUtf8("background-image:url(D:/WinParkUI/debug/Image/NewIcon/CommonBigBG-normal.jpg);"));
        CMonthlyCard->setFrameShape(QFrame::StyledPanel);
        CMonthlyCard->setFrameShadow(QFrame::Raised);
        widget = new QWidget(CMonthlyCard);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 60, 1301, 731));
        widget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tableMonthly = new QTableWidget(widget);
        if (tableMonthly->columnCount() < 11)
            tableMonthly->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableMonthly->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableMonthly->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableMonthly->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableMonthly->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableMonthly->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableMonthly->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableMonthly->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableMonthly->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableMonthly->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableMonthly->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableMonthly->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        tableMonthly->setObjectName(QString::fromUtf8("tableMonthly"));
        tableMonthly->setGeometry(QRect(0, 0, 1301, 221));
        tableMonthly->setContextMenuPolicy(Qt::CustomContextMenu);
        tableMonthly->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tableMonthly->setSelectionBehavior(QAbstractItemView::SelectItems);
        tableMonthly->horizontalHeader()->setVisible(true);
        tableMonthly->verticalHeader()->setVisible(true);
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 230, 1301, 461));
        tabWidget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gbOwner = new QGroupBox(tab);
        gbOwner->setObjectName(QString::fromUtf8("gbOwner"));
        gbOwner->setGeometry(QRect(0, 10, 1091, 401));
        layoutWidget = new QWidget(gbOwner);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 120, 391, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_2->addWidget(label_10);

        edtUnit = new QLineEdit(layoutWidget);
        edtUnit->setObjectName(QString::fromUtf8("edtUnit"));

        horizontalLayout_2->addWidget(edtUnit);

        layoutWidget1 = new QWidget(gbOwner);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 150, 391, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_3->addWidget(label_12);

        edtAddr = new QLineEdit(layoutWidget1);
        edtAddr->setObjectName(QString::fromUtf8("edtAddr"));

        horizontalLayout_3->addWidget(edtAddr);

        layoutWidget2 = new QWidget(gbOwner);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 180, 391, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_5->addWidget(label_14);

        edtDriveID = new QLineEdit(layoutWidget2);
        edtDriveID->setObjectName(QString::fromUtf8("edtDriveID"));

        horizontalLayout_5->addWidget(edtDriveID);

        groupBox_4 = new QGroupBox(gbOwner);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(410, 30, 235, 351));
        lblOwner = new QLabel(groupBox_4);
        lblOwner->setObjectName(QString::fromUtf8("lblOwner"));
        lblOwner->setGeometry(QRect(10, 20, 214, 321));
        lblOwner->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblOwner->setFrameShape(QFrame::Panel);
        lblOwner->setFrameShadow(QFrame::Sunken);
        lblOwner->setLineWidth(2);
        lblOwner->setScaledContents(true);
        groupBox_3 = new QGroupBox(gbOwner);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(660, 30, 421, 351));
        lblCar = new QLabel(groupBox_3);
        lblCar->setObjectName(QString::fromUtf8("lblCar"));
        lblCar->setGeometry(QRect(10, 20, 401, 321));
        lblCar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblCar->setFrameShape(QFrame::Panel);
        lblCar->setFrameShadow(QFrame::Sunken);
        lblCar->setLineWidth(2);
        lblCar->setScaledContents(true);
        lblUserID = new QLabel(gbOwner);
        lblUserID->setObjectName(QString::fromUtf8("lblUserID"));
        lblUserID->setGeometry(QRect(430, 40, 54, 12));
        lblCardNo = new QLabel(gbOwner);
        lblCardNo->setObjectName(QString::fromUtf8("lblCardNo"));
        lblCardNo->setGeometry(QRect(430, 60, 54, 12));
        layoutWidget3 = new QWidget(gbOwner);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(11, 90, 391, 22));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_16->addWidget(label_11);

        edtID = new QLineEdit(layoutWidget3);
        edtID->setObjectName(QString::fromUtf8("edtID"));

        horizontalLayout_16->addWidget(edtID);

        layoutWidget4 = new QWidget(gbOwner);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 60, 391, 22));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_17->addWidget(label_9);

        edtTel = new QLineEdit(layoutWidget4);
        edtTel->setObjectName(QString::fromUtf8("edtTel"));

        horizontalLayout_17->addWidget(edtTel);

        cbxCarType = new QComboBox(gbOwner);
        cbxCarType->setObjectName(QString::fromUtf8("cbxCarType"));
        cbxCarType->setGeometry(QRect(250, 210, 149, 20));
        label_15 = new QLabel(gbOwner);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(11, 211, 36, 16));
        label_2 = new QLabel(gbOwner);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(11, 31, 36, 16));
        cbxSex = new QComboBox(gbOwner);
        cbxSex->setObjectName(QString::fromUtf8("cbxSex"));
        cbxSex->setGeometry(QRect(339, 31, 61, 20));
        label_8 = new QLabel(gbOwner);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(290, 31, 36, 16));
        edtName = new QLineEdit(gbOwner);
        edtName->setObjectName(QString::fromUtf8("edtName"));
        edtName->setGeometry(QRect(53, 31, 221, 20));
        edtVechileID6 = new QLineEdit(gbOwner);
        edtVechileID6->setObjectName(QString::fromUtf8("edtVechileID6"));
        edtVechileID6->setEnabled(false);
        edtVechileID6->setGeometry(QRect(271, 271, 129, 20));
        label_19 = new QLabel(gbOwner);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(211, 271, 54, 16));
        edtVechileID9 = new QLineEdit(gbOwner);
        edtVechileID9->setObjectName(QString::fromUtf8("edtVechileID9"));
        edtVechileID9->setEnabled(false);
        edtVechileID9->setGeometry(QRect(271, 361, 129, 20));
        label_22 = new QLabel(gbOwner);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(211, 361, 54, 16));
        edtVechileID3 = new QLineEdit(gbOwner);
        edtVechileID3->setObjectName(QString::fromUtf8("edtVechileID3"));
        edtVechileID3->setEnabled(false);
        edtVechileID3->setGeometry(QRect(71, 331, 129, 20));
        label_16 = new QLabel(gbOwner);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(11, 331, 54, 16));
        label_23 = new QLabel(gbOwner);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(11, 271, 54, 16));
        edtVechileID1 = new QLineEdit(gbOwner);
        edtVechileID1->setObjectName(QString::fromUtf8("edtVechileID1"));
        edtVechileID1->setEnabled(false);
        edtVechileID1->setGeometry(QRect(71, 271, 129, 20));
        edtVechileID4 = new QLineEdit(gbOwner);
        edtVechileID4->setObjectName(QString::fromUtf8("edtVechileID4"));
        edtVechileID4->setEnabled(false);
        edtVechileID4->setGeometry(QRect(71, 361, 129, 20));
        label_17 = new QLabel(gbOwner);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(11, 361, 54, 16));
        edtVechileID8 = new QLineEdit(gbOwner);
        edtVechileID8->setObjectName(QString::fromUtf8("edtVechileID8"));
        edtVechileID8->setEnabled(false);
        edtVechileID8->setGeometry(QRect(271, 331, 129, 20));
        label_21 = new QLabel(gbOwner);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(211, 331, 54, 16));
        label_24 = new QLabel(gbOwner);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(11, 241, 54, 16));
        edtVechileID0 = new QLineEdit(gbOwner);
        edtVechileID0->setObjectName(QString::fromUtf8("edtVechileID0"));
        edtVechileID0->setGeometry(QRect(71, 241, 129, 20));
        label_20 = new QLabel(gbOwner);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(211, 301, 54, 16));
        edtVechileID7 = new QLineEdit(gbOwner);
        edtVechileID7->setObjectName(QString::fromUtf8("edtVechileID7"));
        edtVechileID7->setEnabled(false);
        edtVechileID7->setGeometry(QRect(271, 301, 129, 20));
        edtVechileID5 = new QLineEdit(gbOwner);
        edtVechileID5->setObjectName(QString::fromUtf8("edtVechileID5"));
        edtVechileID5->setEnabled(false);
        edtVechileID5->setGeometry(QRect(271, 241, 129, 20));
        label_18 = new QLabel(gbOwner);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(211, 241, 54, 16));
        label_13 = new QLabel(gbOwner);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(11, 301, 54, 16));
        edtVechileID2 = new QLineEdit(gbOwner);
        edtVechileID2->setObjectName(QString::fromUtf8("edtVechileID2"));
        edtVechileID2->setEnabled(false);
        edtVechileID2->setGeometry(QRect(71, 301, 129, 20));
        edtCarModel = new QLineEdit(gbOwner);
        edtCarModel->setObjectName(QString::fromUtf8("edtCarModel"));
        edtCarModel->setGeometry(QRect(71, 210, 328, 20));
        btnMonthRecharge = new QPushButton(tab);
        btnMonthRecharge->setObjectName(QString::fromUtf8("btnMonthRecharge"));
        btnMonthRecharge->setGeometry(QRect(1110, 390, 75, 23));
        btnMonthSave = new QPushButton(tab);
        btnMonthSave->setObjectName(QString::fromUtf8("btnMonthSave"));
        btnMonthSave->setGeometry(QRect(1200, 390, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableRecharge = new QTableWidget(tab_2);
        if (tableRecharge->columnCount() < 5)
            tableRecharge->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableRecharge->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableRecharge->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableRecharge->setHorizontalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableRecharge->setHorizontalHeaderItem(3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableRecharge->setHorizontalHeaderItem(4, __qtablewidgetitem15);
        tableRecharge->setObjectName(QString::fromUtf8("tableRecharge"));
        tableRecharge->setGeometry(QRect(10, 10, 1281, 401));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tableAccess = new QTableWidget(tab_3);
        if (tableAccess->columnCount() < 4)
            tableAccess->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableAccess->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableAccess->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableAccess->setHorizontalHeaderItem(2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableAccess->setHorizontalHeaderItem(3, __qtablewidgetitem19);
        tableAccess->setObjectName(QString::fromUtf8("tableAccess"));
        tableAccess->setGeometry(QRect(10, 10, 841, 411));
        tableAccess->setMaximumSize(QSize(961, 431));
        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(1080, 0, 211, 211));
        lblImg2 = new QLabel(groupBox_6);
        lblImg2->setObjectName(QString::fromUtf8("lblImg2"));
        lblImg2->setGeometry(QRect(5, 16, 201, 191));
        lblImg2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg2->setFrameShape(QFrame::Panel);
        lblImg2->setFrameShadow(QFrame::Sunken);
        lblImg2->setLineWidth(2);
        lblImg2->setScaledContents(true);
        groupBox_8 = new QGroupBox(tab_3);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(1080, 210, 211, 211));
        lblImg4 = new QLabel(groupBox_8);
        lblImg4->setObjectName(QString::fromUtf8("lblImg4"));
        lblImg4->setGeometry(QRect(5, 16, 201, 191));
        lblImg4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg4->setFrameShape(QFrame::Panel);
        lblImg4->setFrameShadow(QFrame::Sunken);
        lblImg4->setLineWidth(2);
        lblImg4->setScaledContents(true);
        groupBox_7 = new QGroupBox(tab_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(860, 210, 211, 211));
        lblImg3 = new QLabel(groupBox_7);
        lblImg3->setObjectName(QString::fromUtf8("lblImg3"));
        lblImg3->setGeometry(QRect(5, 16, 201, 191));
        lblImg3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg3->setFrameShape(QFrame::Panel);
        lblImg3->setFrameShadow(QFrame::Sunken);
        lblImg3->setLineWidth(2);
        lblImg3->setScaledContents(true);
        groupBox_5 = new QGroupBox(tab_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(860, 0, 211, 211));
        lblImg1 = new QLabel(groupBox_5);
        lblImg1->setObjectName(QString::fromUtf8("lblImg1"));
        lblImg1->setGeometry(QRect(5, 16, 201, 191));
        lblImg1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg1->setFrameShape(QFrame::Panel);
        lblImg1->setFrameShadow(QFrame::Sunken);
        lblImg1->setLineWidth(2);
        lblImg1->setScaledContents(true);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        btnEntranceSave = new QPushButton(tab_4);
        btnEntranceSave->setObjectName(QString::fromUtf8("btnEntranceSave"));
        btnEntranceSave->setGeometry(QRect(1320, 390, 75, 23));
        btnEntranceSave->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tableEntranceRight = new QTableWidget(tab_4);
        if (tableEntranceRight->columnCount() < 4)
            tableEntranceRight->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableEntranceRight->setHorizontalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableEntranceRight->setHorizontalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableEntranceRight->setHorizontalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableEntranceRight->setHorizontalHeaderItem(3, __qtablewidgetitem23);
        tableEntranceRight->setObjectName(QString::fromUtf8("tableEntranceRight"));
        tableEntranceRight->setGeometry(QRect(10, 10, 1281, 371));
        tableEntranceRight->setMaximumSize(QSize(1391, 401));
        tableEntranceRight->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnSaveRight = new QPushButton(tab_4);
        btnSaveRight->setObjectName(QString::fromUtf8("btnSaveRight"));
        btnSaveRight->setGeometry(QRect(1200, 400, 75, 23));
        tabWidget->addTab(tab_4, QString());
        btnMinimalize = new QPushButton(widget);
        btnMinimalize->setObjectName(QString::fromUtf8("btnMinimalize"));
        btnMinimalize->setGeometry(QRect(683, 700, 75, 23));
        btnMinimalize->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblTitle = new QLabel(CMonthlyCard);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(170, 0, 0);"));
        lblClose = new QLabel(CMonthlyCard);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(1350, 7, 30, 15));
        lblClose->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblClose->setAlignment(Qt::AlignCenter);

        retranslateUi(CMonthlyCard);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CMonthlyCard);
    } // setupUi

    void retranslateUi(QFrame *CMonthlyCard)
    {
        CMonthlyCard->setWindowTitle(QApplication::translate("CMonthlyCard", "\346\234\210\347\247\237\345\215\241", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableMonthly->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CMonthlyCard", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableMonthly->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CMonthlyCard", "\345\205\245\345\234\272\345\277\205\351\241\273\345\210\267\345\215\241", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableMonthly->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CMonthlyCard", "\345\207\272\345\234\272\345\277\205\351\241\273\345\210\267\345\215\241", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableMonthly->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CMonthlyCard", "\345\205\201\350\256\270\345\244\232\350\277\233\345\244\232\345\207\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableMonthly->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("CMonthlyCard", "\345\215\241\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableMonthly->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("CMonthlyCard", "\346\234\211\346\225\210\346\234\237\345\274\200\345\247\213\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableMonthly->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("CMonthlyCard", "\346\234\211\346\225\210\346\234\237\347\273\223\346\235\237\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableMonthly->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("CMonthlyCard", "\345\215\241\347\211\207\344\275\277\347\224\250\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableMonthly->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("CMonthlyCard", "\345\215\241\347\211\207\350\207\252\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableMonthly->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("CMonthlyCard", "\345\244\207\346\263\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableMonthly->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("CMonthlyCard", "\347\231\273\350\256\260\350\200\205", 0, QApplication::UnicodeUTF8));
        gbOwner->setTitle(QApplication::translate("CMonthlyCard", "\350\265\204\346\226\231", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CMonthlyCard", "\345\215\225\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CMonthlyCard", "\345\234\260\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("CMonthlyCard", "\350\241\214\351\251\266\350\257\201\345\217\267\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("CMonthlyCard", "\344\270\232\344\270\273\347\205\247\347\211\207", 0, QApplication::UnicodeUTF8));
        lblOwner->setText(QString());
        groupBox_3->setTitle(QApplication::translate("CMonthlyCard", "\350\275\246\350\276\206\347\205\247\347\211\207", 0, QApplication::UnicodeUTF8));
        lblCar->setText(QString());
        lblUserID->setText(QString());
        lblCardNo->setText(QString());
        label_11->setText(QApplication::translate("CMonthlyCard", "\350\257\201\344\273\266\345\217\267\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CMonthlyCard", "\347\224\265\350\257\235\357\274\232", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("CMonthlyCard", "\350\275\246\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CMonthlyCard", "\345\247\223\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxSex->clear();
        cbxSex->insertItems(0, QStringList()
         << QApplication::translate("CMonthlyCard", "\345\245\263", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CMonthlyCard", "\347\224\267", 0, QApplication::UnicodeUTF8)
        );
        label_8->setText(QApplication::translate("CMonthlyCard", "\346\200\247\345\210\253\357\274\232", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("CMonthlyCard", "\350\275\246\347\211\214\345\217\2676\357\274\232", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("CMonthlyCard", "\350\275\246\347\211\214\345\217\2679\357\274\232", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("CMonthlyCard", "\350\275\246\347\211\214\345\217\2673\357\274\232", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("CMonthlyCard", "\350\275\246\347\211\214\345\217\2671\357\274\232", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("CMonthlyCard", "\350\275\246\347\211\214\345\217\2674\357\274\232", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("CMonthlyCard", "\350\275\246\347\211\214\345\217\2678\357\274\232", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("CMonthlyCard", "\350\275\246\347\211\214\345\217\2670\357\274\232", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("CMonthlyCard", "\350\275\246\347\211\214\345\217\2677\357\274\232", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("CMonthlyCard", "\350\275\246\347\211\214\345\217\2675\357\274\232", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("CMonthlyCard", "\350\275\246\347\211\214\345\217\2672\357\274\232", 0, QApplication::UnicodeUTF8));
        btnMonthRecharge->setText(QApplication::translate("CMonthlyCard", "\346\234\210\347\247\237\345\215\241\347\273\255\350\264\271", 0, QApplication::UnicodeUTF8));
        btnMonthSave->setText(QApplication::translate("CMonthlyCard", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CMonthlyCard", "\344\270\232\344\270\273\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableRecharge->horizontalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("CMonthlyCard", "\346\224\266\350\264\271\351\207\221\351\242\235", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableRecharge->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QApplication::translate("CMonthlyCard", "\347\273\255\350\264\271\346\227\266\351\225\277(\345\244\251)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableRecharge->horizontalHeaderItem(2);
        ___qtablewidgetitem13->setText(QApplication::translate("CMonthlyCard", "\346\224\266\350\264\271\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableRecharge->horizontalHeaderItem(3);
        ___qtablewidgetitem14->setText(QApplication::translate("CMonthlyCard", "\350\264\271\347\224\250\347\247\215\347\261\273", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableRecharge->horizontalHeaderItem(4);
        ___qtablewidgetitem15->setText(QApplication::translate("CMonthlyCard", "\346\224\266\350\264\271\344\272\272\345\221\230", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CMonthlyCard", "\347\273\255\350\264\271\347\272\252\345\275\225", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableAccess->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("CMonthlyCard", "\350\277\233\345\205\245\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableAccess->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("CMonthlyCard", "\350\277\233\345\205\245\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = tableAccess->horizontalHeaderItem(2);
        ___qtablewidgetitem18->setText(QApplication::translate("CMonthlyCard", "\347\246\273\345\274\200\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = tableAccess->horizontalHeaderItem(3);
        ___qtablewidgetitem19->setText(QApplication::translate("CMonthlyCard", "\347\246\273\345\274\200\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("CMonthlyCard", "\345\233\276\345\203\2172", 0, QApplication::UnicodeUTF8));
        lblImg2->setText(QString());
        groupBox_8->setTitle(QApplication::translate("CMonthlyCard", "\345\233\276\345\203\2174", 0, QApplication::UnicodeUTF8));
        lblImg4->setText(QString());
        groupBox_7->setTitle(QApplication::translate("CMonthlyCard", "\345\233\276\345\203\2173", 0, QApplication::UnicodeUTF8));
        lblImg3->setText(QString());
        groupBox_5->setTitle(QApplication::translate("CMonthlyCard", "\345\233\276\345\203\2171", 0, QApplication::UnicodeUTF8));
        lblImg1->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("CMonthlyCard", "\346\234\200\350\277\221\350\277\233\345\207\272\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        btnEntranceSave->setText(QApplication::translate("CMonthlyCard", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = tableEntranceRight->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QApplication::translate("CMonthlyCard", "\351\200\232\351\201\223\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = tableEntranceRight->horizontalHeaderItem(1);
        ___qtablewidgetitem21->setText(QApplication::translate("CMonthlyCard", "\350\265\267\345\247\213\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = tableEntranceRight->horizontalHeaderItem(2);
        ___qtablewidgetitem22->setText(QApplication::translate("CMonthlyCard", "\347\273\223\346\235\237\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem23 = tableEntranceRight->horizontalHeaderItem(3);
        ___qtablewidgetitem23->setText(QApplication::translate("CMonthlyCard", "ID", 0, QApplication::UnicodeUTF8));
        btnSaveRight->setText(QApplication::translate("CMonthlyCard", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("CMonthlyCard", "\345\207\272\345\205\245\346\235\203\351\231\220", 0, QApplication::UnicodeUTF8));
        btnMinimalize->setText(QApplication::translate("CMonthlyCard", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CMonthlyCard: public Ui_CMonthlyCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONTHLYCARD_H
