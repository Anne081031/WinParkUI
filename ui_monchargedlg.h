/********************************************************************************
** Form generated from reading UI file 'monchargedlg.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONCHARGEDLG_H
#define UI_MONCHARGEDLG_H

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

class Ui_CMonChargeDlg
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateTimeEdit *dtStart;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateTimeEdit *edtEnd;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *edtDay;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *cbxCarModel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *spAmount;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnSave;
    QPushButton *btnCancel;

    void setupUi(QDialog *CMonChargeDlg)
    {
        if (CMonChargeDlg->objectName().isEmpty())
            CMonChargeDlg->setObjectName(QString::fromUtf8("CMonChargeDlg"));
        CMonChargeDlg->resize(281, 235);
        widget = new QWidget(CMonChargeDlg);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(32, 32, 220, 167));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        dtStart = new QDateTimeEdit(widget);
        dtStart->setObjectName(QString::fromUtf8("dtStart"));

        horizontalLayout->addWidget(dtStart);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        edtEnd = new QDateTimeEdit(widget);
        edtEnd->setObjectName(QString::fromUtf8("edtEnd"));

        horizontalLayout_2->addWidget(edtEnd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        edtDay = new QLineEdit(widget);
        edtDay->setObjectName(QString::fromUtf8("edtDay"));
        edtDay->setEnabled(false);

        horizontalLayout_3->addWidget(edtDay);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        cbxCarModel = new QComboBox(widget);
        cbxCarModel->setObjectName(QString::fromUtf8("cbxCarModel"));

        horizontalLayout_6->addWidget(cbxCarModel);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        spAmount = new QSpinBox(widget);
        spAmount->setObjectName(QString::fromUtf8("spAmount"));

        horizontalLayout_4->addWidget(spAmount);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btnSave = new QPushButton(widget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout_5->addWidget(btnSave);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_5->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(CMonChargeDlg);

        QMetaObject::connectSlotsByName(CMonChargeDlg);
    } // setupUi

    void retranslateUi(QDialog *CMonChargeDlg)
    {
        CMonChargeDlg->setWindowTitle(QApplication::translate("CMonChargeDlg", "\346\234\210\347\247\237\345\215\241\347\273\255\350\264\271", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CMonChargeDlg", "\350\265\267\345\247\213\346\227\245\346\234\237\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CMonChargeDlg", "\346\210\252\346\255\242\346\227\245\346\234\237\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CMonChargeDlg", "\347\273\255\350\264\271\345\244\251\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CMonChargeDlg", "\350\275\246\350\276\206\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CMonChargeDlg", "\347\273\255\350\264\271\351\207\221\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CMonChargeDlg", "\345\205\203", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CMonChargeDlg", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CMonChargeDlg", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CMonChargeDlg: public Ui_CMonChargeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONCHARGEDLG_H
