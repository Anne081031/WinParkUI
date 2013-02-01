/********************************************************************************
** Form generated from reading UI file 'batchsetcardaccess.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHSETCARDACCESS_H
#define UI_BATCHSETCARDACCESS_H

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
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CBatchSetCardAccess
{
public:
    QWidget *widget;
    QWidget *widget_2;
    QTableWidget *tableBatchChannel;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTimeEdit *timeStart;
    QTimeEdit *timeEnd;
    QPushButton *btnAllTime;
    QPushButton *btnForbidden;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnAllUnselected_2;
    QPushButton *btnAllSecleted_2;
    QTabWidget *tableWidget;
    QWidget *tab;
    QTableWidget *tableBatchMonth;
    QWidget *tab_3;
    QTableWidget *tableBatchTime;
    QWidget *tab_2;
    QTableWidget *tableBatchValue;
    QWidget *widget_3;
    QPushButton *btnAllUnselected;
    QPushButton *btnAllSecleted;
    QPushButton *btnMinimalize;
    QPushButton *btnSerach;
    QPushButton *btnOk;
    QLabel *lblTitle;
    QLabel *lblClose;

    void setupUi(QFrame *CBatchSetCardAccess)
    {
        if (CBatchSetCardAccess->objectName().isEmpty())
            CBatchSetCardAccess->setObjectName(QString::fromUtf8("CBatchSetCardAccess"));
        CBatchSetCardAccess->resize(1390, 818);
        CBatchSetCardAccess->setStyleSheet(QString::fromUtf8("background-image:url(D:/WinParkUI/debug/Image/NewIcon/CommonBigBG-normal.jpg);"));
        CBatchSetCardAccess->setFrameShape(QFrame::StyledPanel);
        CBatchSetCardAccess->setFrameShadow(QFrame::Raised);
        widget = new QWidget(CBatchSetCardAccess);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 60, 1301, 731));
        widget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(1010, 0, 301, 661));
        widget_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tableBatchChannel = new QTableWidget(widget_2);
        if (tableBatchChannel->columnCount() < 3)
            tableBatchChannel->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableBatchChannel->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableBatchChannel->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableBatchChannel->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableBatchChannel->setObjectName(QString::fromUtf8("tableBatchChannel"));
        tableBatchChannel->setGeometry(QRect(10, 20, 281, 481));
        tableBatchChannel->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 510, 281, 141));
        groupBox->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 20, 86, 106));
        layoutWidget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        timeStart = new QTimeEdit(layoutWidget);
        timeStart->setObjectName(QString::fromUtf8("timeStart"));
        timeStart->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        verticalLayout->addWidget(timeStart);

        timeEnd = new QTimeEdit(layoutWidget);
        timeEnd->setObjectName(QString::fromUtf8("timeEnd"));
        timeEnd->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        timeEnd->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(23, 59, 59)));

        verticalLayout->addWidget(timeEnd);

        btnAllTime = new QPushButton(layoutWidget);
        btnAllTime->setObjectName(QString::fromUtf8("btnAllTime"));
        btnAllTime->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        verticalLayout->addWidget(btnAllTime);

        btnForbidden = new QPushButton(layoutWidget);
        btnForbidden->setObjectName(QString::fromUtf8("btnForbidden"));
        btnForbidden->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        verticalLayout->addWidget(btnForbidden);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(60, 20, 56, 41));
        layoutWidget_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        verticalLayout_2->addWidget(label_2);

        btnAllUnselected_2 = new QPushButton(groupBox);
        btnAllUnselected_2->setObjectName(QString::fromUtf8("btnAllUnselected_2"));
        btnAllUnselected_2->setGeometry(QRect(60, 102, 75, 23));
        btnAllUnselected_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnAllSecleted_2 = new QPushButton(groupBox);
        btnAllSecleted_2->setObjectName(QString::fromUtf8("btnAllSecleted_2"));
        btnAllSecleted_2->setGeometry(QRect(60, 73, 75, 23));
        btnAllSecleted_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tableWidget = new QTabWidget(widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 1001, 661));
        tableWidget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableBatchMonth = new QTableWidget(tab);
        if (tableBatchMonth->columnCount() < 4)
            tableBatchMonth->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableBatchMonth->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableBatchMonth->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableBatchMonth->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableBatchMonth->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        tableBatchMonth->setObjectName(QString::fromUtf8("tableBatchMonth"));
        tableBatchMonth->setGeometry(QRect(10, 10, 971, 621));
        tableBatchMonth->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tableWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tableBatchTime = new QTableWidget(tab_3);
        if (tableBatchTime->columnCount() < 4)
            tableBatchTime->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableBatchTime->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableBatchTime->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableBatchTime->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableBatchTime->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        tableBatchTime->setObjectName(QString::fromUtf8("tableBatchTime"));
        tableBatchTime->setGeometry(QRect(10, 10, 971, 621));
        tableWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableBatchValue = new QTableWidget(tab_2);
        if (tableBatchValue->columnCount() < 4)
            tableBatchValue->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableBatchValue->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableBatchValue->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableBatchValue->setHorizontalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableBatchValue->setHorizontalHeaderItem(3, __qtablewidgetitem14);
        tableBatchValue->setObjectName(QString::fromUtf8("tableBatchValue"));
        tableBatchValue->setGeometry(QRect(10, 10, 971, 621));
        tableWidget->addTab(tab_2, QString());
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(405, 680, 401, 31));
        widget_3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnAllUnselected = new QPushButton(widget_3);
        btnAllUnselected->setObjectName(QString::fromUtf8("btnAllUnselected"));
        btnAllUnselected->setGeometry(QRect(100, 0, 75, 23));
        btnAllUnselected->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnAllSecleted = new QPushButton(widget_3);
        btnAllSecleted->setObjectName(QString::fromUtf8("btnAllSecleted"));
        btnAllSecleted->setGeometry(QRect(0, 0, 75, 23));
        btnAllSecleted->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnMinimalize = new QPushButton(widget_3);
        btnMinimalize->setObjectName(QString::fromUtf8("btnMinimalize"));
        btnMinimalize->setGeometry(QRect(210, 0, 75, 23));
        btnMinimalize->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnSerach = new QPushButton(widget_3);
        btnSerach->setObjectName(QString::fromUtf8("btnSerach"));
        btnSerach->setGeometry(QRect(320, 0, 75, 23));
        btnOk = new QPushButton(widget);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setGeometry(QRect(1070, 680, 75, 23));
        btnOk->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblTitle = new QLabel(CBatchSetCardAccess);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(170, 0, 0);"));
        lblClose = new QLabel(CBatchSetCardAccess);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(1350, 7, 30, 15));

        retranslateUi(CBatchSetCardAccess);

        tableWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CBatchSetCardAccess);
    } // setupUi

    void retranslateUi(QFrame *CBatchSetCardAccess)
    {
        CBatchSetCardAccess->setWindowTitle(QApplication::translate("CBatchSetCardAccess", "\346\211\271\351\207\217\350\256\276\347\275\256\345\215\241\347\211\207\350\277\233\345\207\272\346\235\203", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableBatchChannel->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CBatchSetCardAccess", "\351\200\232\351\201\223\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableBatchChannel->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CBatchSetCardAccess", "id", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableBatchChannel->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CBatchSetCardAccess", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CBatchSetCardAccess", "\346\227\266\351\227\264\346\256\265\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        timeStart->setDisplayFormat(QApplication::translate("CBatchSetCardAccess", "HH:mm:ss", 0, QApplication::UnicodeUTF8));
        timeEnd->setDisplayFormat(QApplication::translate("CBatchSetCardAccess", "HH:mm:ss", 0, QApplication::UnicodeUTF8));
        btnAllTime->setText(QApplication::translate("CBatchSetCardAccess", "\345\205\250\346\227\266\346\256\265", 0, QApplication::UnicodeUTF8));
        btnForbidden->setText(QApplication::translate("CBatchSetCardAccess", "\347\246\201\346\255\242\351\200\232\350\277\207", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CBatchSetCardAccess", "\350\265\267\345\247\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CBatchSetCardAccess", "\347\273\210\346\255\242\357\274\232", 0, QApplication::UnicodeUTF8));
        btnAllUnselected_2->setText(QApplication::translate("CBatchSetCardAccess", "\345\205\250\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        btnAllSecleted_2->setText(QApplication::translate("CBatchSetCardAccess", "\345\205\250\351\200\211\344\270\255", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableBatchMonth->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("CBatchSetCardAccess", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableBatchMonth->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("CBatchSetCardAccess", "\350\207\252\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableBatchMonth->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("CBatchSetCardAccess", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableBatchMonth->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("CBatchSetCardAccess", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        tableWidget->setTabText(tableWidget->indexOf(tab), QApplication::translate("CBatchSetCardAccess", "\346\234\210\347\247\237\345\215\241", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableBatchTime->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("CBatchSetCardAccess", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableBatchTime->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("CBatchSetCardAccess", "\350\207\252\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableBatchTime->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("CBatchSetCardAccess", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableBatchTime->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("CBatchSetCardAccess", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        tableWidget->setTabText(tableWidget->indexOf(tab_3), QApplication::translate("CBatchSetCardAccess", "\350\256\241\346\227\266\345\215\241", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableBatchValue->horizontalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("CBatchSetCardAccess", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableBatchValue->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QApplication::translate("CBatchSetCardAccess", "\350\207\252\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableBatchValue->horizontalHeaderItem(2);
        ___qtablewidgetitem13->setText(QApplication::translate("CBatchSetCardAccess", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableBatchValue->horizontalHeaderItem(3);
        ___qtablewidgetitem14->setText(QApplication::translate("CBatchSetCardAccess", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        tableWidget->setTabText(tableWidget->indexOf(tab_2), QApplication::translate("CBatchSetCardAccess", "\345\202\250\345\200\274\345\215\241", 0, QApplication::UnicodeUTF8));
        btnAllUnselected->setText(QApplication::translate("CBatchSetCardAccess", "\345\205\250\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        btnAllSecleted->setText(QApplication::translate("CBatchSetCardAccess", "\345\205\250\351\200\211\344\270\255", 0, QApplication::UnicodeUTF8));
        btnMinimalize->setText(QApplication::translate("CBatchSetCardAccess", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        btnSerach->setText(QApplication::translate("CBatchSetCardAccess", "\346\237\245\346\211\276", 0, QApplication::UnicodeUTF8));
        btnOk->setText(QApplication::translate("CBatchSetCardAccess", "\347\241\256\350\256\244\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CBatchSetCardAccess: public Ui_CBatchSetCardAccess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHSETCARDACCESS_H
