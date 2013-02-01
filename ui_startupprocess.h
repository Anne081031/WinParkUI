/********************************************************************************
** Form generated from reading UI file 'startupprocess.ui'
**
** Created: Fri Feb 1 10:57:16 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTUPPROCESS_H
#define UI_STARTUPPROCESS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CStartupProcess
{
public:
    QLabel *lblInfo;

    void setupUi(QFrame *CStartupProcess)
    {
        if (CStartupProcess->objectName().isEmpty())
            CStartupProcess->setObjectName(QString::fromUtf8("CStartupProcess"));
        CStartupProcess->resize(400, 117);
        CStartupProcess->setFrameShape(QFrame::StyledPanel);
        CStartupProcess->setFrameShadow(QFrame::Raised);
        lblInfo = new QLabel(CStartupProcess);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setGeometry(QRect(30, 20, 331, 71));
        lblInfo->setStyleSheet(QString::fromUtf8("backfround-image:url(none);"));
        lblInfo->setAlignment(Qt::AlignCenter);

        retranslateUi(CStartupProcess);

        QMetaObject::connectSlotsByName(CStartupProcess);
    } // setupUi

    void retranslateUi(QFrame *CStartupProcess)
    {
        CStartupProcess->setWindowTitle(QApplication::translate("CStartupProcess", "Frame", 0, QApplication::UnicodeUTF8));
        lblInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CStartupProcess: public Ui_CStartupProcess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUPPROCESS_H
