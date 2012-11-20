/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Nov 20 16:46:23 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lblVideo1;
    QGroupBox *groupBox;
    QLabel *lblImage;
    QGroupBox *groupBox_2;
    QLabel *lblPlateImage;
    QGroupBox *groupBox_3;
    QLabel *lblPlate;
    QTableWidget *tableWidget;
    QPushButton *btnParam;
    QPushButton *btnImagePath;
    QPushButton *btnOpenVideo;
    QPushButton *btnCloseVideo;
    QPushButton *btnClear;
    QPushButton *btnCapture;
    QLabel *lblVideo2;
    QLabel *lblVideo4;
    QLabel *lblVideo3;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1163, 887);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lblVideo1 = new QLabel(centralWidget);
        lblVideo1->setObjectName(QString::fromUtf8("lblVideo1"));
        lblVideo1->setGeometry(QRect(10, 10, 381, 381));
        lblVideo1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);"));
        lblVideo1->setFrameShape(QFrame::Panel);
        lblVideo1->setFrameShadow(QFrame::Sunken);
        lblVideo1->setLineWidth(3);
        lblVideo1->setScaledContents(true);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(800, 0, 291, 221));
        lblImage = new QLabel(groupBox);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(10, 13, 271, 201));
        lblImage->setFrameShape(QFrame::Panel);
        lblImage->setFrameShadow(QFrame::Sunken);
        lblImage->setLineWidth(2);
        lblImage->setScaledContents(true);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(800, 220, 291, 111));
        lblPlateImage = new QLabel(groupBox_2);
        lblPlateImage->setObjectName(QString::fromUtf8("lblPlateImage"));
        lblPlateImage->setGeometry(QRect(10, 10, 271, 81));
        lblPlateImage->setFrameShape(QFrame::Panel);
        lblPlateImage->setFrameShadow(QFrame::Sunken);
        lblPlateImage->setLineWidth(2);
        lblPlateImage->setScaledContents(true);
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(800, 340, 291, 61));
        lblPlate = new QLabel(groupBox_3);
        lblPlate->setObjectName(QString::fromUtf8("lblPlate"));
        lblPlate->setGeometry(QRect(10, 0, 271, 41));
        lblPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        lblPlate->setAlignment(Qt::AlignCenter);
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(190, 410, 821, 431));
        btnParam = new QPushButton(centralWidget);
        btnParam->setObjectName(QString::fromUtf8("btnParam"));
        btnParam->setGeometry(QRect(20, 650, 75, 23));
        btnImagePath = new QPushButton(centralWidget);
        btnImagePath->setObjectName(QString::fromUtf8("btnImagePath"));
        btnImagePath->setGeometry(QRect(20, 680, 75, 23));
        btnOpenVideo = new QPushButton(centralWidget);
        btnOpenVideo->setObjectName(QString::fromUtf8("btnOpenVideo"));
        btnOpenVideo->setGeometry(QRect(20, 620, 75, 23));
        btnCloseVideo = new QPushButton(centralWidget);
        btnCloseVideo->setObjectName(QString::fromUtf8("btnCloseVideo"));
        btnCloseVideo->setGeometry(QRect(100, 620, 75, 23));
        btnClear = new QPushButton(centralWidget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(20, 710, 75, 23));
        btnCapture = new QPushButton(centralWidget);
        btnCapture->setObjectName(QString::fromUtf8("btnCapture"));
        btnCapture->setGeometry(QRect(20, 740, 75, 23));
        lblVideo2 = new QLabel(centralWidget);
        lblVideo2->setObjectName(QString::fromUtf8("lblVideo2"));
        lblVideo2->setGeometry(QRect(400, 10, 381, 381));
        lblVideo2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);"));
        lblVideo2->setFrameShape(QFrame::Panel);
        lblVideo2->setFrameShadow(QFrame::Sunken);
        lblVideo2->setLineWidth(3);
        lblVideo2->setScaledContents(true);
        lblVideo4 = new QLabel(centralWidget);
        lblVideo4->setObjectName(QString::fromUtf8("lblVideo4"));
        lblVideo4->setGeometry(QRect(70, 420, 51, 61));
        lblVideo4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);"));
        lblVideo4->setFrameShape(QFrame::Panel);
        lblVideo4->setFrameShadow(QFrame::Sunken);
        lblVideo4->setLineWidth(3);
        lblVideo4->setScaledContents(true);
        lblVideo3 = new QLabel(centralWidget);
        lblVideo3->setObjectName(QString::fromUtf8("lblVideo3"));
        lblVideo3->setGeometry(QRect(10, 420, 51, 61));
        lblVideo3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);"));
        lblVideo3->setFrameShape(QFrame::Panel);
        lblVideo3->setFrameShadow(QFrame::Sunken);
        lblVideo3->setLineWidth(3);
        lblVideo3->setScaledContents(true);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 560, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1163, 19));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\210\220\351\203\275\350\276\233\344\270\272\347\247\221\346\212\200---\350\275\246\347\211\214\350\257\206\345\210\253Demo", 0, QApplication::UnicodeUTF8));
        lblVideo1->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "\345\233\276\347\211\207", 0, QApplication::UnicodeUTF8));
        lblImage->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\350\275\246\347\211\214\345\233\276\347\211\207", 0, QApplication::UnicodeUTF8));
        lblPlateImage->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\350\275\246\347\211\214\345\217\267\347\240\201", 0, QApplication::UnicodeUTF8));
        lblPlate->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\350\275\246\347\211\214\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\351\242\234\350\211\262", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\350\257\206\345\210\253\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\345\217\257\344\277\241\345\272\246", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\346\226\271\345\220\221", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        btnParam->setText(QApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        btnImagePath->setText(QApplication::translate("MainWindow", "\345\233\276\347\211\207", 0, QApplication::UnicodeUTF8));
        btnOpenVideo->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
        btnCloseVideo->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        btnCapture->setText(QApplication::translate("MainWindow", " \346\212\223\345\233\276", 0, QApplication::UnicodeUTF8));
        lblVideo2->setText(QString());
        lblVideo4->setText(QString());
        lblVideo3->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
