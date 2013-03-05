/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Feb 1 15:36:04 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabServer;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblListenPort;
    QSpinBox *sbListenPort;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *sbMaxPendingConnections;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpinBox *sbSocketCountEachServerThread;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QSpinBox *sbServerThreadCountEachDataParser;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QSpinBox *sbMaxSleepTimeEachServerThread;
    QWidget *ClientControl;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLineEdit *edtClientServerIP;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QSpinBox *sbClientServerPort;
    QWidget *tabAdministrator;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLineEdit *edtAdminServerIP;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QSpinBox *sbAdminServerPort;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(628, 438);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 601, 301));
        tabServer = new QWidget();
        tabServer->setObjectName(QStringLiteral("tabServer"));
        layoutWidget = new QWidget(tabServer);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 98, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblListenPort = new QLabel(layoutWidget);
        lblListenPort->setObjectName(QStringLiteral("lblListenPort"));

        horizontalLayout->addWidget(lblListenPort);

        sbListenPort = new QSpinBox(layoutWidget);
        sbListenPort->setObjectName(QStringLiteral("sbListenPort"));
        sbListenPort->setMinimum(1024);
        sbListenPort->setMaximum(65535);
        sbListenPort->setValue(6000);

        horizontalLayout->addWidget(sbListenPort);

        layoutWidget1 = new QWidget(tabServer);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 40, 134, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        sbMaxPendingConnections = new QSpinBox(layoutWidget1);
        sbMaxPendingConnections->setObjectName(QStringLiteral("sbMaxPendingConnections"));
        sbMaxPendingConnections->setMinimum(30);
        sbMaxPendingConnections->setMaximum(65535);
        sbMaxPendingConnections->setValue(100);

        horizontalLayout_2->addWidget(sbMaxPendingConnections);

        layoutWidget2 = new QWidget(tabServer);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 70, 158, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        sbSocketCountEachServerThread = new QSpinBox(layoutWidget2);
        sbSocketCountEachServerThread->setObjectName(QStringLiteral("sbSocketCountEachServerThread"));
        sbSocketCountEachServerThread->setMinimum(1);
        sbSocketCountEachServerThread->setMaximum(50);
        sbSocketCountEachServerThread->setValue(10);

        horizontalLayout_3->addWidget(sbSocketCountEachServerThread);

        layoutWidget3 = new QWidget(tabServer);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 100, 170, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        sbServerThreadCountEachDataParser = new QSpinBox(layoutWidget3);
        sbServerThreadCountEachDataParser->setObjectName(QStringLiteral("sbServerThreadCountEachDataParser"));
        sbServerThreadCountEachDataParser->setMinimum(1);
        sbServerThreadCountEachDataParser->setMaximum(50);
        sbServerThreadCountEachDataParser->setValue(2);

        horizontalLayout_4->addWidget(sbServerThreadCountEachDataParser);

        layoutWidget4 = new QWidget(tabServer);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 130, 182, 24));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        sbMaxSleepTimeEachServerThread = new QSpinBox(layoutWidget4);
        sbMaxSleepTimeEachServerThread->setObjectName(QStringLiteral("sbMaxSleepTimeEachServerThread"));
        sbMaxSleepTimeEachServerThread->setMinimum(1);
        sbMaxSleepTimeEachServerThread->setMaximum(50);
        sbMaxSleepTimeEachServerThread->setValue(2);

        horizontalLayout_5->addWidget(sbMaxSleepTimeEachServerThread);

        tabWidget->addTab(tabServer, QString());
        ClientControl = new QWidget();
        ClientControl->setObjectName(QStringLiteral("ClientControl"));
        layoutWidget5 = new QWidget(ClientControl);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 10, 189, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget5);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_7->addWidget(label);

        edtClientServerIP = new QLineEdit(layoutWidget5);
        edtClientServerIP->setObjectName(QStringLiteral("edtClientServerIP"));

        horizontalLayout_7->addWidget(edtClientServerIP);

        layoutWidget6 = new QWidget(ClientControl);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 40, 110, 24));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget6);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_8->addWidget(label_3);

        sbClientServerPort = new QSpinBox(layoutWidget6);
        sbClientServerPort->setObjectName(QStringLiteral("sbClientServerPort"));
        sbClientServerPort->setMinimum(1024);
        sbClientServerPort->setMaximum(65535);
        sbClientServerPort->setValue(6000);

        horizontalLayout_8->addWidget(sbClientServerPort);

        tabWidget->addTab(ClientControl, QString());
        tabAdministrator = new QWidget();
        tabAdministrator->setObjectName(QStringLiteral("tabAdministrator"));
        layoutWidget7 = new QWidget(tabAdministrator);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(10, 10, 201, 22));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget7);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_9->addWidget(label_4);

        edtAdminServerIP = new QLineEdit(layoutWidget7);
        edtAdminServerIP->setObjectName(QStringLiteral("edtAdminServerIP"));

        horizontalLayout_9->addWidget(edtAdminServerIP);

        layoutWidget8 = new QWidget(tabAdministrator);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(10, 40, 110, 24));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget8);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_10->addWidget(label_8);

        sbAdminServerPort = new QSpinBox(layoutWidget8);
        sbAdminServerPort->setObjectName(QStringLiteral("sbAdminServerPort"));
        sbAdminServerPort->setMinimum(1024);
        sbAdminServerPort->setMaximum(65535);
        sbAdminServerPort->setValue(6000);

        horizontalLayout_10->addWidget(sbAdminServerPort);

        tabWidget->addTab(tabAdministrator, QString());
        layoutWidget9 = new QWidget(centralWidget);
        layoutWidget9->setObjectName(QStringLiteral("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(250, 390, 158, 25));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        btnOK = new QPushButton(layoutWidget9);
        btnOK->setObjectName(QStringLiteral("btnOK"));

        horizontalLayout_6->addWidget(btnOK);

        btnCancel = new QPushButton(layoutWidget9);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout_6->addWidget(btnCancel);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        lblListenPort->setText(QApplication::translate("MainWindow", "\344\276\246\345\220\254\347\253\257\345\217\243", 0));
        label_2->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\347\255\211\345\276\205\346\225\260\350\277\236\346\216\245", 0));
        label_5->setText(QApplication::translate("MainWindow", "\346\257\217\346\234\215\345\212\241\347\272\277\347\250\213Socket\346\225\260", 0));
        label_6->setText(QApplication::translate("MainWindow", "\346\257\217\350\247\243\346\236\220\347\272\277\347\250\213\346\234\215\345\212\241\347\272\277\347\250\213\346\225\260", 0));
        label_7->setText(QApplication::translate("MainWindow", "\346\257\217\346\234\215\345\212\241\347\272\277\347\250\213\346\234\200\345\244\247\344\274\221\347\234\240\346\227\266\351\227\264", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabServer), QApplication::translate("MainWindow", "\344\270\255\345\277\203\346\234\215\345\212\241\345\231\250", 0));
        label->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250IP", 0));
        edtClientServerIP->setText(QApplication::translate("MainWindow", "127.0.0.1", 0));
        label_3->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243", 0));
        tabWidget->setTabText(tabWidget->indexOf(ClientControl), QApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257\346\216\247\345\210\266", 0));
        label_4->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250IP", 0));
        edtAdminServerIP->setText(QApplication::translate("MainWindow", "127.0.0.1", 0));
        label_8->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAdministrator), QApplication::translate("MainWindow", "\347\256\241\347\220\206\346\216\247\345\210\266", 0));
        btnOK->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0));
        btnCancel->setText(QApplication::translate("MainWindow", "\346\224\276\345\274\203", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
