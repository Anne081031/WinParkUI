/********************************************************************************
** Form generated from reading UI file 'cdlgquerywhere.ui'
**
** Created: Fri Feb 1 10:57:16 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDLGQUERYWHERE_H
#define UI_CDLGQUERYWHERE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgQueryWhere
{
public:
    QGroupBox *groupBox;
    QRadioButton *rb1;
    QRadioButton *rb2;
    QRadioButton *rb3;
    QLineEdit *edtCard;
    QLineEdit *edtPlate;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *CDlgQueryWhere)
    {
        if (CDlgQueryWhere->objectName().isEmpty())
            CDlgQueryWhere->setObjectName(QString::fromUtf8("CDlgQueryWhere"));
        CDlgQueryWhere->resize(219, 214);
        groupBox = new QGroupBox(CDlgQueryWhere);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 181, 151));
        rb1 = new QRadioButton(groupBox);
        rb1->setObjectName(QString::fromUtf8("rb1"));
        rb1->setGeometry(QRect(10, 20, 89, 16));
        rb1->setChecked(true);
        rb2 = new QRadioButton(groupBox);
        rb2->setObjectName(QString::fromUtf8("rb2"));
        rb2->setGeometry(QRect(10, 50, 89, 16));
        rb3 = new QRadioButton(groupBox);
        rb3->setObjectName(QString::fromUtf8("rb3"));
        rb3->setGeometry(QRect(10, 100, 89, 16));
        edtCard = new QLineEdit(groupBox);
        edtCard->setObjectName(QString::fromUtf8("edtCard"));
        edtCard->setEnabled(false);
        edtCard->setGeometry(QRect(20, 70, 113, 20));
        edtPlate = new QLineEdit(groupBox);
        edtPlate->setObjectName(QString::fromUtf8("edtPlate"));
        edtPlate->setEnabled(false);
        edtPlate->setGeometry(QRect(20, 120, 113, 20));
        widget = new QWidget(CDlgQueryWhere);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 180, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnOK = new QPushButton(widget);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout->addWidget(btnOK);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        retranslateUi(CDlgQueryWhere);

        QMetaObject::connectSlotsByName(CDlgQueryWhere);
    } // setupUi

    void retranslateUi(QDialog *CDlgQueryWhere)
    {
        CDlgQueryWhere->setWindowTitle(QApplication::translate("CDlgQueryWhere", "\346\234\210\347\247\237\345\215\241\350\277\233\345\207\272\346\254\241\346\225\260\346\237\245\350\257\242\346\235\241\344\273\266", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CDlgQueryWhere", "\346\235\241\344\273\266", 0, QApplication::UnicodeUTF8));
        rb1->setText(QApplication::translate("CDlgQueryWhere", "\346\211\200\346\234\211\346\234\210\347\247\237\345\215\241", 0, QApplication::UnicodeUTF8));
        rb2->setText(QApplication::translate("CDlgQueryWhere", "\346\214\207\345\256\232\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        rb3->setText(QApplication::translate("CDlgQueryWhere", "\346\214\207\345\256\232\350\275\246\347\211\214\345\217\267", 0, QApplication::UnicodeUTF8));
        btnOK->setText(QApplication::translate("CDlgQueryWhere", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CDlgQueryWhere", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgQueryWhere: public Ui_CDlgQueryWhere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDLGQUERYWHERE_H
