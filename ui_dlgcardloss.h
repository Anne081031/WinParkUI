/********************************************************************************
** Form generated from reading UI file 'dlgcardloss.ui'
**
** Created: Fri Feb 1 10:57:16 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCARDLOSS_H
#define UI_DLGCARDLOSS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgCardLoss
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *edtOperator;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDateTimeEdit *dtLeave;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QComboBox *cbFeeType;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *sbAmount;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpinBox *sbRealAmount;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *edtPlate;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *edtChannel;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *CDlgCardLoss)
    {
        if (CDlgCardLoss->objectName().isEmpty())
            CDlgCardLoss->setObjectName(QString::fromUtf8("CDlgCardLoss"));
        CDlgCardLoss->resize(238, 256);
        CDlgCardLoss->setMinimumSize(QSize(238, 256));
        CDlgCardLoss->setMaximumSize(QSize(238, 256));
        layoutWidget = new QWidget(CDlgCardLoss);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(13, 10, 211, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        edtOperator = new QLineEdit(layoutWidget);
        edtOperator->setObjectName(QString::fromUtf8("edtOperator"));

        horizontalLayout->addWidget(edtOperator);

        layoutWidget1 = new QWidget(CDlgCardLoss);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(13, 40, 218, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        dtLeave = new QDateTimeEdit(layoutWidget1);
        dtLeave->setObjectName(QString::fromUtf8("dtLeave"));

        horizontalLayout_2->addWidget(dtLeave);

        layoutWidget2 = new QWidget(CDlgCardLoss);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(13, 70, 137, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        cbFeeType = new QComboBox(layoutWidget2);
        cbFeeType->setObjectName(QString::fromUtf8("cbFeeType"));

        horizontalLayout_3->addWidget(cbFeeType);

        layoutWidget3 = new QWidget(CDlgCardLoss);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(13, 100, 116, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        sbAmount = new QSpinBox(layoutWidget3);
        sbAmount->setObjectName(QString::fromUtf8("sbAmount"));
        sbAmount->setMaximum(9999);

        horizontalLayout_4->addWidget(sbAmount);

        layoutWidget4 = new QWidget(CDlgCardLoss);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(13, 130, 116, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        sbRealAmount = new QSpinBox(layoutWidget4);
        sbRealAmount->setObjectName(QString::fromUtf8("sbRealAmount"));
        sbRealAmount->setMaximum(9999);

        horizontalLayout_5->addWidget(sbRealAmount);

        layoutWidget5 = new QWidget(CDlgCardLoss);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(13, 160, 211, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        edtPlate = new QLineEdit(layoutWidget5);
        edtPlate->setObjectName(QString::fromUtf8("edtPlate"));

        horizontalLayout_6->addWidget(edtPlate);

        layoutWidget6 = new QWidget(CDlgCardLoss);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(13, 190, 211, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        edtChannel = new QLineEdit(layoutWidget6);
        edtChannel->setObjectName(QString::fromUtf8("edtChannel"));

        horizontalLayout_7->addWidget(edtChannel);

        layoutWidget7 = new QWidget(CDlgCardLoss);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(40, 220, 158, 25));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        btnOK = new QPushButton(layoutWidget7);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout_8->addWidget(btnOK);

        btnCancel = new QPushButton(layoutWidget7);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_8->addWidget(btnCancel);


        retranslateUi(CDlgCardLoss);

        QMetaObject::connectSlotsByName(CDlgCardLoss);
    } // setupUi

    void retranslateUi(QDialog *CDlgCardLoss)
    {
        CDlgCardLoss->setWindowTitle(QApplication::translate("CDlgCardLoss", "\350\275\246\350\276\206\345\267\262\350\277\233\345\234\272\357\274\214\345\215\241\351\201\227\345\244\261\345\244\204\347\220\206", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CDlgCardLoss", "\345\244\204\347\220\206\344\272\272\345\221\230\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDlgCardLoss", "\347\246\273\345\274\200\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        dtLeave->setDisplayFormat(QApplication::translate("CDlgCardLoss", "yyyy-MM-dd HH:mm:ss", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CDlgCardLoss", "\350\264\271\347\216\207\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CDlgCardLoss", "\345\272\224\346\224\266\351\207\221\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CDlgCardLoss", "\345\256\236\346\224\266\351\207\221\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CDlgCardLoss", "\350\275\246\350\276\206\350\275\246\347\211\214\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CDlgCardLoss", "\347\246\273\345\274\200\351\200\232\351\201\223\357\274\232", 0, QApplication::UnicodeUTF8));
        edtChannel->setText(QApplication::translate("CDlgCardLoss", "\345\215\241\351\201\227\345\244\261", 0, QApplication::UnicodeUTF8));
        btnOK->setText(QApplication::translate("CDlgCardLoss", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CDlgCardLoss", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgCardLoss: public Ui_CDlgCardLoss {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGCARDLOSS_H
