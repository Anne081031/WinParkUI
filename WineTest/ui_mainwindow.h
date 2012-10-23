/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Oct 23 13:21:12 2012
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
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *edtLed;
    QPushButton *btnRequest;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbxOp;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *cbxTraffic;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *edtAddress;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *cbxGate;
    QPushButton *btnContinue;
    QGroupBox *groupBox_2;
    QTextEdit *edtResponse;
    QLabel *lblPic;
    QGroupBox *groupBox_3;
    QPushButton *btnConnect;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *edtIP;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *edtPort;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(718, 500);
        MainWindow->setMinimumSize(QSize(718, 500));
        MainWindow->setMaximumSize(QSize(718, 500));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 241, 241));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 150, 165, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        edtLed = new QLineEdit(layoutWidget);
        edtLed->setObjectName(QString::fromUtf8("edtLed"));

        horizontalLayout_5->addWidget(edtLed);

        btnRequest = new QPushButton(groupBox);
        btnRequest->setObjectName(QString::fromUtf8("btnRequest"));
        btnRequest->setGeometry(QRect(50, 200, 75, 23));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 30, 136, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cbxOp = new QComboBox(layoutWidget1);
        cbxOp->setObjectName(QString::fromUtf8("cbxOp"));

        horizontalLayout->addWidget(cbxOp);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 90, 94, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        cbxTraffic = new QComboBox(layoutWidget2);
        cbxTraffic->setObjectName(QString::fromUtf8("cbxTraffic"));

        horizontalLayout_3->addWidget(cbxTraffic);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 60, 165, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        edtAddress = new QLineEdit(layoutWidget3);
        edtAddress->setObjectName(QString::fromUtf8("edtAddress"));

        horizontalLayout_2->addWidget(edtAddress);

        layoutWidget4 = new QWidget(groupBox);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 120, 82, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        cbxGate = new QComboBox(layoutWidget4);
        cbxGate->setObjectName(QString::fromUtf8("cbxGate"));

        horizontalLayout_4->addWidget(cbxGate);

        btnContinue = new QPushButton(groupBox);
        btnContinue->setObjectName(QString::fromUtf8("btnContinue"));
        btnContinue->setGeometry(QRect(140, 200, 75, 23));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(320, 10, 301, 241));
        edtResponse = new QTextEdit(groupBox_2);
        edtResponse->setObjectName(QString::fromUtf8("edtResponse"));
        edtResponse->setGeometry(QRect(20, 30, 251, 191));
        lblPic = new QLabel(centralWidget);
        lblPic->setObjectName(QString::fromUtf8("lblPic"));
        lblPic->setGeometry(QRect(320, 270, 301, 161));
        lblPic->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblPic->setFrameShape(QFrame::Panel);
        lblPic->setFrameShadow(QFrame::Sunken);
        lblPic->setScaledContents(true);
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 270, 231, 141));
        btnConnect = new QPushButton(groupBox_3);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));
        btnConnect->setGeometry(QRect(40, 100, 111, 23));
        layoutWidget5 = new QWidget(groupBox_3);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 30, 153, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        edtIP = new QLineEdit(layoutWidget5);
        edtIP->setObjectName(QString::fromUtf8("edtIP"));

        horizontalLayout_6->addWidget(edtIP);

        layoutWidget6 = new QWidget(groupBox_3);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(20, 60, 165, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        edtPort = new QLineEdit(layoutWidget6);
        edtPort->setObjectName(QString::fromUtf8("edtPort"));

        horizontalLayout_7->addWidget(edtPort);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 718, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Request", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Led\347\261\273\345\256\271", 0, QApplication::UnicodeUTF8));
        btnRequest->setText(QApplication::translate("MainWindow", "\350\257\267\346\261\202", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\346\223\215\344\275\234", 0, QApplication::UnicodeUTF8));
        cbxOp->clear();
        cbxOp->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\237\245\350\257\242A\345\234\260\346\204\237\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\346\237\245\350\257\242B\345\234\260\346\204\237\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\346\237\245\350\257\242\347\272\242\345\244\226\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\345\217\221\345\270\203LED", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\347\272\242\347\273\277\347\201\257\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\351\201\223\351\227\270\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\346\237\245\350\257\242\350\275\246\347\211\214\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\344\270\273\345\212\250\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("MainWindow", "\347\272\242\347\273\277\347\201\257", 0, QApplication::UnicodeUTF8));
        cbxTraffic->clear();
        cbxTraffic->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\347\272\242\347\201\257", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\347\273\277\347\201\257", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\345\205\263\347\201\257", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("MainWindow", "\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\351\201\223\351\227\270", 0, QApplication::UnicodeUTF8));
        cbxGate->clear();
        cbxGate->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\274\200\351\227\270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\345\205\263\351\227\270", 0, QApplication::UnicodeUTF8)
        );
        btnContinue->setText(QApplication::translate("MainWindow", "\350\277\236\347\273\255\345\274\200\345\205\263\351\227\270", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Response", 0, QApplication::UnicodeUTF8));
        lblPic->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\350\275\246\347\211\214\346\234\215\345\212\241\345\231\250", 0, QApplication::UnicodeUTF8));
        btnConnect->setText(QApplication::translate("MainWindow", "\351\223\276\346\216\245\350\275\246\347\211\214\346\234\215\345\212\241\345\231\250", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "IP", 0, QApplication::UnicodeUTF8));
        edtIP->setText(QApplication::translate("MainWindow", "127.0.0.1", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Port", 0, QApplication::UnicodeUTF8));
        edtPort->setText(QApplication::translate("MainWindow", "60000", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
