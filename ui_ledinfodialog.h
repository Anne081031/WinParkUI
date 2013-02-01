/********************************************************************************
** Form generated from reading UI file 'ledinfodialog.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEDINFODIALOG_H
#define UI_LEDINFODIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CLedInfoDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QCheckBox *chk1;
    QCheckBox *chk2;
    QCheckBox *chk3;
    QCheckBox *chk4;
    QLabel *label_6;
    QPlainTextEdit *edtInfo;
    QPushButton *btnClose;
    QPushButton *btnDownload;
    QLabel *lblTitle;
    QPushButton *btnDownloadTime;
    QLabel *lblClose;

    void setupUi(QDialog *CLedInfoDialog)
    {
        if (CLedInfoDialog->objectName().isEmpty())
            CLedInfoDialog->setObjectName(QString::fromUtf8("CLedInfoDialog"));
        CLedInfoDialog->resize(463, 350);
        CLedInfoDialog->setStyleSheet(QString::fromUtf8("background-image: url(D:/WinParkUI/debug/Image/NewIcon/CommonBG-normal.jpg);"));
        label = new QLabel(CLedInfoDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(51, 61, 191, 16));
        label->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        label_2 = new QLabel(CLedInfoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(51, 91, 84, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        label_3 = new QLabel(CLedInfoDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 91, 84, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        label_4 = new QLabel(CLedInfoDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(51, 121, 66, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        label_5 = new QLabel(CLedInfoDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(189, 121, 66, 16));
        label_5->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        chk1 = new QCheckBox(CLedInfoDialog);
        chk1->setObjectName(QString::fromUtf8("chk1"));
        chk1->setGeometry(QRect(141, 91, 16, 16));
        chk1->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        chk2 = new QCheckBox(CLedInfoDialog);
        chk2->setObjectName(QString::fromUtf8("chk2"));
        chk2->setGeometry(QRect(280, 91, 16, 16));
        chk2->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        chk3 = new QCheckBox(CLedInfoDialog);
        chk3->setObjectName(QString::fromUtf8("chk3"));
        chk3->setGeometry(QRect(140, 121, 16, 16));
        chk3->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        chk4 = new QCheckBox(CLedInfoDialog);
        chk4->setObjectName(QString::fromUtf8("chk4"));
        chk4->setGeometry(QRect(280, 121, 16, 16));
        chk4->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        label_6 = new QLabel(CLedInfoDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(51, 154, 291, 16));
        label_6->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtInfo = new QPlainTextEdit(CLedInfoDialog);
        edtInfo->setObjectName(QString::fromUtf8("edtInfo"));
        edtInfo->setGeometry(QRect(51, 177, 361, 101));
        edtInfo->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        btnClose = new QPushButton(CLedInfoDialog);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(337, 290, 75, 23));
        btnClose->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        btnDownload = new QPushButton(CLedInfoDialog);
        btnDownload->setObjectName(QString::fromUtf8("btnDownload"));
        btnDownload->setGeometry(QRect(256, 290, 75, 23));
        btnDownload->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        lblTitle = new QLabel(CLedInfoDialog);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(20, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(85, 0, 0);"));
        btnDownloadTime = new QPushButton(CLedInfoDialog);
        btnDownloadTime->setObjectName(QString::fromUtf8("btnDownloadTime"));
        btnDownloadTime->setGeometry(QRect(337, 149, 75, 23));
        btnDownloadTime->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        lblClose = new QLabel(CLedInfoDialog);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(423, 6, 30, 15));

        retranslateUi(CLedInfoDialog);

        QMetaObject::connectSlotsByName(CLedInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *CLedInfoDialog)
    {
        CLedInfoDialog->setWindowTitle(QApplication::translate("CLedInfoDialog", "\345\217\221\345\270\203\346\230\276\347\244\272\351\242\221\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CLedInfoDialog", "\344\277\241\346\201\257\345\217\221\345\270\203\347\233\256\346\240\207", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CLedInfoDialog", "\345\205\245\345\217\243\347\245\250\347\256\261\346\230\276\347\244\272\345\261\217", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CLedInfoDialog", "\345\207\272\345\217\243\347\245\250\347\256\261\346\230\276\347\244\272\345\261\217", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CLedInfoDialog", "\347\213\254\347\253\213\346\230\276\347\244\272\345\261\2171", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CLedInfoDialog", "\347\213\254\347\253\213\346\230\276\347\244\272\345\261\2172", 0, QApplication::UnicodeUTF8));
        chk1->setText(QString());
        chk2->setText(QString());
        chk3->setText(QString());
        chk4->setText(QString());
        label_6->setText(QApplication::translate("CLedInfoDialog", "\344\277\241\346\201\257\345\206\205\345\256\271\357\274\210\344\270\215\350\266\205\350\277\20720\344\270\252\345\255\227\347\254\246\357\274\214\347\251\272\346\240\274\345\217\212\346\240\207\347\202\271\345\277\205\351\241\273\344\270\272\345\205\250\350\247\222\357\274\211", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("CLedInfoDialog", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        btnDownload->setText(QApplication::translate("CLedInfoDialog", "\344\277\241\346\201\257\345\217\221\345\270\203", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        btnDownloadTime->setText(QApplication::translate("CLedInfoDialog", "\344\270\213\344\274\240\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CLedInfoDialog: public Ui_CLedInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEDINFODIALOG_H
