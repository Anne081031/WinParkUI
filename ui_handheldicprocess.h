/********************************************************************************
** Form generated from reading UI file 'handheldicprocess.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANDHELDICPROCESS_H
#define UI_HANDHELDICPROCESS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CHandheldICProcess
{
public:

    void setupUi(QFrame *CHandheldICProcess)
    {
        if (CHandheldICProcess->objectName().isEmpty())
            CHandheldICProcess->setObjectName(QString::fromUtf8("CHandheldICProcess"));
        CHandheldICProcess->setFrameShadow(QFrame::Raised);
        CHandheldICProcess->resize(400, 300);
        CHandheldICProcess->setFrameShape(QFrame::StyledPanel);

        retranslateUi(CHandheldICProcess);

        QMetaObject::connectSlotsByName(CHandheldICProcess);
    } // setupUi

    void retranslateUi(QFrame *CHandheldICProcess)
    {
        CHandheldICProcess->setWindowTitle(QApplication::translate("CHandheldICProcess", "Frame", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CHandheldICProcess: public Ui_CHandheldICProcess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANDHELDICPROCESS_H
