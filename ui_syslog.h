/********************************************************************************
** Form generated from reading UI file 'syslog.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSLOG_H
#define UI_SYSLOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSysLog
{
public:
    QWidget *widget;
    QGroupBox *groupBox_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tableShift;
    QWidget *tab_2;
    QTableWidget *tableCardMgm;
    QWidget *tab_5;
    QTableWidget *tablDeleteData;
    QWidget *tab_6;
    QTableWidget *tableManualGate;
    QWidget *tab_7;
    QTableWidget *tableHardware;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QLabel *lblImg0;
    QGroupBox *groupBox_5;
    QLabel *lblImg1;
    QGroupBox *groupBox_6;
    QLabel *lblImg2;
    QGroupBox *groupBox_7;
    QLabel *lblImg3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateTimeEdit *dtStart;
    QLabel *label_2;
    QDateTimeEdit *dtEnd;
    QPushButton *btnQuery;
    QPushButton *btnMinimalize;
    QLabel *lblTitle;
    QLabel *lblClose;

    void setupUi(QFrame *CSysLog)
    {
        if (CSysLog->objectName().isEmpty())
            CSysLog->setObjectName(QString::fromUtf8("CSysLog"));
        CSysLog->resize(1390, 818);
        CSysLog->setStyleSheet(QString::fromUtf8("background-image:url(D:/WinParkUI/debug/Image/NewIcon/CommonBigBG-normal.jpg);"));
        CSysLog->setFrameShape(QFrame::NoFrame);
        CSysLog->setFrameShadow(QFrame::Raised);
        widget = new QWidget(CSysLog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 40, 1301, 741));
        widget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 20, 1281, 671));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 50, 1261, 361));
        tabWidget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableShift = new QTableWidget(tab);
        if (tableShift->columnCount() < 3)
            tableShift->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableShift->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableShift->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableShift->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableShift->rowCount() < 2)
            tableShift->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableShift->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableShift->setVerticalHeaderItem(1, __qtablewidgetitem4);
        tableShift->setObjectName(QString::fromUtf8("tableShift"));
        tableShift->setGeometry(QRect(10, 10, 1231, 351));
        tableShift->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableCardMgm = new QTableWidget(tab_2);
        if (tableCardMgm->columnCount() < 3)
            tableCardMgm->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableCardMgm->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableCardMgm->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableCardMgm->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        if (tableCardMgm->rowCount() < 2)
            tableCardMgm->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableCardMgm->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableCardMgm->setVerticalHeaderItem(1, __qtablewidgetitem9);
        tableCardMgm->setObjectName(QString::fromUtf8("tableCardMgm"));
        tableCardMgm->setGeometry(QRect(10, 10, 1231, 351));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tablDeleteData = new QTableWidget(tab_5);
        if (tablDeleteData->columnCount() < 3)
            tablDeleteData->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tablDeleteData->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tablDeleteData->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tablDeleteData->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        if (tablDeleteData->rowCount() < 2)
            tablDeleteData->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tablDeleteData->setVerticalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tablDeleteData->setVerticalHeaderItem(1, __qtablewidgetitem14);
        tablDeleteData->setObjectName(QString::fromUtf8("tablDeleteData"));
        tablDeleteData->setGeometry(QRect(10, 10, 1231, 351));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tableManualGate = new QTableWidget(tab_6);
        if (tableManualGate->columnCount() < 3)
            tableManualGate->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableManualGate->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableManualGate->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableManualGate->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        if (tableManualGate->rowCount() < 2)
            tableManualGate->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableManualGate->setVerticalHeaderItem(0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableManualGate->setVerticalHeaderItem(1, __qtablewidgetitem19);
        tableManualGate->setObjectName(QString::fromUtf8("tableManualGate"));
        tableManualGate->setGeometry(QRect(10, 10, 1231, 351));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tableHardware = new QTableWidget(tab_7);
        if (tableHardware->columnCount() < 3)
            tableHardware->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableHardware->setHorizontalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableHardware->setHorizontalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableHardware->setHorizontalHeaderItem(2, __qtablewidgetitem22);
        if (tableHardware->rowCount() < 2)
            tableHardware->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableHardware->setVerticalHeaderItem(0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableHardware->setVerticalHeaderItem(1, __qtablewidgetitem24);
        tableHardware->setObjectName(QString::fromUtf8("tableHardware"));
        tableHardware->setGeometry(QRect(10, 10, 1231, 351));
        tabWidget->addTab(tab_7, QString());
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 420, 1261, 251));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 20, 241, 221));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblImg0 = new QLabel(groupBox_4);
        lblImg0->setObjectName(QString::fromUtf8("lblImg0"));
        lblImg0->setGeometry(QRect(6, 15, 231, 201));
        lblImg0->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg0->setFrameShape(QFrame::Panel);
        lblImg0->setFrameShadow(QFrame::Sunken);
        lblImg0->setLineWidth(2);
        lblImg0->setScaledContents(true);
        groupBox_5 = new QGroupBox(groupBox_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(350, 20, 241, 221));
        groupBox_5->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblImg1 = new QLabel(groupBox_5);
        lblImg1->setObjectName(QString::fromUtf8("lblImg1"));
        lblImg1->setGeometry(QRect(6, 15, 231, 201));
        lblImg1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg1->setFrameShape(QFrame::Panel);
        lblImg1->setFrameShadow(QFrame::Sunken);
        lblImg1->setLineWidth(2);
        lblImg1->setScaledContents(true);
        groupBox_6 = new QGroupBox(groupBox_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(680, 20, 241, 221));
        groupBox_6->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblImg2 = new QLabel(groupBox_6);
        lblImg2->setObjectName(QString::fromUtf8("lblImg2"));
        lblImg2->setGeometry(QRect(6, 15, 231, 201));
        lblImg2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg2->setFrameShape(QFrame::Panel);
        lblImg2->setFrameShadow(QFrame::Sunken);
        lblImg2->setLineWidth(2);
        lblImg2->setScaledContents(true);
        groupBox_7 = new QGroupBox(groupBox_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(1010, 20, 241, 221));
        groupBox_7->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblImg3 = new QLabel(groupBox_7);
        lblImg3->setObjectName(QString::fromUtf8("lblImg3"));
        lblImg3->setGeometry(QRect(6, 15, 231, 201));
        lblImg3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg3->setFrameShape(QFrame::Panel);
        lblImg3->setFrameShadow(QFrame::Sunken);
        lblImg3->setLineWidth(2);
        lblImg3->setScaledContents(true);
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(11, 20, 497, 25));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        dtStart = new QDateTimeEdit(widget1);
        dtStart->setObjectName(QString::fromUtf8("dtStart"));
        dtStart->setCalendarPopup(true);

        horizontalLayout->addWidget(dtStart);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        dtEnd = new QDateTimeEdit(widget1);
        dtEnd->setObjectName(QString::fromUtf8("dtEnd"));
        dtEnd->setCalendarPopup(true);

        horizontalLayout->addWidget(dtEnd);

        btnQuery = new QPushButton(widget1);
        btnQuery->setObjectName(QString::fromUtf8("btnQuery"));

        horizontalLayout->addWidget(btnQuery);

        btnMinimalize = new QPushButton(widget);
        btnMinimalize->setObjectName(QString::fromUtf8("btnMinimalize"));
        btnMinimalize->setGeometry(QRect(613, 710, 75, 23));
        btnMinimalize->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblTitle = new QLabel(CSysLog);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(170, 0, 0);"));
        lblClose = new QLabel(CSysLog);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(1350, 6, 30, 15));

        retranslateUi(CSysLog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CSysLog);
    } // setupUi

    void retranslateUi(QFrame *CSysLog)
    {
        CSysLog->setWindowTitle(QApplication::translate("CSysLog", "\347\263\273\347\273\237\346\227\245\345\277\227", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("CSysLog", "\346\223\215\344\275\234\347\247\215\347\261\273", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableShift->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CSysLog", "\346\223\215\344\275\234\350\200\205", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableShift->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CSysLog", "\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableShift->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CSysLog", "\350\256\260\345\275\225\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableShift->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("CSysLog", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableShift->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("CSysLog", "2", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CSysLog", "\346\215\242\347\217\255\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableCardMgm->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("CSysLog", "\346\223\215\344\275\234\350\200\205", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableCardMgm->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("CSysLog", "\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableCardMgm->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("CSysLog", "\350\256\260\345\275\225\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableCardMgm->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("CSysLog", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableCardMgm->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("CSysLog", "2", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CSysLog", "\345\215\241\347\211\207\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tablDeleteData->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("CSysLog", "\346\223\215\344\275\234\350\200\205", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tablDeleteData->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("CSysLog", "\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tablDeleteData->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("CSysLog", "\350\256\260\345\275\225\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tablDeleteData->verticalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("CSysLog", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tablDeleteData->verticalHeaderItem(1);
        ___qtablewidgetitem14->setText(QApplication::translate("CSysLog", "2", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("CSysLog", "\345\210\240\351\231\244\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableManualGate->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("CSysLog", "\346\223\215\344\275\234\350\200\205", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableManualGate->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QApplication::translate("CSysLog", "\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableManualGate->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QApplication::translate("CSysLog", "\350\256\260\345\275\225\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = tableManualGate->verticalHeaderItem(0);
        ___qtablewidgetitem18->setText(QApplication::translate("CSysLog", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = tableManualGate->verticalHeaderItem(1);
        ___qtablewidgetitem19->setText(QApplication::translate("CSysLog", "2", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("CSysLog", "\346\211\213\345\212\250\345\274\200\345\205\263\351\227\270", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = tableHardware->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QApplication::translate("CSysLog", "\346\223\215\344\275\234\350\200\205", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = tableHardware->horizontalHeaderItem(1);
        ___qtablewidgetitem21->setText(QApplication::translate("CSysLog", "\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = tableHardware->horizontalHeaderItem(2);
        ___qtablewidgetitem22->setText(QApplication::translate("CSysLog", "\350\256\260\345\275\225\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem23 = tableHardware->verticalHeaderItem(0);
        ___qtablewidgetitem23->setText(QApplication::translate("CSysLog", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem24 = tableHardware->verticalHeaderItem(1);
        ___qtablewidgetitem24->setText(QApplication::translate("CSysLog", "2", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("CSysLog", "\347\241\254\344\273\266\350\255\246\345\221\212\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("CSysLog", "\346\211\213\345\212\250\345\274\200\351\227\270\346\212\223\346\213\215", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("CSysLog", "\345\205\245\345\217\243", 0, QApplication::UnicodeUTF8));
        lblImg0->setText(QString());
        groupBox_5->setTitle(QApplication::translate("CSysLog", "\345\207\272\345\217\243", 0, QApplication::UnicodeUTF8));
        lblImg1->setText(QString());
        groupBox_6->setTitle(QApplication::translate("CSysLog", "\345\272\223\344\270\255\345\272\223\345\205\245\345\217\243", 0, QApplication::UnicodeUTF8));
        lblImg2->setText(QString());
        groupBox_7->setTitle(QApplication::translate("CSysLog", "\345\272\223\344\270\255\345\272\223\345\207\272\345\217\243", 0, QApplication::UnicodeUTF8));
        lblImg3->setText(QString());
        label->setText(QApplication::translate("CSysLog", "\345\274\200\345\247\213\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        dtStart->setDisplayFormat(QApplication::translate("CSysLog", "yyyy-MM-dd HH:mm:ss", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CSysLog", "\346\210\252\346\255\242\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        dtEnd->setDisplayFormat(QApplication::translate("CSysLog", "yyyy-MM-dd HH:mm:ss", 0, QApplication::UnicodeUTF8));
        btnQuery->setText(QApplication::translate("CSysLog", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        btnMinimalize->setText(QApplication::translate("CSysLog", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CSysLog: public Ui_CSysLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSLOG_H
