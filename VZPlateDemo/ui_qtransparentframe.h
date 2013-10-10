/********************************************************************************
** Form generated from reading UI file 'qtransparentframe.ui'
**
** Created: Wed Oct 9 14:51:44 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRANSPARENTFRAME_H
#define UI_QTRANSPARENTFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_QTransparentFrame
{
public:

    void setupUi(QFrame *QTransparentFrame)
    {
        if (QTransparentFrame->objectName().isEmpty())
            QTransparentFrame->setObjectName(QString::fromUtf8("QTransparentFrame"));
        QTransparentFrame->resize(173, 78);
        QTransparentFrame->setWindowOpacity(0);
        QTransparentFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QTransparentFrame->setFrameShape(QFrame::NoFrame);
        QTransparentFrame->setFrameShadow(QFrame::Plain);

        retranslateUi(QTransparentFrame);

        QMetaObject::connectSlotsByName(QTransparentFrame);
    } // setupUi

    void retranslateUi(QFrame *QTransparentFrame)
    {
        QTransparentFrame->setWindowTitle(QApplication::translate("QTransparentFrame", "Frame", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QTransparentFrame: public Ui_QTransparentFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRANSPARENTFRAME_H
