/********************************************************************************
** Form generated from reading UI file 'blacklistmainwindow.ui'
**
** Created: Wed Oct 9 14:51:44 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLACKLISTMAINWINDOW_H
#define UI_BLACKLISTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlacklistMainWindow
{
public:
    QAction *actBlacklist;
    QAction *actParameter;
    QWidget *centralwidget;
    QLabel *lblVideo;
    QTableWidget *tableAlert;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSingleFile;
    QPushButton *btnPreFile;
    QPushButton *btnNextFile;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *BlacklistMainWindow)
    {
        if (BlacklistMainWindow->objectName().isEmpty())
            BlacklistMainWindow->setObjectName(QString::fromUtf8("BlacklistMainWindow"));
        BlacklistMainWindow->resize(938, 463);
        BlacklistMainWindow->setMinimumSize(QSize(938, 463));
        BlacklistMainWindow->setMaximumSize(QSize(938, 463));
        actBlacklist = new QAction(BlacklistMainWindow);
        actBlacklist->setObjectName(QString::fromUtf8("actBlacklist"));
        actParameter = new QAction(BlacklistMainWindow);
        actParameter->setObjectName(QString::fromUtf8("actParameter"));
        centralwidget = new QWidget(BlacklistMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lblVideo = new QLabel(centralwidget);
        lblVideo->setObjectName(QString::fromUtf8("lblVideo"));
        lblVideo->setGeometry(QRect(20, 20, 421, 381));
        lblVideo->setFrameShape(QFrame::Panel);
        lblVideo->setFrameShadow(QFrame::Sunken);
        lblVideo->setScaledContents(true);
        tableAlert = new QTableWidget(centralwidget);
        if (tableAlert->columnCount() < 4)
            tableAlert->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableAlert->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableAlert->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableAlert->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableAlert->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableAlert->setObjectName(QString::fromUtf8("tableAlert"));
        tableAlert->setGeometry(QRect(470, 19, 451, 381));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 410, 244, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnSingleFile = new QPushButton(layoutWidget);
        btnSingleFile->setObjectName(QString::fromUtf8("btnSingleFile"));

        horizontalLayout->addWidget(btnSingleFile);

        btnPreFile = new QPushButton(layoutWidget);
        btnPreFile->setObjectName(QString::fromUtf8("btnPreFile"));

        horizontalLayout->addWidget(btnPreFile);

        btnNextFile = new QPushButton(layoutWidget);
        btnNextFile->setObjectName(QString::fromUtf8("btnNextFile"));

        horizontalLayout->addWidget(btnNextFile);

        BlacklistMainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(BlacklistMainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 938, 19));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        BlacklistMainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actBlacklist);
        menu->addAction(actParameter);

        retranslateUi(BlacklistMainWindow);

        QMetaObject::connectSlotsByName(BlacklistMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BlacklistMainWindow)
    {
        BlacklistMainWindow->setWindowTitle(QApplication::translate("BlacklistMainWindow", "\351\273\221\345\220\215\345\215\225\345\212\237\350\203\275\346\274\224\347\244\272", 0, QApplication::UnicodeUTF8));
        actBlacklist->setText(QApplication::translate("BlacklistMainWindow", "\351\273\221\345\220\215\345\215\225", 0, QApplication::UnicodeUTF8));
        actParameter->setText(QApplication::translate("BlacklistMainWindow", "\345\217\202\346\225\260\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        lblVideo->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableAlert->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BlacklistMainWindow", "\350\275\246\347\211\214\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableAlert->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BlacklistMainWindow", "\350\277\233\345\207\272\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableAlert->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("BlacklistMainWindow", "\346\212\245\350\255\246\345\216\237\345\233\240", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableAlert->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("BlacklistMainWindow", "File", 0, QApplication::UnicodeUTF8));
        btnSingleFile->setText(QApplication::translate("BlacklistMainWindow", "\345\215\225\344\270\252\346\226\207\344\273\266\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        btnPreFile->setText(QApplication::translate("BlacklistMainWindow", "\344\270\212\344\270\200\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        btnNextFile->setText(QApplication::translate("BlacklistMainWindow", "\344\270\213\344\270\200\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("BlacklistMainWindow", "\347\263\273\347\273\237\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BlacklistMainWindow: public Ui_BlacklistMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLACKLISTMAINWINDOW_H
