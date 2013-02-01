/********************************************************************************
** Form generated from reading UI file 'feeframe.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEFRAME_H
#define UI_FEEFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CFeeFrame
{
public:

    void setupUi(QFrame *CFeeFrame)
    {
        if (CFeeFrame->objectName().isEmpty())
            CFeeFrame->setObjectName(QString::fromUtf8("CFeeFrame"));
        CFeeFrame->resize(400, 300);
        CFeeFrame->setStyleSheet(QString::fromUtf8("bacjground-image:url( D:\\WinParkUI\\debug\\Image\\NewIcon\\FeeBG.jpg );"));
        CFeeFrame->setFrameShape(QFrame::StyledPanel);
        CFeeFrame->setFrameShadow(QFrame::Raised);

        retranslateUi(CFeeFrame);

        QMetaObject::connectSlotsByName(CFeeFrame);
    } // setupUi

    void retranslateUi(QFrame *CFeeFrame)
    {
        CFeeFrame->setWindowTitle(QApplication::translate("CFeeFrame", "Frame", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CFeeFrame: public Ui_CFeeFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEFRAME_H
