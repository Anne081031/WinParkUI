/********************************************************************************
** Form generated from reading UI file 'monthlycarddialog.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONTHLYCARDDIALOG_H
#define UI_MONTHLYCARDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMonthlyCardDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblTitle;
    QDateTimeEdit *dtStart;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblTilt1;
    QDateTimeEdit *dtEnd;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QTextEdit *edtComment;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnSave;
    QPushButton *btnExit;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtNumber;
    QLabel *label_8;
    QLineEdit *edtSelfNumber;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cbxCardType;
    QLabel *label_5;
    QLineEdit *edtRecorder;
    QLabel *label_6;
    QComboBox *cbxCardStatus;
    QLabel *lblStart;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *chkEnter;
    QCheckBox *chkLeave;
    QCheckBox *chkMIMO;

    void setupUi(QDialog *CMonthlyCardDialog)
    {
        if (CMonthlyCardDialog->objectName().isEmpty())
            CMonthlyCardDialog->setObjectName(QString::fromUtf8("CMonthlyCardDialog"));
        CMonthlyCardDialog->resize(477, 330);
        layoutWidget = new QWidget(CMonthlyCardDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 90, 254, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lblTitle = new QLabel(layoutWidget);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));

        horizontalLayout_3->addWidget(lblTitle);

        dtStart = new QDateTimeEdit(layoutWidget);
        dtStart->setObjectName(QString::fromUtf8("dtStart"));

        horizontalLayout_3->addWidget(dtStart);

        layoutWidget1 = new QWidget(CMonthlyCardDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 120, 254, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lblTilt1 = new QLabel(layoutWidget1);
        lblTilt1->setObjectName(QString::fromUtf8("lblTilt1"));

        horizontalLayout_4->addWidget(lblTilt1);

        dtEnd = new QDateTimeEdit(layoutWidget1);
        dtEnd->setObjectName(QString::fromUtf8("dtEnd"));

        horizontalLayout_4->addWidget(dtEnd);

        layoutWidget2 = new QWidget(CMonthlyCardDialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 180, 391, 81));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        edtComment = new QTextEdit(layoutWidget2);
        edtComment->setObjectName(QString::fromUtf8("edtComment"));

        horizontalLayout_5->addWidget(edtComment);

        layoutWidget3 = new QWidget(CMonthlyCardDialog);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(160, 280, 158, 25));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        btnSave = new QPushButton(layoutWidget3);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setAutoDefault(false);

        horizontalLayout_6->addWidget(btnSave);

        btnExit = new QPushButton(layoutWidget3);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setAutoDefault(false);

        horizontalLayout_6->addWidget(btnExit);

        layoutWidget4 = new QWidget(CMonthlyCardDialog);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(41, 30, 391, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget4);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        edtNumber = new QLineEdit(layoutWidget4);
        edtNumber->setObjectName(QString::fromUtf8("edtNumber"));

        horizontalLayout->addWidget(edtNumber);

        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        edtSelfNumber = new QLineEdit(layoutWidget4);
        edtSelfNumber->setObjectName(QString::fromUtf8("edtSelfNumber"));

        horizontalLayout->addWidget(edtSelfNumber);

        layoutWidget5 = new QWidget(CMonthlyCardDialog);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(41, 61, 391, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cbxCardType = new QComboBox(layoutWidget5);
        cbxCardType->setObjectName(QString::fromUtf8("cbxCardType"));

        horizontalLayout_2->addWidget(cbxCardType);

        label_5 = new QLabel(layoutWidget5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        edtRecorder = new QLineEdit(layoutWidget5);
        edtRecorder->setObjectName(QString::fromUtf8("edtRecorder"));
        edtRecorder->setEnabled(false);

        horizontalLayout_2->addWidget(edtRecorder);

        label_6 = new QLabel(layoutWidget5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        cbxCardStatus = new QComboBox(layoutWidget5);
        cbxCardStatus->setObjectName(QString::fromUtf8("cbxCardStatus"));

        horizontalLayout_2->addWidget(cbxCardStatus);

        lblStart = new QLabel(CMonthlyCardDialog);
        lblStart->setObjectName(QString::fromUtf8("lblStart"));
        lblStart->setGeometry(QRect(350, 280, 101, 16));
        layoutWidget6 = new QWidget(CMonthlyCardDialog);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(40, 150, 391, 18));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        chkEnter = new QCheckBox(layoutWidget6);
        chkEnter->setObjectName(QString::fromUtf8("chkEnter"));

        horizontalLayout_7->addWidget(chkEnter);

        chkLeave = new QCheckBox(layoutWidget6);
        chkLeave->setObjectName(QString::fromUtf8("chkLeave"));

        horizontalLayout_7->addWidget(chkLeave);

        chkMIMO = new QCheckBox(layoutWidget6);
        chkMIMO->setObjectName(QString::fromUtf8("chkMIMO"));

        horizontalLayout_7->addWidget(chkMIMO);


        retranslateUi(CMonthlyCardDialog);

        QMetaObject::connectSlotsByName(CMonthlyCardDialog);
    } // setupUi

    void retranslateUi(QDialog *CMonthlyCardDialog)
    {
        CMonthlyCardDialog->setWindowTitle(QApplication::translate("CMonthlyCardDialog", "\346\234\210\347\247\237\345\215\241", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QApplication::translate("CMonthlyCardDialog", "\346\234\211\346\225\210\346\234\237\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        lblTilt1->setText(QApplication::translate("CMonthlyCardDialog", "\346\234\211\346\225\210\346\234\237\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CMonthlyCardDialog", "\345\244\207\346\263\250\357\274\232", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CMonthlyCardDialog", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        btnExit->setText(QApplication::translate("CMonthlyCardDialog", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CMonthlyCardDialog", "\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CMonthlyCardDialog", "\345\215\241\347\211\207\350\207\252\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CMonthlyCardDialog", "\345\215\241\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxCardType->clear();
        cbxCardType->insertItems(0, QStringList()
         << QApplication::translate("CMonthlyCardDialog", "EMID\345\215\241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CMonthlyCardDialog", "MIFARE\345\215\241", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("CMonthlyCardDialog", "\347\231\273\350\256\260\350\200\205\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CMonthlyCardDialog", "\345\215\241\347\211\207\344\275\277\347\224\250\347\212\266\346\200\201\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxCardStatus->clear();
        cbxCardStatus->insertItems(0, QStringList()
         << QApplication::translate("CMonthlyCardDialog", "\345\220\257\347\224\250", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CMonthlyCardDialog", "\346\214\202\345\244\261", 0, QApplication::UnicodeUTF8)
        );
        lblStart->setText(QString());
        chkEnter->setText(QApplication::translate("CMonthlyCardDialog", "\345\205\245\345\234\272\345\277\205\351\241\273\345\210\267\345\215\241", 0, QApplication::UnicodeUTF8));
        chkLeave->setText(QApplication::translate("CMonthlyCardDialog", "\345\207\272\345\234\272\345\277\205\351\241\273\345\210\267\345\215\241", 0, QApplication::UnicodeUTF8));
        chkMIMO->setText(QApplication::translate("CMonthlyCardDialog", "\345\205\201\350\256\270\345\244\232\350\277\233\345\244\232\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CMonthlyCardDialog: public Ui_CMonthlyCardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONTHLYCARDDIALOG_H
