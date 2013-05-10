/********************************************************************************
** Form generated from reading UI file 'modreceiverdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODRECEIVERDIALOG_H
#define UI_MODRECEIVERDIALOG_H

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

class Ui_ModReceiverDialog
{
public:
    QPushButton *ptnCancel;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *edtReceiverName;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *edtChannelID;
    QLabel *label_8;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *edtReceiverComments;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *edtReceiverNo;
    QLabel *label_7;
    QPushButton *ptnMod;

    void setupUi(QDialog *ModReceiverDialog)
    {
        if (ModReceiverDialog->objectName().isEmpty())
            ModReceiverDialog->setObjectName(QStringLiteral("ModReceiverDialog"));
        ModReceiverDialog->resize(400, 400);
        ModReceiverDialog->setMinimumSize(QSize(400, 400));
        ModReceiverDialog->setMaximumSize(QSize(400, 400));
        ptnCancel = new QPushButton(ModReceiverDialog);
        ptnCancel->setObjectName(QStringLiteral("ptnCancel"));
        ptnCancel->setGeometry(QRect(210, 330, 75, 23));
        splitter = new QSplitter(ModReceiverDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(80, 101, 231, 201));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        edtReceiverName = new QLineEdit(layoutWidget);
        edtReceiverName->setObjectName(QStringLiteral("edtReceiverName"));

        horizontalLayout->addWidget(edtReceiverName);

        splitter->addWidget(layoutWidget);
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        edtChannelID = new QLineEdit(layoutWidget_2);
        edtChannelID->setObjectName(QStringLiteral("edtChannelID"));

        horizontalLayout_2->addWidget(edtChannelID);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("color:red"));

        horizontalLayout_2->addWidget(label_8);

        splitter->addWidget(layoutWidget_2);
        layoutWidget_3 = new QWidget(splitter);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        edtReceiverComments = new QLineEdit(layoutWidget_3);
        edtReceiverComments->setObjectName(QStringLiteral("edtReceiverComments"));

        horizontalLayout_4->addWidget(edtReceiverComments);

        splitter->addWidget(layoutWidget_3);
        layoutWidget_4 = new QWidget(ModReceiverDialog);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(80, 40, 231, 41));
        verticalLayout = new QVBoxLayout(layoutWidget_4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(layoutWidget_4);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        edtReceiverNo = new QLineEdit(layoutWidget_4);
        edtReceiverNo->setObjectName(QStringLiteral("edtReceiverNo"));

        horizontalLayout_3->addWidget(edtReceiverNo);


        verticalLayout->addLayout(horizontalLayout_3);

        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QLatin1String("color:red\n"
""));

        verticalLayout->addWidget(label_7);

        ptnMod = new QPushButton(ModReceiverDialog);
        ptnMod->setObjectName(QStringLiteral("ptnMod"));
        ptnMod->setGeometry(QRect(100, 330, 75, 23));

        retranslateUi(ModReceiverDialog);

        QMetaObject::connectSlotsByName(ModReceiverDialog);
    } // setupUi

    void retranslateUi(QDialog *ModReceiverDialog)
    {
        ModReceiverDialog->setWindowTitle(QApplication::translate("ModReceiverDialog", "\344\277\256\346\224\271\346\216\245\346\224\266\345\231\250\344\277\241\346\201\257", 0));
        ptnCancel->setText(QApplication::translate("ModReceiverDialog", "\345\217\226\346\266\210", 0));
        label_2->setText(QApplication::translate("ModReceiverDialog", "\346\216\245\346\224\266\345\231\250\345\220\215\347\247\260*\357\274\232", 0));
        label_4->setText(QApplication::translate("ModReceiverDialog", "\344\277\241\351\201\223\347\274\226\345\217\267*  \357\274\232", 0));
        label_8->setText(QApplication::translate("ModReceiverDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        label_3->setText(QApplication::translate("ModReceiverDialog", "\345\244\207       \346\263\250\357\274\232", 0));
        label->setText(QApplication::translate("ModReceiverDialog", "\346\216\245\346\224\266\345\231\250\347\274\226\345\217\267*\357\274\232", 0));
        label_7->setText(QApplication::translate("ModReceiverDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220,\345\233\272\345\256\232\351\225\2773\344\275\215", 0));
        ptnMod->setText(QApplication::translate("ModReceiverDialog", "\344\277\256\346\224\271", 0));
    } // retranslateUi

};

namespace Ui {
    class ModReceiverDialog: public Ui_ModReceiverDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODRECEIVERDIALOG_H
