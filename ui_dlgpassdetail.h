/********************************************************************************
** Form generated from reading UI file 'dlgpassdetail.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPASSDETAIL_H
#define UI_DLGPASSDETAIL_H

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

class Ui_CDlgPassDetail
{
public:
    QLabel *lblTitle;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *btnQuery;
    QPushButton *btnClose;
    QLabel *lblClose;

    void setupUi(QDialog *CDlgPassDetail)
    {
        if (CDlgPassDetail->objectName().isEmpty())
            CDlgPassDetail->setObjectName(QString::fromUtf8("CDlgPassDetail"));
        CDlgPassDetail->resize(463, 350);
        CDlgPassDetail->setAutoFillBackground(false);
        CDlgPassDetail->setStyleSheet(QString::fromUtf8("background-image: url(D:/WinParkUI/debug/Image/NewIcon/CommonBG-normal.jpg);\n"
"background-repeat: no-repeat;"));
        lblTitle = new QLabel(CDlgPassDetail);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(20, 5, 141, 21));
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label = new QLabel(CDlgPassDetail);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(51, 61, 54, 12));
        label->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label_2 = new QLabel(CDlgPassDetail);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(51, 90, 54, 12));
        label_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label_3 = new QLabel(CDlgPassDetail);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(51, 120, 54, 12));
        label_3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label_4 = new QLabel(CDlgPassDetail);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(51, 150, 61, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label_5 = new QLabel(CDlgPassDetail);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(51, 180, 54, 12));
        label_5->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        plainTextEdit = new QPlainTextEdit(CDlgPassDetail);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(120, 180, 271, 64));
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        plainTextEdit->setReadOnly(true);
        lineEdit = new QLineEdit(CDlgPassDetail);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 61, 271, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lineEdit_2 = new QLineEdit(CDlgPassDetail);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 90, 271, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lineEdit_3 = new QLineEdit(CDlgPassDetail);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 120, 271, 20));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lineEdit_4 = new QLineEdit(CDlgPassDetail);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(120, 150, 271, 20));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnQuery = new QPushButton(CDlgPassDetail);
        btnQuery->setObjectName(QString::fromUtf8("btnQuery"));
        btnQuery->setGeometry(QRect(256, 290, 75, 23));
        btnQuery->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnClose = new QPushButton(CDlgPassDetail);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(337, 290, 75, 23));
        btnClose->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblClose = new QLabel(CDlgPassDetail);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(423, 6, 30, 15));

        retranslateUi(CDlgPassDetail);

        QMetaObject::connectSlotsByName(CDlgPassDetail);
    } // setupUi

    void retranslateUi(QDialog *CDlgPassDetail)
    {
        CDlgPassDetail->setWindowTitle(QApplication::translate("CDlgPassDetail", "Dialog", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        label->setText(QApplication::translate("CDlgPassDetail", "\350\207\252\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CDlgPassDetail", "\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CDlgPassDetail", "\350\275\246\347\211\214\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CDlgPassDetail", "\344\270\232\344\270\273\345\247\223\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CDlgPassDetail", "\345\244\207\346\263\250\357\274\232", 0, QApplication::UnicodeUTF8));
        btnQuery->setText(QApplication::translate("CDlgPassDetail", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("CDlgPassDetail", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CDlgPassDetail: public Ui_CDlgPassDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGPASSDETAIL_H
