/********************************************************************************
** Form generated from reading UI file 'modparkdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODPARKDIALOG_H
#define UI_MODPARKDIALOG_H

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

class Ui_ModParkDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *edtParkNo;
    QLabel *label_7;
    QPushButton *ptnMod;
    QSplitter *splitter;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *edtParkName;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *edtParkSpace;
    QLabel *label_8;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *edtUsedSpace;
    QLabel *label_9;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *edtParkSelfNum;
    QLabel *label_10;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *edtParkComments;
    QPushButton *ptnCancel;

    void setupUi(QDialog *ModParkDialog)
    {
        if (ModParkDialog->objectName().isEmpty())
            ModParkDialog->setObjectName(QStringLiteral("ModParkDialog"));
        ModParkDialog->resize(400, 400);
        ModParkDialog->setMinimumSize(QSize(400, 400));
        ModParkDialog->setMaximumSize(QSize(400, 400));
        layoutWidget = new QWidget(ModParkDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 30, 261, 41));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        edtParkNo = new QLineEdit(layoutWidget);
        edtParkNo->setObjectName(QStringLiteral("edtParkNo"));

        horizontalLayout_6->addWidget(edtParkNo);


        verticalLayout->addLayout(horizontalLayout_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout->addWidget(label_7);

        ptnMod = new QPushButton(ModParkDialog);
        ptnMod->setObjectName(QStringLiteral("ptnMod"));
        ptnMod->setGeometry(QRect(90, 350, 75, 23));
        splitter = new QSplitter(ModParkDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(68, 90, 261, 241));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        edtParkName = new QLineEdit(layoutWidget_2);
        edtParkName->setObjectName(QStringLiteral("edtParkName"));

        horizontalLayout->addWidget(edtParkName);

        splitter->addWidget(layoutWidget_2);
        layoutWidget_3 = new QWidget(splitter);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        edtParkSpace = new QLineEdit(layoutWidget_3);
        edtParkSpace->setObjectName(QStringLiteral("edtParkSpace"));

        horizontalLayout_2->addWidget(edtParkSpace);

        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("color:red"));

        horizontalLayout_2->addWidget(label_8);

        splitter->addWidget(layoutWidget_3);
        layoutWidget_4 = new QWidget(splitter);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        edtUsedSpace = new QLineEdit(layoutWidget_4);
        edtUsedSpace->setObjectName(QStringLiteral("edtUsedSpace"));

        horizontalLayout_3->addWidget(edtUsedSpace);

        label_9 = new QLabel(layoutWidget_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("color:red"));

        horizontalLayout_3->addWidget(label_9);

        splitter->addWidget(layoutWidget_4);
        layoutWidget_5 = new QWidget(splitter);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        edtParkSelfNum = new QLineEdit(layoutWidget_5);
        edtParkSelfNum->setObjectName(QStringLiteral("edtParkSelfNum"));

        horizontalLayout_5->addWidget(edtParkSelfNum);

        label_10 = new QLabel(layoutWidget_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("color:red"));

        horizontalLayout_5->addWidget(label_10);

        splitter->addWidget(layoutWidget_5);
        layoutWidget_6 = new QWidget(splitter);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_6);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        edtParkComments = new QLineEdit(layoutWidget_6);
        edtParkComments->setObjectName(QStringLiteral("edtParkComments"));

        horizontalLayout_4->addWidget(edtParkComments);

        splitter->addWidget(layoutWidget_6);
        ptnCancel = new QPushButton(ModParkDialog);
        ptnCancel->setObjectName(QStringLiteral("ptnCancel"));
        ptnCancel->setGeometry(QRect(200, 350, 75, 23));

        retranslateUi(ModParkDialog);

        QMetaObject::connectSlotsByName(ModParkDialog);
    } // setupUi

    void retranslateUi(QDialog *ModParkDialog)
    {
        ModParkDialog->setWindowTitle(QApplication::translate("ModParkDialog", "\344\277\256\346\224\271\345\201\234\350\275\246\345\234\272\344\277\241\346\201\257", 0));
        label->setText(QApplication::translate("ModParkDialog", "\345\201\234\350\275\246\345\234\272\347\274\226\345\217\267* \357\274\232", 0));
        label_7->setText(QApplication::translate("ModParkDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220,\345\233\272\345\256\232\351\225\2774\344\275\215", 0));
        ptnMod->setText(QApplication::translate("ModParkDialog", "\344\277\256\346\224\271", 0));
        label_2->setText(QApplication::translate("ModParkDialog", "\345\201\234\350\275\246\345\234\272\345\220\215\347\247\260* \357\274\232", 0));
        label_5->setText(QApplication::translate("ModParkDialog", "\350\275\246\344\275\215\346\200\273\346\225\260\351\207\217* \357\274\232", 0));
        label_8->setText(QApplication::translate("ModParkDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        label_4->setText(QApplication::translate("ModParkDialog", "\345\267\262\345\201\234\350\275\246\344\275\215\351\207\217  \357\274\232", 0));
        label_9->setText(QApplication::translate("ModParkDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        label_6->setText(QApplication::translate("ModParkDialog", "\345\201\234\350\275\246\345\234\272\350\207\252\347\274\226\345\217\267\357\274\232", 0));
        label_10->setText(QApplication::translate("ModParkDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        label_3->setText(QApplication::translate("ModParkDialog", "\345\244\207        \346\263\250\357\274\232", 0));
        ptnCancel->setText(QApplication::translate("ModParkDialog", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class ModParkDialog: public Ui_ModParkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODPARKDIALOG_H
