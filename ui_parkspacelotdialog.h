/********************************************************************************
** Form generated from reading UI file 'parkspacelotdialog.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARKSPACELOTDIALOG_H
#define UI_PARKSPACELOTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CParkSpaceLotDialog
{
public:
    QGroupBox *gb;
    QTableWidget *tableWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *CParkSpaceLotDialog)
    {
        if (CParkSpaceLotDialog->objectName().isEmpty())
            CParkSpaceLotDialog->setObjectName(QString::fromUtf8("CParkSpaceLotDialog"));
        CParkSpaceLotDialog->resize(245, 381);
        CParkSpaceLotDialog->setMaximumSize(QSize(304, 516));
        gb = new QGroupBox(CParkSpaceLotDialog);
        gb->setObjectName(QString::fromUtf8("gb"));
        gb->setGeometry(QRect(20, 10, 201, 321));
        tableWidget = new QTableWidget(gb);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 20, 181, 281));
        widget = new QWidget(CParkSpaceLotDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 340, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnOk = new QPushButton(widget);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout->addWidget(btnOk);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        retranslateUi(CParkSpaceLotDialog);

        QMetaObject::connectSlotsByName(CParkSpaceLotDialog);
    } // setupUi

    void retranslateUi(QDialog *CParkSpaceLotDialog)
    {
        CParkSpaceLotDialog->setWindowTitle(QApplication::translate("CParkSpaceLotDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        gb->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CParkSpaceLotDialog", "New Column", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("CParkSpaceLotDialog", "New Row", 0, QApplication::UnicodeUTF8));
        btnOk->setText(QApplication::translate("CParkSpaceLotDialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CParkSpaceLotDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CParkSpaceLotDialog: public Ui_CParkSpaceLotDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARKSPACELOTDIALOG_H
