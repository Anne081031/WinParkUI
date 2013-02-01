/********************************************************************************
** Form generated from reading UI file 'dlgserach.ui'
**
** Created: Fri Feb 1 10:57:16 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSERACH_H
#define UI_DLGSERACH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgSerach
{
public:
    QLabel *lblTitle;
    QTableWidget *tabResult;
    QPushButton *btnClose;
    QLabel *lblClose;
    QLineEdit *edtOwner;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *edtCardselfno;
    QLabel *label;
    QLineEdit *edtCardno;
    QLabel *label_3;
    QLineEdit *edtPlate;

    void setupUi(QDialog *CDlgSerach)
    {
        if (CDlgSerach->objectName().isEmpty())
            CDlgSerach->setObjectName(QString::fromUtf8("CDlgSerach"));
        CDlgSerach->resize(730, 692);
        CDlgSerach->setStyleSheet(QString::fromUtf8("background-image:url(D:/WinParkUI/debug/Image/NewIcon/CommonMiddleBG-normal.jpg);"));
        lblTitle = new QLabel(CDlgSerach);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(20, 5, 141, 21));
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tabResult = new QTableWidget(CDlgSerach);
        if (tabResult->columnCount() < 14)
            tabResult->setColumnCount(14);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        tabResult->setObjectName(QString::fromUtf8("tabResult"));
        tabResult->setGeometry(QRect(42, 90, 641, 561));
        tabResult->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnClose = new QPushButton(CDlgSerach);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(608, 50, 75, 23));
        btnClose->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblClose = new QLabel(CDlgSerach);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(690, 6, 30, 15));
        edtOwner = new QLineEdit(CDlgSerach);
        edtOwner->setObjectName(QString::fromUtf8("edtOwner"));
        edtOwner->setGeometry(QRect(369, 52, 81, 20));
        edtOwner->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label_4 = new QLabel(CDlgSerach);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(327, 54, 36, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label_2 = new QLabel(CDlgSerach);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(174, 55, 60, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        edtCardselfno = new QLineEdit(CDlgSerach);
        edtCardselfno->setObjectName(QString::fromUtf8("edtCardselfno"));
        edtCardselfno->setGeometry(QRect(240, 52, 80, 20));
        edtCardselfno->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label = new QLabel(CDlgSerach);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(44, 55, 36, 16));
        label->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        edtCardno = new QLineEdit(CDlgSerach);
        edtCardno->setObjectName(QString::fromUtf8("edtCardno"));
        edtCardno->setGeometry(QRect(86, 52, 80, 20));
        edtCardno->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label_3 = new QLabel(CDlgSerach);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(457, 55, 48, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        edtPlate = new QLineEdit(CDlgSerach);
        edtPlate->setObjectName(QString::fromUtf8("edtPlate"));
        edtPlate->setGeometry(QRect(511, 52, 80, 20));
        edtPlate->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        retranslateUi(CDlgSerach);

        QMetaObject::connectSlotsByName(CDlgSerach);
    } // setupUi

    void retranslateUi(QDialog *CDlgSerach)
    {
        CDlgSerach->setWindowTitle(QString());
        lblTitle->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tabResult->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CDlgSerach", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tabResult->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CDlgSerach", "\345\274\200\345\247\213\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tabResult->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CDlgSerach", "\346\210\252\346\255\242\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tabResult->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CDlgSerach", "\345\215\241\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tabResult->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("CDlgSerach", "\345\215\241\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tabResult->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("CDlgSerach", "\345\215\241\350\207\252\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tabResult->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("CDlgSerach", "\345\215\241\345\244\207\346\263\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tabResult->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("CDlgSerach", "\345\210\266\345\215\241\344\272\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tabResult->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("CDlgSerach", "\344\270\232\344\270\273", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tabResult->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("CDlgSerach", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tabResult->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("CDlgSerach", "\344\270\232\344\270\273\347\224\265\350\257\235", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tabResult->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("CDlgSerach", "\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tabResult->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("CDlgSerach", "\350\275\246\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tabResult->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QApplication::translate("CDlgSerach", "\350\241\214\351\251\266\350\257\201\345\217\267", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tabResult->setToolTip(QApplication::translate("CDlgSerach", "\345\217\214\345\207\273\345\215\225\345\205\203\346\240\274\357\274\214\345\256\232\344\275\215\345\210\260\347\233\270\345\272\224\347\232\204\345\215\241\350\256\260\345\275\225\343\200\202", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnClose->setText(QApplication::translate("CDlgSerach", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        lblClose->setText(QString());
        label_4->setText(QApplication::translate("CDlgSerach", "\344\270\232\344\270\273\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CDlgSerach", "\345\215\241\350\207\252\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDlgSerach", "\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CDlgSerach", "\350\275\246\347\211\214\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgSerach: public Ui_CDlgSerach {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSERACH_H
