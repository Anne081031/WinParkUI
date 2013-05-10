/********************************************************************************
** Form generated from reading UI file 'dlgabout.ui'
**
** Created: Wed May 8 16:22:21 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGABOUT_H
#define UI_DLGABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CDlgAbout
{
public:
    QTextEdit *textEdit;
    QLabel *lblCompany;
    QLabel *lblVersion;
    QLabel *lblTel;
    QLabel *lblFax;

    void setupUi(QDialog *CDlgAbout)
    {
        if (CDlgAbout->objectName().isEmpty())
            CDlgAbout->setObjectName(QString::fromUtf8("CDlgAbout"));
        CDlgAbout->resize(441, 182);
        CDlgAbout->setMinimumSize(QSize(441, 182));
        CDlgAbout->setMaximumSize(QSize(441, 182));
        textEdit = new QTextEdit(CDlgAbout);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 20, 381, 141));
        textEdit->setReadOnly(true);
        lblCompany = new QLabel(CDlgAbout);
        lblCompany->setObjectName(QString::fromUtf8("lblCompany"));
        lblCompany->setGeometry(QRect(38, 30, 361, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lblCompany->setFont(font);
        lblCompany->setAlignment(Qt::AlignCenter);
        lblVersion = new QLabel(CDlgAbout);
        lblVersion->setObjectName(QString::fromUtf8("lblVersion"));
        lblVersion->setGeometry(QRect(40, 67, 351, 16));
        lblTel = new QLabel(CDlgAbout);
        lblTel->setObjectName(QString::fromUtf8("lblTel"));
        lblTel->setGeometry(QRect(39, 94, 351, 16));
        lblFax = new QLabel(CDlgAbout);
        lblFax->setObjectName(QString::fromUtf8("lblFax"));
        lblFax->setGeometry(QRect(39, 120, 361, 16));

        retranslateUi(CDlgAbout);

        QMetaObject::connectSlotsByName(CDlgAbout);
    } // setupUi

    void retranslateUi(QDialog *CDlgAbout)
    {
        CDlgAbout->setWindowTitle(QApplication::translate("CDlgAbout", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("CDlgAbout", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        lblCompany->setText(QApplication::translate("CDlgAbout", "\345\233\233\345\267\235\345\211\215\351\200\224\351\253\230\347\247\221\347\224\265\345\255\220\346\212\200\346\234\257\346\234\211\351\231\220\345\205\254\345\217\270", 0, QApplication::UnicodeUTF8));
        lblVersion->setText(QApplication::translate("CDlgAbout", "\347\211\210\346\234\254\357\274\23220130218", 0, QApplication::UnicodeUTF8));
        lblTel->setText(QApplication::translate("CDlgAbout", "\347\224\265\350\257\235\357\274\232(028)85236997", 0, QApplication::UnicodeUTF8));
        lblFax->setText(QApplication::translate("CDlgAbout", "\344\274\240\347\234\237\357\274\232(028)85236101", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgAbout: public Ui_CDlgAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGABOUT_H
