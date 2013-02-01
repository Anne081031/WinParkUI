/********************************************************************************
** Form generated from reading UI file 'reewalrecords.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REEWALRECORDS_H
#define UI_REEWALRECORDS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRenewalRecords
{
public:
    QWidget *widget;
    QTableWidget *tableRenewalRecord;
    QPushButton *btnMinimalize;
    QLabel *lblTitle;
    QLabel *lblClose;

    void setupUi(QFrame *CRenewalRecords)
    {
        if (CRenewalRecords->objectName().isEmpty())
            CRenewalRecords->setObjectName(QString::fromUtf8("CRenewalRecords"));
        CRenewalRecords->resize(1390, 818);
        CRenewalRecords->setStyleSheet(QString::fromUtf8("background-image:url(D:/WinParkUI/debug/Image/NewIcon/CommonBigBG-normal.jpg);"));
        CRenewalRecords->setFrameShape(QFrame::StyledPanel);
        CRenewalRecords->setFrameShadow(QFrame::Raised);
        widget = new QWidget(CRenewalRecords);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 60, 1301, 731));
        widget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tableRenewalRecord = new QTableWidget(widget);
        if (tableRenewalRecord->columnCount() < 11)
            tableRenewalRecord->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableRenewalRecord->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableRenewalRecord->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableRenewalRecord->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableRenewalRecord->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableRenewalRecord->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableRenewalRecord->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableRenewalRecord->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableRenewalRecord->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableRenewalRecord->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableRenewalRecord->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableRenewalRecord->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        tableRenewalRecord->setObjectName(QString::fromUtf8("tableRenewalRecord"));
        tableRenewalRecord->setGeometry(QRect(0, 0, 1301, 671));
        tableRenewalRecord->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnMinimalize = new QPushButton(widget);
        btnMinimalize->setObjectName(QString::fromUtf8("btnMinimalize"));
        btnMinimalize->setGeometry(QRect(683, 700, 75, 23));
        btnMinimalize->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblTitle = new QLabel(CRenewalRecords);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(170, 0, 0);"));
        lblClose = new QLabel(CRenewalRecords);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(1351, 7, 30, 15));

        retranslateUi(CRenewalRecords);

        QMetaObject::connectSlotsByName(CRenewalRecords);
    } // setupUi

    void retranslateUi(QFrame *CRenewalRecords)
    {
        CRenewalRecords->setWindowTitle(QApplication::translate("CRenewalRecords", "\347\273\255\350\264\271\347\272\252\345\275\225", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableRenewalRecord->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CRenewalRecords", "\346\224\266\350\264\271\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableRenewalRecord->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CRenewalRecords", "\346\224\266\350\264\271\347\247\215\347\261\273", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableRenewalRecord->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CRenewalRecords", "\346\224\266\350\264\271\351\207\221\351\242\235", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableRenewalRecord->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CRenewalRecords", "\347\273\255\350\264\271\346\227\266\351\225\277(\345\244\251)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableRenewalRecord->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("CRenewalRecords", "\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableRenewalRecord->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("CRenewalRecords", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableRenewalRecord->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("CRenewalRecords", "\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableRenewalRecord->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("CRenewalRecords", "\345\215\225\344\275\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableRenewalRecord->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("CRenewalRecords", "\346\224\266\350\264\271\344\272\272\345\221\230", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableRenewalRecord->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("CRenewalRecords", "\345\215\241\347\211\207\350\207\252\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableRenewalRecord->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("CRenewalRecords", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        btnMinimalize->setText(QApplication::translate("CRenewalRecords", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CRenewalRecords: public Ui_CRenewalRecords {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REEWALRECORDS_H
