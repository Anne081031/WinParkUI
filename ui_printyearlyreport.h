/********************************************************************************
** Form generated from reading UI file 'printyearlyreport.ui'
**
** Created: Thu May 31 17:17:21 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTYEARLYREPORT_H
#define UI_PRINTYEARLYREPORT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CPrintYearlyReport
{
public:

    void setupUi(QFrame *CPrintYearlyReport)
    {
        if (CPrintYearlyReport->objectName().isEmpty())
            CPrintYearlyReport->setObjectName(QString::fromUtf8("CPrintYearlyReport"));
        CPrintYearlyReport->setFrameShadow(QFrame::Raised);
        CPrintYearlyReport->resize(400, 300);
        CPrintYearlyReport->setFrameShape(QFrame::StyledPanel);

        retranslateUi(CPrintYearlyReport);

        QMetaObject::connectSlotsByName(CPrintYearlyReport);
    } // setupUi

    void retranslateUi(QFrame *CPrintYearlyReport)
    {
        CPrintYearlyReport->setWindowTitle(QApplication::translate("CPrintYearlyReport", "Frame", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CPrintYearlyReport: public Ui_CPrintYearlyReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTYEARLYREPORT_H
