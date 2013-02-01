/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CLoginDialog
{
public:
    QComboBox *cbxUserName;
    QLabel *label_2;
    QLineEdit *edtUserPwd;
    QLabel *label_3;
    QLabel *lblTip;
    QPushButton *btnConnectDb;
    QLabel *lblTitle;
    QPushButton *btnCancel;
    QPushButton *btnLogin;
    QPushButton *pushButton;
    QPushButton *btnImport;

    void setupUi(QDialog *CLoginDialog)
    {
        if (CLoginDialog->objectName().isEmpty())
            CLoginDialog->setObjectName(QString::fromUtf8("CLoginDialog"));
        CLoginDialog->setWindowModality(Qt::ApplicationModal);
        CLoginDialog->resize(419, 275);
        CLoginDialog->setMouseTracking(true);
        CLoginDialog->setStyleSheet(QString::fromUtf8("background-image: url(D:/WinParkUI/debug/Image/NewIcon/Login.JPG);"));
        cbxUserName = new QComboBox(CLoginDialog);
        cbxUserName->setObjectName(QString::fromUtf8("cbxUserName"));
        cbxUserName->setGeometry(QRect(144, 133, 131, 20));
        cbxUserName->setFocusPolicy(Qt::ClickFocus);
        cbxUserName->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        cbxUserName->setEditable(true);
        label_2 = new QLabel(CLoginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 133, 36, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(255, 255, 255);"));
        edtUserPwd = new QLineEdit(CLoginDialog);
        edtUserPwd->setObjectName(QString::fromUtf8("edtUserPwd"));
        edtUserPwd->setGeometry(QRect(144, 161, 131, 20));
        edtUserPwd->setFocusPolicy(Qt::StrongFocus);
        edtUserPwd->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        edtUserPwd->setInputMask(QString::fromUtf8(""));
        label_3 = new QLabel(CLoginDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 161, 36, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(255, 255, 255);"));
        lblTip = new QLabel(CLoginDialog);
        lblTip->setObjectName(QString::fromUtf8("lblTip"));
        lblTip->setGeometry(QRect(30, 191, 351, 20));
        lblTip->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(255, 255, 255);"));
        lblTip->setAlignment(Qt::AlignCenter);
        btnConnectDb = new QPushButton(CLoginDialog);
        btnConnectDb->setObjectName(QString::fromUtf8("btnConnectDb"));
        btnConnectDb->setGeometry(QRect(146, 290, 171, 31));
        btnConnectDb->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblTitle = new QLabel(CLoginDialog);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(20, 5, 141, 21));
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnCancel = new QPushButton(CLoginDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(320, 220, 75, 23));
        btnCancel->setFocusPolicy(Qt::ClickFocus);
        btnCancel->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnCancel->setAutoDefault(false);
        btnCancel->setDefault(false);
        btnLogin = new QPushButton(CLoginDialog);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(144, 220, 131, 23));
        btnLogin->setFocusPolicy(Qt::ClickFocus);
        btnLogin->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnLogin->setAutoDefault(true);
        btnLogin->setDefault(true);
        pushButton = new QPushButton(CLoginDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 180, 91, 23));
        pushButton->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        pushButton->setAutoDefault(false);
        btnImport = new QPushButton(CLoginDialog);
        btnImport->setObjectName(QString::fromUtf8("btnImport"));
        btnImport->setGeometry(QRect(305, 133, 91, 23));
        btnImport->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        retranslateUi(CLoginDialog);

        QMetaObject::connectSlotsByName(CLoginDialog);
    } // setupUi

    void retranslateUi(QDialog *CLoginDialog)
    {
        CLoginDialog->setWindowTitle(QString());
        label_2->setText(QApplication::translate("CLoginDialog", "\347\224\250\346\210\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CLoginDialog", "\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        lblTip->setText(QString());
        btnConnectDb->setText(QApplication::translate("CLoginDialog", "\351\207\215\350\277\236\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        btnCancel->setText(QApplication::translate("CLoginDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        btnLogin->setText(QApplication::translate("CLoginDialog", "\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CLoginDialog", "\345\257\274\345\205\245\346\216\210\346\235\203\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        btnImport->setText(QApplication::translate("CLoginDialog", "\345\257\274\345\205\245\346\216\210\346\235\203\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CLoginDialog: public Ui_CLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
