/********************************************************************************
** Form generated from reading UI file 'channelattribute.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANNELATTRIBUTE_H
#define UI_CHANNELATTRIBUTE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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

class Ui_CChannelAttribute
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spAddr;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *edtIP;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *edtIPCIP;

    void setupUi(QDialog *CChannelAttribute)
    {
        if (CChannelAttribute->objectName().isEmpty())
            CChannelAttribute->setObjectName(QString::fromUtf8("CChannelAttribute"));
        CChannelAttribute->resize(258, 167);
        layoutWidget = new QWidget(CChannelAttribute);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 130, 158, 25));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        btnOk = new QPushButton(layoutWidget);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout_4->addWidget(btnOk);

        btnCancel = new QPushButton(layoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_4->addWidget(btnCancel);

        widget = new QWidget(CChannelAttribute);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 11, 215, 108));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        edtName = new QLineEdit(widget);
        edtName->setObjectName(QString::fromUtf8("edtName"));

        horizontalLayout->addWidget(edtName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spAddr = new QSpinBox(widget);
        spAddr->setObjectName(QString::fromUtf8("spAddr"));
        spAddr->setMaximum(63);

        horizontalLayout_2->addWidget(spAddr);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        edtIP = new QLineEdit(widget);
        edtIP->setObjectName(QString::fromUtf8("edtIP"));
        edtIP->setReadOnly(false);

        horizontalLayout_3->addWidget(edtIP);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        edtIPCIP = new QLineEdit(widget);
        edtIPCIP->setObjectName(QString::fromUtf8("edtIPCIP"));
        edtIPCIP->setReadOnly(false);

        horizontalLayout_5->addWidget(edtIPCIP);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(CChannelAttribute);

        QMetaObject::connectSlotsByName(CChannelAttribute);
    } // setupUi

    void retranslateUi(QDialog *CChannelAttribute)
    {
        CChannelAttribute->setWindowTitle(QApplication::translate("CChannelAttribute", "\344\277\256\346\224\271\346\216\247\345\210\266\345\231\250\345\261\236\346\200\247", 0, QApplication::UnicodeUTF8));
        btnOk->setText(QApplication::translate("CChannelAttribute", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CChannelAttribute", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CChannelAttribute", "\346\216\247\345\210\266\345\231\250\345\220\215\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CChannelAttribute", "\346\216\247\345\210\266\345\231\250\345\234\260\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CChannelAttribute", "PC\346\234\272IP\345\234\260\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CChannelAttribute", "IPC\346\234\272IP\345\234\260\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CChannelAttribute: public Ui_CChannelAttribute {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNELATTRIBUTE_H
