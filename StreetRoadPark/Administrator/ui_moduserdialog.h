/********************************************************************************
** Form generated from reading UI file 'moduserdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODUSERDIALOG_H
#define UI_MODUSERDIALOG_H

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

class Ui_ModUserDialog
{
public:
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *edtUserName;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *edtUserPwd;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *edtUserComments;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *edtUserNo;
    QLabel *label_7;
    QPushButton *ptnCancel;
    QPushButton *ptnMod;

    void setupUi(QDialog *ModUserDialog)
    {
        if (ModUserDialog->objectName().isEmpty())
            ModUserDialog->setObjectName(QStringLiteral("ModUserDialog"));
        ModUserDialog->resize(400, 400);
        ModUserDialog->setMinimumSize(QSize(400, 400));
        ModUserDialog->setMaximumSize(QSize(400, 400));
        splitter = new QSplitter(ModUserDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(80, 100, 251, 181));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        edtUserName = new QLineEdit(layoutWidget);
        edtUserName->setObjectName(QStringLiteral("edtUserName"));

        horizontalLayout->addWidget(edtUserName);

        splitter->addWidget(layoutWidget);
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        edtUserPwd = new QLineEdit(layoutWidget_2);
        edtUserPwd->setObjectName(QStringLiteral("edtUserPwd"));
        edtUserPwd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(edtUserPwd);

        splitter->addWidget(layoutWidget_2);
        layoutWidget_3 = new QWidget(splitter);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        edtUserComments = new QLineEdit(layoutWidget_3);
        edtUserComments->setObjectName(QStringLiteral("edtUserComments"));

        horizontalLayout_3->addWidget(edtUserComments);

        splitter->addWidget(layoutWidget_3);
        layoutWidget_4 = new QWidget(ModUserDialog);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(80, 30, 251, 51));
        verticalLayout = new QVBoxLayout(layoutWidget_4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(layoutWidget_4);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        edtUserNo = new QLineEdit(layoutWidget_4);
        edtUserNo->setObjectName(QStringLiteral("edtUserNo"));

        horizontalLayout_6->addWidget(edtUserNo);


        verticalLayout->addLayout(horizontalLayout_6);

        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout->addWidget(label_7);

        ptnCancel = new QPushButton(ModUserDialog);
        ptnCancel->setObjectName(QStringLiteral("ptnCancel"));
        ptnCancel->setGeometry(QRect(220, 330, 75, 23));
        ptnMod = new QPushButton(ModUserDialog);
        ptnMod->setObjectName(QStringLiteral("ptnMod"));
        ptnMod->setGeometry(QRect(110, 330, 75, 23));

        retranslateUi(ModUserDialog);

        QMetaObject::connectSlotsByName(ModUserDialog);
    } // setupUi

    void retranslateUi(QDialog *ModUserDialog)
    {
        ModUserDialog->setWindowTitle(QApplication::translate("ModUserDialog", "Dialog", 0));
        label_2->setText(QApplication::translate("ModUserDialog", "\347\224\250\346\210\267\345\220\215\347\247\260*\357\274\232", 0));
        label_5->setText(QApplication::translate("ModUserDialog", "\347\224\250\346\210\267\345\257\206\347\240\201 \357\274\232", 0));
        label_3->setText(QApplication::translate("ModUserDialog", "\345\244\207     \346\263\250\357\274\232", 0));
        label->setText(QApplication::translate("ModUserDialog", "\347\224\250\346\210\267\347\274\226\345\217\267*\357\274\232", 0));
        label_7->setText(QApplication::translate("ModUserDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        ptnCancel->setText(QApplication::translate("ModUserDialog", "\345\217\226\346\266\210", 0));
        ptnMod->setText(QApplication::translate("ModUserDialog", "\344\277\256\346\224\271", 0));
    } // retranslateUi

};

namespace Ui {
    class ModUserDialog: public Ui_ModUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODUSERDIALOG_H
