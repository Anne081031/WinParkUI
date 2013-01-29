/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Jan 29 15:38:29 2013
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
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame0;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit;
    QFrame *frame1;
    QFrame *frame2;
    QFrame *frame3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1255, 511);
        MainWindow->setMinimumSize(QSize(1255, 511));
        MainWindow->setMaximumSize(QSize(1255, 511));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame0 = new QFrame(centralWidget);
        frame0->setObjectName(QString::fromUtf8("frame0"));
        frame0->setGeometry(QRect(10, 10, 300, 250));
        frame0->setFrameShape(QFrame::WinPanel);
        frame0->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1120, 470, 75, 23));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 270, 1231, 181));
        frame1 = new QFrame(centralWidget);
        frame1->setObjectName(QString::fromUtf8("frame1"));
        frame1->setGeometry(QRect(320, 10, 300, 250));
        frame1->setFrameShape(QFrame::WinPanel);
        frame1->setFrameShadow(QFrame::Raised);
        frame2 = new QFrame(centralWidget);
        frame2->setObjectName(QString::fromUtf8("frame2"));
        frame2->setGeometry(QRect(630, 10, 300, 250));
        frame2->setFrameShape(QFrame::WinPanel);
        frame2->setFrameShadow(QFrame::Raised);
        frame3 = new QFrame(centralWidget);
        frame3->setObjectName(QString::fromUtf8("frame3"));
        frame3->setGeometry(QRect(940, 10, 300, 250));
        frame3->setFrameShape(QFrame::WinPanel);
        frame3->setFrameShadow(QFrame::Raised);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1030, 470, 75, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(940, 470, 75, 23));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "StartVideo", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Capture", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "StopVideo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
