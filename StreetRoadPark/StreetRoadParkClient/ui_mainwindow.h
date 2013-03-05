/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtServerIP;
    QLabel *label_2;
    QSpinBox *sbPort;
    QLabel *label_3;
    QSpinBox *sbConnCount;
    QPushButton *btnConnect;
    QPushButton *btnDisconnect;
    QPlainTextEdit *txtData;
    QPushButton *btnSendData;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(771, 424);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 551, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        edtServerIP = new QLineEdit(layoutWidget);
        edtServerIP->setObjectName(QStringLiteral("edtServerIP"));

        horizontalLayout->addWidget(edtServerIP);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        sbPort = new QSpinBox(layoutWidget);
        sbPort->setObjectName(QStringLiteral("sbPort"));
        sbPort->setMinimum(1024);
        sbPort->setMaximum(65535);
        sbPort->setValue(6000);

        horizontalLayout->addWidget(sbPort);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        sbConnCount = new QSpinBox(layoutWidget);
        sbConnCount->setObjectName(QStringLiteral("sbConnCount"));
        sbConnCount->setMinimum(1);
        sbConnCount->setMaximum(9999999);
        sbConnCount->setValue(2);

        horizontalLayout->addWidget(sbConnCount);

        btnConnect = new QPushButton(layoutWidget);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));

        horizontalLayout->addWidget(btnConnect);

        btnDisconnect = new QPushButton(layoutWidget);
        btnDisconnect->setObjectName(QStringLiteral("btnDisconnect"));

        horizontalLayout->addWidget(btnDisconnect);

        txtData = new QPlainTextEdit(centralWidget);
        txtData->setObjectName(QStringLiteral("txtData"));
        txtData->setGeometry(QRect(20, 60, 541, 281));
        btnSendData = new QPushButton(centralWidget);
        btnSendData->setObjectName(QStringLiteral("btnSendData"));
        btnSendData->setGeometry(QRect(490, 350, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 771, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Test", 0));
        label->setText(QApplication::translate("MainWindow", "ServerIP", 0));
        edtServerIP->setText(QApplication::translate("MainWindow", "127.0.0.1", 0));
        label_2->setText(QApplication::translate("MainWindow", "Port", 0));
        label_3->setText(QApplication::translate("MainWindow", "ConnCount", 0));
        btnConnect->setText(QApplication::translate("MainWindow", "connect", 0));
        btnDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0));
        btnSendData->setText(QApplication::translate("MainWindow", "Send Data", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
