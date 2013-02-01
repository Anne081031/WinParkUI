/********************************************************************************
** Form generated from reading UI file 'dlgsmsnotification.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSMSNOTIFICATION_H
#define UI_DLGSMSNOTIFICATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CDlgSMSNotification
{
public:
    QPushButton *btnCancel;
    QPushButton *btnSave;
    QLabel *label;
    QPlainTextEdit *edtInfo;
    QLabel *lblTitle;
    QLabel *lblClose;

    void setupUi(QDialog *CDlgSMSNotification)
    {
        if (CDlgSMSNotification->objectName().isEmpty())
            CDlgSMSNotification->setObjectName(QString::fromUtf8("CDlgSMSNotification"));
        CDlgSMSNotification->resize(463, 350);
        CDlgSMSNotification->setStyleSheet(QString::fromUtf8("background-image: url(D:/WinParkUI/debug/Image/NewIcon/CommonBG-normal.jpg);"));
        btnCancel = new QPushButton(CDlgSMSNotification);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(337, 290, 75, 23));
        btnCancel->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        btnSave = new QPushButton(CDlgSMSNotification);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(256, 290, 75, 23));
        btnSave->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        label = new QLabel(CDlgSMSNotification);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(51, 61, 221, 16));
        label->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtInfo = new QPlainTextEdit(CDlgSMSNotification);
        edtInfo->setObjectName(QString::fromUtf8("edtInfo"));
        edtInfo->setGeometry(QRect(51, 90, 361, 181));
        edtInfo->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        lblTitle = new QLabel(CDlgSMSNotification);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(20, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(85, 0, 0);"));
        lblClose = new QLabel(CDlgSMSNotification);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(422, 6, 30, 15));

        retranslateUi(CDlgSMSNotification);

        QMetaObject::connectSlotsByName(CDlgSMSNotification);
    } // setupUi

    void retranslateUi(QDialog *CDlgSMSNotification)
    {
        CDlgSMSNotification->setWindowTitle(QApplication::translate("CDlgSMSNotification", "\347\237\255\344\277\241\351\200\232\347\237\245", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CDlgSMSNotification", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CDlgSMSNotification", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDlgSMSNotification", "\347\237\255\344\277\241\345\206\205\345\256\271\357\274\210\344\270\215\350\266\205\350\277\20770\344\270\252\345\255\227\347\254\246\357\274\211", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CDlgSMSNotification: public Ui_CDlgSMSNotification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSMSNOTIFICATION_H
