/********************************************************************************
** Form generated from reading UI file 'dlgbulkregister.ui'
**
** Created: Fri Feb 1 10:57:16 2013
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
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
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
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chkID;
    QLabel *label;
    QSpinBox *spValue;
    QLabel *label_2;
    QSpinBox *spDigit;
    QLabel *label_3;
    QComboBox *cbxCarType;
    QLabel *label_4;
    QSpinBox *spMonth;

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
        tabRecord->setGeometry(QRect(45, 71, 631, 531));
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

        widget = new QWidget(CDlgBulkRegister);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 44, 651, 22));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        chkID = new QCheckBox(widget);
        chkID->setObjectName(QString::fromUtf8("chkID"));
        chkID->setStyleSheet(QString::fromUtf8("background-image: url(none);"));

        horizontalLayout_2->addWidget(chkID);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-image: url(none);"));

        horizontalLayout_2->addWidget(label);

        spValue = new QSpinBox(widget);
        spValue->setObjectName(QString::fromUtf8("spValue"));
        spValue->setEnabled(false);
        spValue->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        spValue->setMaximum(999999999);
        spValue->setValue(1);

        horizontalLayout_2->addWidget(spValue);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(none);"));

        horizontalLayout_2->addWidget(label_2);

        spDigit = new QSpinBox(widget);
        spDigit->setObjectName(QString::fromUtf8("spDigit"));
        spDigit->setEnabled(false);
        spDigit->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        spDigit->setMinimum(4);
        spDigit->setMaximum(999999999);

        horizontalLayout_2->addWidget(spDigit);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(none);"));

        horizontalLayout_2->addWidget(label_3);

        cbxCarType = new QComboBox(widget);
        cbxCarType->setObjectName(QString::fromUtf8("cbxCarType"));
        cbxCarType->setEnabled(false);
        cbxCarType->setStyleSheet(QString::fromUtf8("background-image: url(none);"));

        horizontalLayout_2->addWidget(cbxCarType);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(none);"));

        horizontalLayout_2->addWidget(label_4);

        spMonth = new QSpinBox(widget);
        spMonth->setObjectName(QString::fromUtf8("spMonth"));
        spMonth->setEnabled(false);
        spMonth->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        spMonth->setMinimum(0);
        spMonth->setMaximum(1200);
        spMonth->setValue(0);

        horizontalLayout_2->addWidget(spMonth);

        layoutWidget->raise();
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
        chkID->setText(QApplication::translate("CDlgBulkRegister", "\350\207\252\345\212\250\344\272\247\347\224\237\350\207\252\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDlgBulkRegister", "\345\274\200\345\247\213\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CDlgBulkRegister", "\350\207\252\347\274\226\345\217\267\344\275\215\346\225\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CDlgBulkRegister", "\346\211\271\351\207\217\350\275\246\345\236\213", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CDlgBulkRegister", "\346\211\271\351\207\217\346\234\211\346\225\210\346\234\237(\346\234\210)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgBulkRegister: public Ui_CDlgBulkRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGBULKREGISTER_H
