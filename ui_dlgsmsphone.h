/********************************************************************************
** Form generated from reading UI file 'dlgsmsphone.ui'
**
** Created: Fri Feb 1 10:57:16 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSMSPHONE_H
#define UI_DLGSMSPHONE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgSmsPhone
{
public:
    QTableWidget *tableWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAllSelect;
    QPushButton *btnAllUnselect;
    QPushButton *btnOK;

    void setupUi(QDialog *CDlgSmsPhone)
    {
        if (CDlgSmsPhone->objectName().isEmpty())
            CDlgSmsPhone->setObjectName(QString::fromUtf8("CDlgSmsPhone"));
        CDlgSmsPhone->resize(554, 374);
        tableWidget = new QTableWidget(CDlgSmsPhone);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(15, 11, 521, 301));
        widget = new QWidget(CDlgSmsPhone);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(300, 330, 239, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAllSelect = new QPushButton(widget);
        btnAllSelect->setObjectName(QString::fromUtf8("btnAllSelect"));

        horizontalLayout->addWidget(btnAllSelect);

        btnAllUnselect = new QPushButton(widget);
        btnAllUnselect->setObjectName(QString::fromUtf8("btnAllUnselect"));

        horizontalLayout->addWidget(btnAllUnselect);

        btnOK = new QPushButton(widget);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout->addWidget(btnOK);


        retranslateUi(CDlgSmsPhone);

        QMetaObject::connectSlotsByName(CDlgSmsPhone);
    } // setupUi

    void retranslateUi(QDialog *CDlgSmsPhone)
    {
        CDlgSmsPhone->setWindowTitle(QApplication::translate("CDlgSmsPhone", "\344\270\232\344\270\273\347\237\255\344\277\241\347\224\265\350\257\235", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CDlgSmsPhone", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CDlgSmsPhone", "\350\275\246\347\211\214\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CDlgSmsPhone", "\344\270\232\344\270\273", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CDlgSmsPhone", "\347\224\265\350\257\235", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("CDlgSmsPhone", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        btnAllSelect->setText(QApplication::translate("CDlgSmsPhone", "\345\205\250\351\200\211", 0, QApplication::UnicodeUTF8));
        btnAllUnselect->setText(QApplication::translate("CDlgSmsPhone", "\345\205\250\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        btnOK->setText(QApplication::translate("CDlgSmsPhone", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgSmsPhone: public Ui_CDlgSmsPhone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSMSPHONE_H
