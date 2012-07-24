/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Jul 24 13:31:42 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabPServer;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtPServerTcpPort;
    QLabel *label_2;
    QLineEdit *edtPServerTcpPendingConnections;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *edtPServerUdpPort;
    QLabel *label_4;
    QLineEdit *edtPServerUdpBroadcastPort;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *edtPServerUdpMulticastIP;
    QLabel *label_6;
    QLineEdit *edtPServerUdpMulticastPort;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *edtPServerPeerThreadSocketCount;
    QLabel *label_8;
    QLineEdit *edtPServerPeerThreadStackSize;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *edtPServerPeerThreadReleaseInterval;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_26;
    QComboBox *cbPServerDbType;
    QLabel *label_27;
    QLineEdit *edtPServerDbIP;
    QLabel *label_28;
    QLineEdit *edtPServerDbPort;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_29;
    QLineEdit *edtPServerDbUser;
    QLabel *label_30;
    QLineEdit *edtPServerDbPwd;
    QLabel *label_31;
    QLineEdit *edtPServerDbName;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_38;
    QLineEdit *edtPServerThreadpoolMaxThreads;
    QLabel *label_40;
    QLineEdit *edtPServerThreadpoolThreadsExpire;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_42;
    QLineEdit *edtPServerDbObjReleaseInterval;
    QLabel *label_43;
    QLineEdit *edtPServerDbObjLifeTime;
    QWidget *tabPDataReceiver;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLineEdit *edtPDataServerPeerThreadSocketCount;
    QLabel *label_11;
    QLineEdit *edtPDataServerPeerThreadStackSize;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_12;
    QLineEdit *edtPDataServerPeerThreadReleaseInterval;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QLineEdit *edtPDataServerTcpPort;
    QLabel *label_14;
    QLineEdit *edtPDataServerTcpPendingConnections;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_15;
    QLineEdit *edtPDataServerUdpPort;
    QLabel *label_16;
    QLineEdit *edtPDataServerUdpBroadcastPort;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_17;
    QLineEdit *edtPDataServerUdpMulticastIP;
    QLabel *label_18;
    QLineEdit *edtPDataServerUdpMulticastPort;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_32;
    QComboBox *cbPDataServerDbType;
    QLabel *label_33;
    QLineEdit *edtPDataServerDbIP;
    QLabel *label_34;
    QLineEdit *edtPDataServerDbPort;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_35;
    QLineEdit *edtPDataServerDbUser;
    QLabel *label_36;
    QLineEdit *edtPDataServerDbPwd;
    QLabel *label_37;
    QLineEdit *edtPDataServerDbName;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_39;
    QLineEdit *edtPDataServerThreadpoolMaxThreads;
    QLabel *label_41;
    QLineEdit *edtPDataServerThreadpoolThreadsExpire;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_44;
    QLineEdit *edtPDataServerDbObjReleaseInterval;
    QLabel *label_45;
    QLineEdit *edtPDataServerDbObjLifeTime;
    QWidget *tabPClient;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_25;
    QLineEdit *edtPClientUdpBroadcastPort;
    QWidget *layoutWidget11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_19;
    QLineEdit *edtPClientTcpIP;
    QLabel *label_20;
    QLineEdit *edtPClientTcpPort;
    QWidget *layoutWidget12;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_21;
    QLineEdit *edtPClientUdpIP;
    QLabel *label_22;
    QLineEdit *edtPClientUdpPort;
    QWidget *layoutWidget13;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_23;
    QLineEdit *edtPClientUdpMulticastIP;
    QLabel *label_24;
    QLineEdit *edtPClientUdpMulticastPort;
    QPushButton *btnSave;
    QPushButton *btnClose;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(646, 607);
        MainWindow->setMinimumSize(QSize(646, 607));
        MainWindow->setMaximumSize(QSize(646, 607));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 621, 511));
        tabPServer = new QWidget();
        tabPServer->setObjectName(QString::fromUtf8("tabPServer"));
        groupBox = new QGroupBox(tabPServer);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 581, 111));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 442, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        edtPServerTcpPort = new QLineEdit(layoutWidget);
        edtPServerTcpPort->setObjectName(QString::fromUtf8("edtPServerTcpPort"));

        horizontalLayout->addWidget(edtPServerTcpPort);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        edtPServerTcpPendingConnections = new QLineEdit(layoutWidget);
        edtPServerTcpPendingConnections->setObjectName(QString::fromUtf8("edtPServerTcpPendingConnections"));

        horizontalLayout->addWidget(edtPServerTcpPendingConnections);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 51, 442, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        edtPServerUdpPort = new QLineEdit(layoutWidget1);
        edtPServerUdpPort->setObjectName(QString::fromUtf8("edtPServerUdpPort"));

        horizontalLayout_2->addWidget(edtPServerUdpPort);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        edtPServerUdpBroadcastPort = new QLineEdit(layoutWidget1);
        edtPServerUdpBroadcastPort->setObjectName(QString::fromUtf8("edtPServerUdpBroadcastPort"));

        horizontalLayout_2->addWidget(edtPServerUdpBroadcastPort);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(21, 80, 442, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        edtPServerUdpMulticastIP = new QLineEdit(layoutWidget2);
        edtPServerUdpMulticastIP->setObjectName(QString::fromUtf8("edtPServerUdpMulticastIP"));

        horizontalLayout_3->addWidget(edtPServerUdpMulticastIP);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        edtPServerUdpMulticastPort = new QLineEdit(layoutWidget2);
        edtPServerUdpMulticastPort->setObjectName(QString::fromUtf8("edtPServerUdpMulticastPort"));

        horizontalLayout_3->addWidget(edtPServerUdpMulticastPort);

        groupBox_2 = new QGroupBox(tabPServer);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 130, 581, 91));
        layoutWidget3 = new QWidget(groupBox_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 451, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        edtPServerPeerThreadSocketCount = new QLineEdit(layoutWidget3);
        edtPServerPeerThreadSocketCount->setObjectName(QString::fromUtf8("edtPServerPeerThreadSocketCount"));

        horizontalLayout_4->addWidget(edtPServerPeerThreadSocketCount);

        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_4->addWidget(label_8);

        edtPServerPeerThreadStackSize = new QLineEdit(layoutWidget3);
        edtPServerPeerThreadStackSize->setObjectName(QString::fromUtf8("edtPServerPeerThreadStackSize"));

        horizontalLayout_4->addWidget(edtPServerPeerThreadStackSize);

        layoutWidget4 = new QWidget(groupBox_2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 50, 327, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        edtPServerPeerThreadReleaseInterval = new QLineEdit(layoutWidget4);
        edtPServerPeerThreadReleaseInterval->setObjectName(QString::fromUtf8("edtPServerPeerThreadReleaseInterval"));

        horizontalLayout_5->addWidget(edtPServerPeerThreadReleaseInterval);

        groupBox_6 = new QGroupBox(tabPServer);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 230, 581, 141));
        layoutWidget5 = new QWidget(groupBox_6);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(11, 21, 451, 22));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(layoutWidget5);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_15->addWidget(label_26);

        cbPServerDbType = new QComboBox(layoutWidget5);
        cbPServerDbType->setObjectName(QString::fromUtf8("cbPServerDbType"));

        horizontalLayout_15->addWidget(cbPServerDbType);

        label_27 = new QLabel(layoutWidget5);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_15->addWidget(label_27);

        edtPServerDbIP = new QLineEdit(layoutWidget5);
        edtPServerDbIP->setObjectName(QString::fromUtf8("edtPServerDbIP"));

        horizontalLayout_15->addWidget(edtPServerDbIP);

        label_28 = new QLabel(layoutWidget5);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_15->addWidget(label_28);

        edtPServerDbPort = new QLineEdit(layoutWidget5);
        edtPServerDbPort->setObjectName(QString::fromUtf8("edtPServerDbPort"));

        horizontalLayout_15->addWidget(edtPServerDbPort);

        layoutWidget6 = new QWidget(groupBox_6);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 50, 451, 22));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(layoutWidget6);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_16->addWidget(label_29);

        edtPServerDbUser = new QLineEdit(layoutWidget6);
        edtPServerDbUser->setObjectName(QString::fromUtf8("edtPServerDbUser"));

        horizontalLayout_16->addWidget(edtPServerDbUser);

        label_30 = new QLabel(layoutWidget6);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout_16->addWidget(label_30);

        edtPServerDbPwd = new QLineEdit(layoutWidget6);
        edtPServerDbPwd->setObjectName(QString::fromUtf8("edtPServerDbPwd"));

        horizontalLayout_16->addWidget(edtPServerDbPwd);

        label_31 = new QLabel(layoutWidget6);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_16->addWidget(label_31);

        edtPServerDbName = new QLineEdit(layoutWidget6);
        edtPServerDbName->setObjectName(QString::fromUtf8("edtPServerDbName"));

        horizontalLayout_16->addWidget(edtPServerDbName);

        layoutWidget7 = new QWidget(groupBox_6);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(11, 80, 451, 22));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_38 = new QLabel(layoutWidget7);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        horizontalLayout_20->addWidget(label_38);

        edtPServerThreadpoolMaxThreads = new QLineEdit(layoutWidget7);
        edtPServerThreadpoolMaxThreads->setObjectName(QString::fromUtf8("edtPServerThreadpoolMaxThreads"));

        horizontalLayout_20->addWidget(edtPServerThreadpoolMaxThreads);

        label_40 = new QLabel(layoutWidget7);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout_20->addWidget(label_40);

        edtPServerThreadpoolThreadsExpire = new QLineEdit(layoutWidget7);
        edtPServerThreadpoolThreadsExpire->setObjectName(QString::fromUtf8("edtPServerThreadpoolThreadsExpire"));

        horizontalLayout_20->addWidget(edtPServerThreadpoolThreadsExpire);

        layoutWidget_8 = new QWidget(groupBox_6);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(10, 110, 451, 22));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        label_42 = new QLabel(layoutWidget_8);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        horizontalLayout_21->addWidget(label_42);

        edtPServerDbObjReleaseInterval = new QLineEdit(layoutWidget_8);
        edtPServerDbObjReleaseInterval->setObjectName(QString::fromUtf8("edtPServerDbObjReleaseInterval"));

        horizontalLayout_21->addWidget(edtPServerDbObjReleaseInterval);

        label_43 = new QLabel(layoutWidget_8);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        horizontalLayout_21->addWidget(label_43);

        edtPServerDbObjLifeTime = new QLineEdit(layoutWidget_8);
        edtPServerDbObjLifeTime->setObjectName(QString::fromUtf8("edtPServerDbObjLifeTime"));

        horizontalLayout_21->addWidget(edtPServerDbObjLifeTime);

        tabWidget->addTab(tabPServer, QString());
        tabPDataReceiver = new QWidget();
        tabPDataReceiver->setObjectName(QString::fromUtf8("tabPDataReceiver"));
        groupBox_3 = new QGroupBox(tabPDataReceiver);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 130, 581, 91));
        layoutWidget8 = new QWidget(groupBox_3);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(10, 20, 451, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget8);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_6->addWidget(label_10);

        edtPDataServerPeerThreadSocketCount = new QLineEdit(layoutWidget8);
        edtPDataServerPeerThreadSocketCount->setObjectName(QString::fromUtf8("edtPDataServerPeerThreadSocketCount"));

        horizontalLayout_6->addWidget(edtPDataServerPeerThreadSocketCount);

        label_11 = new QLabel(layoutWidget8);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_6->addWidget(label_11);

        edtPDataServerPeerThreadStackSize = new QLineEdit(layoutWidget8);
        edtPDataServerPeerThreadStackSize->setObjectName(QString::fromUtf8("edtPDataServerPeerThreadStackSize"));

        horizontalLayout_6->addWidget(edtPDataServerPeerThreadStackSize);

        layoutWidget_2 = new QWidget(groupBox_3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 50, 327, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_7->addWidget(label_12);

        edtPDataServerPeerThreadReleaseInterval = new QLineEdit(layoutWidget_2);
        edtPDataServerPeerThreadReleaseInterval->setObjectName(QString::fromUtf8("edtPDataServerPeerThreadReleaseInterval"));

        horizontalLayout_7->addWidget(edtPDataServerPeerThreadReleaseInterval);

        groupBox_4 = new QGroupBox(tabPDataReceiver);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 581, 111));
        layoutWidget_3 = new QWidget(groupBox_4);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 20, 442, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_8->addWidget(label_13);

        edtPDataServerTcpPort = new QLineEdit(layoutWidget_3);
        edtPDataServerTcpPort->setObjectName(QString::fromUtf8("edtPDataServerTcpPort"));

        horizontalLayout_8->addWidget(edtPDataServerTcpPort);

        label_14 = new QLabel(layoutWidget_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_8->addWidget(label_14);

        edtPDataServerTcpPendingConnections = new QLineEdit(layoutWidget_3);
        edtPDataServerTcpPendingConnections->setObjectName(QString::fromUtf8("edtPDataServerTcpPendingConnections"));

        horizontalLayout_8->addWidget(edtPDataServerTcpPendingConnections);

        layoutWidget_4 = new QWidget(groupBox_4);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 51, 442, 22));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_9->addWidget(label_15);

        edtPDataServerUdpPort = new QLineEdit(layoutWidget_4);
        edtPDataServerUdpPort->setObjectName(QString::fromUtf8("edtPDataServerUdpPort"));

        horizontalLayout_9->addWidget(edtPDataServerUdpPort);

        label_16 = new QLabel(layoutWidget_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_9->addWidget(label_16);

        edtPDataServerUdpBroadcastPort = new QLineEdit(layoutWidget_4);
        edtPDataServerUdpBroadcastPort->setObjectName(QString::fromUtf8("edtPDataServerUdpBroadcastPort"));

        horizontalLayout_9->addWidget(edtPDataServerUdpBroadcastPort);

        layoutWidget_5 = new QWidget(groupBox_4);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(21, 80, 442, 22));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_10->addWidget(label_17);

        edtPDataServerUdpMulticastIP = new QLineEdit(layoutWidget_5);
        edtPDataServerUdpMulticastIP->setObjectName(QString::fromUtf8("edtPDataServerUdpMulticastIP"));

        horizontalLayout_10->addWidget(edtPDataServerUdpMulticastIP);

        label_18 = new QLabel(layoutWidget_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_10->addWidget(label_18);

        edtPDataServerUdpMulticastPort = new QLineEdit(layoutWidget_5);
        edtPDataServerUdpMulticastPort->setObjectName(QString::fromUtf8("edtPDataServerUdpMulticastPort"));

        horizontalLayout_10->addWidget(edtPDataServerUdpMulticastPort);

        groupBox_7 = new QGroupBox(tabPDataReceiver);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 230, 581, 141));
        layoutWidget_6 = new QWidget(groupBox_7);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(11, 21, 451, 22));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_32 = new QLabel(layoutWidget_6);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_17->addWidget(label_32);

        cbPDataServerDbType = new QComboBox(layoutWidget_6);
        cbPDataServerDbType->setObjectName(QString::fromUtf8("cbPDataServerDbType"));

        horizontalLayout_17->addWidget(cbPDataServerDbType);

        label_33 = new QLabel(layoutWidget_6);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_17->addWidget(label_33);

        edtPDataServerDbIP = new QLineEdit(layoutWidget_6);
        edtPDataServerDbIP->setObjectName(QString::fromUtf8("edtPDataServerDbIP"));

        horizontalLayout_17->addWidget(edtPDataServerDbIP);

        label_34 = new QLabel(layoutWidget_6);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_17->addWidget(label_34);

        edtPDataServerDbPort = new QLineEdit(layoutWidget_6);
        edtPDataServerDbPort->setObjectName(QString::fromUtf8("edtPDataServerDbPort"));

        horizontalLayout_17->addWidget(edtPDataServerDbPort);

        layoutWidget_7 = new QWidget(groupBox_7);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 50, 451, 22));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_35 = new QLabel(layoutWidget_7);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        horizontalLayout_18->addWidget(label_35);

        edtPDataServerDbUser = new QLineEdit(layoutWidget_7);
        edtPDataServerDbUser->setObjectName(QString::fromUtf8("edtPDataServerDbUser"));

        horizontalLayout_18->addWidget(edtPDataServerDbUser);

        label_36 = new QLabel(layoutWidget_7);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        horizontalLayout_18->addWidget(label_36);

        edtPDataServerDbPwd = new QLineEdit(layoutWidget_7);
        edtPDataServerDbPwd->setObjectName(QString::fromUtf8("edtPDataServerDbPwd"));

        horizontalLayout_18->addWidget(edtPDataServerDbPwd);

        label_37 = new QLabel(layoutWidget_7);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        horizontalLayout_18->addWidget(label_37);

        edtPDataServerDbName = new QLineEdit(layoutWidget_7);
        edtPDataServerDbName->setObjectName(QString::fromUtf8("edtPDataServerDbName"));

        horizontalLayout_18->addWidget(edtPDataServerDbName);

        layoutWidget9 = new QWidget(groupBox_7);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(11, 80, 451, 22));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_39 = new QLabel(layoutWidget9);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        horizontalLayout_19->addWidget(label_39);

        edtPDataServerThreadpoolMaxThreads = new QLineEdit(layoutWidget9);
        edtPDataServerThreadpoolMaxThreads->setObjectName(QString::fromUtf8("edtPDataServerThreadpoolMaxThreads"));

        horizontalLayout_19->addWidget(edtPDataServerThreadpoolMaxThreads);

        label_41 = new QLabel(layoutWidget9);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        horizontalLayout_19->addWidget(label_41);

        edtPDataServerThreadpoolThreadsExpire = new QLineEdit(layoutWidget9);
        edtPDataServerThreadpoolThreadsExpire->setObjectName(QString::fromUtf8("edtPDataServerThreadpoolThreadsExpire"));

        horizontalLayout_19->addWidget(edtPDataServerThreadpoolThreadsExpire);

        layoutWidget_9 = new QWidget(groupBox_7);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(10, 110, 451, 22));
        horizontalLayout_22 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        label_44 = new QLabel(layoutWidget_9);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        horizontalLayout_22->addWidget(label_44);

        edtPDataServerDbObjReleaseInterval = new QLineEdit(layoutWidget_9);
        edtPDataServerDbObjReleaseInterval->setObjectName(QString::fromUtf8("edtPDataServerDbObjReleaseInterval"));

        horizontalLayout_22->addWidget(edtPDataServerDbObjReleaseInterval);

        label_45 = new QLabel(layoutWidget_9);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        horizontalLayout_22->addWidget(label_45);

        edtPDataServerDbObjLifeTime = new QLineEdit(layoutWidget_9);
        edtPDataServerDbObjLifeTime->setObjectName(QString::fromUtf8("edtPDataServerDbObjLifeTime"));

        horizontalLayout_22->addWidget(edtPDataServerDbObjLifeTime);

        tabWidget->addTab(tabPDataReceiver, QString());
        tabPClient = new QWidget();
        tabPClient->setObjectName(QString::fromUtf8("tabPClient"));
        groupBox_5 = new QGroupBox(tabPClient);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 581, 141));
        layoutWidget10 = new QWidget(groupBox_5);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(20, 110, 211, 22));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(layoutWidget10);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_14->addWidget(label_25);

        edtPClientUdpBroadcastPort = new QLineEdit(layoutWidget10);
        edtPClientUdpBroadcastPort->setObjectName(QString::fromUtf8("edtPClientUdpBroadcastPort"));

        horizontalLayout_14->addWidget(edtPClientUdpBroadcastPort);

        layoutWidget11 = new QWidget(groupBox_5);
        layoutWidget11->setObjectName(QString::fromUtf8("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(21, 21, 430, 22));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget11);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget11);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_11->addWidget(label_19);

        edtPClientTcpIP = new QLineEdit(layoutWidget11);
        edtPClientTcpIP->setObjectName(QString::fromUtf8("edtPClientTcpIP"));

        horizontalLayout_11->addWidget(edtPClientTcpIP);

        label_20 = new QLabel(layoutWidget11);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_11->addWidget(label_20);

        edtPClientTcpPort = new QLineEdit(layoutWidget11);
        edtPClientTcpPort->setObjectName(QString::fromUtf8("edtPClientTcpPort"));

        horizontalLayout_11->addWidget(edtPClientTcpPort);

        layoutWidget12 = new QWidget(groupBox_5);
        layoutWidget12->setObjectName(QString::fromUtf8("layoutWidget12"));
        layoutWidget12->setGeometry(QRect(21, 52, 430, 22));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget12);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget12);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_12->addWidget(label_21);

        edtPClientUdpIP = new QLineEdit(layoutWidget12);
        edtPClientUdpIP->setObjectName(QString::fromUtf8("edtPClientUdpIP"));

        horizontalLayout_12->addWidget(edtPClientUdpIP);

        label_22 = new QLabel(layoutWidget12);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_12->addWidget(label_22);

        edtPClientUdpPort = new QLineEdit(layoutWidget12);
        edtPClientUdpPort->setObjectName(QString::fromUtf8("edtPClientUdpPort"));

        horizontalLayout_12->addWidget(edtPClientUdpPort);

        layoutWidget13 = new QWidget(groupBox_5);
        layoutWidget13->setObjectName(QString::fromUtf8("layoutWidget13"));
        layoutWidget13->setGeometry(QRect(23, 82, 430, 22));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget13);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget13);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_13->addWidget(label_23);

        edtPClientUdpMulticastIP = new QLineEdit(layoutWidget13);
        edtPClientUdpMulticastIP->setObjectName(QString::fromUtf8("edtPClientUdpMulticastIP"));

        horizontalLayout_13->addWidget(edtPClientUdpMulticastIP);

        label_24 = new QLabel(layoutWidget13);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_13->addWidget(label_24);

        edtPClientUdpMulticastPort = new QLineEdit(layoutWidget13);
        edtPClientUdpMulticastPort->setObjectName(QString::fromUtf8("edtPClientUdpMulticastPort"));

        horizontalLayout_13->addWidget(edtPClientUdpMulticastPort);

        tabWidget->addTab(tabPClient, QString());
        btnSave = new QPushButton(centralWidget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(440, 560, 75, 23));
        btnClose = new QPushButton(centralWidget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(550, 560, 75, 23));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\270\255\345\277\203\345\271\263\345\217\260\345\217\202\346\225\260\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "\347\275\221\347\273\234", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "TCP\344\276\246\345\220\254\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "TCP\345\276\205\345\244\204\347\220\206\350\277\236\346\216\245\346\225\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "UDP\347\253\257\345\217\243    ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "UDP\345\271\277\346\222\255\347\253\257\345\217\243    ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "UDP\347\273\204\346\222\255IP  ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "UDP\347\273\204\346\222\255\347\253\257\345\217\243    ", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\347\272\277\347\250\213", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\351\200\232\344\277\241\347\272\277\347\250\213\347\256\241\347\220\206\350\277\236\346\216\245\346\225\260", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\351\200\232\344\277\241\347\272\277\347\250\213\346\240\210\345\244\247\345\260\217(K)", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\346\243\200\346\265\213\351\200\232\344\277\241\347\272\277\347\250\213\346\230\257\345\220\246\344\275\277\347\224\250\346\227\266\351\227\264\351\227\264\351\232\224(m)", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\350\275\257\344\273\266", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "IP", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("MainWindow", "\345\217\243\344\273\244", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("MainWindow", "\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("MainWindow", "\347\272\277\347\250\213\346\261\240\346\234\200\345\244\247\347\272\277\347\250\213\346\225\260", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("MainWindow", "\347\272\277\347\250\213\346\261\240\347\250\213\346\225\260\350\266\205\346\227\266(s)", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\345\257\271\350\261\241\351\207\212\346\224\276\351\227\264\351\232\224(m)", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\345\257\271\350\261\241\347\224\237\345\221\275\345\221\250\346\234\237(m)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabPServer), QApplication::translate("MainWindow", "\345\271\263\345\217\260\344\270\255\345\277\203\346\234\215\345\212\241\345\231\250", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\347\272\277\347\250\213", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\351\200\232\344\277\241\347\272\277\347\250\213\347\256\241\347\220\206\350\277\236\346\216\245\346\225\260", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "\351\200\232\344\277\241\347\272\277\347\250\213\346\240\210\345\244\247\345\260\217(K)", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "\346\243\200\346\265\213\351\200\232\344\277\241\347\272\277\347\250\213\346\230\257\345\220\246\344\275\277\347\224\250\346\227\266\351\227\264\351\227\264\351\232\224(m)", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\347\275\221\347\273\234", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "TCP\344\276\246\345\220\254\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "TCP\345\276\205\345\244\204\347\220\206\350\277\236\346\216\245\346\225\260", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "UDP\347\253\257\345\217\243    ", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "UDP\345\271\277\346\222\255\347\253\257\345\217\243    ", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "UDP\347\273\204\346\222\255IP  ", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "UDP\347\273\204\346\222\255\347\253\257\345\217\243    ", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\350\275\257\344\273\266", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("MainWindow", "IP", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("MainWindow", "\345\217\243\344\273\244", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("MainWindow", "\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("MainWindow", "\347\272\277\347\250\213\346\261\240\346\234\200\345\244\247\347\272\277\347\250\213\346\225\260", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("MainWindow", "\347\272\277\347\250\213\346\261\240\347\250\213\346\225\260\350\266\205\346\227\266(s)", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\345\257\271\350\261\241\351\207\212\346\224\276\351\227\264\351\232\224(m)", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\345\257\271\350\261\241\347\224\237\345\221\275\345\221\250\346\234\237(m)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabPDataReceiver), QApplication::translate("MainWindow", "\345\271\263\345\217\260\346\225\260\346\215\256\346\216\245\346\224\266\346\234\215\345\212\241\345\231\250", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\347\275\221\347\273\234", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindow", "UDP\345\271\277\346\222\255\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "TCP\346\234\215\345\212\241\345\231\250IP", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "TCP\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "UDP\346\234\215\345\212\241\345\231\250IP", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "UDP\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "UDP\347\273\204\346\222\255IP  ", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "UDP\347\273\204\346\222\255\347\253\257\345\217\243  ", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabPClient), QApplication::translate("MainWindow", "\345\271\263\345\217\260\345\256\242\346\210\267\347\253\257", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
