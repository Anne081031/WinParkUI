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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionChange;
    QWidget *centralWidget;
    QTreeWidget *treeWidget;
    QLabel *lblWelcome;
    QLabel *lblTime;
    QFrame *frame;
    QPushButton *ptnMod;
    QPushButton *ptnDel;
    QPushButton *ptnAdd;
    QPushButton *ptnAddNext;
    QPushButton *ptnBatchAdd;
    QPushButton *ptnBatchAddNext;
    QTableWidget *selfTabWidget;
    QTableWidget *childrenTabWidget;
    QTableWidget *childrenTabWidget_2;
    QLabel *lblChild1;
    QLabel *lblSelf;
    QLabel *lblChild2;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 750);
        MainWindow->setMinimumSize(QSize(1000, 750));
        MainWindow->setMaximumSize(QSize(1000, 750));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionChange = new QAction(MainWindow);
        actionChange->setObjectName(QStringLiteral("actionChange"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        treeWidget = new QTreeWidget(centralWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(30, 60, 271, 611));
        treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        lblWelcome = new QLabel(centralWidget);
        lblWelcome->setObjectName(QStringLiteral("lblWelcome"));
        lblWelcome->setGeometry(QRect(10, 10, 371, 16));
        lblTime = new QLabel(centralWidget);
        lblTime->setObjectName(QStringLiteral("lblTime"));
        lblTime->setGeometry(QRect(760, 20, 231, 20));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(320, 60, 661, 31));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        ptnMod = new QPushButton(frame);
        ptnMod->setObjectName(QStringLiteral("ptnMod"));
        ptnMod->setGeometry(QRect(225, 1, 100, 23));
        ptnDel = new QPushButton(frame);
        ptnDel->setObjectName(QStringLiteral("ptnDel"));
        ptnDel->setGeometry(QRect(330, 1, 100, 23));
        ptnAdd = new QPushButton(frame);
        ptnAdd->setObjectName(QStringLiteral("ptnAdd"));
        ptnAdd->setGeometry(QRect(13, 1, 100, 23));
        ptnAddNext = new QPushButton(frame);
        ptnAddNext->setObjectName(QStringLiteral("ptnAddNext"));
        ptnAddNext->setGeometry(QRect(436, 1, 100, 23));
        ptnBatchAdd = new QPushButton(frame);
        ptnBatchAdd->setObjectName(QStringLiteral("ptnBatchAdd"));
        ptnBatchAdd->setGeometry(QRect(119, 1, 100, 23));
        ptnBatchAddNext = new QPushButton(frame);
        ptnBatchAddNext->setObjectName(QStringLiteral("ptnBatchAddNext"));
        ptnBatchAddNext->setGeometry(QRect(542, 1, 100, 23));
        selfTabWidget = new QTableWidget(centralWidget);
        selfTabWidget->setObjectName(QStringLiteral("selfTabWidget"));
        selfTabWidget->setGeometry(QRect(340, 130, 620, 100));
        childrenTabWidget = new QTableWidget(centralWidget);
        childrenTabWidget->setObjectName(QStringLiteral("childrenTabWidget"));
        childrenTabWidget->setGeometry(QRect(340, 260, 620, 190));
        childrenTabWidget_2 = new QTableWidget(centralWidget);
        childrenTabWidget_2->setObjectName(QStringLiteral("childrenTabWidget_2"));
        childrenTabWidget_2->setGeometry(QRect(340, 480, 620, 190));
        lblChild1 = new QLabel(centralWidget);
        lblChild1->setObjectName(QStringLiteral("lblChild1"));
        lblChild1->setGeometry(QRect(340, 240, 241, 16));
        lblSelf = new QLabel(centralWidget);
        lblSelf->setObjectName(QStringLiteral("lblSelf"));
        lblSelf->setGeometry(QRect(340, 100, 101, 21));
        lblChild2 = new QLabel(centralWidget);
        lblChild2->setObjectName(QStringLiteral("lblChild2"));
        lblChild2->setGeometry(QRect(340, 460, 241, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 19));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addSeparator();
        menu->addAction(actionChange);
        menu->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\201\234\350\275\246\345\234\272\346\237\245\350\257\242\347\263\273\347\273\237", 0));
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", 0));
        actionChange->setText(QApplication::translate("MainWindow", "\345\210\207\346\215\242\347\224\250\346\210\267", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\345\201\234\350\275\246\345\234\272\344\277\241\346\201\257", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "\344\270\255\345\233\275", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        lblWelcome->setText(QString());
        lblTime->setText(QString());
        ptnMod->setText(QApplication::translate("MainWindow", "mod", 0));
        ptnDel->setText(QApplication::translate("MainWindow", "del", 0));
        ptnAdd->setText(QApplication::translate("MainWindow", "add", 0));
        ptnAddNext->setText(QApplication::translate("MainWindow", "addnext", 0));
        ptnBatchAdd->setText(QApplication::translate("MainWindow", "batchadd", 0));
        ptnBatchAddNext->setText(QApplication::translate("MainWindow", "batchaddnext", 0));
        lblChild1->setText(QApplication::translate("MainWindow", "\347\233\264\346\216\245\344\270\213\347\272\247\344\277\241\346\201\2571", 0));
        lblSelf->setText(QApplication::translate("MainWindow", "\347\233\270\345\205\263\344\277\241\346\201\257", 0));
        lblChild2->setText(QApplication::translate("MainWindow", "\347\233\264\346\216\245\344\270\213\347\272\247\344\277\241\346\201\2572", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
