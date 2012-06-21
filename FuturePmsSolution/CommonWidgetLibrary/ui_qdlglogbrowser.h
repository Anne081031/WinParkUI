/********************************************************************************
** Form generated from reading UI file 'qdlglogbrowser.ui'
**
** Created: Tue Jun 19 15:25:38 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDLGLOGBROWSER_H
#define UI_QDLGLOGBROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QSplitter>
#include <QtGui/QTableWidget>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_QDlgLogBrowser
{
public:
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    QTableWidget *tableWidget;

    void setupUi(QDialog *QDlgLogBrowser)
    {
        if (QDlgLogBrowser->objectName().isEmpty())
            QDlgLogBrowser->setObjectName(QString::fromUtf8("QDlgLogBrowser"));
        QDlgLogBrowser->resize(638, 445);
        splitter = new QSplitter(QDlgLogBrowser);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(20, 30, 512, 192));
        splitter->setOrientation(Qt::Horizontal);
        treeWidget = new QTreeWidget(splitter);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setMinimumSize(QSize(100, 0));
        treeWidget->setMaximumSize(QSize(300, 16777215));
        splitter->addWidget(treeWidget);
        tableWidget = new QTableWidget(splitter);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        splitter->addWidget(tableWidget);

        retranslateUi(QDlgLogBrowser);

        QMetaObject::connectSlotsByName(QDlgLogBrowser);
    } // setupUi

    void retranslateUi(QDialog *QDlgLogBrowser)
    {
        QDlgLogBrowser->setWindowTitle(QApplication::translate("QDlgLogBrowser", "\346\227\245\345\277\227\346\265\217\350\247\210", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("QDlgLogBrowser", "\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QDlgLogBrowser", "\346\227\245\345\277\227\347\261\273\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QDlgLogBrowser", "\346\227\245\345\277\227\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QDlgLogBrowser: public Ui_QDlgLogBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDLGLOGBROWSER_H
