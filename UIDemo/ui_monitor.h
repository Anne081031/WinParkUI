/********************************************************************************
** Form generated from reading UI file 'monitor.ui'
**
** Created: Thu Jun 7 15:10:52 2012
**      by: Qt User Interface Compiler version 4.7.4
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

QT_BEGIN_NAMESPACE

class Ui_CMonitor
{
public:

    void setupUi(QFrame *CMonitor)
    {
        if (CMonitor->objectName().isEmpty())
            CMonitor->setObjectName(QString::fromUtf8("CMonitor"));
        CMonitor->resize(1440, 900);
        CMonitor->setWindowOpacity(1);
        CMonitor->setFrameShape(QFrame::StyledPanel);
        CMonitor->setFrameShadow(QFrame::Raised);

        retranslateUi(CMonitor);

        QMetaObject::connectSlotsByName(CMonitor);
    } // setupUi

    void retranslateUi(QFrame *CMonitor)
    {
        CMonitor->setWindowTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class CMonitor: public Ui_CMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITOR_H
