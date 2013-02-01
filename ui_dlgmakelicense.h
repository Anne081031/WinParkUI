/********************************************************************************
** Form generated from reading UI file 'dlgmakelicense.ui'
**
** Created: Fri Feb 1 10:57:16 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGMAKELICENSE_H
#define UI_DLGMAKELICENSE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgMakeLicense
{
public:
    QLabel *lblClose;
    QPushButton *btnPSN;
    QPushButton *btnSave;
    QPushButton *btnClose;
    QTableWidget *tableWidget;
    QLabel *lblTitle;
    QPushButton *btnData;
    QLabel *label;
    QComboBox *cbxCode;
    QPushButton *btnAdd;
    QPushButton *btnDelete;
    QPushButton *btnExport;
    QPushButton *btnImport;
    QPushButton *btnBatch;

    void setupUi(QDialog *CDlgMakeLicense)
    {
        if (CDlgMakeLicense->objectName().isEmpty())
            CDlgMakeLicense->setObjectName(QString::fromUtf8("CDlgMakeLicense"));
        CDlgMakeLicense->resize(670, 540);
        CDlgMakeLicense->setMinimumSize(QSize(670, 540));
        CDlgMakeLicense->setMaximumSize(QSize(670, 540));
        CDlgMakeLicense->setStyleSheet(QString::fromUtf8("background-image: url(D:/WinParkUI/debug/Image/NewIcon/SysSet.JPG);"));
        lblClose = new QLabel(CDlgMakeLicense);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(629, 6, 30, 15));
        btnPSN = new QPushButton(CDlgMakeLicense);
        btnPSN->setObjectName(QString::fromUtf8("btnPSN"));
        btnPSN->setGeometry(QRect(42, 461, 168, 23));
        btnPSN->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        btnSave = new QPushButton(CDlgMakeLicense);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(400, 490, 168, 23));
        btnSave->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        btnClose = new QPushButton(CDlgMakeLicense);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(576, 462, 42, 51));
        btnClose->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        tableWidget = new QTableWidget(CDlgMakeLicense);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(45, 80, 571, 371));
        tableWidget->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        lblTitle = new QLabel(CDlgMakeLicense);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(20, 5, 141, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"color: rgb(85, 0, 0);"));
        btnData = new QPushButton(CDlgMakeLicense);
        btnData->setObjectName(QString::fromUtf8("btnData"));
        btnData->setGeometry(QRect(220, 461, 168, 23));
        btnData->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        label = new QLabel(CDlgMakeLicense);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(47, 52, 51, 16));
        label->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        cbxCode = new QComboBox(CDlgMakeLicense);
        cbxCode->setObjectName(QString::fromUtf8("cbxCode"));
        cbxCode->setGeometry(QRect(100, 51, 515, 20));
        cbxCode->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        btnAdd = new QPushButton(CDlgMakeLicense);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setGeometry(QRect(42, 489, 80, 23));
        btnAdd->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        btnDelete = new QPushButton(CDlgMakeLicense);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setGeometry(QRect(130, 489, 80, 23));
        btnDelete->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        btnExport = new QPushButton(CDlgMakeLicense);
        btnExport->setObjectName(QString::fromUtf8("btnExport"));
        btnExport->setGeometry(QRect(220, 489, 80, 23));
        btnExport->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        btnImport = new QPushButton(CDlgMakeLicense);
        btnImport->setObjectName(QString::fromUtf8("btnImport"));
        btnImport->setGeometry(QRect(308, 489, 80, 23));
        btnImport->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        btnBatch = new QPushButton(CDlgMakeLicense);
        btnBatch->setObjectName(QString::fromUtf8("btnBatch"));
        btnBatch->setGeometry(QRect(401, 461, 168, 23));
        btnBatch->setStyleSheet(QString::fromUtf8("background-image: url(none);"));

        retranslateUi(CDlgMakeLicense);

        QMetaObject::connectSlotsByName(CDlgMakeLicense);
    } // setupUi

    void retranslateUi(QDialog *CDlgMakeLicense)
    {
        CDlgMakeLicense->setWindowTitle(QApplication::translate("CDlgMakeLicense", "\344\275\277\347\224\250\346\227\266\351\227\264\346\216\210\346\235\203\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        lblClose->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnPSN->setToolTip(QApplication::translate("CDlgMakeLicense", "\347\256\241\347\220\206\345\221\230\345\212\240\345\257\206\347\213\227\344\270\215\346\230\276\347\244\272\343\200\202\n"
"\344\270\200\345\217\260\346\234\272\346\227\242\346\234\211\347\256\241\347\220\206\345\221\230\345\217\210\346\234\211\346\231\256\351\200\232\345\212\240\345\257\206\347\213\227\357\274\214\344\270\215\350\203\275\350\216\267\345\217\226\350\257\245\346\234\272\344\270\212\347\232\204\346\231\256\351\200\232\345\212\240\345\257\206\347\213\227ID\343\200\202", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnPSN->setText(QApplication::translate("CDlgMakeLicense", "\350\216\267\345\217\226\345\201\234\350\275\246\345\234\272\350\201\224\346\234\272\345\212\240\345\257\206\347\213\227ID", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CDlgMakeLicense", "\344\277\235\345\255\230\345\257\206\346\226\207\345\210\260\345\275\223\345\211\215\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("CDlgMakeLicense", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CDlgMakeLicense", "\345\212\240\345\257\206\347\213\227ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CDlgMakeLicense", "IP", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CDlgMakeLicense", "\345\274\200\345\247\213\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CDlgMakeLicense", "\346\210\252\346\255\242\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        btnData->setText(QApplication::translate("CDlgMakeLicense", "\350\216\267\345\217\226\351\200\211\346\213\251\345\201\234\350\275\246\345\234\272\345\267\262\346\216\210\346\235\203\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDlgMakeLicense", "\345\201\234\350\275\246\345\234\272", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbxCode->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btnAdd->setText(QApplication::translate("CDlgMakeLicense", "\346\226\260\345\242\236\344\270\200\350\241\214", 0, QApplication::UnicodeUTF8));
        btnDelete->setText(QApplication::translate("CDlgMakeLicense", "\345\210\240\351\231\244\344\270\200\350\241\214", 0, QApplication::UnicodeUTF8));
        btnExport->setText(QApplication::translate("CDlgMakeLicense", "\345\257\274\345\207\272\345\257\206\346\226\207", 0, QApplication::UnicodeUTF8));
        btnImport->setText(QApplication::translate("CDlgMakeLicense", "\345\257\274\345\205\245\345\257\206\346\226\207", 0, QApplication::UnicodeUTF8));
        btnBatch->setText(QApplication::translate("CDlgMakeLicense", "\346\267\273\345\212\240\345\201\234\350\275\246\345\234\272\345\217\212\345\205\266\345\212\240\345\257\206\347\213\227ID", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgMakeLicense: public Ui_CDlgMakeLicense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGMAKELICENSE_H
