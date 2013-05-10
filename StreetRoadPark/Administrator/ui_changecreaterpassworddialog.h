/********************************************************************************
** Form generated from reading UI file 'changecreaterpassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGECREATERPASSWORDDIALOG_H
#define UI_CHANGECREATERPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeCreaterPasswordDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtOldPass;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *edtNewPass;
    QPushButton *pbtYes;
    QPushButton *pbtNo;

    void setupUi(QDialog *ChangeCreaterPasswordDialog)
    {
        if (ChangeCreaterPasswordDialog->objectName().isEmpty())
            ChangeCreaterPasswordDialog->setObjectName(QStringLiteral("ChangeCreaterPasswordDialog"));
        ChangeCreaterPasswordDialog->resize(400, 400);
        ChangeCreaterPasswordDialog->setMinimumSize(QSize(400, 400));
        ChangeCreaterPasswordDialog->setMaximumSize(QSize(400, 400));
        layoutWidget = new QWidget(ChangeCreaterPasswordDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 70, 221, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        edtOldPass = new QLineEdit(layoutWidget);
        edtOldPass->setObjectName(QStringLiteral("edtOldPass"));
        edtOldPass->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(edtOldPass);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        edtNewPass = new QLineEdit(layoutWidget);
        edtNewPass->setObjectName(QStringLiteral("edtNewPass"));
        edtNewPass->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(edtNewPass);


        verticalLayout->addLayout(horizontalLayout_2);

        pbtYes = new QPushButton(ChangeCreaterPasswordDialog);
        pbtYes->setObjectName(QStringLiteral("pbtYes"));
        pbtYes->setGeometry(QRect(90, 280, 75, 23));
        pbtNo = new QPushButton(ChangeCreaterPasswordDialog);
        pbtNo->setObjectName(QStringLiteral("pbtNo"));
        pbtNo->setGeometry(QRect(200, 280, 75, 23));

        retranslateUi(ChangeCreaterPasswordDialog);

        QMetaObject::connectSlotsByName(ChangeCreaterPasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeCreaterPasswordDialog)
    {
        ChangeCreaterPasswordDialog->setWindowTitle(QApplication::translate("ChangeCreaterPasswordDialog", "Dialog", 0));
        label->setText(QApplication::translate("ChangeCreaterPasswordDialog", "\345\216\237\345\257\206\347\240\201\357\274\232", 0));
        label_2->setText(QApplication::translate("ChangeCreaterPasswordDialog", "\346\226\260\345\257\206\347\240\201\357\274\232", 0));
        pbtYes->setText(QApplication::translate("ChangeCreaterPasswordDialog", "\347\241\256\345\256\232", 0));
        pbtNo->setText(QApplication::translate("ChangeCreaterPasswordDialog", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangeCreaterPasswordDialog: public Ui_ChangeCreaterPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGECREATERPASSWORDDIALOG_H
