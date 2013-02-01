/********************************************************************************
** Form generated from reading UI file 'shiftlogout.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHIFTLOGOUT_H
#define UI_SHIFTLOGOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CShiftLogout
{
public:
    QCheckBox *checkBox;

    void setupUi(QFrame *CShiftLogout)
    {
        if (CShiftLogout->objectName().isEmpty())
            CShiftLogout->setObjectName(QString::fromUtf8("CShiftLogout"));
        CShiftLogout->setWindowModality(Qt::ApplicationModal);
        CShiftLogout->resize(734, 572);
        CShiftLogout->setFrameShape(QFrame::NoFrame);
        CShiftLogout->setFrameShadow(QFrame::Raised);
        checkBox = new QCheckBox(CShiftLogout);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(200, 260, 71, 16));

        retranslateUi(CShiftLogout);

        QMetaObject::connectSlotsByName(CShiftLogout);
    } // setupUi

    void retranslateUi(QFrame *CShiftLogout)
    {
        CShiftLogout->setWindowTitle(QApplication::translate("CShiftLogout", "\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("CShiftLogout", "y", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CShiftLogout: public Ui_CShiftLogout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIFTLOGOUT_H
