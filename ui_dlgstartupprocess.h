/********************************************************************************
** Form generated from reading UI file 'dlgstartupprocess.ui'
**
** Created: Fri Feb 1 10:57:16 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSTARTUPPROCESS_H
#define UI_DLGSTARTUPPROCESS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CDlgStartupprocess
{
public:
    QLabel *lblInfo;

    void setupUi(QDialog *CDlgStartupprocess)
    {
        if (CDlgStartupprocess->objectName().isEmpty())
            CDlgStartupprocess->setObjectName(QString::fromUtf8("CDlgStartupprocess"));
        CDlgStartupprocess->resize(400, 126);
        lblInfo = new QLabel(CDlgStartupprocess);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setGeometry(QRect(60, 30, 271, 61));
        lblInfo->setAlignment(Qt::AlignCenter);

        retranslateUi(CDlgStartupprocess);

        QMetaObject::connectSlotsByName(CDlgStartupprocess);
    } // setupUi

    void retranslateUi(QDialog *CDlgStartupprocess)
    {
        CDlgStartupprocess->setWindowTitle(QApplication::translate("CDlgStartupprocess", "Dialog", 0, QApplication::UnicodeUTF8));
        lblInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CDlgStartupprocess: public Ui_CDlgStartupprocess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSTARTUPPROCESS_H
