/********************************************************************************
** Form generated from reading UI file 'valuecarddialog.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALUECARDDIALOG_H
#define UI_VALUECARDDIALOG_H

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
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CValueCardDialog
{
public:
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnSave;
    QPushButton *btnExit;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QTextEdit *edtComment;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QComboBox *cbxCardType;
    QLabel *label_5;
    QLineEdit *edtRecorder;
    QLabel *label_6;
    QComboBox *cbxCardStatus;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *edtNumber;
    QLabel *label_9;
    QLineEdit *edtSelfNumber;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *edtRemainder;
    QLabel *label_10;
    QComboBox *cbxStandard;
    QCheckBox *chkEnter;
    QCheckBox *chkLeave;

    void setupUi(QDialog *CValueCardDialog)
    {
        if (CValueCardDialog->objectName().isEmpty())
            CValueCardDialog->setObjectName(QString::fromUtf8("CValueCardDialog"));
        CValueCardDialog->resize(470, 270);
        layoutWidget_5 = new QWidget(CValueCardDialog);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(159, 230, 158, 25));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        btnSave = new QPushButton(layoutWidget_5);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setAutoDefault(false);

        horizontalLayout_6->addWidget(btnSave);

        btnExit = new QPushButton(layoutWidget_5);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setAutoDefault(false);

        horizontalLayout_6->addWidget(btnExit);

        layoutWidget_4 = new QWidget(CValueCardDialog);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(39, 130, 391, 81));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        edtComment = new QTextEdit(layoutWidget_4);
        edtComment->setObjectName(QString::fromUtf8("edtComment"));

        horizontalLayout_5->addWidget(edtComment);

        layoutWidget_6 = new QWidget(CValueCardDialog);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(40, 41, 391, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        cbxCardType = new QComboBox(layoutWidget_6);
        cbxCardType->setObjectName(QString::fromUtf8("cbxCardType"));

        horizontalLayout_7->addWidget(cbxCardType);

        label_5 = new QLabel(layoutWidget_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        edtRecorder = new QLineEdit(layoutWidget_6);
        edtRecorder->setObjectName(QString::fromUtf8("edtRecorder"));
        edtRecorder->setEnabled(false);

        horizontalLayout_7->addWidget(edtRecorder);

        label_6 = new QLabel(layoutWidget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        cbxCardStatus = new QComboBox(layoutWidget_6);
        cbxCardStatus->setObjectName(QString::fromUtf8("cbxCardStatus"));

        horizontalLayout_7->addWidget(cbxCardStatus);

        layoutWidget_7 = new QWidget(CValueCardDialog);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(40, 10, 391, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        edtNumber = new QLineEdit(layoutWidget_7);
        edtNumber->setObjectName(QString::fromUtf8("edtNumber"));

        horizontalLayout_8->addWidget(edtNumber);

        label_9 = new QLabel(layoutWidget_7);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        edtSelfNumber = new QLineEdit(layoutWidget_7);
        edtSelfNumber->setObjectName(QString::fromUtf8("edtSelfNumber"));

        horizontalLayout_8->addWidget(edtSelfNumber);

        layoutWidget = new QWidget(CValueCardDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 70, 391, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        edtRemainder = new QLineEdit(layoutWidget);
        edtRemainder->setObjectName(QString::fromUtf8("edtRemainder"));
        edtRemainder->setEnabled(true);

        horizontalLayout->addWidget(edtRemainder);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout->addWidget(label_10);

        cbxStandard = new QComboBox(layoutWidget);
        cbxStandard->setObjectName(QString::fromUtf8("cbxStandard"));

        horizontalLayout->addWidget(cbxStandard);

        chkEnter = new QCheckBox(CValueCardDialog);
        chkEnter->setObjectName(QString::fromUtf8("chkEnter"));
        chkEnter->setGeometry(QRect(40, 100, 111, 16));
        chkLeave = new QCheckBox(CValueCardDialog);
        chkLeave->setObjectName(QString::fromUtf8("chkLeave"));
        chkLeave->setGeometry(QRect(190, 100, 101, 16));

        retranslateUi(CValueCardDialog);

        QMetaObject::connectSlotsByName(CValueCardDialog);
    } // setupUi

    void retranslateUi(QDialog *CValueCardDialog)
    {
        CValueCardDialog->setWindowTitle(QApplication::translate("CValueCardDialog", "\345\202\250\345\200\274\345\215\241", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CValueCardDialog", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        btnExit->setText(QApplication::translate("CValueCardDialog", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CValueCardDialog", "\345\244\207\346\263\250\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CValueCardDialog", "\345\215\241\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxCardType->clear();
        cbxCardType->insertItems(0, QStringList()
         << QApplication::translate("CValueCardDialog", "EMID\345\215\241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CValueCardDialog", "MIFARE\345\215\241", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("CValueCardDialog", "\347\231\273\350\256\260\350\200\205\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CValueCardDialog", "\345\215\241\347\211\207\344\275\277\347\224\250\347\212\266\346\200\201\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxCardStatus->clear();
        cbxCardStatus->insertItems(0, QStringList()
         << QApplication::translate("CValueCardDialog", "\345\220\257\347\224\250", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CValueCardDialog", "\346\214\202\345\244\261", 0, QApplication::UnicodeUTF8)
        );
        label_8->setText(QApplication::translate("CValueCardDialog", "\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CValueCardDialog", "\345\215\241\347\211\207\350\207\252\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CValueCardDialog", "\345\215\241\344\275\231\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
        edtRemainder->setText(QApplication::translate("CValueCardDialog", "0", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CValueCardDialog", "\346\211\243\350\264\271\346\240\207\345\207\206\357\274\232", 0, QApplication::UnicodeUTF8));
        chkEnter->setText(QApplication::translate("CValueCardDialog", "\345\205\245\345\234\272\345\277\205\351\241\273\345\210\267\345\215\241", 0, QApplication::UnicodeUTF8));
        chkLeave->setText(QApplication::translate("CValueCardDialog", "\345\207\272\345\234\272\345\277\205\351\241\273\345\210\267\345\215\241", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CValueCardDialog: public Ui_CValueCardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALUECARDDIALOG_H
