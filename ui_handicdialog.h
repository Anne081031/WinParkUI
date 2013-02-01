/********************************************************************************
** Form generated from reading UI file 'handicdialog.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANDICDIALOG_H
#define UI_HANDICDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CHandICDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtID;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateTimeEdit *dtEnter;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateTimeEdit *dtLeave;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *spAmount;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *edtStatus;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *edtSum;
    QLabel *label_7;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnConnect;
    QPushButton *btnDiscount;

    void setupUi(QDialog *CHandICDialog)
    {
        if (CHandICDialog->objectName().isEmpty())
            CHandICDialog->setObjectName(QString::fromUtf8("CHandICDialog"));
        CHandICDialog->resize(353, 316);
        widget = new QWidget(CHandICDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 291, 191));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        edtID = new QLineEdit(widget);
        edtID->setObjectName(QString::fromUtf8("edtID"));

        horizontalLayout->addWidget(edtID);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        dtEnter = new QDateTimeEdit(widget);
        dtEnter->setObjectName(QString::fromUtf8("dtEnter"));

        horizontalLayout_2->addWidget(dtEnter);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        dtLeave = new QDateTimeEdit(widget);
        dtLeave->setObjectName(QString::fromUtf8("dtLeave"));

        horizontalLayout_3->addWidget(dtLeave);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        spAmount = new QDoubleSpinBox(widget);
        spAmount->setObjectName(QString::fromUtf8("spAmount"));

        horizontalLayout_4->addWidget(spAmount);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        edtStatus = new QLineEdit(widget);
        edtStatus->setObjectName(QString::fromUtf8("edtStatus"));
        edtStatus->setEnabled(false);

        horizontalLayout_5->addWidget(edtStatus);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        edtSum = new QLineEdit(widget);
        edtSum->setObjectName(QString::fromUtf8("edtSum"));
        edtSum->setEnabled(false);

        horizontalLayout_6->addWidget(edtSum);


        verticalLayout->addLayout(horizontalLayout_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        widget1 = new QWidget(CHandICDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(90, 250, 158, 25));
        horizontalLayout_7 = new QHBoxLayout(widget1);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        btnConnect = new QPushButton(widget1);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        horizontalLayout_7->addWidget(btnConnect);

        btnDiscount = new QPushButton(widget1);
        btnDiscount->setObjectName(QString::fromUtf8("btnDiscount"));

        horizontalLayout_7->addWidget(btnDiscount);


        retranslateUi(CHandICDialog);

        QMetaObject::connectSlotsByName(CHandICDialog);
    } // setupUi

    void retranslateUi(QDialog *CHandICDialog)
    {
        CHandICDialog->setWindowTitle(QApplication::translate("CHandICDialog", "\346\211\213\346\214\201IC\345\215\241\345\244\204\347\220\206", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CHandICDialog", "\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CHandICDialog", "\350\277\233\345\205\245\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CHandICDialog", "\345\207\272\345\234\272\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CHandICDialog", "\346\224\266\350\264\271\351\207\221\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CHandICDialog", "\347\212\266\346\200\201\344\277\241\346\201\257\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CHandICDialog", "\350\257\273\345\205\245\351\207\221\351\242\235\345\220\210\350\256\241\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CHandICDialog", "\345\205\203", 0, QApplication::UnicodeUTF8));
        btnConnect->setText(QApplication::translate("CHandICDialog", "\350\277\236\346\216\245\350\257\273\345\206\231\345\231\250", 0, QApplication::UnicodeUTF8));
        btnDiscount->setText(QApplication::translate("CHandICDialog", "\345\201\234\346\255\242\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CHandICDialog: public Ui_CHandICDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANDICDIALOG_H
