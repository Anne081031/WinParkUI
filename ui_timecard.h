/********************************************************************************
** Form generated from reading UI file 'timecard.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMECARD_H
#define UI_TIMECARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CTimeCard
{
public:
    QWidget *widget;
    QTableWidget *tableTime;
    QTabWidget *tabWidget;
    QWidget *tab_7;
    QTableWidget *tableAccess;
    QGroupBox *groupBox_8;
    QLabel *lblImg1;
    QGroupBox *groupBox_14;
    QLabel *lblImg2;
    QGroupBox *groupBox_15;
    QLabel *lblImg3;
    QGroupBox *groupBox_16;
    QLabel *lblImg4;
    QWidget *tab_8;
    QPushButton *pushButton_8;
    QTableWidget *tableEntranceRight;
    QLabel *lblCardNo;
    QPushButton *btnMinimalize;
    QLabel *lblTitle;
    QLabel *lblClose;

    void setupUi(QFrame *CTimeCard)
    {
        if (CTimeCard->objectName().isEmpty())
            CTimeCard->setObjectName(QString::fromUtf8("CTimeCard"));
        CTimeCard->resize(1390, 818);
        CTimeCard->setStyleSheet(QString::fromUtf8("background-image:url(D:/WinParkUI/debug/Image/NewIcon/CommonBigBG-normal.jpg);"));
        CTimeCard->setFrameShape(QFrame::StyledPanel);
        CTimeCard->setFrameShadow(QFrame::Raised);
        widget = new QWidget(CTimeCard);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 60, 1301, 731));
        widget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tableTime = new QTableWidget(widget);
        if (tableTime->columnCount() < 5)
            tableTime->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableTime->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableTime->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableTime->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableTime->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableTime->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableTime->setObjectName(QString::fromUtf8("tableTime"));
        tableTime->setGeometry(QRect(0, 0, 1301, 221));
        tableTime->setContextMenuPolicy(Qt::CustomContextMenu);
        tableTime->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 230, 1301, 451));
        tabWidget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tableAccess = new QTableWidget(tab_7);
        if (tableAccess->columnCount() < 4)
            tableAccess->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableAccess->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableAccess->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableAccess->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableAccess->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        tableAccess->setObjectName(QString::fromUtf8("tableAccess"));
        tableAccess->setGeometry(QRect(10, 10, 841, 411));
        tableAccess->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox_8 = new QGroupBox(tab_7);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(860, 0, 211, 211));
        groupBox_8->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblImg1 = new QLabel(groupBox_8);
        lblImg1->setObjectName(QString::fromUtf8("lblImg1"));
        lblImg1->setGeometry(QRect(5, 16, 201, 191));
        lblImg1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg1->setFrameShape(QFrame::Panel);
        lblImg1->setFrameShadow(QFrame::Sunken);
        lblImg1->setLineWidth(2);
        lblImg1->setScaledContents(true);
        groupBox_14 = new QGroupBox(tab_7);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setGeometry(QRect(1080, 0, 211, 211));
        groupBox_14->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblImg2 = new QLabel(groupBox_14);
        lblImg2->setObjectName(QString::fromUtf8("lblImg2"));
        lblImg2->setGeometry(QRect(5, 16, 201, 191));
        lblImg2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg2->setFrameShape(QFrame::Panel);
        lblImg2->setFrameShadow(QFrame::Sunken);
        lblImg2->setLineWidth(2);
        lblImg2->setScaledContents(true);
        groupBox_15 = new QGroupBox(tab_7);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setGeometry(QRect(860, 210, 211, 211));
        groupBox_15->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblImg3 = new QLabel(groupBox_15);
        lblImg3->setObjectName(QString::fromUtf8("lblImg3"));
        lblImg3->setGeometry(QRect(5, 16, 201, 191));
        lblImg3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg3->setFrameShape(QFrame::Panel);
        lblImg3->setFrameShadow(QFrame::Sunken);
        lblImg3->setLineWidth(2);
        lblImg3->setScaledContents(true);
        groupBox_16 = new QGroupBox(tab_7);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        groupBox_16->setGeometry(QRect(1080, 210, 211, 211));
        groupBox_16->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblImg4 = new QLabel(groupBox_16);
        lblImg4->setObjectName(QString::fromUtf8("lblImg4"));
        lblImg4->setGeometry(QRect(5, 16, 201, 191));
        lblImg4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg4->setFrameShape(QFrame::Panel);
        lblImg4->setFrameShadow(QFrame::Sunken);
        lblImg4->setLineWidth(2);
        lblImg4->setScaledContents(true);
        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        pushButton_8 = new QPushButton(tab_8);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(1200, 400, 75, 23));
        tableEntranceRight = new QTableWidget(tab_8);
        if (tableEntranceRight->columnCount() < 4)
            tableEntranceRight->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableEntranceRight->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableEntranceRight->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableEntranceRight->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableEntranceRight->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        tableEntranceRight->setObjectName(QString::fromUtf8("tableEntranceRight"));
        tableEntranceRight->setGeometry(QRect(10, 10, 1271, 371));
        lblCardNo = new QLabel(tab_8);
        lblCardNo->setObjectName(QString::fromUtf8("lblCardNo"));
        lblCardNo->setGeometry(QRect(70, 400, 54, 12));
        tabWidget->addTab(tab_8, QString());
        btnMinimalize = new QPushButton(widget);
        btnMinimalize->setObjectName(QString::fromUtf8("btnMinimalize"));
        btnMinimalize->setGeometry(QRect(683, 700, 75, 23));
        btnMinimalize->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblTitle = new QLabel(CTimeCard);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(170, 0, 0);"));
        lblClose = new QLabel(CTimeCard);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(1350, 7, 30, 15));

        retranslateUi(CTimeCard);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CTimeCard);
    } // setupUi

    void retranslateUi(QFrame *CTimeCard)
    {
        CTimeCard->setWindowTitle(QApplication::translate("CTimeCard", "\350\256\241\346\227\266\345\215\241", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableTime->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CTimeCard", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableTime->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CTimeCard", "\345\215\241\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableTime->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CTimeCard", "\346\224\266\350\264\271\346\240\207\345\207\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableTime->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CTimeCard", "\345\215\241\347\211\207\350\207\252\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableTime->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("CTimeCard", "\345\215\241\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableAccess->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("CTimeCard", "\350\277\233\345\205\245\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableAccess->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("CTimeCard", "\350\277\233\345\205\245\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableAccess->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("CTimeCard", "\347\246\273\345\274\200\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableAccess->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("CTimeCard", "\347\246\273\345\274\200\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("CTimeCard", "\345\233\276\345\203\2171", 0, QApplication::UnicodeUTF8));
        lblImg1->setText(QString());
        groupBox_14->setTitle(QApplication::translate("CTimeCard", "\345\233\276\345\203\2172", 0, QApplication::UnicodeUTF8));
        lblImg2->setText(QString());
        groupBox_15->setTitle(QApplication::translate("CTimeCard", "\345\233\276\345\203\2173", 0, QApplication::UnicodeUTF8));
        lblImg3->setText(QString());
        groupBox_16->setTitle(QApplication::translate("CTimeCard", "\345\233\276\345\203\2174", 0, QApplication::UnicodeUTF8));
        lblImg4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("CTimeCard", "\346\234\200\350\277\221\350\277\233\345\207\272\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("CTimeCard", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableEntranceRight->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("CTimeCard", "\351\200\232\351\201\223\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableEntranceRight->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("CTimeCard", "\350\277\233\345\205\245\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableEntranceRight->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("CTimeCard", "\347\246\273\345\274\200\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableEntranceRight->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QApplication::translate("CTimeCard", "ID", 0, QApplication::UnicodeUTF8));
        lblCardNo->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("CTimeCard", "\345\207\272\345\205\245\346\235\203\351\231\220", 0, QApplication::UnicodeUTF8));
        btnMinimalize->setText(QApplication::translate("CTimeCard", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CTimeCard: public Ui_CTimeCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMECARD_H
