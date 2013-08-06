/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabPort;
    QPushButton *btnPortCmd;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblCmd0;
    QSpinBox *sbCmd0;
    QLabel *lblCmd1;
    QSpinBox *sbCmd1;
    QLabel *lblCmd2;
    QSpinBox *sbCmd2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *cbM77Cmd;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbComM77R;
    QTabWidget *tabWidget_2;
    QWidget *tab;
    QPlainTextEdit *txtPortStaticLog;
    QWidget *tab_2;
    QPlainTextEdit *txtPortDynamicLog;
    QWidget *tabNetwork;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnStartListen;
    QPushButton *btnStopListen;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *sbPort;
    QLabel *label_5;
    QSpinBox *sbMaxConn;
    QTabWidget *tabWidget_3;
    QWidget *tab_3;
    QPlainTextEdit *txtNetworkStaticLog;
    QWidget *tab_4;
    QPlainTextEdit *txtNetworkDynamicLog;
    QWidget *tabDatabase;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnHide;
    QPushButton *btnConnectDb;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *edtServerIP;
    QLabel *label_6;
    QSpinBox *sbServicePort;
    QTabWidget *tabWidget_4;
    QWidget *tab_5;
    QPlainTextEdit *txtDatabaseStaticLog;
    QWidget *tab_6;
    QPlainTextEdit *txtDatabaseDynamicLog;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(952, 558);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 931, 501));
        tabPort = new QWidget();
        tabPort->setObjectName(QStringLiteral("tabPort"));
        btnPortCmd = new QPushButton(tabPort);
        btnPortCmd->setObjectName(QStringLiteral("btnPortCmd"));
        btnPortCmd->setGeometry(QRect(830, 12, 75, 23));
        layoutWidget = new QWidget(tabPort);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(380, 12, 374, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lblCmd0 = new QLabel(layoutWidget);
        lblCmd0->setObjectName(QStringLiteral("lblCmd0"));

        horizontalLayout_2->addWidget(lblCmd0);

        sbCmd0 = new QSpinBox(layoutWidget);
        sbCmd0->setObjectName(QStringLiteral("sbCmd0"));
        sbCmd0->setMaximum(999);
        sbCmd0->setValue(1);

        horizontalLayout_2->addWidget(sbCmd0);

        lblCmd1 = new QLabel(layoutWidget);
        lblCmd1->setObjectName(QStringLiteral("lblCmd1"));

        horizontalLayout_2->addWidget(lblCmd1);

        sbCmd1 = new QSpinBox(layoutWidget);
        sbCmd1->setObjectName(QStringLiteral("sbCmd1"));
        sbCmd1->setMaximum(999);
        sbCmd1->setValue(1);

        horizontalLayout_2->addWidget(sbCmd1);

        lblCmd2 = new QLabel(layoutWidget);
        lblCmd2->setObjectName(QStringLiteral("lblCmd2"));

        horizontalLayout_2->addWidget(lblCmd2);

        sbCmd2 = new QSpinBox(layoutWidget);
        sbCmd2->setObjectName(QStringLiteral("sbCmd2"));
        sbCmd2->setMaximum(999);
        sbCmd2->setValue(1);

        horizontalLayout_2->addWidget(sbCmd2);

        layoutWidget1 = new QWidget(tabPort);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(140, 12, 211, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        cbM77Cmd = new QComboBox(layoutWidget1);
        cbM77Cmd->setObjectName(QStringLiteral("cbM77Cmd"));

        horizontalLayout_3->addWidget(cbM77Cmd);

        layoutWidget2 = new QWidget(tabPort);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 12, 101, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        cbComM77R = new QComboBox(layoutWidget2);
        cbComM77R->setObjectName(QStringLiteral("cbComM77R"));

        horizontalLayout->addWidget(cbComM77R);

        tabWidget_2 = new QTabWidget(tabPort);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 50, 901, 421));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        txtPortStaticLog = new QPlainTextEdit(tab);
        txtPortStaticLog->setObjectName(QStringLiteral("txtPortStaticLog"));
        txtPortStaticLog->setGeometry(QRect(10, 10, 871, 371));
        txtPortStaticLog->setReadOnly(true);
        tabWidget_2->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        txtPortDynamicLog = new QPlainTextEdit(tab_2);
        txtPortDynamicLog->setObjectName(QStringLiteral("txtPortDynamicLog"));
        txtPortDynamicLog->setGeometry(QRect(10, 10, 871, 371));
        tabWidget_2->addTab(tab_2, QString());
        tabWidget->addTab(tabPort, QString());
        tabNetwork = new QWidget();
        tabNetwork->setObjectName(QStringLiteral("tabNetwork"));
        layoutWidget3 = new QWidget(tabNetwork);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(670, 11, 231, 25));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        btnStartListen = new QPushButton(layoutWidget3);
        btnStartListen->setObjectName(QStringLiteral("btnStartListen"));

        horizontalLayout_5->addWidget(btnStartListen);

        btnStopListen = new QPushButton(layoutWidget3);
        btnStopListen->setObjectName(QStringLiteral("btnStopListen"));

        horizontalLayout_5->addWidget(btnStopListen);

        layoutWidget4 = new QWidget(tabNetwork);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 11, 281, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        sbPort = new QSpinBox(layoutWidget4);
        sbPort->setObjectName(QStringLiteral("sbPort"));
        sbPort->setMinimum(1024);
        sbPort->setMaximum(65535);
        sbPort->setValue(6000);

        horizontalLayout_4->addWidget(sbPort);

        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        sbMaxConn = new QSpinBox(layoutWidget4);
        sbMaxConn->setObjectName(QStringLiteral("sbMaxConn"));
        sbMaxConn->setMinimum(1);
        sbMaxConn->setMaximum(10000);
        sbMaxConn->setValue(100);

        horizontalLayout_4->addWidget(sbMaxConn);

        tabWidget_3 = new QTabWidget(tabNetwork);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(10, 50, 901, 421));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        txtNetworkStaticLog = new QPlainTextEdit(tab_3);
        txtNetworkStaticLog->setObjectName(QStringLiteral("txtNetworkStaticLog"));
        txtNetworkStaticLog->setGeometry(QRect(10, 10, 871, 371));
        txtNetworkStaticLog->setReadOnly(true);
        tabWidget_3->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        txtNetworkDynamicLog = new QPlainTextEdit(tab_4);
        txtNetworkDynamicLog->setObjectName(QStringLiteral("txtNetworkDynamicLog"));
        txtNetworkDynamicLog->setGeometry(QRect(10, 10, 871, 371));
        tabWidget_3->addTab(tab_4, QString());
        tabWidget->addTab(tabNetwork, QString());
        tabDatabase = new QWidget();
        tabDatabase->setObjectName(QStringLiteral("tabDatabase"));
        layoutWidget_2 = new QWidget(tabDatabase);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(670, 11, 231, 25));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        btnHide = new QPushButton(layoutWidget_2);
        btnHide->setObjectName(QStringLiteral("btnHide"));

        horizontalLayout_7->addWidget(btnHide);

        btnConnectDb = new QPushButton(layoutWidget_2);
        btnConnectDb->setObjectName(QStringLiteral("btnConnectDb"));

        horizontalLayout_7->addWidget(btnConnectDb);

        layoutWidget5 = new QWidget(tabDatabase);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(11, 11, 341, 24));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget5);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        edtServerIP = new QLineEdit(layoutWidget5);
        edtServerIP->setObjectName(QStringLiteral("edtServerIP"));

        horizontalLayout_6->addWidget(edtServerIP);

        label_6 = new QLabel(layoutWidget5);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        sbServicePort = new QSpinBox(layoutWidget5);
        sbServicePort->setObjectName(QStringLiteral("sbServicePort"));
        sbServicePort->setMinimum(1024);
        sbServicePort->setMaximum(65535);
        sbServicePort->setValue(3306);

        horizontalLayout_6->addWidget(sbServicePort);

        tabWidget_4 = new QTabWidget(tabDatabase);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(10, 50, 901, 421));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        txtDatabaseStaticLog = new QPlainTextEdit(tab_5);
        txtDatabaseStaticLog->setObjectName(QStringLiteral("txtDatabaseStaticLog"));
        txtDatabaseStaticLog->setGeometry(QRect(10, 10, 871, 371));
        txtDatabaseStaticLog->setReadOnly(true);
        tabWidget_4->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        txtDatabaseDynamicLog = new QPlainTextEdit(tab_6);
        txtDatabaseDynamicLog->setObjectName(QStringLiteral("txtDatabaseDynamicLog"));
        txtDatabaseDynamicLog->setGeometry(QRect(10, 10, 871, 371));
        tabWidget_4->addTab(tab_6, QString());
        tabWidget->addTab(tabDatabase, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 952, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\215\240\351\201\223\345\201\234\350\275\246\346\234\215\345\212\241\345\231\250", 0));
        btnPortCmd->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\345\221\275\344\273\244", 0));
        lblCmd0->setText(QApplication::translate("MainWindow", "\346\243\200\346\265\213\345\231\250\344\277\241\351\201\223\345\217\267", 0));
        lblCmd1->setText(QApplication::translate("MainWindow", "\346\243\200\346\265\213\345\231\250\344\277\241\351\201\223\345\217\267", 0));
        lblCmd2->setText(QApplication::translate("MainWindow", "\346\243\200\346\265\213\345\231\250\344\277\241\351\201\223\345\217\267", 0));
        label_2->setText(QApplication::translate("MainWindow", "M77R/M77\346\214\207\344\273\244", 0));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("MainWindow", "\351\235\231\346\200\201\344\277\241\346\201\257", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("MainWindow", "\345\212\250\346\200\201\344\277\241\346\201\257", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabPort), QApplication::translate("MainWindow", "\344\270\262\345\217\243\344\277\241\346\201\257", 0));
        btnStartListen->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250\344\276\246\345\220\254", 0));
        btnStopListen->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\276\246\345\220\254", 0));
        label_4->setText(QApplication::translate("MainWindow", "\344\276\246\345\220\254\347\253\257\345\217\243", 0));
        label_5->setText(QApplication::translate("MainWindow", "\344\276\246\345\220\254\347\255\211\345\276\205\346\234\200\345\244\247\350\277\236\346\216\245\346\225\260", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_3), QApplication::translate("MainWindow", "\351\235\231\346\200\201\344\277\241\346\201\257", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_4), QApplication::translate("MainWindow", "\345\212\250\346\200\201\344\277\241\346\201\257", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabNetwork), QApplication::translate("MainWindow", "\347\275\221\347\273\234\344\277\241\346\201\257", 0));
        btnHide->setText(QString());
        btnConnectDb->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0));
        label_3->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\346\234\215\345\212\241\345\231\250IP", 0));
        edtServerIP->setText(QApplication::translate("MainWindow", "127.0.0.1", 0));
        label_6->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\347\253\257\345\217\243", 0));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_5), QApplication::translate("MainWindow", "\351\235\231\346\200\201\344\277\241\346\201\257", 0));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_6), QApplication::translate("MainWindow", "\345\212\250\346\200\201\344\277\241\346\201\257", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabDatabase), QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\344\277\241\346\201\257", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
