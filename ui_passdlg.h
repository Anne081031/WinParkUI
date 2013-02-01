/********************************************************************************
** Form generated from reading UI file 'passdlg.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSDLG_H
#define UI_PASSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CPassDlg
{
public:
    QComboBox *cbxCan;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *CPassDlg)
    {
        if (CPassDlg->objectName().isEmpty())
            CPassDlg->setObjectName(QString::fromUtf8("CPassDlg"));
        CPassDlg->setWindowModality(Qt::WindowModal);
        CPassDlg->resize(248, 88);
        CPassDlg->setModal(true);
        cbxCan = new QComboBox(CPassDlg);
        cbxCan->setObjectName(QString::fromUtf8("cbxCan"));
        cbxCan->setGeometry(QRect(20, 10, 211, 21));
        btnOk = new QPushButton(CPassDlg);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setGeometry(QRect(30, 50, 75, 23));
        btnCancel = new QPushButton(CPassDlg);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(140, 50, 75, 23));

        retranslateUi(CPassDlg);

        QMetaObject::connectSlotsByName(CPassDlg);
    } // setupUi

    void retranslateUi(QDialog *CPassDlg)
    {
        CPassDlg->setWindowTitle(QApplication::translate("CPassDlg", "\347\233\256\346\240\207\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        btnOk->setText(QApplication::translate("CPassDlg", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CPassDlg", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CPassDlg: public Ui_CPassDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSDLG_H
