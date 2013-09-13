/********************************************************************************
** Form generated from reading UI file 'dlgblacklistlocation.ui'
**
** Created: Thu Sep 12 11:31:37 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGBLACKLISTLOCATION_H
#define UI_DLGBLACKLISTLOCATION_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgBlacklistLocation
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtPlate;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnOk;
    QPushButton *btnClose;

    void setupUi(QDialog *CDlgBlacklistLocation)
    {
        if (CDlgBlacklistLocation->objectName().isEmpty())
            CDlgBlacklistLocation->setObjectName(QString::fromUtf8("CDlgBlacklistLocation"));
        CDlgBlacklistLocation->resize(233, 86);
        CDlgBlacklistLocation->setMinimumSize(QSize(233, 86));
        CDlgBlacklistLocation->setMaximumSize(QSize(233, 86));
        layoutWidget = new QWidget(CDlgBlacklistLocation);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 191, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        edtPlate = new QLineEdit(layoutWidget);
        edtPlate->setObjectName(QString::fromUtf8("edtPlate"));

        horizontalLayout->addWidget(edtPlate);

        layoutWidget1 = new QWidget(CDlgBlacklistLocation);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 50, 191, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnOk = new QPushButton(layoutWidget1);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout_2->addWidget(btnOk);

        btnClose = new QPushButton(layoutWidget1);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout_2->addWidget(btnClose);


        retranslateUi(CDlgBlacklistLocation);

        QMetaObject::connectSlotsByName(CDlgBlacklistLocation);
    } // setupUi

    void retranslateUi(QDialog *CDlgBlacklistLocation)
    {
        CDlgBlacklistLocation->setWindowTitle(QApplication::translate("CDlgBlacklistLocation", "\351\273\221\345\220\215\345\215\225\350\275\246\350\256\260\345\275\225\346\237\245\346\211\276", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDlgBlacklistLocation", "\350\275\246\347\211\214\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        btnOk->setText(QApplication::translate("CDlgBlacklistLocation", "\346\237\245\346\211\276", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("CDlgBlacklistLocation", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgBlacklistLocation: public Ui_CDlgBlacklistLocation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGBLACKLISTLOCATION_H
