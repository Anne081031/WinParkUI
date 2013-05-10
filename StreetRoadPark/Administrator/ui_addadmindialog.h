/********************************************************************************
** Form generated from reading UI file 'addadmindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDADMINDIALOG_H
#define UI_ADDADMINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAdminDialog
{
public:
    QPushButton *ptnAdd;
    QPushButton *ptnCancel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *cmbAdmin;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *edtAdminComments;

    void setupUi(QDialog *AddAdminDialog)
    {
        if (AddAdminDialog->objectName().isEmpty())
            AddAdminDialog->setObjectName(QStringLiteral("AddAdminDialog"));
        AddAdminDialog->resize(400, 400);
        AddAdminDialog->setMinimumSize(QSize(400, 400));
        AddAdminDialog->setMaximumSize(QSize(400, 400));
        AddAdminDialog->setContextMenuPolicy(Qt::DefaultContextMenu);
        ptnAdd = new QPushButton(AddAdminDialog);
        ptnAdd->setObjectName(QStringLiteral("ptnAdd"));
        ptnAdd->setGeometry(QRect(80, 330, 75, 23));
        ptnCancel = new QPushButton(AddAdminDialog);
        ptnCancel->setObjectName(QStringLiteral("ptnCancel"));
        ptnCancel->setGeometry(QRect(230, 330, 75, 23));
        layoutWidget = new QWidget(AddAdminDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 80, 231, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        cmbAdmin = new QComboBox(layoutWidget);
        cmbAdmin->setObjectName(QStringLiteral("cmbAdmin"));

        horizontalLayout->addWidget(cmbAdmin);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        edtAdminComments = new QLineEdit(layoutWidget);
        edtAdminComments->setObjectName(QStringLiteral("edtAdminComments"));

        horizontalLayout_4->addWidget(edtAdminComments);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(AddAdminDialog);

        QMetaObject::connectSlotsByName(AddAdminDialog);
    } // setupUi

    void retranslateUi(QDialog *AddAdminDialog)
    {
        AddAdminDialog->setWindowTitle(QApplication::translate("AddAdminDialog", "\345\242\236\345\212\240\350\241\214\346\224\277\345\214\272", 0));
        ptnAdd->setText(QApplication::translate("AddAdminDialog", "\345\242\236\345\212\240", 0));
        ptnCancel->setText(QApplication::translate("AddAdminDialog", "\345\217\226\346\266\210", 0));
        label_2->setText(QApplication::translate("AddAdminDialog", "\351\200\211\346\213\251\345\214\272\345\237\237*\357\274\232", 0));
        label_3->setText(QApplication::translate("AddAdminDialog", "\345\244\207     \346\263\250\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class AddAdminDialog: public Ui_AddAdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDADMINDIALOG_H
