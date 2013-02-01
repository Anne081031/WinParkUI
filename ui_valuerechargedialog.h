/********************************************************************************
** Form generated from reading UI file 'valuerechargedialog.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALUERECHARGEDIALOG_H
#define UI_VALUERECHARGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CValueRechargeDialog
{
public:
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spRemainder;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spAmount;

    void setupUi(QDialog *CValueRechargeDialog)
    {
        if (CValueRechargeDialog->objectName().isEmpty())
            CValueRechargeDialog->setObjectName(QString::fromUtf8("CValueRechargeDialog"));
        CValueRechargeDialog->resize(234, 173);
        layoutWidget_2 = new QWidget(CValueRechargeDialog);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 130, 158, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnOk = new QPushButton(layoutWidget_2);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout_3->addWidget(btnOk);

        btnCancel = new QPushButton(layoutWidget_2);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_3->addWidget(btnCancel);

        layoutWidget = new QWidget(CValueRechargeDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 191, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spRemainder = new QSpinBox(layoutWidget);
        spRemainder->setObjectName(QString::fromUtf8("spRemainder"));
        spRemainder->setMaximum(1000000000);

        horizontalLayout->addWidget(spRemainder);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spAmount = new QSpinBox(layoutWidget);
        spAmount->setObjectName(QString::fromUtf8("spAmount"));
        spAmount->setMaximum(1000000000);

        horizontalLayout_2->addWidget(spAmount);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(CValueRechargeDialog);

        QMetaObject::connectSlotsByName(CValueRechargeDialog);
    } // setupUi

    void retranslateUi(QDialog *CValueRechargeDialog)
    {
        CValueRechargeDialog->setWindowTitle(QApplication::translate("CValueRechargeDialog", "\345\202\250\345\200\274\345\215\241\347\273\255\350\264\271", 0, QApplication::UnicodeUTF8));
        btnOk->setText(QApplication::translate("CValueRechargeDialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CValueRechargeDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CValueRechargeDialog", "\344\275\231\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CValueRechargeDialog", "\345\242\236\345\212\240\351\207\221\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CValueRechargeDialog: public Ui_CValueRechargeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALUERECHARGEDIALOG_H
