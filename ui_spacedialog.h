/********************************************************************************
** Form generated from reading UI file 'spacedialog.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPACEDIALOG_H
#define UI_SPACEDIALOG_H

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

class Ui_CSpaceDialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOK;
    QPushButton *pushButton_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *edtName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *spSpace;

    void setupUi(QDialog *CSpaceDialog)
    {
        if (CSpaceDialog->objectName().isEmpty())
            CSpaceDialog->setObjectName(QString::fromUtf8("CSpaceDialog"));
        CSpaceDialog->resize(183, 115);
        widget = new QWidget(CSpaceDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(12, 78, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnOK = new QPushButton(widget);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout->addWidget(btnOK);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        widget1 = new QWidget(CSpaceDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 10, 161, 52));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        edtName = new QLineEdit(widget1);
        edtName->setObjectName(QString::fromUtf8("edtName"));

        horizontalLayout_2->addWidget(edtName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        spSpace = new QSpinBox(widget1);
        spSpace->setObjectName(QString::fromUtf8("spSpace"));
        spSpace->setMaximum(999999999);

        horizontalLayout_3->addWidget(spSpace);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(CSpaceDialog);

        QMetaObject::connectSlotsByName(CSpaceDialog);
    } // setupUi

    void retranslateUi(QDialog *CSpaceDialog)
    {
        CSpaceDialog->setWindowTitle(QApplication::translate("CSpaceDialog", "\347\274\226\350\276\221\350\275\246\344\275\215\346\225\260", 0, QApplication::UnicodeUTF8));
        btnOK->setText(QApplication::translate("CSpaceDialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("CSpaceDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CSpaceDialog", "\345\220\215\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CSpaceDialog", "\350\275\246\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CSpaceDialog: public Ui_CSpaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPACEDIALOG_H
