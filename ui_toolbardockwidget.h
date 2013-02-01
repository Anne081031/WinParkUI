/********************************************************************************
** Form generated from reading UI file 'toolbardockwidget.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLBARDOCKWIDGET_H
#define UI_TOOLBARDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CToolbarDockWidget
{
public:
    QWidget *dockWidgetContents;

    void setupUi(QDockWidget *CToolbarDockWidget)
    {
        if (CToolbarDockWidget->objectName().isEmpty())
            CToolbarDockWidget->setObjectName(QString::fromUtf8("CToolbarDockWidget"));
        CToolbarDockWidget->setWindowModality(Qt::ApplicationModal);
        CToolbarDockWidget->resize(486, 167);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        CToolbarDockWidget->setWidget(dockWidgetContents);

        retranslateUi(CToolbarDockWidget);

        QMetaObject::connectSlotsByName(CToolbarDockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *CToolbarDockWidget)
    {
        CToolbarDockWidget->setWindowTitle(QApplication::translate("CToolbarDockWidget", "DockWidget", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CToolbarDockWidget: public Ui_CToolbarDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBARDOCKWIDGET_H
