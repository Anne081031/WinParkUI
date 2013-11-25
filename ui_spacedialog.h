/********************************************************************************
** Form generated from reading UI file 'spacedialog.ui'
**
** Created: Wed Nov 13 09:55:49 2013
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOK;
    QPushButton *pushButton_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *edtName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *spSpace;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *spNocardSpace;

    void setupUi(QDialog *CSpaceDialog)
    {
        if (CSpaceDialog->objectName().isEmpty())
            CSpaceDialog->setObjectName(QString::fromUtf8("CSpaceDialog"));
        CSpaceDialog->resize(215, 134);
        layoutWidget = new QWidget(CSpaceDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 100, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnOK = new QPushButton(layoutWidget);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout->addWidget(btnOK);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        layoutWidget1 = new QWidget(CSpaceDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 196, 80));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        edtName = new QLineEdit(layoutWidget1);
        edtName->setObjectName(QString::fromUtf8("edtName"));

        horizontalLayout_2->addWidget(edtName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        spSpace = new QSpinBox(layoutWidget1);
        spSpace->setObjectName(QString::fromUtf8("spSpace"));
        spSpace->setMaximum(999999999);

        horizontalLayout_4->addWidget(spSpace);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        spNocardSpace = new QSpinBox(layoutWidget1);
        spNocardSpace->setObjectName(QString::fromUtf8("spNocardSpace"));
        spNocardSpace->setEnabled(false);
        spNocardSpace->setMaximum(999999999);

        horizontalLayout_3->addWidget(spNocardSpace);


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
        label_3->setText(QApplication::translate("CSpaceDialog", "\346\200\273\350\275\246\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CSpaceDialog", "\346\227\240\345\215\241\346\250\241\345\274\217\345\267\262\347\224\250\350\275\246\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CSpaceDialog: public Ui_CSpaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPACEDIALOG_H
