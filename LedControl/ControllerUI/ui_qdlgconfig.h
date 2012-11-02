/********************************************************************************
** Form generated from reading UI file 'qdlgconfig.ui'
**
** Created: Fri Nov 2 15:46:36 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDLGCONFIG_H
#define UI_QDLGCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QDlgConfig
{
public:
    QGroupBox *gbPortOptions;
    QComboBox *cbStopBit;
    QLabel *label_5;
    QComboBox *cbFlowCtrl;
    QLabel *label_6;
    QLabel *label;
    QComboBox *cbPort;
    QLabel *label_4;
    QComboBox *cbDataBit;
    QLabel *label_3;
    QComboBox *cbParity;
    QComboBox *cbBaudRate;
    QLabel *label_2;
    QGroupBox *gbModemOptions;
    QLabel *label_7;
    QComboBox *cbDataFlowCtrl;
    QLabel *label_8;
    QComboBox *cbAutoReply;
    QGroupBox *gbBufferOptions;
    QSpinBox *sbInBuffer;
    QLabel *label_9;
    QLabel *label_10;
    QSpinBox *sbOutBuffer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *QDlgConfig)
    {
        if (QDlgConfig->objectName().isEmpty())
            QDlgConfig->setObjectName(QString::fromUtf8("QDlgConfig"));
        QDlgConfig->resize(482, 279);
        QDlgConfig->setMinimumSize(QSize(482, 279));
        QDlgConfig->setMaximumSize(QSize(482, 279));
        gbPortOptions = new QGroupBox(QDlgConfig);
        gbPortOptions->setObjectName(QString::fromUtf8("gbPortOptions"));
        gbPortOptions->setGeometry(QRect(20, 20, 201, 201));
        cbStopBit = new QComboBox(gbPortOptions);
        cbStopBit->setObjectName(QString::fromUtf8("cbStopBit"));
        cbStopBit->setGeometry(QRect(70, 140, 120, 20));
        label_5 = new QLabel(gbPortOptions);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(11, 140, 36, 16));
        cbFlowCtrl = new QComboBox(gbPortOptions);
        cbFlowCtrl->setObjectName(QString::fromUtf8("cbFlowCtrl"));
        cbFlowCtrl->setGeometry(QRect(70, 170, 120, 20));
        label_6 = new QLabel(gbPortOptions);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(11, 170, 36, 16));
        label = new QLabel(gbPortOptions);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(11, 21, 24, 16));
        cbPort = new QComboBox(gbPortOptions);
        cbPort->setObjectName(QString::fromUtf8("cbPort"));
        cbPort->setGeometry(QRect(70, 21, 120, 20));
        label_4 = new QLabel(gbPortOptions);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(11, 110, 36, 16));
        cbDataBit = new QComboBox(gbPortOptions);
        cbDataBit->setObjectName(QString::fromUtf8("cbDataBit"));
        cbDataBit->setGeometry(QRect(70, 110, 120, 20));
        label_3 = new QLabel(gbPortOptions);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(11, 80, 48, 16));
        cbParity = new QComboBox(gbPortOptions);
        cbParity->setObjectName(QString::fromUtf8("cbParity"));
        cbParity->setGeometry(QRect(70, 80, 120, 20));
        cbBaudRate = new QComboBox(gbPortOptions);
        cbBaudRate->setObjectName(QString::fromUtf8("cbBaudRate"));
        cbBaudRate->setGeometry(QRect(70, 50, 120, 20));
        label_2 = new QLabel(gbPortOptions);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(11, 50, 36, 16));
        gbModemOptions = new QGroupBox(QDlgConfig);
        gbModemOptions->setObjectName(QString::fromUtf8("gbModemOptions"));
        gbModemOptions->setGeometry(QRect(230, 20, 231, 81));
        label_7 = new QLabel(gbModemOptions);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(11, 21, 48, 16));
        cbDataFlowCtrl = new QComboBox(gbModemOptions);
        cbDataFlowCtrl->setObjectName(QString::fromUtf8("cbDataFlowCtrl"));
        cbDataFlowCtrl->setGeometry(QRect(65, 21, 140, 20));
        label_8 = new QLabel(gbModemOptions);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(11, 51, 48, 16));
        cbAutoReply = new QComboBox(gbModemOptions);
        cbAutoReply->setObjectName(QString::fromUtf8("cbAutoReply"));
        cbAutoReply->setGeometry(QRect(65, 51, 140, 20));
        gbBufferOptions = new QGroupBox(QDlgConfig);
        gbBufferOptions->setObjectName(QString::fromUtf8("gbBufferOptions"));
        gbBufferOptions->setGeometry(QRect(230, 130, 231, 91));
        sbInBuffer = new QSpinBox(gbBufferOptions);
        sbInBuffer->setObjectName(QString::fromUtf8("sbInBuffer"));
        sbInBuffer->setGeometry(QRect(65, 21, 140, 20));
        sbInBuffer->setMaximum(99999999);
        sbInBuffer->setSingleStep(1);
        sbInBuffer->setValue(8192);
        label_9 = new QLabel(gbBufferOptions);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(11, 21, 48, 16));
        label_10 = new QLabel(gbBufferOptions);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(11, 51, 48, 16));
        sbOutBuffer = new QSpinBox(gbBufferOptions);
        sbOutBuffer->setObjectName(QString::fromUtf8("sbOutBuffer"));
        sbOutBuffer->setGeometry(QRect(65, 51, 140, 20));
        sbOutBuffer->setMaximum(99999999);
        sbOutBuffer->setSingleStep(1);
        sbOutBuffer->setValue(8192);
        widget = new QWidget(QDlgConfig);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(160, 240, 131, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnOK = new QPushButton(widget);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout->addWidget(btnOK);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        retranslateUi(QDlgConfig);

        QMetaObject::connectSlotsByName(QDlgConfig);
    } // setupUi

    void retranslateUi(QDialog *QDlgConfig)
    {
        QDlgConfig->setWindowTitle(QApplication::translate("QDlgConfig", "\347\253\257\345\217\243\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        gbPortOptions->setTitle(QApplication::translate("QDlgConfig", "\347\253\257\345\217\243\351\200\211\351\241\271", 0, QApplication::UnicodeUTF8));
        cbStopBit->clear();
        cbStopBit->insertItems(0, QStringList()
         << QApplication::translate("QDlgConfig", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "1.5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "2", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("QDlgConfig", "\345\201\234\346\255\242\344\275\215", 0, QApplication::UnicodeUTF8));
        cbFlowCtrl->clear();
        cbFlowCtrl->insertItems(0, QStringList()
         << QApplication::translate("QDlgConfig", "\346\227\240", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "\347\241\254\344\273\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "Xon / Xoff", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("QDlgConfig", "\346\265\201\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QDlgConfig", "\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        cbPort->clear();
        cbPort->insertItems(0, QStringList()
         << QApplication::translate("QDlgConfig", "COM1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "COM2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "COM3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "COM4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "COM5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "COM6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "COM7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "COM8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "COM9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "COM10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "COM11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "COM12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "COM13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "COM14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "COM15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "COM16", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("QDlgConfig", "\346\225\260\346\215\256\344\275\215", 0, QApplication::UnicodeUTF8));
        cbDataBit->clear();
        cbDataBit->insertItems(0, QStringList()
         << QApplication::translate("QDlgConfig", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "8", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("QDlgConfig", "\345\245\207\345\201\266\346\240\241\351\252\214", 0, QApplication::UnicodeUTF8));
        cbParity->clear();
        cbParity->insertItems(0, QStringList()
         << QApplication::translate("QDlgConfig", "No Parity ( \346\227\240)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "Odd (\345\245\207)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "Even (\345\201\266)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "Mark (\346\240\207\350\256\260)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "Space (\347\251\272\346\240\274)", 0, QApplication::UnicodeUTF8)
        );
        cbBaudRate->clear();
        cbBaudRate->insertItems(0, QStringList()
         << QApplication::translate("QDlgConfig", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "75", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "110", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "134", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "150", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "300", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "1200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "1800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "2400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "14400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "56000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "76800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "115200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "128000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "256000", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("QDlgConfig", "\346\263\242\347\211\271\347\216\207", 0, QApplication::UnicodeUTF8));
        gbModemOptions->setTitle(QApplication::translate("QDlgConfig", "\350\260\203\345\210\266\350\247\243\350\260\203\345\231\250\351\200\211\351\241\271", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QDlgConfig", "\346\225\260\346\215\256\346\265\201\346\216\247", 0, QApplication::UnicodeUTF8));
        cbDataFlowCtrl->clear();
        cbDataFlowCtrl->insertItems(0, QStringList()
         << QApplication::translate("QDlgConfig", "None (\346\227\240)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "RTS/CTS (\347\241\254\344\273\266)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "Xon/Xoff (\350\275\257\344\273\266)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "RTS/CTS & Xon/Xoff", 0, QApplication::UnicodeUTF8)
        );
        label_8->setText(QApplication::translate("QDlgConfig", "\350\207\252\345\212\250\345\272\224\347\255\224", 0, QApplication::UnicodeUTF8));
        cbAutoReply->clear();
        cbAutoReply->insertItems(0, QStringList()
         << QApplication::translate("QDlgConfig", "\345\220\246", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QDlgConfig", "\346\230\257", 0, QApplication::UnicodeUTF8)
        );
        gbBufferOptions->setTitle(QApplication::translate("QDlgConfig", "\347\274\223\345\255\230\345\256\271\351\207\217", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QDlgConfig", "\350\276\223\345\205\245\347\274\223\345\255\230", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QDlgConfig", "\350\276\223\345\207\272\347\274\223\345\255\230", 0, QApplication::UnicodeUTF8));
        btnOK->setText(QApplication::translate("QDlgConfig", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("QDlgConfig", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QDlgConfig: public Ui_QDlgConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDLGCONFIG_H
