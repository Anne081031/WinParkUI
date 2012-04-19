/********************************************************************************
** Form generated from reading UI file 'monitor.ui'
**
** Created: Tue Aug 9 15:22:16 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITOR_H
#define UI_MONITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CMonitor
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QFrame *CMonitor)
    {
        if (CMonitor->objectName().isEmpty())
            CMonitor->setObjectName(QString::fromUtf8("CMonitor"));
        CMonitor->resize(1440, 900);
        CMonitor->setWindowOpacity(1);
        CMonitor->setFrameShape(QFrame::StyledPanel);
        CMonitor->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(CMonitor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 80, 84, 24));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url( );\n"
"border-style: outset; \n"
"border-width:1px; \n"
"border-radius: 10px; \n"
"min-width: 5em; "));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../\345\233\276\346\240\207JPG/\345\202\250\345\200\274\345\215\241.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(CMonitor);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 320, 111, 111));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-style: outset; "));

        retranslateUi(CMonitor);

        QMetaObject::connectSlotsByName(CMonitor);
    } // setupUi

    void retranslateUi(QFrame *CMonitor)
    {
        CMonitor->setWindowTitle(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QApplication::translate("CMonitor", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CMonitor: public Ui_CMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITOR_H
