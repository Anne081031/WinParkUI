/********************************************************************************
** Form generated from reading UI file 'rechargedialog.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECHARGEDIALOG_H
#define UI_RECHARGEDIALOG_H

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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRechargeDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateTimeEdit *dtStart;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateTimeEdit *dtEnd;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *edtDays;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *cbxCarModel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *spAmount;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *CRechargeDialog)
    {
        if (CRechargeDialog->objectName().isEmpty())
            CRechargeDialog->setObjectName(QString::fromUtf8("CRechargeDialog"));
        CRechargeDialog->resize(331, 224);
        layoutWidget = new QWidget(CRechargeDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 20, 231, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        dtStart = new QDateTimeEdit(layoutWidget);
        dtStart->setObjectName(QString::fromUtf8("dtStart"));
        dtStart->setEnabled(false);

        horizontalLayout->addWidget(dtStart);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        dtEnd = new QDateTimeEdit(layoutWidget);
        dtEnd->setObjectName(QString::fromUtf8("dtEnd"));

        horizontalLayout_2->addWidget(dtEnd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        edtDays = new QLineEdit(layoutWidget);
        edtDays->setObjectName(QString::fromUtf8("edtDays"));
        edtDays->setEnabled(false);
        edtDays->setFrame(false);

        horizontalLayout_3->addWidget(edtDays);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        cbxCarModel = new QComboBox(layoutWidget);
        cbxCarModel->setObjectName(QString::fromUtf8("cbxCarModel"));

        horizontalLayout_6->addWidget(cbxCarModel);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        spAmount = new QSpinBox(layoutWidget);
        spAmount->setObjectName(QString::fromUtf8("spAmount"));
        spAmount->setMaximum(1000000000);

        horizontalLayout_4->addWidget(spAmount);


        verticalLayout->addLayout(horizontalLayout_4);

        layoutWidget1 = new QWidget(CRechargeDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 180, 158, 25));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        btnOk = new QPushButton(layoutWidget1);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout_5->addWidget(btnOk);

        btnCancel = new QPushButton(layoutWidget1);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_5->addWidget(btnCancel);


        retranslateUi(CRechargeDialog);

        QMetaObject::connectSlotsByName(CRechargeDialog);
    } // setupUi

    void retranslateUi(QDialog *CRechargeDialog)
    {
        CRechargeDialog->setWindowTitle(QApplication::translate("CRechargeDialog", "\346\234\210\347\247\237\345\215\241\347\273\255\350\264\271", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CRechargeDialog", "\350\265\267\345\247\213\346\227\245\346\234\237\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CRechargeDialog", "\347\273\210\346\255\242\346\227\245\346\234\237\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CRechargeDialog", "\345\242\236\345\212\240\345\244\251\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CRechargeDialog", "\350\275\246\350\276\206\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CRechargeDialog", "\346\224\266\350\264\271\351\207\221\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
        btnOk->setText(QApplication::translate("CRechargeDialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CRechargeDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CRechargeDialog: public Ui_CRechargeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECHARGEDIALOG_H
