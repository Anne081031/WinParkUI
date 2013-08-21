/********************************************************************************
** Form generated from reading UI file 'cdlgblacklist.ui'
**
** Created: Wed Aug 21 14:16:29 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDLGBLACKLIST_H
#define UI_CDLGBLACKLIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgBlacklist
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtPlate;
    QPushButton *btnAdd;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnDelete;
    QPushButton *btnSave;

    void setupUi(QDialog *CDlgBlacklist)
    {
        if (CDlgBlacklist->objectName().isEmpty())
            CDlgBlacklist->setObjectName(QString::fromUtf8("CDlgBlacklist"));
        CDlgBlacklist->resize(284, 427);
        CDlgBlacklist->setMinimumSize(QSize(284, 427));
        CDlgBlacklist->setMaximumSize(QSize(284, 427));
        tableWidget = new QTableWidget(CDlgBlacklist);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 40, 261, 341));
        layoutWidget = new QWidget(CDlgBlacklist);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 261, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        edtPlate = new QLineEdit(layoutWidget);
        edtPlate->setObjectName(QString::fromUtf8("edtPlate"));

        horizontalLayout->addWidget(edtPlate);

        btnAdd = new QPushButton(layoutWidget);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));

        horizontalLayout->addWidget(btnAdd);

        widget = new QWidget(CDlgBlacklist);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 390, 261, 25));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnDelete = new QPushButton(widget);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

        horizontalLayout_2->addWidget(btnDelete);

        btnSave = new QPushButton(widget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout_2->addWidget(btnSave);


        retranslateUi(CDlgBlacklist);

        QMetaObject::connectSlotsByName(CDlgBlacklist);
    } // setupUi

    void retranslateUi(QDialog *CDlgBlacklist)
    {
        CDlgBlacklist->setWindowTitle(QApplication::translate("CDlgBlacklist", "\351\273\221\345\220\215\345\215\225\350\275\246\347\211\214\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CDlgBlacklist", "\351\273\221\345\220\215\345\215\225\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDlgBlacklist", "\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        btnAdd->setText(QApplication::translate("CDlgBlacklist", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
        btnDelete->setText(QApplication::translate("CDlgBlacklist", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CDlgBlacklist", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgBlacklist: public Ui_CDlgBlacklist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDLGBLACKLIST_H
