/********************************************************************************
** Form generated from reading UI file 'dlgparkdongleinfo.ui'
**
** Created: Fri Feb 1 10:57:16 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPARKDONGLEINFO_H
#define UI_DLGPARKDONGLEINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgParkDongleInfo
{
public:
    QLabel *label_3;
    QPushButton *btnAdd;
    QPushButton *btnDelete;
    QPushButton *btnClose;
    QPushButton *btnSave;
    QTableWidget *tableWidget;
    QPushButton *btnAddParkID;
    QPushButton *btnDeleteParkID;
    QListWidget *listWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtBrief;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *edtID;

    void setupUi(QDialog *CDlgParkDongleInfo)
    {
        if (CDlgParkDongleInfo->objectName().isEmpty())
            CDlgParkDongleInfo->setObjectName(QString::fromUtf8("CDlgParkDongleInfo"));
        CDlgParkDongleInfo->resize(404, 344);
        CDlgParkDongleInfo->setMinimumSize(QSize(341, 217));
        CDlgParkDongleInfo->setMaximumSize(QSize(404, 352));
        label_3 = new QLabel(CDlgParkDongleInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 210, 81, 16));
        btnAdd = new QPushButton(CDlgParkDongleInfo);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setGeometry(QRect(90, 310, 75, 23));
        btnDelete = new QPushButton(CDlgParkDongleInfo);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setGeometry(QRect(170, 310, 75, 23));
        btnClose = new QPushButton(CDlgParkDongleInfo);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(320, 310, 61, 23));
        btnSave = new QPushButton(CDlgParkDongleInfo);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(250, 310, 61, 23));
        tableWidget = new QTableWidget(CDlgParkDongleInfo);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 80, 361, 121));
        btnAddParkID = new QPushButton(CDlgParkDongleInfo);
        btnAddParkID->setObjectName(QString::fromUtf8("btnAddParkID"));
        btnAddParkID->setGeometry(QRect(20, 50, 75, 23));
        btnDeleteParkID = new QPushButton(CDlgParkDongleInfo);
        btnDeleteParkID->setObjectName(QString::fromUtf8("btnDeleteParkID"));
        btnDeleteParkID->setGeometry(QRect(100, 50, 75, 23));
        listWidget = new QListWidget(CDlgParkDongleInfo);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 230, 361, 71));
        layoutWidget = new QWidget(CDlgParkDongleInfo);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 201, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        edtBrief = new QLineEdit(layoutWidget);
        edtBrief->setObjectName(QString::fromUtf8("edtBrief"));

        horizontalLayout->addWidget(edtBrief);

        layoutWidget1 = new QWidget(CDlgParkDongleInfo);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(230, 20, 151, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        edtID = new QLineEdit(layoutWidget1);
        edtID->setObjectName(QString::fromUtf8("edtID"));

        horizontalLayout_2->addWidget(edtID);


        retranslateUi(CDlgParkDongleInfo);

        QMetaObject::connectSlotsByName(CDlgParkDongleInfo);
    } // setupUi

    void retranslateUi(QDialog *CDlgParkDongleInfo)
    {
        CDlgParkDongleInfo->setWindowTitle(QApplication::translate("CDlgParkDongleInfo", "\345\201\234\350\275\246\345\234\272\345\217\212\345\205\266\345\212\240\345\257\206\347\213\227\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CDlgParkDongleInfo", "\345\212\240\345\257\206\347\213\227ID\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnAdd->setToolTip(QApplication::translate("CDlgParkDongleInfo", "\347\256\241\347\220\206\345\221\230\345\212\240\345\257\206\347\213\227\344\270\215\346\230\276\347\244\272\343\200\202\n"
"\344\270\200\345\217\260\346\234\272\346\227\242\346\234\211\347\256\241\347\220\206\345\221\230\345\217\210\346\234\211\346\231\256\351\200\232\345\212\240\345\257\206\347\213\227\357\274\214\344\270\215\350\203\275\350\216\267\345\217\226\350\257\245\346\234\272\344\270\212\347\232\204\346\231\256\351\200\232\345\212\240\345\257\206\347\213\227ID\343\200\202", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAdd->setText(QApplication::translate("CDlgParkDongleInfo", "\345\242\236\345\212\240\345\212\240\345\257\206\347\213\227", 0, QApplication::UnicodeUTF8));
        btnDelete->setText(QApplication::translate("CDlgParkDongleInfo", "\345\210\240\351\231\244\345\212\240\345\257\206\347\213\227", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("CDlgParkDongleInfo", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CDlgParkDongleInfo", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CDlgParkDongleInfo", "ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CDlgParkDongleInfo", "\347\256\200\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CDlgParkDongleInfo", "HIDs", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tableWidget->setToolTip(QApplication::translate("CDlgParkDongleInfo", "\345\215\225\345\207\273\343\200\220ID\343\200\221\345\215\225\345\205\203\346\240\274\357\274\214\350\216\267\345\217\226\350\257\245\345\201\234\350\275\246\345\234\272\346\211\200\346\234\211\345\212\240\345\257\206\347\213\227\357\274\201", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAddParkID->setText(QApplication::translate("CDlgParkDongleInfo", "\346\226\260\345\242\236", 0, QApplication::UnicodeUTF8));
        btnDeleteParkID->setText(QApplication::translate("CDlgParkDongleInfo", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDlgParkDongleInfo", "\345\201\234\350\275\246\345\234\272\347\256\200\347\247\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CDlgParkDongleInfo", "\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        edtID->setToolTip(QApplication::translate("CDlgParkDongleInfo", "\347\224\261\345\205\255\344\275\215\350\241\214\346\224\277\347\274\226\347\240\201\345\212\240\345\233\233\344\275\215\350\207\252\344\270\273\347\274\226\347\240\201\346\236\204\346\210\220\343\200\202\n"
"\344\276\213\345\246\202\346\255\246\344\276\257\345\214\272\350\202\277\347\230\244\345\214\273\351\231\242\357\274\2325101070001(510107 + 0001)\343\200\202", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class CDlgParkDongleInfo: public Ui_CDlgParkDongleInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGPARKDONGLEINFO_H
