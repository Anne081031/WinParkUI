/********************************************************************************
** Form generated from reading UI file 'cdlgconfig.ui'
**
** Created: Wed Aug 21 16:01:56 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDLGCONFIG_H
#define UI_CDLGCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgConfig
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbxUIType;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnOk;
    QPushButton *btnClose;

    void setupUi(QDialog *CDlgConfig)
    {
        if (CDlgConfig->objectName().isEmpty())
            CDlgConfig->setObjectName(QString::fromUtf8("CDlgConfig"));
        CDlgConfig->resize(191, 111);
        CDlgConfig->setMinimumSize(QSize(191, 111));
        CDlgConfig->setMaximumSize(QSize(191, 111));
        widget = new QWidget(CDlgConfig);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 154, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cbxUIType = new QComboBox(widget);
        cbxUIType->setObjectName(QString::fromUtf8("cbxUIType"));

        horizontalLayout->addWidget(cbxUIType);

        widget1 = new QWidget(CDlgConfig);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 70, 158, 25));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnOk = new QPushButton(widget1);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout_2->addWidget(btnOk);

        btnClose = new QPushButton(widget1);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout_2->addWidget(btnClose);


        retranslateUi(CDlgConfig);

        QMetaObject::connectSlotsByName(CDlgConfig);
    } // setupUi

    void retranslateUi(QDialog *CDlgConfig)
    {
        CDlgConfig->setWindowTitle(QApplication::translate("CDlgConfig", "\345\217\202\346\225\260\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDlgConfig", "\344\270\273\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        btnOk->setText(QApplication::translate("CDlgConfig", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("CDlgConfig", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgConfig: public Ui_CDlgConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDLGCONFIG_H
