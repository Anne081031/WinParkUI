/********************************************************************************
** Form generated from reading UI file 'printyearlyreport.ui'
**
** Created: Fri Feb 1 10:57:14 2013
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
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CPrintYearlyReport
{
public:
    QLabel *lblPicture;

    void setupUi(QFrame *CPrintYearlyReport)
    {
        if (CPrintYearlyReport->objectName().isEmpty())
            CPrintYearlyReport->setObjectName(QString::fromUtf8("CPrintYearlyReport"));
        CPrintYearlyReport->resize(412, 277);
        CPrintYearlyReport->setFrameShape(QFrame::StyledPanel);
        CPrintYearlyReport->setFrameShadow(QFrame::Raised);
        lblPicture = new QLabel(CPrintYearlyReport);
        lblPicture->setObjectName(QString::fromUtf8("lblPicture"));
        lblPicture->setGeometry(QRect(0, 0, 410, 275));
        lblPicture->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"background-color: rgb(255, 255, 255);"));
        lblPicture->setFrameShape(QFrame::Panel);
        lblPicture->setFrameShadow(QFrame::Sunken);
        lblPicture->setLineWidth(4);
        lblPicture->setScaledContents(true);

        retranslateUi(CPrintYearlyReport);

        QMetaObject::connectSlotsByName(CPrintYearlyReport);
    } // setupUi

    void retranslateUi(QFrame *CPrintYearlyReport)
    {
        CPrintYearlyReport->setWindowTitle(QApplication::translate("CPrintYearlyReport", "Frame", 0, QApplication::UnicodeUTF8));
        lblPicture->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CPrintYearlyReport: public Ui_CPrintYearlyReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTYEARLYREPORT_H
