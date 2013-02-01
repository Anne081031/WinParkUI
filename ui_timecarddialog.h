/********************************************************************************
** Form generated from reading UI file 'timecarddialog.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMECARDDIALOG_H
#define UI_TIMECARDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CTimeCardDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtCardNumber;
    QLabel *label_6;
    QLineEdit *edtCardSelfNo;
    QLabel *label_5;
    QLineEdit *edtRecorder;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cbxCardType;
    QLabel *label_3;
    QComboBox *cbxStandard;
    QLabel *label_4;
    QComboBox *cbxCardStatus;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnSave;
    QPushButton *btnExit;

    void setupUi(QDialog *CTimeCardDialog)
    {
        if (CTimeCardDialog->objectName().isEmpty())
            CTimeCardDialog->setObjectName(QString::fromUtf8("CTimeCardDialog"));
        CTimeCardDialog->resize(451, 139);
        layoutWidget = new QWidget(CTimeCardDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 411, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        edtCardNumber = new QLineEdit(layoutWidget);
        edtCardNumber->setObjectName(QString::fromUtf8("edtCardNumber"));

        horizontalLayout->addWidget(edtCardNumber);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        edtCardSelfNo = new QLineEdit(layoutWidget);
        edtCardSelfNo->setObjectName(QString::fromUtf8("edtCardSelfNo"));

        horizontalLayout->addWidget(edtCardSelfNo);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        edtRecorder = new QLineEdit(layoutWidget);
        edtRecorder->setObjectName(QString::fromUtf8("edtRecorder"));
        edtRecorder->setEnabled(false);

        horizontalLayout->addWidget(edtRecorder);

        layoutWidget1 = new QWidget(CTimeCardDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 60, 411, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cbxCardType = new QComboBox(layoutWidget1);
        cbxCardType->setObjectName(QString::fromUtf8("cbxCardType"));

        horizontalLayout_2->addWidget(cbxCardType);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        cbxStandard = new QComboBox(layoutWidget1);
        cbxStandard->setObjectName(QString::fromUtf8("cbxStandard"));

        horizontalLayout_2->addWidget(cbxStandard);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        cbxCardStatus = new QComboBox(layoutWidget1);
        cbxCardStatus->setObjectName(QString::fromUtf8("cbxCardStatus"));

        horizontalLayout_2->addWidget(cbxCardStatus);

        layoutWidget2 = new QWidget(CTimeCardDialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(140, 100, 158, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnSave = new QPushButton(layoutWidget2);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setAutoDefault(false);

        horizontalLayout_3->addWidget(btnSave);

        btnExit = new QPushButton(layoutWidget2);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setAutoDefault(false);

        horizontalLayout_3->addWidget(btnExit);


        retranslateUi(CTimeCardDialog);

        QMetaObject::connectSlotsByName(CTimeCardDialog);
    } // setupUi

    void retranslateUi(QDialog *CTimeCardDialog)
    {
        CTimeCardDialog->setWindowTitle(QApplication::translate("CTimeCardDialog", "\350\256\241\346\227\266\345\215\241", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CTimeCardDialog", "\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CTimeCardDialog", "\345\215\241\350\207\252\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CTimeCardDialog", "\347\231\273\350\256\260\350\200\205\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CTimeCardDialog", "\345\215\241\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxCardType->clear();
        cbxCardType->insertItems(0, QStringList()
         << QApplication::translate("CTimeCardDialog", "EMID\345\215\241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CTimeCardDialog", "MIFARE\345\215\241", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("CTimeCardDialog", "\346\224\266\350\264\271\346\240\207\345\207\206\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CTimeCardDialog", "\345\215\241\347\212\266\346\200\201\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxCardStatus->clear();
        cbxCardStatus->insertItems(0, QStringList()
         << QApplication::translate("CTimeCardDialog", "\345\220\257\347\224\250", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CTimeCardDialog", "\346\214\202\345\244\261", 0, QApplication::UnicodeUTF8)
        );
        btnSave->setText(QApplication::translate("CTimeCardDialog", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        btnExit->setText(QApplication::translate("CTimeCardDialog", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CTimeCardDialog: public Ui_CTimeCardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMECARDDIALOG_H
