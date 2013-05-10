/********************************************************************************
** Form generated from reading UI file 'modadmindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODADMINDIALOG_H
#define UI_MODADMINDIALOG_H

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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModAdminDialog
{
public:
    QPushButton *ptnCancel;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *edtAdminNo;
    QLabel *label_6;
    QSplitter *splitter_2;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *edtAdminName;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QComboBox *cmbAdminType;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *edtAdminComments;
    QPushButton *ptnMod;

    void setupUi(QDialog *ModAdminDialog)
    {
        if (ModAdminDialog->objectName().isEmpty())
            ModAdminDialog->setObjectName(QStringLiteral("ModAdminDialog"));
        ModAdminDialog->resize(400, 400);
        ModAdminDialog->setMinimumSize(QSize(400, 400));
        ModAdminDialog->setMaximumSize(QSize(400, 400));
        ptnCancel = new QPushButton(ModAdminDialog);
        ptnCancel->setObjectName(QStringLiteral("ptnCancel"));
        ptnCancel->setGeometry(QRect(210, 310, 75, 23));
        layoutWidget_2 = new QWidget(ModAdminDialog);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(80, 50, 221, 41));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        edtAdminNo = new QLineEdit(layoutWidget_2);
        edtAdminNo->setObjectName(QStringLiteral("edtAdminNo"));

        horizontalLayout_5->addWidget(edtAdminNo);


        verticalLayout->addLayout(horizontalLayout_5);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout->addWidget(label_6);

        splitter_2 = new QSplitter(ModAdminDialog);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(80, 110, 221, 161));
        splitter_2->setOrientation(Qt::Vertical);
        layoutWidget_5 = new QWidget(splitter_2);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        edtAdminName = new QLineEdit(layoutWidget_5);
        edtAdminName->setObjectName(QStringLiteral("edtAdminName"));

        horizontalLayout_6->addWidget(edtAdminName);

        splitter_2->addWidget(layoutWidget_5);
        layoutWidget_6 = new QWidget(splitter_2);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_6);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        cmbAdminType = new QComboBox(layoutWidget_6);
        cmbAdminType->setObjectName(QStringLiteral("cmbAdminType"));

        horizontalLayout_7->addWidget(cmbAdminType);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 3);
        splitter_2->addWidget(layoutWidget_6);
        layoutWidget_7 = new QWidget(splitter_2);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_7);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_8->addWidget(label_9);

        edtAdminComments = new QLineEdit(layoutWidget_7);
        edtAdminComments->setObjectName(QStringLiteral("edtAdminComments"));

        horizontalLayout_8->addWidget(edtAdminComments);

        splitter_2->addWidget(layoutWidget_7);
        ptnMod = new QPushButton(ModAdminDialog);
        ptnMod->setObjectName(QStringLiteral("ptnMod"));
        ptnMod->setGeometry(QRect(90, 310, 75, 23));

        retranslateUi(ModAdminDialog);

        QMetaObject::connectSlotsByName(ModAdminDialog);
    } // setupUi

    void retranslateUi(QDialog *ModAdminDialog)
    {
        ModAdminDialog->setWindowTitle(QApplication::translate("ModAdminDialog", "\344\277\256\346\224\271\350\241\214\346\224\277\345\214\272\344\277\241\346\201\257", 0));
        ptnCancel->setText(QApplication::translate("ModAdminDialog", "\345\217\226\346\266\210", 0));
        label_5->setText(QApplication::translate("ModAdminDialog", "\345\214\272\345\237\237\347\274\226\345\217\267*\357\274\232", 0));
        label_6->setText(QApplication::translate("ModAdminDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220\357\274\214\345\233\272\345\256\232\351\225\2776\344\275\215", 0));
        label_7->setText(QApplication::translate("ModAdminDialog", "\345\214\272\345\237\237\345\220\215\347\247\260*\357\274\232", 0));
        label_8->setText(QApplication::translate("ModAdminDialog", "\345\214\272\345\237\237\347\261\273\345\236\213\357\274\232", 0));
        cmbAdminType->clear();
        cmbAdminType->insertItems(0, QStringList()
         << QApplication::translate("ModAdminDialog", "\347\234\201", 0)
         << QApplication::translate("ModAdminDialog", "\345\270\202", 0)
         << QApplication::translate("ModAdminDialog", "\345\214\272\357\274\210\345\216\277\357\274\211", 0)
        );
        label_9->setText(QApplication::translate("ModAdminDialog", "\345\244\207     \346\263\250\357\274\232", 0));
        ptnMod->setText(QApplication::translate("ModAdminDialog", "\344\277\256\346\224\271", 0));
    } // retranslateUi

};

namespace Ui {
    class ModAdminDialog: public Ui_ModAdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODADMINDIALOG_H
