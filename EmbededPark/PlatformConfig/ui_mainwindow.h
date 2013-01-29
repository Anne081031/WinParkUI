/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Jan 28 10:32:15 2013
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
#include <QtWidgets/QMainWindow>
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
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblListenPort;
    QSpinBox *sbListenPort;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *sbMaxPendingConnections;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpinBox *sbMaxPendingConnections_2;
    QWidget *ClientControl;
    QWidget *tabAdministrator;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(628, 438);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 601, 391));
        tabServer = new QWidget();
        tabServer->setObjectName(QStringLiteral("tabServer"));
        label_3 = new QLabel(tabServer);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 170, 54, 12));
        label_4 = new QLabel(tabServer);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 200, 54, 12));
        widget = new QWidget(tabServer);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 98, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblListenPort = new QLabel(widget);
        lblListenPort->setObjectName(QStringLiteral("lblListenPort"));

        horizontalLayout->addWidget(lblListenPort);

        sbListenPort = new QSpinBox(widget);
        sbListenPort->setObjectName(QStringLiteral("sbListenPort"));
        sbListenPort->setMinimum(1024);
        sbListenPort->setMaximum(65535);
        sbListenPort->setValue(6000);

        horizontalLayout->addWidget(sbListenPort);

        widget1 = new QWidget(tabServer);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 70, 134, 24));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        sbMaxPendingConnections = new QSpinBox(widget1);
        sbMaxPendingConnections->setObjectName(QStringLiteral("sbMaxPendingConnections"));
        sbMaxPendingConnections->setMinimum(30);
        sbMaxPendingConnections->setMaximum(65535);
        sbMaxPendingConnections->setValue(100);

        horizontalLayout_2->addWidget(sbMaxPendingConnections);

        widget2 = new QWidget(tabServer);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(43, 110, 158, 24));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        sbMaxPendingConnections_2 = new QSpinBox(widget2);
        sbMaxPendingConnections_2->setObjectName(QStringLiteral("sbMaxPendingConnections_2"));
        sbMaxPendingConnections_2->setMinimum(1);
        sbMaxPendingConnections_2->setMaximum(50);
        sbMaxPendingConnections_2->setValue(10);

        horizontalLayout_3->addWidget(sbMaxPendingConnections_2);

        tabWidget->addTab(tabServer, QString());
        ClientControl = new QWidget();
        ClientControl->setObjectName(QStringLiteral("ClientControl"));
        tabWidget->addTab(ClientControl, QString());
        tabAdministrator = new QWidget();
        tabAdministrator->setObjectName(QStringLiteral("tabAdministrator"));
        tabWidget->addTab(tabAdministrator, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_4->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        lblListenPort->setText(QApplication::translate("MainWindow", "\344\276\246\345\220\254\347\253\257\345\217\243", 0));
        label_2->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\347\255\211\345\276\205\346\225\260\350\277\236\346\216\245", 0));
        label_5->setText(QApplication::translate("MainWindow", "\346\257\217\346\234\215\345\212\241\347\272\277\347\250\213Socket\346\225\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabServer), QApplication::translate("MainWindow", "\344\270\255\345\277\203\346\234\215\345\212\241\345\231\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(ClientControl), QApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257\346\216\247\345\210\266", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAdministrator), QApplication::translate("MainWindow", "\347\256\241\347\220\206\346\216\247\345\210\266", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
