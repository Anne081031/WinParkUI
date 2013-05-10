/********************************************************************************
** Form generated from reading UI file 'batchgroupdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHGROUPDIALOG_H
#define UI_BATCHGROUPDIALOG_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BatchGroupDialog
{
public:
    QPushButton *ptnDelete;
    QPushButton *ptnModify;
    QPushButton *ptnAdd;
    QPushButton *ptnSave;
    QPushButton *ptnClose;
    QTableWidget *groupTableWidget;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *edtGroupName;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpinBox *spbGroupRight;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *edtGroupComments;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *edtGroupNo;
    QLabel *label_7;

    void setupUi(QDialog *BatchGroupDialog)
    {
        if (BatchGroupDialog->objectName().isEmpty())
            BatchGroupDialog->setObjectName(QStringLiteral("BatchGroupDialog"));
        BatchGroupDialog->resize(700, 700);
        BatchGroupDialog->setMinimumSize(QSize(700, 700));
        BatchGroupDialog->setMaximumSize(QSize(700, 700));
        ptnDelete = new QPushButton(BatchGroupDialog);
        ptnDelete->setObjectName(QStringLiteral("ptnDelete"));
        ptnDelete->setGeometry(QRect(573, 91, 75, 23));
        ptnModify = new QPushButton(BatchGroupDialog);
        ptnModify->setObjectName(QStringLiteral("ptnModify"));
        ptnModify->setGeometry(QRect(492, 91, 75, 23));
        ptnAdd = new QPushButton(BatchGroupDialog);
        ptnAdd->setObjectName(QStringLiteral("ptnAdd"));
        ptnAdd->setGeometry(QRect(411, 91, 75, 23));
        ptnSave = new QPushButton(BatchGroupDialog);
        ptnSave->setObjectName(QStringLiteral("ptnSave"));
        ptnSave->setGeometry(QRect(430, 630, 75, 23));
        ptnClose = new QPushButton(BatchGroupDialog);
        ptnClose->setObjectName(QStringLiteral("ptnClose"));
        ptnClose->setGeometry(QRect(550, 630, 75, 23));
        groupTableWidget = new QTableWidget(BatchGroupDialog);
        if (groupTableWidget->columnCount() < 4)
            groupTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        groupTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        groupTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        groupTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        groupTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        groupTableWidget->setObjectName(QStringLiteral("groupTableWidget"));
        groupTableWidget->setGeometry(QRect(30, 129, 620, 470));
        layoutWidget_2 = new QWidget(BatchGroupDialog);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(200, 30, 141, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        edtGroupName = new QLineEdit(layoutWidget_2);
        edtGroupName->setObjectName(QStringLiteral("edtGroupName"));

        horizontalLayout->addWidget(edtGroupName);

        layoutWidget_3 = new QWidget(BatchGroupDialog);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(520, 30, 110, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        spbGroupRight = new QSpinBox(layoutWidget_3);
        spbGroupRight->setObjectName(QStringLiteral("spbGroupRight"));
        spbGroupRight->setMaximum(1048576);

        horizontalLayout_2->addWidget(spbGroupRight);

        horizontalLayout_2->setStretch(1, 4);
        layoutWidget_6 = new QWidget(BatchGroupDialog);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(360, 30, 141, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_6);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        edtGroupComments = new QLineEdit(layoutWidget_6);
        edtGroupComments->setObjectName(QStringLiteral("edtGroupComments"));

        horizontalLayout_4->addWidget(edtGroupComments);

        layoutWidget = new QWidget(BatchGroupDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 161, 42));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        edtGroupNo = new QLineEdit(layoutWidget);
        edtGroupNo->setObjectName(QStringLiteral("edtGroupNo"));

        horizontalLayout_6->addWidget(edtGroupNo);


        verticalLayout->addLayout(horizontalLayout_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout->addWidget(label_7);

        layoutWidget_2->raise();
        layoutWidget_3->raise();
        layoutWidget_6->raise();
        ptnDelete->raise();
        ptnModify->raise();
        ptnAdd->raise();
        ptnSave->raise();
        ptnClose->raise();
        groupTableWidget->raise();
        layoutWidget->raise();

        retranslateUi(BatchGroupDialog);

        QMetaObject::connectSlotsByName(BatchGroupDialog);
    } // setupUi

    void retranslateUi(QDialog *BatchGroupDialog)
    {
        BatchGroupDialog->setWindowTitle(QApplication::translate("BatchGroupDialog", "Dialog", 0));
        ptnDelete->setText(QApplication::translate("BatchGroupDialog", "\345\210\240\351\231\244", 0));
        ptnModify->setText(QApplication::translate("BatchGroupDialog", "\344\277\256\346\224\271", 0));
        ptnAdd->setText(QApplication::translate("BatchGroupDialog", "\345\242\236\345\212\240", 0));
        ptnSave->setText(QApplication::translate("BatchGroupDialog", "\344\277\235\345\255\230", 0));
        ptnClose->setText(QApplication::translate("BatchGroupDialog", "\345\217\226\346\266\210", 0));
        QTableWidgetItem *___qtablewidgetitem = groupTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BatchGroupDialog", "\347\273\204\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = groupTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BatchGroupDialog", "\347\273\204\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = groupTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("BatchGroupDialog", "\345\244\207\346\263\250", 0));
        QTableWidgetItem *___qtablewidgetitem3 = groupTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("BatchGroupDialog", "\347\273\204\346\235\203\351\231\220", 0));
        label_2->setText(QApplication::translate("BatchGroupDialog", "\347\273\204\345\220\215\347\247\260*\357\274\232", 0));
        label_5->setText(QApplication::translate("BatchGroupDialog", "\347\273\204\346\235\203\351\231\220*\357\274\232", 0));
        label_3->setText(QApplication::translate("BatchGroupDialog", "\345\244\207   \346\263\250\357\274\232", 0));
        label->setText(QApplication::translate("BatchGroupDialog", "\347\273\204\347\274\226\345\217\267*\357\274\232", 0));
        label_7->setText(QApplication::translate("BatchGroupDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
    } // retranslateUi

};

namespace Ui {
    class BatchGroupDialog: public Ui_BatchGroupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHGROUPDIALOG_H
