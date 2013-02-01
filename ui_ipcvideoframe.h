/********************************************************************************
** Form generated from reading UI file 'ipcvideoframe.ui'
**
** Created: Fri Feb 1 13:10:09 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IPCVIDEOFRAME_H
#define UI_IPCVIDEOFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CIPCVideoFrame
{
public:
    QTabWidget *tabWidget;
    QWidget *tabVideo;
    QTabWidget *tabWidgetVideo;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tabGate;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOpen;
    QPushButton *btnClose;
    QPushButton *btnOpenAll;
    QPushButton *btnCloseAll;

    void setupUi(QFrame *CIPCVideoFrame)
    {
        if (CIPCVideoFrame->objectName().isEmpty())
            CIPCVideoFrame->setObjectName(QString::fromUtf8("CIPCVideoFrame"));
        CIPCVideoFrame->resize(694, 510);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CIPCVideoFrame->sizePolicy().hasHeightForWidth());
        CIPCVideoFrame->setSizePolicy(sizePolicy);
        CIPCVideoFrame->setFrameShape(QFrame::StyledPanel);
        CIPCVideoFrame->setFrameShadow(QFrame::Raised);
        tabWidget = new QTabWidget(CIPCVideoFrame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(7, 7, 681, 491));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabVideo = new QWidget();
        tabVideo->setObjectName(QString::fromUtf8("tabVideo"));
        sizePolicy.setHeightForWidth(tabVideo->sizePolicy().hasHeightForWidth());
        tabVideo->setSizePolicy(sizePolicy);
        tabWidgetVideo = new QTabWidget(tabVideo);
        tabWidgetVideo->setObjectName(QString::fromUtf8("tabWidgetVideo"));
        tabWidgetVideo->setGeometry(QRect(20, 10, 341, 271));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidgetVideo->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidgetVideo->addTab(tab_2, QString());
        tabWidget->addTab(tabVideo, QString());
        tabGate = new QWidget();
        tabGate->setObjectName(QString::fromUtf8("tabGate"));
        sizePolicy.setHeightForWidth(tabGate->sizePolicy().hasHeightForWidth());
        tabGate->setSizePolicy(sizePolicy);
        tableWidget = new QTableWidget(tabGate);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 651, 401));
        layoutWidget = new QWidget(tabGate);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(340, 440, 320, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnOpen = new QPushButton(layoutWidget);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));

        horizontalLayout->addWidget(btnOpen);

        btnClose = new QPushButton(layoutWidget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout->addWidget(btnClose);

        btnOpenAll = new QPushButton(layoutWidget);
        btnOpenAll->setObjectName(QString::fromUtf8("btnOpenAll"));

        horizontalLayout->addWidget(btnOpenAll);

        btnCloseAll = new QPushButton(layoutWidget);
        btnCloseAll->setObjectName(QString::fromUtf8("btnCloseAll"));

        horizontalLayout->addWidget(btnCloseAll);

        tabWidget->addTab(tabGate, QString());

        retranslateUi(CIPCVideoFrame);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CIPCVideoFrame);
    } // setupUi

    void retranslateUi(QFrame *CIPCVideoFrame)
    {
        CIPCVideoFrame->setWindowTitle(QApplication::translate("CIPCVideoFrame", "\350\277\234\347\250\213\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        tabWidgetVideo->setTabText(tabWidgetVideo->indexOf(tab), QApplication::translate("CIPCVideoFrame", "Tab 1", 0, QApplication::UnicodeUTF8));
        tabWidgetVideo->setTabText(tabWidgetVideo->indexOf(tab_2), QApplication::translate("CIPCVideoFrame", "Tab 2", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabVideo), QApplication::translate("CIPCVideoFrame", "\346\211\200\346\234\211\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CIPCVideoFrame", "\351\200\232\351\201\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CIPCVideoFrame", "CAN\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CIPCVideoFrame", "\345\274\200\345\205\263\351\227\270", 0, QApplication::UnicodeUTF8));
        btnOpen->setText(QApplication::translate("CIPCVideoFrame", "\345\274\200\351\200\211\345\256\232\351\227\270", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("CIPCVideoFrame", "\345\205\263\351\200\211\345\256\232\351\227\270", 0, QApplication::UnicodeUTF8));
        btnOpenAll->setText(QApplication::translate("CIPCVideoFrame", "\345\274\200\346\211\200\346\234\211\351\227\270", 0, QApplication::UnicodeUTF8));
        btnCloseAll->setText(QApplication::translate("CIPCVideoFrame", "\345\205\263\346\211\200\346\234\211\351\227\270", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabGate), QApplication::translate("CIPCVideoFrame", "\345\274\200\345\205\263\351\227\270", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CIPCVideoFrame: public Ui_CIPCVideoFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IPCVIDEOFRAME_H
