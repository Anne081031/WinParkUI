/********************************************************************************
** Form generated from reading UI file 'batchunitdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHUNITDIALOG_H
#define UI_BATCHUNITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BatchUnitDialog
{
public:
    QPushButton *ptnDelete;
    QPushButton *ptnModify;
    QPushButton *ptnAdd;
    QPushButton *ptnSave;
    QPushButton *ptnClose;
    QTableWidget *unitTableWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtUnitNo;
    QLabel *label_5;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *edtUnitName;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *edtUnitAddress;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *edtUnitComments;

    void setupUi(QDialog *BatchUnitDialog)
    {
        if (BatchUnitDialog->objectName().isEmpty())
            BatchUnitDialog->setObjectName(QStringLiteral("BatchUnitDialog"));
        BatchUnitDialog->resize(700, 700);
        BatchUnitDialog->setMinimumSize(QSize(700, 700));
        BatchUnitDialog->setMaximumSize(QSize(700, 700));
        ptnDelete = new QPushButton(BatchUnitDialog);
        ptnDelete->setObjectName(QStringLiteral("ptnDelete"));
        ptnDelete->setGeometry(QRect(582, 91, 75, 23));
        ptnModify = new QPushButton(BatchUnitDialog);
        ptnModify->setObjectName(QStringLiteral("ptnModify"));
        ptnModify->setGeometry(QRect(501, 91, 75, 23));
        ptnAdd = new QPushButton(BatchUnitDialog);
        ptnAdd->setObjectName(QStringLiteral("ptnAdd"));
        ptnAdd->setGeometry(QRect(420, 91, 75, 23));
        ptnSave = new QPushButton(BatchUnitDialog);
        ptnSave->setObjectName(QStringLiteral("ptnSave"));
        ptnSave->setGeometry(QRect(420, 630, 75, 23));
        ptnClose = new QPushButton(BatchUnitDialog);
        ptnClose->setObjectName(QStringLiteral("ptnClose"));
        ptnClose->setGeometry(QRect(560, 630, 75, 23));
        unitTableWidget = new QTableWidget(BatchUnitDialog);
        if (unitTableWidget->columnCount() < 4)
            unitTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        unitTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        unitTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        unitTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        unitTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        unitTableWidget->setObjectName(QStringLiteral("unitTableWidget"));
        unitTableWidget->setGeometry(QRect(40, 140, 620, 470));
        layoutWidget = new QWidget(BatchUnitDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 151, 41));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        edtUnitNo = new QLineEdit(layoutWidget);
        edtUnitNo->setObjectName(QStringLiteral("edtUnitNo"));

        horizontalLayout->addWidget(edtUnitNo);


        verticalLayout->addLayout(horizontalLayout);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout->addWidget(label_5);

        layoutWidget1 = new QWidget(BatchUnitDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(200, 30, 151, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        edtUnitName = new QLineEdit(layoutWidget1);
        edtUnitName->setObjectName(QStringLiteral("edtUnitName"));

        horizontalLayout_2->addWidget(edtUnitName);

        layoutWidget2 = new QWidget(BatchUnitDialog);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(360, 30, 151, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        edtUnitAddress = new QLineEdit(layoutWidget2);
        edtUnitAddress->setObjectName(QStringLiteral("edtUnitAddress"));

        horizontalLayout_3->addWidget(edtUnitAddress);

        layoutWidget3 = new QWidget(BatchUnitDialog);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(520, 30, 141, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        edtUnitComments = new QLineEdit(layoutWidget3);
        edtUnitComments->setObjectName(QStringLiteral("edtUnitComments"));

        horizontalLayout_4->addWidget(edtUnitComments);


        retranslateUi(BatchUnitDialog);

        QMetaObject::connectSlotsByName(BatchUnitDialog);
    } // setupUi

    void retranslateUi(QDialog *BatchUnitDialog)
    {
        BatchUnitDialog->setWindowTitle(QApplication::translate("BatchUnitDialog", "Dialog", 0));
        ptnDelete->setText(QApplication::translate("BatchUnitDialog", "\345\210\240\351\231\244", 0));
        ptnModify->setText(QApplication::translate("BatchUnitDialog", "\344\277\256\346\224\271", 0));
        ptnAdd->setText(QApplication::translate("BatchUnitDialog", "\345\242\236\345\212\240", 0));
        ptnSave->setText(QApplication::translate("BatchUnitDialog", "\344\277\235\345\255\230", 0));
        ptnClose->setText(QApplication::translate("BatchUnitDialog", "\345\217\226\346\266\210", 0));
        QTableWidgetItem *___qtablewidgetitem = unitTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BatchUnitDialog", "\344\274\201\344\270\232\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = unitTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BatchUnitDialog", "\344\274\201\344\270\232\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = unitTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("BatchUnitDialog", "\345\244\207\346\263\250", 0));
        QTableWidgetItem *___qtablewidgetitem3 = unitTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("BatchUnitDialog", "\345\234\260\345\235\200", 0));
        label->setText(QApplication::translate("BatchUnitDialog", "\344\274\201\344\270\232\347\274\226\345\217\267*\357\274\232", 0));
        label_5->setText(QApplication::translate("BatchUnitDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220,\345\233\272\345\256\232\351\225\2779\344\275\215", 0));
        label_2->setText(QApplication::translate("BatchUnitDialog", "\344\274\201\344\270\232\345\220\215\347\247\260*\357\274\232", 0));
        label_4->setText(QApplication::translate("BatchUnitDialog", "\344\274\201\344\270\232\345\234\260\345\235\200*\357\274\232", 0));
        label_3->setText(QApplication::translate("BatchUnitDialog", "\345\244\207\346\263\250\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class BatchUnitDialog: public Ui_BatchUnitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHUNITDIALOG_H
