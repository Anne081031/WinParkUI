/********************************************************************************
** Form generated from reading UI file 'ipcvideoframe.ui'
**
** Created: Wed Jan 30 11:53:07 2013
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
#include <QtGui/QHeaderView>
#include <QtGui/QTabWidget>
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

    void setupUi(QFrame *CIPCVideoFrame)
    {
        if (CIPCVideoFrame->objectName().isEmpty())
            CIPCVideoFrame->setObjectName(QString::fromUtf8("CIPCVideoFrame"));
        CIPCVideoFrame->resize(872, 684);
        CIPCVideoFrame->setFrameShape(QFrame::StyledPanel);
        CIPCVideoFrame->setFrameShadow(QFrame::Raised);
        tabWidget = new QTabWidget(CIPCVideoFrame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 681, 441));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabVideo = new QWidget();
        tabVideo->setObjectName(QString::fromUtf8("tabVideo"));
        sizePolicy.setHeightForWidth(tabVideo->sizePolicy().hasHeightForWidth());
        tabVideo->setSizePolicy(sizePolicy);
        tabWidgetVideo = new QTabWidget(tabVideo);
        tabWidgetVideo->setObjectName(QString::fromUtf8("tabWidgetVideo"));
        tabWidgetVideo->setGeometry(QRect(20, 10, 127, 80));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidgetVideo->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidgetVideo->addTab(tab_2, QString());
        tabWidget->addTab(tabVideo, QString());
        tabGate = new QWidget();
        tabGate->setObjectName(QString::fromUtf8("tabGate"));
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
        tabWidget->setTabText(tabWidget->indexOf(tabGate), QApplication::translate("CIPCVideoFrame", "\345\274\200\345\205\263\351\227\270", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CIPCVideoFrame: public Ui_CIPCVideoFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IPCVIDEOFRAME_H
