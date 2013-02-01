/********************************************************************************
** Form generated from reading UI file 'deviceconfig.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICECONFIG_H
#define UI_DEVICECONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDeviceConfig
{
public:
    QWidget *widget;
    QTreeWidget *treeWidget;
    QPushButton *btnMinimalize;
    QLabel *lblTitle;
    QLabel *lblClose;

    void setupUi(QFrame *CDeviceConfig)
    {
        if (CDeviceConfig->objectName().isEmpty())
            CDeviceConfig->setObjectName(QString::fromUtf8("CDeviceConfig"));
        CDeviceConfig->resize(463, 350);
        CDeviceConfig->setStyleSheet(QString::fromUtf8(""));
        CDeviceConfig->setFrameShape(QFrame::StyledPanel);
        CDeviceConfig->setFrameShadow(QFrame::Raised);
        widget = new QWidget(CDeviceConfig);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(45, 50, 371, 281));
        widget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        treeWidget = new QTreeWidget(widget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(-1, 0, 371, 241));
        treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        treeWidget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnMinimalize = new QPushButton(widget);
        btnMinimalize->setObjectName(QString::fromUtf8("btnMinimalize"));
        btnMinimalize->setGeometry(QRect(150, 250, 75, 23));
        btnMinimalize->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblTitle = new QLabel(CDeviceConfig);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(170, 0, 0);"));
        lblClose = new QLabel(CDeviceConfig);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(423, 7, 30, 15));

        retranslateUi(CDeviceConfig);

        QMetaObject::connectSlotsByName(CDeviceConfig);
    } // setupUi

    void retranslateUi(QFrame *CDeviceConfig)
    {
        CDeviceConfig->setWindowTitle(QApplication::translate("CDeviceConfig", "\350\256\276\345\244\207\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("CDeviceConfig", "\347\263\273\347\273\237\351\205\215\347\275\256\345\233\276", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("CDeviceConfig", "\350\256\276\345\244\207\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        treeWidget->setSortingEnabled(__sortingEnabled);

#ifndef QT_NO_TOOLTIP
        treeWidget->setToolTip(QApplication::translate("CDeviceConfig", "\343\200\220\350\256\276\345\244\207\351\205\215\347\275\256\343\200\221\344\270\213\345\205\210\345\273\272\344\270\200\343\200\220\350\231\232\346\213\237\345\201\234\350\275\246\345\234\272\343\200\221\357\274\214\n"
"\345\205\266\344\275\231\345\235\207\344\270\272\343\200\220\350\231\232\346\213\237\345\201\234\350\275\246\345\234\272\343\200\221\347\232\204\343\200\220\345\255\220\345\201\234\350\275\246\345\234\272\343\200\221\357\274\214\n"
"\343\200\220\350\231\232\346\213\237\345\201\234\350\275\246\345\234\272\343\200\221\344\270\213\346\227\240\343\200\220\351\200\232\351\201\223\346\216\247\345\210\266\345\231\250\343\200\221\343\200\202", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnMinimalize->setText(QApplication::translate("CDeviceConfig", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CDeviceConfig: public Ui_CDeviceConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICECONFIG_H
