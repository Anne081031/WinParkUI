/********************************************************************************
** Form generated from reading UI file 'dlgqueryowner.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGQUERYOWNER_H
#define UI_DLGQUERYOWNER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CDlgQueryOwner
{
public:
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *edt2q;
    QLineEdit *edt1q;
    QLabel *label_2;
    QLineEdit *edt4q;
    QLabel *label;
    QPushButton *btnClose;
    QPlainTextEdit *edt5q;
    QLabel *label_5;
    QLabel *lblTitle;
    QPushButton *btnQuery;
    QLineEdit *edt3q;
    QLabel *lblClose;

    void setupUi(QDialog *CDlgQueryOwner)
    {
        if (CDlgQueryOwner->objectName().isEmpty())
            CDlgQueryOwner->setObjectName(QString::fromUtf8("CDlgQueryOwner"));
        CDlgQueryOwner->resize(463, 350);
        CDlgQueryOwner->setStyleSheet(QString::fromUtf8("background-image: url(D:/WinParkUI/debug/Image/NewIcon/CommonBG-normal.jpg);"));
        label_3 = new QLabel(CDlgQueryOwner);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(51, 120, 54, 12));
        label_3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label_4 = new QLabel(CDlgQueryOwner);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(51, 150, 61, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        edt2q = new QLineEdit(CDlgQueryOwner);
        edt2q->setObjectName(QString::fromUtf8("edt2q"));
        edt2q->setGeometry(QRect(120, 90, 271, 20));
        edt2q->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        edt1q = new QLineEdit(CDlgQueryOwner);
        edt1q->setObjectName(QString::fromUtf8("edt1q"));
        edt1q->setGeometry(QRect(120, 61, 271, 20));
        edt1q->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label_2 = new QLabel(CDlgQueryOwner);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(51, 90, 54, 12));
        label_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        edt4q = new QLineEdit(CDlgQueryOwner);
        edt4q->setObjectName(QString::fromUtf8("edt4q"));
        edt4q->setGeometry(QRect(120, 150, 271, 20));
        edt4q->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label = new QLabel(CDlgQueryOwner);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(51, 61, 54, 12));
        label->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnClose = new QPushButton(CDlgQueryOwner);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(337, 290, 75, 23));
        btnClose->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        edt5q = new QPlainTextEdit(CDlgQueryOwner);
        edt5q->setObjectName(QString::fromUtf8("edt5q"));
        edt5q->setGeometry(QRect(120, 180, 271, 64));
        edt5q->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        edt5q->setReadOnly(true);
        label_5 = new QLabel(CDlgQueryOwner);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(51, 180, 54, 12));
        label_5->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblTitle = new QLabel(CDlgQueryOwner);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(20, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(85, 0, 0);"));
        btnQuery = new QPushButton(CDlgQueryOwner);
        btnQuery->setObjectName(QString::fromUtf8("btnQuery"));
        btnQuery->setGeometry(QRect(256, 290, 75, 23));
        btnQuery->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        edt3q = new QLineEdit(CDlgQueryOwner);
        edt3q->setObjectName(QString::fromUtf8("edt3q"));
        edt3q->setGeometry(QRect(120, 120, 271, 20));
        edt3q->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblClose = new QLabel(CDlgQueryOwner);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(423, 6, 30, 15));

        retranslateUi(CDlgQueryOwner);

        QMetaObject::connectSlotsByName(CDlgQueryOwner);
    } // setupUi

    void retranslateUi(QDialog *CDlgQueryOwner)
    {
        CDlgQueryOwner->setWindowTitle(QApplication::translate("CDlgQueryOwner", "\346\237\245\350\257\242\344\270\232\344\270\273\350\265\204\346\226\231", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CDlgQueryOwner", "\350\275\246\347\211\214\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CDlgQueryOwner", "\344\270\232\344\270\273\345\247\223\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        edt2q->setStatusTip(QApplication::translate("CDlgQueryOwner", " and c.cardno like '%%1%'", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        edt1q->setStatusTip(QApplication::translate("CDlgQueryOwner", " and c.cardselfno like '%%1%'", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_2->setText(QApplication::translate("CDlgQueryOwner", "\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        edt4q->setStatusTip(QApplication::translate("CDlgQueryOwner", " and a.username like '%%1%'", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label->setText(QApplication::translate("CDlgQueryOwner", "\350\207\252\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("CDlgQueryOwner", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CDlgQueryOwner", "\345\244\207\346\263\250\357\274\232", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        btnQuery->setText(QApplication::translate("CDlgQueryOwner", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        edt3q->setStatusTip(QApplication::translate("CDlgQueryOwner", " and b.carcp like '%%1%'", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CDlgQueryOwner: public Ui_CDlgQueryOwner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGQUERYOWNER_H
