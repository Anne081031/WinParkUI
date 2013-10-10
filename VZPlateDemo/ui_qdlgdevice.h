/********************************************************************************
** Form generated from reading UI file 'qdlgdevice.ui'
**
** Created: Wed Oct 9 14:51:44 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDLGDEVICE_H
#define UI_QDLGDEVICE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_QDlgDevice
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *QDlgDevice)
    {
        if (QDlgDevice->objectName().isEmpty())
            QDlgDevice->setObjectName(QString::fromUtf8("QDlgDevice"));
        QDlgDevice->resize(145, 155);
        QDlgDevice->setMinimumSize(QSize(145, 155));
        QDlgDevice->setMaximumSize(QSize(145, 155));
        listWidget = new QListWidget(QDlgDevice);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(7, 8, 131, 141));

        retranslateUi(QDlgDevice);

        QMetaObject::connectSlotsByName(QDlgDevice);
    } // setupUi

    void retranslateUi(QDialog *QDlgDevice)
    {
        QDlgDevice->setWindowTitle(QApplication::translate("QDlgDevice", "USB\350\256\276\345\244\207", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        listWidget->setToolTip(QApplication::translate("QDlgDevice", "\345\217\214\345\207\273\350\256\276\345\244\207\351\241\271\357\274\214\351\200\211\344\270\255\350\256\276\345\244\207", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QDlgDevice: public Ui_QDlgDevice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDLGDEVICE_H
