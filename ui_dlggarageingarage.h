/********************************************************************************
** Form generated from reading UI file 'dlggarageingarage.ui'
**
** Created: Fri Feb 1 10:57:16 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGGARAGEINGARAGE_H
#define UI_DLGGARAGEINGARAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgGarageInGarage
{
public:
    QLabel *lblClose;
    QLabel *lblTitle;
    QTableWidget *tabRecord;

    void setupUi(QDialog *CDlgGarageInGarage)
    {
        if (CDlgGarageInGarage->objectName().isEmpty())
            CDlgGarageInGarage->setObjectName(QString::fromUtf8("CDlgGarageInGarage"));
        CDlgGarageInGarage->resize(730, 692);
        CDlgGarageInGarage->setStyleSheet(QString::fromUtf8("background-image: url(D:/WinParkUI/debug/Image/NewIcon/CommonMiddleBG-normal.jpg);"));
        lblClose = new QLabel(CDlgGarageInGarage);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(688, 5, 31, 16));
        lblTitle = new QLabel(CDlgGarageInGarage);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(20, 5, 141, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"color: rgb(85, 0, 0);"));
        tabRecord = new QTableWidget(CDlgGarageInGarage);
        if (tabRecord->columnCount() < 5)
            tabRecord->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabRecord->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabRecord->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabRecord->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabRecord->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabRecord->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tabRecord->setObjectName(QString::fromUtf8("tabRecord"));
        tabRecord->setGeometry(QRect(42, 56, 641, 600));
        tabRecord->setStyleSheet(QString::fromUtf8("background-image: url(none);"));

        retranslateUi(CDlgGarageInGarage);

        QMetaObject::connectSlotsByName(CDlgGarageInGarage);
    } // setupUi

    void retranslateUi(QDialog *CDlgGarageInGarage)
    {
        CDlgGarageInGarage->setWindowTitle(QApplication::translate("CDlgGarageInGarage", "\345\272\223\344\270\255\345\272\223\350\277\233\345\207\272\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        lblClose->setText(QString());
        lblTitle->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tabRecord->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CDlgGarageInGarage", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tabRecord->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CDlgGarageInGarage", "\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tabRecord->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CDlgGarageInGarage", "\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tabRecord->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CDlgGarageInGarage", "\350\277\233\346\210\226\345\207\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tabRecord->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("CDlgGarageInGarage", "\345\255\220\345\272\223\347\272\247\345\210\253", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgGarageInGarage: public Ui_CDlgGarageInGarage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGGARAGEINGARAGE_H
