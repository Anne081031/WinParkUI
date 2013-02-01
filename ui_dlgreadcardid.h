/********************************************************************************
** Form generated from reading UI file 'dlgreadcardid.ui'
**
** Created: Fri Feb 1 10:57:16 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGREADCARDID_H
#define UI_DLGREADCARDID_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgReadCardID
{
public:
    QLabel *label;
    QPushButton *btnDeleteAll;
    QPushButton *btnDeleteSingle;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QListWidget *lstCardID;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *edtCardID;

    void setupUi(QDialog *CDlgReadCardID)
    {
        if (CDlgReadCardID->objectName().isEmpty())
            CDlgReadCardID->setObjectName(QString::fromUtf8("CDlgReadCardID"));
        CDlgReadCardID->resize(200, 320);
        CDlgReadCardID->setMinimumSize(QSize(200, 320));
        CDlgReadCardID->setMaximumSize(QSize(200, 320));
        label = new QLabel(CDlgReadCardID);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 54, 12));
        btnDeleteAll = new QPushButton(CDlgReadCardID);
        btnDeleteAll->setObjectName(QString::fromUtf8("btnDeleteAll"));
        btnDeleteAll->setGeometry(QRect(30, 250, 75, 23));
        btnDeleteSingle = new QPushButton(CDlgReadCardID);
        btnDeleteSingle->setObjectName(QString::fromUtf8("btnDeleteSingle"));
        btnDeleteSingle->setGeometry(QRect(110, 250, 75, 23));
        btnOK = new QPushButton(CDlgReadCardID);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setGeometry(QRect(30, 280, 75, 23));
        btnCancel = new QPushButton(CDlgReadCardID);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(110, 280, 75, 23));
        lstCardID = new QListWidget(CDlgReadCardID);
        lstCardID->setObjectName(QString::fromUtf8("lstCardID"));
        lstCardID->setGeometry(QRect(30, 70, 141, 171));
        widget = new QWidget(CDlgReadCardID);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 151, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        edtCardID = new QLineEdit(widget);
        edtCardID->setObjectName(QString::fromUtf8("edtCardID"));
        edtCardID->setReadOnly(true);

        horizontalLayout->addWidget(edtCardID);


        retranslateUi(CDlgReadCardID);

        QMetaObject::connectSlotsByName(CDlgReadCardID);
    } // setupUi

    void retranslateUi(QDialog *CDlgReadCardID)
    {
        CDlgReadCardID->setWindowTitle(QApplication::translate("CDlgReadCardID", "\350\257\273\345\217\226\350\246\201\346\216\210\346\235\203\347\232\204\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDlgReadCardID", "\345\215\241\345\217\267\345\210\227\350\241\250\357\274\232", 0, QApplication::UnicodeUTF8));
        btnDeleteAll->setText(QApplication::translate("CDlgReadCardID", "\345\210\240\351\231\244\346\211\200\346\234\211", 0, QApplication::UnicodeUTF8));
        btnDeleteSingle->setText(QApplication::translate("CDlgReadCardID", "\345\210\240\351\231\244\351\200\211\345\256\232\351\241\271", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnOK->setToolTip(QApplication::translate("CDlgReadCardID", "\346\227\240\345\215\241\345\217\267\357\274\214\346\237\245\350\257\242\346\211\200\346\234\211\345\215\241\343\200\202", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnOK->setText(QApplication::translate("CDlgReadCardID", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CDlgReadCardID", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CDlgReadCardID", "\350\257\273\345\217\226\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgReadCardID: public Ui_CDlgReadCardID {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGREADCARDID_H
