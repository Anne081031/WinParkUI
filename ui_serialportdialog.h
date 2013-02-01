/********************************************************************************
** Form generated from reading UI file 'serialportdialog.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALPORTDIALOG_H
#define UI_SERIALPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSerialPortDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbxPort;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cbxBaud;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *cbxData;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *cbxParity;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *cbxStop;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *cbxFlow;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *CSerialPortDialog)
    {
        if (CSerialPortDialog->objectName().isEmpty())
            CSerialPortDialog->setObjectName(QString::fromUtf8("CSerialPortDialog"));
        CSerialPortDialog->resize(243, 253);
        layoutWidget = new QWidget(CSerialPortDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(31, 21, 160, 195));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cbxPort = new QComboBox(layoutWidget);
        cbxPort->setObjectName(QString::fromUtf8("cbxPort"));

        horizontalLayout->addWidget(cbxPort);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cbxBaud = new QComboBox(layoutWidget);
        cbxBaud->setObjectName(QString::fromUtf8("cbxBaud"));

        horizontalLayout_2->addWidget(cbxBaud);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        cbxData = new QComboBox(layoutWidget);
        cbxData->setObjectName(QString::fromUtf8("cbxData"));

        horizontalLayout_3->addWidget(cbxData);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        cbxParity = new QComboBox(layoutWidget);
        cbxParity->setObjectName(QString::fromUtf8("cbxParity"));

        horizontalLayout_4->addWidget(cbxParity);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        cbxStop = new QComboBox(layoutWidget);
        cbxStop->setObjectName(QString::fromUtf8("cbxStop"));

        horizontalLayout_5->addWidget(cbxStop);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        cbxFlow = new QComboBox(layoutWidget);
        cbxFlow->setObjectName(QString::fromUtf8("cbxFlow"));

        horizontalLayout_6->addWidget(cbxFlow);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        btnOk = new QPushButton(layoutWidget);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout_7->addWidget(btnOk);

        btnCancel = new QPushButton(layoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_7->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(CSerialPortDialog);

        QMetaObject::connectSlotsByName(CSerialPortDialog);
    } // setupUi

    void retranslateUi(QDialog *CSerialPortDialog)
    {
        CSerialPortDialog->setWindowTitle(QApplication::translate("CSerialPortDialog", "\344\270\262\345\217\243\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CSerialPortDialog", "COM \347\253\257\345\217\243\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxPort->clear();
        cbxPort->insertItems(0, QStringList()
         << QApplication::translate("CSerialPortDialog", "COM1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "COM2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "COM3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "COM4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "COM5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "COM6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "COM7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "COM8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "COM9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "COM10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "COM11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "COM12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "COM13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "COM14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "COM15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "COM16", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("CSerialPortDialog", "\346\257\217\347\247\222\344\270\272\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxBaud->clear();
        cbxBaud->insertItems(0, QStringList()
         << QApplication::translate("CSerialPortDialog", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "75", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "110", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "134", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "150", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "300", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "1200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "1800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "2400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "14400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "56000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "76800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "115200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "128000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "256000", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("CSerialPortDialog", "\346\225\260\346\215\256\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxData->clear();
        cbxData->insertItems(0, QStringList()
         << QApplication::translate("CSerialPortDialog", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "8", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("CSerialPortDialog", "\345\245\207\345\201\266\346\240\241\351\252\214\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxParity->clear();
        cbxParity->insertItems(0, QStringList()
         << QApplication::translate("CSerialPortDialog", "\346\227\240", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "\345\245\207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "\345\201\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "\346\240\207\345\277\227", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "\347\251\272\346\240\274", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("CSerialPortDialog", "\345\201\234\346\255\242\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxStop->clear();
        cbxStop->insertItems(0, QStringList()
         << QApplication::translate("CSerialPortDialog", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "1.5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "2", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("CSerialPortDialog", "\346\265\201\346\216\247\345\210\266\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxFlow->clear();
        cbxFlow->insertItems(0, QStringList()
         << QApplication::translate("CSerialPortDialog", "\346\227\240", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "\347\241\254\344\273\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialPortDialog", "Xon / Xoff", 0, QApplication::UnicodeUTF8)
        );
        btnOk->setText(QApplication::translate("CSerialPortDialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CSerialPortDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CSerialPortDialog: public Ui_CSerialPortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPORTDIALOG_H
