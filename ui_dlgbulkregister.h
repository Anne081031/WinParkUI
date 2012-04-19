/********************************************************************************
** Form generated from reading UI file 'dlgbulkregister.ui'
**
** Created: Fri Mar 23 16:28:39 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGBULKREGISTER_H
#define UI_DLGBULKREGISTER_H

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
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgBulkRegister
{
public:
    QLabel *lblTitle;
    QLabel *lblClose;
    QTableWidget *tabRecord;
    QLineEdit *edtCardID;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSave;
    QPushButton *btnClose;

    void setupUi(QDialog *CDlgBulkRegister)
    {
        if (CDlgBulkRegister->objectName().isEmpty())
            CDlgBulkRegister->setObjectName(QString::fromUtf8("CDlgBulkRegister"));
        CDlgBulkRegister->resize(730, 692);
        CDlgBulkRegister->setStyleSheet(QString::fromUtf8("background-image: url(D:/WinParkUI/debug/Image/NewIcon/CommonMiddleBG-normal.jpg);"));
        lblTitle = new QLabel(CDlgBulkRegister);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(21, 5, 141, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"color: rgb(85, 0, 0);"));
        lblClose = new QLabel(CDlgBulkRegister);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(689, 5, 31, 16));
        tabRecord = new QTableWidget(CDlgBulkRegister);
        tabRecord->setObjectName(QString::fromUtf8("tabRecord"));
        tabRecord->setGeometry(QRect(45, 61, 631, 541));
        tabRecord->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        edtCardID = new QLineEdit(CDlgBulkRegister);
        edtCardID->setObjectName(QString::fromUtf8("edtCardID"));
        edtCardID->setGeometry(QRect(270, 290, 113, 20));
        edtCardID->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        layoutWidget = new QWidget(CDlgBulkRegister);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(289, 620, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnSave = new QPushButton(layoutWidget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setStyleSheet(QString::fromUtf8("background-image: url(none);"));

        horizontalLayout->addWidget(btnSave);

        btnClose = new QPushButton(layoutWidget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setStyleSheet(QString::fromUtf8("background-image: url(none);"));

        horizontalLayout->addWidget(btnClose);

        layoutWidget->raise();
        edtCardID->raise();
        lblTitle->raise();
        lblClose->raise();
        tabRecord->raise();

        retranslateUi(CDlgBulkRegister);

        QMetaObject::connectSlotsByName(CDlgBulkRegister);
    } // setupUi

    void retranslateUi(QDialog *CDlgBulkRegister)
    {
        CDlgBulkRegister->setWindowTitle(QApplication::translate("CDlgBulkRegister", "\345\215\241\346\211\271\351\207\217\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CDlgBulkRegister->setStatusTip(QApplication::translate("CDlgBulkRegister", "%1\345\215\241\346\211\271\351\207\217\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        lblTitle->setText(QString());
        lblClose->setText(QString());
        btnSave->setText(QApplication::translate("CDlgBulkRegister", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("CDlgBulkRegister", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgBulkRegister: public Ui_CDlgBulkRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGBULKREGISTER_H
