/********************************************************************************
** Form generated from reading UI file 'dlgstaying.ui'
**
** Created: Thu Jul 18 15:06:07 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSTAYING_H
#define UI_DLGSTAYING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgStaying
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tableWidgetMonth;
    QWidget *tab_2;
    QTableWidget *tableWidgetTime;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbSort;
    QRadioButton *chk0;
    QRadioButton *chk1;
    QRadioButton *chk2;
    QRadioButton *chk3;
    QRadioButton *chk4;
    QRadioButton *chk5;
    QRadioButton *chk6;

    void setupUi(QDialog *CDlgStaying)
    {
        if (CDlgStaying->objectName().isEmpty())
            CDlgStaying->setObjectName(QString::fromUtf8("CDlgStaying"));
        CDlgStaying->resize(885, 587);
        tabWidget = new QTabWidget(CDlgStaying);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 36, 851, 541));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableWidgetMonth = new QTableWidget(tab);
        if (tableWidgetMonth->columnCount() < 8)
            tableWidgetMonth->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetMonth->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetMonth->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetMonth->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetMonth->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetMonth->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetMonth->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetMonth->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetMonth->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidgetMonth->setObjectName(QString::fromUtf8("tableWidgetMonth"));
        tableWidgetMonth->setGeometry(QRect(10, 10, 821, 511));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableWidgetTime = new QTableWidget(tab_2);
        if (tableWidgetTime->columnCount() < 6)
            tableWidgetTime->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetTime->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetTime->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetTime->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetTime->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetTime->setHorizontalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetTime->setHorizontalHeaderItem(5, __qtablewidgetitem13);
        tableWidgetTime->setObjectName(QString::fromUtf8("tableWidgetTime"));
        tableWidgetTime->setGeometry(QRect(10, 10, 821, 511));
        tabWidget->addTab(tab_2, QString());
        layoutWidget = new QWidget(CDlgStaying);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 7, 597, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cbSort = new QComboBox(layoutWidget);
        cbSort->setObjectName(QString::fromUtf8("cbSort"));

        horizontalLayout->addWidget(cbSort);

        chk0 = new QRadioButton(layoutWidget);
        chk0->setObjectName(QString::fromUtf8("chk0"));
        chk0->setChecked(true);

        horizontalLayout->addWidget(chk0);

        chk1 = new QRadioButton(layoutWidget);
        chk1->setObjectName(QString::fromUtf8("chk1"));

        horizontalLayout->addWidget(chk1);

        chk2 = new QRadioButton(layoutWidget);
        chk2->setObjectName(QString::fromUtf8("chk2"));

        horizontalLayout->addWidget(chk2);

        chk3 = new QRadioButton(layoutWidget);
        chk3->setObjectName(QString::fromUtf8("chk3"));

        horizontalLayout->addWidget(chk3);

        chk4 = new QRadioButton(layoutWidget);
        chk4->setObjectName(QString::fromUtf8("chk4"));

        horizontalLayout->addWidget(chk4);

        chk5 = new QRadioButton(layoutWidget);
        chk5->setObjectName(QString::fromUtf8("chk5"));

        horizontalLayout->addWidget(chk5);

        chk6 = new QRadioButton(layoutWidget);
        chk6->setObjectName(QString::fromUtf8("chk6"));

        horizontalLayout->addWidget(chk6);


        retranslateUi(CDlgStaying);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CDlgStaying);
    } // setupUi

    void retranslateUi(QDialog *CDlgStaying)
    {
        CDlgStaying->setWindowTitle(QApplication::translate("CDlgStaying", "\345\275\223\345\211\215\346\273\236\347\225\231\350\275\246\350\276\206\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetMonth->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CDlgStaying", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetMonth->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CDlgStaying", "\350\207\252\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetMonth->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CDlgStaying", "\350\275\246\344\270\273", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetMonth->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CDlgStaying", "\350\201\224\347\263\273\347\224\265\350\257\235", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetMonth->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("CDlgStaying", "\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetMonth->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("CDlgStaying", "\350\277\233\345\205\245\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetMonth->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("CDlgStaying", "\350\277\233\345\205\245\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetMonth->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("CDlgStaying", "ID", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tableWidgetMonth->setToolTip(QApplication::translate("CDlgStaying", "\345\215\225\345\207\273\343\200\220\345\215\241\345\217\267\343\200\221\345\215\225\345\205\203\346\240\274\357\274\214\346\237\245\347\234\213\345\257\271\345\272\224\350\275\246\350\276\206\345\233\276\347\211\207\343\200\202", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CDlgStaying", "\346\234\210\347\247\237\345\215\241\350\275\246\350\276\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetTime->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("CDlgStaying", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetTime->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("CDlgStaying", "\350\207\252\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetTime->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("CDlgStaying", "\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetTime->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("CDlgStaying", "\350\277\233\345\205\245\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetTime->horizontalHeaderItem(4);
        ___qtablewidgetitem12->setText(QApplication::translate("CDlgStaying", "\350\277\233\345\205\245\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetTime->horizontalHeaderItem(5);
        ___qtablewidgetitem13->setText(QApplication::translate("CDlgStaying", "ID", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tableWidgetTime->setToolTip(QApplication::translate("CDlgStaying", "\345\215\225\345\207\273\343\200\220\345\215\241\345\217\267\343\200\221\345\215\225\345\205\203\346\240\274\357\274\214\346\237\245\347\234\213\345\257\271\345\272\224\350\275\246\350\276\206\345\233\276\347\211\207\343\200\202", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CDlgStaying", "\350\256\241\346\227\266\345\215\241\350\275\246\350\276\206", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDlgStaying", "\346\216\222\345\272\217\346\235\241\344\273\266\357\274\232", 0, QApplication::UnicodeUTF8));
        cbSort->clear();
        cbSort->insertItems(0, QStringList()
         << QApplication::translate("CDlgStaying", "\345\215\207\345\272\217\346\216\222\345\272\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CDlgStaying", "\351\231\215\345\272\217\346\216\222\345\272\217", 0, QApplication::UnicodeUTF8)
        );
        chk0->setText(QApplication::translate("CDlgStaying", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        chk1->setText(QApplication::translate("CDlgStaying", "\350\207\252\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        chk2->setText(QApplication::translate("CDlgStaying", "\350\275\246\344\270\273", 0, QApplication::UnicodeUTF8));
        chk3->setText(QApplication::translate("CDlgStaying", "\350\201\224\347\263\273\347\224\265\350\257\235", 0, QApplication::UnicodeUTF8));
        chk4->setText(QApplication::translate("CDlgStaying", "\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        chk5->setText(QApplication::translate("CDlgStaying", "\350\277\233\345\205\245\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
        chk6->setText(QApplication::translate("CDlgStaying", "\350\277\233\345\205\245\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgStaying: public Ui_CDlgStaying {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSTAYING_H
