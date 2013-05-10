/********************************************************************************
** Form generated from reading UI file 'modunitdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODUNITDIALOG_H
#define UI_MODUNITDIALOG_H

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

class Ui_ModUnitDialog
{
public:
    QPushButton *ptnCancel;
    QPushButton *ptnMod;
    QSplitter *splitter_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *edtUnitName;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *edtUnitAddress;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *edtUnitComments;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *edtUnitNo;
    QLabel *label_9;

    void setupUi(QDialog *ModUnitDialog)
    {
        if (ModUnitDialog->objectName().isEmpty())
            ModUnitDialog->setObjectName(QStringLiteral("ModUnitDialog"));
        ModUnitDialog->resize(400, 400);
        ModUnitDialog->setMinimumSize(QSize(400, 400));
        ModUnitDialog->setMaximumSize(QSize(400, 400));
        ptnCancel = new QPushButton(ModUnitDialog);
        ptnCancel->setObjectName(QStringLiteral("ptnCancel"));
        ptnCancel->setGeometry(QRect(200, 310, 75, 23));
        ptnMod = new QPushButton(ModUnitDialog);
        ptnMod->setObjectName(QStringLiteral("ptnMod"));
        ptnMod->setGeometry(QRect(90, 310, 75, 23));
        splitter_2 = new QSplitter(ModUnitDialog);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(81, 109, 221, 171));
        splitter_2->setOrientation(Qt::Vertical);
        layoutWidget_2 = new QWidget(splitter_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        edtUnitName = new QLineEdit(layoutWidget_2);
        edtUnitName->setObjectName(QStringLiteral("edtUnitName"));

        horizontalLayout_5->addWidget(edtUnitName);

        splitter_2->addWidget(layoutWidget_2);
        layoutWidget_5 = new QWidget(splitter_2);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        edtUnitAddress = new QLineEdit(layoutWidget_5);
        edtUnitAddress->setObjectName(QStringLiteral("edtUnitAddress"));

        horizontalLayout_6->addWidget(edtUnitAddress);

        splitter_2->addWidget(layoutWidget_5);
        layoutWidget_6 = new QWidget(splitter_2);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_6);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        edtUnitComments = new QLineEdit(layoutWidget_6);
        edtUnitComments->setObjectName(QStringLiteral("edtUnitComments"));

        horizontalLayout_7->addWidget(edtUnitComments);

        splitter_2->addWidget(layoutWidget_6);
        layoutWidget_7 = new QWidget(ModUnitDialog);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(80, 42, 221, 41));
        verticalLayout = new QVBoxLayout(layoutWidget_7);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget_7);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        edtUnitNo = new QLineEdit(layoutWidget_7);
        edtUnitNo->setObjectName(QStringLiteral("edtUnitNo"));

        horizontalLayout_8->addWidget(edtUnitNo);


        verticalLayout->addLayout(horizontalLayout_8);

        label_9 = new QLabel(layoutWidget_7);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout->addWidget(label_9);


        retranslateUi(ModUnitDialog);

        QMetaObject::connectSlotsByName(ModUnitDialog);
    } // setupUi

    void retranslateUi(QDialog *ModUnitDialog)
    {
        ModUnitDialog->setWindowTitle(QApplication::translate("ModUnitDialog", "\344\277\256\346\224\271\344\274\201\344\270\232\344\277\241\346\201\257", 0));
        ptnCancel->setText(QApplication::translate("ModUnitDialog", "\345\217\226\346\266\210", 0));
        ptnMod->setText(QApplication::translate("ModUnitDialog", "\344\277\256\346\224\271", 0));
        label_5->setText(QApplication::translate("ModUnitDialog", "\344\274\201\344\270\232\345\220\215\347\247\260*\357\274\232", 0));
        label_6->setText(QApplication::translate("ModUnitDialog", "\344\274\201\344\270\232\345\234\260\345\235\200*\357\274\232", 0));
        label_7->setText(QApplication::translate("ModUnitDialog", "\345\244\207     \346\263\250\357\274\232", 0));
        label_8->setText(QApplication::translate("ModUnitDialog", "\344\274\201\344\270\232\347\274\226\345\217\267*\357\274\232", 0));
        label_9->setText(QApplication::translate("ModUnitDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220,\345\233\272\345\256\232\351\225\2779\344\275\215", 0));
    } // retranslateUi

};

namespace Ui {
    class ModUnitDialog: public Ui_ModUnitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODUNITDIALOG_H
