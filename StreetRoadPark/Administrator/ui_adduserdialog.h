/********************************************************************************
** Form generated from reading UI file 'adduserdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSERDIALOG_H
#define UI_ADDUSERDIALOG_H

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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUserDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *edtUserNo;
    QLabel *label_7;
    QPushButton *ptnAdd;
    QPushButton *ptnCancel;
    QSplitter *splitter;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *edtUserName;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *edtUserPwd;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *edtUserComments;

    void setupUi(QDialog *AddUserDialog)
    {
        if (AddUserDialog->objectName().isEmpty())
            AddUserDialog->setObjectName(QStringLiteral("AddUserDialog"));
        AddUserDialog->resize(400, 400);
        AddUserDialog->setMinimumSize(QSize(400, 400));
        AddUserDialog->setMaximumSize(QSize(400, 400));
        layoutWidget = new QWidget(AddUserDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 30, 251, 51));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        edtUserNo = new QLineEdit(layoutWidget);
        edtUserNo->setObjectName(QStringLiteral("edtUserNo"));

        horizontalLayout_6->addWidget(edtUserNo);


        verticalLayout->addLayout(horizontalLayout_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout->addWidget(label_7);

        ptnAdd = new QPushButton(AddUserDialog);
        ptnAdd->setObjectName(QStringLiteral("ptnAdd"));
        ptnAdd->setGeometry(QRect(100, 320, 75, 23));
        ptnCancel = new QPushButton(AddUserDialog);
        ptnCancel->setObjectName(QStringLiteral("ptnCancel"));
        ptnCancel->setGeometry(QRect(210, 320, 75, 23));
        splitter = new QSplitter(AddUserDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(70, 100, 251, 181));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        edtUserName = new QLineEdit(layoutWidget1);
        edtUserName->setObjectName(QStringLiteral("edtUserName"));

        horizontalLayout->addWidget(edtUserName);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        edtUserPwd = new QLineEdit(layoutWidget2);
        edtUserPwd->setObjectName(QStringLiteral("edtUserPwd"));
        edtUserPwd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(edtUserPwd);

        splitter->addWidget(layoutWidget2);
        layoutWidget3 = new QWidget(splitter);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        edtUserComments = new QLineEdit(layoutWidget3);
        edtUserComments->setObjectName(QStringLiteral("edtUserComments"));

        horizontalLayout_3->addWidget(edtUserComments);

        splitter->addWidget(layoutWidget3);

        retranslateUi(AddUserDialog);

        QMetaObject::connectSlotsByName(AddUserDialog);
    } // setupUi

    void retranslateUi(QDialog *AddUserDialog)
    {
        AddUserDialog->setWindowTitle(QApplication::translate("AddUserDialog", "Dialog", 0));
        label->setText(QApplication::translate("AddUserDialog", "\347\224\250\346\210\267\347\274\226\345\217\267*\357\274\232", 0));
        label_7->setText(QApplication::translate("AddUserDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        ptnAdd->setText(QApplication::translate("AddUserDialog", "\345\242\236\345\212\240", 0));
        ptnCancel->setText(QApplication::translate("AddUserDialog", "\345\217\226\346\266\210", 0));
        label_2->setText(QApplication::translate("AddUserDialog", "\347\224\250\346\210\267\345\220\215\347\247\260*\357\274\232", 0));
        label_5->setText(QApplication::translate("AddUserDialog", "\347\224\250\346\210\267\345\257\206\347\240\201*\357\274\232", 0));
        label_3->setText(QApplication::translate("AddUserDialog", "\345\244\207     \346\263\250\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class AddUserDialog: public Ui_AddUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERDIALOG_H
