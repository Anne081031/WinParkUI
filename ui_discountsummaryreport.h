/********************************************************************************
** Form generated from reading UI file 'discountsummaryreport.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISCOUNTSUMMARYREPORT_H
#define UI_DISCOUNTSUMMARYREPORT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CDiscountSummaryReport
{
public:

    void setupUi(QFrame *CDiscountSummaryReport)
    {
        if (CDiscountSummaryReport->objectName().isEmpty())
            CDiscountSummaryReport->setObjectName(QString::fromUtf8("CDiscountSummaryReport"));
        CDiscountSummaryReport->setFrameShadow(QFrame::Raised);
        CDiscountSummaryReport->resize(400, 300);
        CDiscountSummaryReport->setFrameShape(QFrame::StyledPanel);

        retranslateUi(CDiscountSummaryReport);

        QMetaObject::connectSlotsByName(CDiscountSummaryReport);
    } // setupUi

    void retranslateUi(QFrame *CDiscountSummaryReport)
    {
        CDiscountSummaryReport->setWindowTitle(QApplication::translate("CDiscountSummaryReport", "Frame", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDiscountSummaryReport: public Ui_CDiscountSummaryReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISCOUNTSUMMARYREPORT_H
