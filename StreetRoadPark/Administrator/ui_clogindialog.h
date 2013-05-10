/********************************************************************************
** Form generated from reading UI file 'clogindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOGINDIALOG_H
#define UI_CLOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CLoginDialog
{
public:
    QPushButton *btnLogin;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *edtPassword;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbxUser;
    QCheckBox *cbxRememberPass;
    QCheckBox *cbxAutoLogin;
    QLabel *lblStatus;
    QPushButton *ptnChangePassword;

    void setupUi(QDialog *CLoginDialog)
    {
        if (CLoginDialog->objectName().isEmpty())
            CLoginDialog->setObjectName(QStringLiteral("CLoginDialog"));
        CLoginDialog->resize(400, 400);
        CLoginDialog->setMinimumSize(QSize(400, 400));
        CLoginDialog->setMaximumSize(QSize(400, 400));
        btnLogin = new QPushButton(CLoginDialog);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setGeometry(QRect(120, 300, 131, 23));
        layoutWidget = new QWidget(CLoginDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 120, 171, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        edtPassword = new QLineEdit(layoutWidget);
        edtPassword->setObjectName(QStringLiteral("edtPassword"));
        edtPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(edtPassword);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);
        layoutWidget1 = new QWidget(CLoginDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 60, 171, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        cbxUser = new QComboBox(layoutWidget1);
        cbxUser->setObjectName(QStringLiteral("cbxUser"));
        cbxUser->setEditable(true);
        cbxUser->setDuplicatesEnabled(false);

        horizontalLayout->addWidget(cbxUser);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);
        cbxRememberPass = new QCheckBox(CLoginDialog);
        cbxRememberPass->setObjectName(QStringLiteral("cbxRememberPass"));
        cbxRememberPass->setGeometry(QRect(100, 190, 71, 16));
        cbxAutoLogin = new QCheckBox(CLoginDialog);
        cbxAutoLogin->setObjectName(QStringLiteral("cbxAutoLogin"));
        cbxAutoLogin->setGeometry(QRect(210, 190, 71, 16));
        lblStatus = new QLabel(CLoginDialog);
        lblStatus->setObjectName(QStringLiteral("lblStatus"));
        lblStatus->setGeometry(QRect(10, 230, 371, 20));
        ptnChangePassword = new QPushButton(CLoginDialog);
        ptnChangePassword->setObjectName(QStringLiteral("ptnChangePassword"));
        ptnChangePassword->setGeometry(QRect(300, 130, 75, 23));
        QPalette palette;
        QBrush brush(QColor(0, 128, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        ptnChangePassword->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        ptnChangePassword->setFont(font);
        ptnChangePassword->setCursor(QCursor(Qt::OpenHandCursor));
        ptnChangePassword->setContextMenuPolicy(Qt::ActionsContextMenu);
        ptnChangePassword->setAutoFillBackground(false);
        ptnChangePassword->setStyleSheet(QLatin1String("border: none; \n"
""));
        ptnChangePassword->setFlat(false);
        layoutWidget->raise();
        layoutWidget->raise();
        btnLogin->raise();
        cbxRememberPass->raise();
        cbxAutoLogin->raise();
        lblStatus->raise();
        ptnChangePassword->raise();

        retranslateUi(CLoginDialog);

        QMetaObject::connectSlotsByName(CLoginDialog);
    } // setupUi

    void retranslateUi(QDialog *CLoginDialog)
    {
        CLoginDialog->setWindowTitle(QApplication::translate("CLoginDialog", "Dialog", 0));
        btnLogin->setText(QApplication::translate("CLoginDialog", "\347\231\273\345\275\225", 0));
        label_2->setText(QApplication::translate("CLoginDialog", "\345\257\206\347\240\201\357\274\232", 0));
        label->setText(QApplication::translate("CLoginDialog", "\347\224\250\346\210\267\357\274\232", 0));
        cbxRememberPass->setText(QApplication::translate("CLoginDialog", "\350\256\260\344\275\217\345\257\206\347\240\201", 0));
        cbxAutoLogin->setText(QApplication::translate("CLoginDialog", "\350\207\252\345\212\250\347\231\273\345\275\225", 0));
        lblStatus->setText(QString());
        ptnChangePassword->setText(QApplication::translate("CLoginDialog", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
    } // retranslateUi

};

namespace Ui {
    class CLoginDialog: public Ui_CLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOGINDIALOG_H
