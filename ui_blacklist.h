/********************************************************************************
** Form generated from reading UI file 'blacklist.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLACKLIST_H
#define UI_BLACKLIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CBlacklist
{
public:
    QWidget *widget;
    QTableWidget *tableBlacklist;
    QWidget *widget_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *btnDelete;
    QPushButton *btnModify;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QPushButton *btnMinimalize;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *edtName;
    QLabel *label_2;
    QLineEdit *edtType;
    QLabel *label_4;
    QLineEdit *edtExplain;
    QLabel *lblID;
    QLabel *lblTitle;
    QLabel *lblClose;

    void setupUi(QFrame *CBlacklist)
    {
        if (CBlacklist->objectName().isEmpty())
            CBlacklist->setObjectName(QString::fromUtf8("CBlacklist"));
        CBlacklist->resize(1390, 818);
        CBlacklist->setStyleSheet(QString::fromUtf8("background-image:url(D:/WinParkUI/debug/Image/NewIcon/CommonBigBG-normal.jpg);"));
        CBlacklist->setFrameShape(QFrame::StyledPanel);
        CBlacklist->setFrameShadow(QFrame::Raised);
        widget = new QWidget(CBlacklist);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 60, 1301, 731));
        widget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tableBlacklist = new QTableWidget(widget);
        if (tableBlacklist->columnCount() < 4)
            tableBlacklist->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableBlacklist->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableBlacklist->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableBlacklist->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableBlacklist->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableBlacklist->setObjectName(QString::fromUtf8("tableBlacklist"));
        tableBlacklist->setGeometry(QRect(0, 0, 1301, 601));
        tableBlacklist->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 600, 1411, 111));
        widget_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 70, 631, 25));
        layoutWidget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QPushButton(layoutWidget);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout->addWidget(btnAdd);

        btnDelete = new QPushButton(layoutWidget);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout->addWidget(btnDelete);

        btnModify = new QPushButton(layoutWidget);
        btnModify->setObjectName(QString::fromUtf8("btnModify"));
        btnModify->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout->addWidget(btnModify);

        btnOk = new QPushButton(layoutWidget);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout->addWidget(btnOk);

        btnCancel = new QPushButton(layoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout->addWidget(btnCancel);

        btnMinimalize = new QPushButton(layoutWidget);
        btnMinimalize->setObjectName(QString::fromUtf8("btnMinimalize"));
        btnMinimalize->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout->addWidget(btnMinimalize);

        layoutWidget1 = new QWidget(widget_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 701, 22));
        layoutWidget1->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_2->addWidget(label);

        edtName = new QLineEdit(layoutWidget1);
        edtName->setObjectName(QString::fromUtf8("edtName"));
        edtName->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_2->addWidget(edtName);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_2->addWidget(label_2);

        edtType = new QLineEdit(layoutWidget1);
        edtType->setObjectName(QString::fromUtf8("edtType"));
        edtType->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_2->addWidget(edtType);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_2->addWidget(label_4);

        edtExplain = new QLineEdit(layoutWidget1);
        edtExplain->setObjectName(QString::fromUtf8("edtExplain"));
        edtExplain->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_2->addWidget(edtExplain);

        lblID = new QLabel(widget_2);
        lblID->setObjectName(QString::fromUtf8("lblID"));
        lblID->setGeometry(QRect(10, 90, 54, 12));
        lblTitle = new QLabel(CBlacklist);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(170, 0, 0);"));
        lblClose = new QLabel(CBlacklist);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(1350, 7, 30, 15));

        retranslateUi(CBlacklist);

        QMetaObject::connectSlotsByName(CBlacklist);
    } // setupUi

    void retranslateUi(QFrame *CBlacklist)
    {
        CBlacklist->setWindowTitle(QApplication::translate("CBlacklist", "\351\273\221\345\220\215\345\215\225", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableBlacklist->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CBlacklist", "\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableBlacklist->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CBlacklist", "\350\275\246\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableBlacklist->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CBlacklist", "\345\244\207\346\263\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableBlacklist->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CBlacklist", "index", 0, QApplication::UnicodeUTF8));
        btnAdd->setText(QApplication::translate("CBlacklist", "\345\242\236\345\212\240", 0, QApplication::UnicodeUTF8));
        btnDelete->setText(QApplication::translate("CBlacklist", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        btnModify->setText(QApplication::translate("CBlacklist", "\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        btnOk->setText(QApplication::translate("CBlacklist", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CBlacklist", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        btnMinimalize->setText(QApplication::translate("CBlacklist", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CBlacklist", "\350\275\246\347\211\214\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CBlacklist", "\350\275\246\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CBlacklist", "\345\244\207\346\263\250\357\274\232", 0, QApplication::UnicodeUTF8));
        lblID->setText(QString());
        lblTitle->setText(QString());
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CBlacklist: public Ui_CBlacklist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLACKLIST_H
