/********************************************************************************
** Form generated from reading UI file 'tolldiscounttypeset.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOLLDISCOUNTTYPESET_H
#define UI_TOLLDISCOUNTTYPESET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CTollDiscountTypeSet
{
public:
    QWidget *widget;
    QTableWidget *tableTollDiscount;
    QWidget *widget_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *btnDelete;
    QPushButton *btnModify;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QPushButton *btnMinimalize;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *edtExplain;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *edtName;
    QLabel *label_2;
    QComboBox *cbxMethod;
    QLabel *label_3;
    QSpinBox *spValue;
    QLabel *lblID;
    QLabel *lblTitle;
    QLabel *lblClose;

    void setupUi(QFrame *CTollDiscountTypeSet)
    {
        if (CTollDiscountTypeSet->objectName().isEmpty())
            CTollDiscountTypeSet->setObjectName(QString::fromUtf8("CTollDiscountTypeSet"));
        CTollDiscountTypeSet->resize(730, 692);
        CTollDiscountTypeSet->setStyleSheet(QString::fromUtf8("background-image:url(D:/WinParkUI/debug/Image/NewIcon/CommonMiddleBG-normal.jpg);"));
        CTollDiscountTypeSet->setFrameShape(QFrame::StyledPanel);
        CTollDiscountTypeSet->setFrameShadow(QFrame::Raised);
        widget = new QWidget(CTollDiscountTypeSet);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 60, 641, 591));
        widget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tableTollDiscount = new QTableWidget(widget);
        if (tableTollDiscount->columnCount() < 5)
            tableTollDiscount->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableTollDiscount->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableTollDiscount->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableTollDiscount->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableTollDiscount->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableTollDiscount->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableTollDiscount->setObjectName(QString::fromUtf8("tableTollDiscount"));
        tableTollDiscount->setGeometry(QRect(10, 10, 621, 411));
        tableTollDiscount->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 450, 621, 131));
        widget_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 90, 601, 31));
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

        layoutWidget_3 = new QWidget(widget_2);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 50, 601, 22));
        layoutWidget_3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_3->addWidget(label_4);

        edtExplain = new QLineEdit(layoutWidget_3);
        edtExplain->setObjectName(QString::fromUtf8("edtExplain"));
        edtExplain->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_3->addWidget(edtExplain);

        layoutWidget1 = new QWidget(widget_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 601, 22));
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

        cbxMethod = new QComboBox(layoutWidget1);
        cbxMethod->setObjectName(QString::fromUtf8("cbxMethod"));
        cbxMethod->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_2->addWidget(cbxMethod);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_2->addWidget(label_3);

        spValue = new QSpinBox(layoutWidget1);
        spValue->setObjectName(QString::fromUtf8("spValue"));
        spValue->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_2->addWidget(spValue);

        lblID = new QLabel(widget_2);
        lblID->setObjectName(QString::fromUtf8("lblID"));
        lblID->setGeometry(QRect(20, 120, 54, 31));
        lblTitle = new QLabel(CTollDiscountTypeSet);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(170, 0, 0);"));
        lblClose = new QLabel(CTollDiscountTypeSet);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(690, 7, 30, 15));

        retranslateUi(CTollDiscountTypeSet);

        QMetaObject::connectSlotsByName(CTollDiscountTypeSet);
    } // setupUi

    void retranslateUi(QFrame *CTollDiscountTypeSet)
    {
        CTollDiscountTypeSet->setWindowTitle(QApplication::translate("CTollDiscountTypeSet", "\346\224\266\350\264\271\346\212\230\346\211\243\347\247\215\347\261\273\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableTollDiscount->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CTollDiscountTypeSet", "\346\212\230\346\211\243\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableTollDiscount->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CTollDiscountTypeSet", "\350\256\241\347\256\227\346\226\271\346\263\225", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableTollDiscount->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CTollDiscountTypeSet", "\346\212\230\346\211\243\346\225\260\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableTollDiscount->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CTollDiscountTypeSet", "\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableTollDiscount->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("CTollDiscountTypeSet", "index", 0, QApplication::UnicodeUTF8));
        btnAdd->setText(QApplication::translate("CTollDiscountTypeSet", "\345\242\236\345\212\240", 0, QApplication::UnicodeUTF8));
        btnDelete->setText(QApplication::translate("CTollDiscountTypeSet", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        btnModify->setText(QApplication::translate("CTollDiscountTypeSet", "\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        btnOk->setText(QApplication::translate("CTollDiscountTypeSet", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CTollDiscountTypeSet", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        btnMinimalize->setText(QApplication::translate("CTollDiscountTypeSet", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CTollDiscountTypeSet", "\350\257\264\346\230\216\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CTollDiscountTypeSet", "\346\212\230\346\211\243\345\220\215\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CTollDiscountTypeSet", "\346\212\230\346\211\243\350\256\241\347\256\227\346\226\271\346\263\225\357\274\232", 0, QApplication::UnicodeUTF8));
        cbxMethod->clear();
        cbxMethod->insertItems(0, QStringList()
         << QApplication::translate("CTollDiscountTypeSet", "\346\214\211\345\233\272\345\256\232\351\207\221\351\242\235\346\212\265\346\211\243", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CTollDiscountTypeSet", "\346\214\211\347\231\276\345\210\206\346\257\224\350\256\241\347\256\227", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("CTollDiscountTypeSet", "\346\212\230\346\211\243\346\225\260\345\200\274\357\274\232", 0, QApplication::UnicodeUTF8));
        lblID->setText(QString());
        lblTitle->setText(QString());
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CTollDiscountTypeSet: public Ui_CTollDiscountTypeSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOLLDISCOUNTTYPESET_H
