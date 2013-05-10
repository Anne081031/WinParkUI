/********************************************************************************
** Form generated from reading UI file 'batchparkdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHPARKDIALOG_H
#define UI_BATCHPARKDIALOG_H

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

class Ui_BatchParkDialog
{
public:
    QPushButton *ptnDelete;
    QPushButton *ptnModify;
    QPushButton *ptnAdd;
    QPushButton *ptnSave;
    QPushButton *ptnClose;
    QTableWidget *parkTableWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *edtParkNo;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *edtParkSpace;
    QLabel *label_8;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *edtParkComments;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *edtParkName;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *edtParkSelfNum;
    QLabel *label_10;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *edtUsedSpace;
    QLabel *label_9;

    void setupUi(QDialog *BatchParkDialog)
    {
        if (BatchParkDialog->objectName().isEmpty())
            BatchParkDialog->setObjectName(QStringLiteral("BatchParkDialog"));
        BatchParkDialog->resize(700, 700);
        BatchParkDialog->setMinimumSize(QSize(700, 700));
        BatchParkDialog->setMaximumSize(QSize(700, 700));
        ptnDelete = new QPushButton(BatchParkDialog);
        ptnDelete->setObjectName(QStringLiteral("ptnDelete"));
        ptnDelete->setGeometry(QRect(583, 121, 75, 23));
        ptnModify = new QPushButton(BatchParkDialog);
        ptnModify->setObjectName(QStringLiteral("ptnModify"));
        ptnModify->setGeometry(QRect(502, 121, 75, 23));
        ptnAdd = new QPushButton(BatchParkDialog);
        ptnAdd->setObjectName(QStringLiteral("ptnAdd"));
        ptnAdd->setGeometry(QRect(421, 121, 75, 23));
        ptnSave = new QPushButton(BatchParkDialog);
        ptnSave->setObjectName(QStringLiteral("ptnSave"));
        ptnSave->setGeometry(QRect(410, 650, 75, 23));
        ptnClose = new QPushButton(BatchParkDialog);
        ptnClose->setObjectName(QStringLiteral("ptnClose"));
        ptnClose->setGeometry(QRect(550, 650, 75, 23));
        parkTableWidget = new QTableWidget(BatchParkDialog);
        if (parkTableWidget->columnCount() < 6)
            parkTableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        parkTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        parkTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        parkTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        parkTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        parkTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        parkTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        parkTableWidget->setObjectName(QStringLiteral("parkTableWidget"));
        parkTableWidget->setGeometry(QRect(40, 160, 620, 470));
        layoutWidget = new QWidget(BatchParkDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 20, 201, 91));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        edtParkNo = new QLineEdit(layoutWidget);
        edtParkNo->setObjectName(QStringLiteral("edtParkNo"));

        horizontalLayout_6->addWidget(edtParkNo);


        verticalLayout->addLayout(horizontalLayout_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout->addWidget(label_7);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        edtParkSpace = new QLineEdit(layoutWidget);
        edtParkSpace->setObjectName(QStringLiteral("edtParkSpace"));

        horizontalLayout_2->addWidget(edtParkSpace);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout_2->addWidget(label_8);


        verticalLayout_5->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(BatchParkDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(460, 70, 191, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        edtParkComments = new QLineEdit(layoutWidget1);
        edtParkComments->setObjectName(QStringLiteral("edtParkComments"));

        horizontalLayout_4->addWidget(edtParkComments);

        layoutWidget2 = new QWidget(BatchParkDialog);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(260, 20, 181, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        edtParkName = new QLineEdit(layoutWidget2);
        edtParkName->setObjectName(QStringLiteral("edtParkName"));

        horizontalLayout->addWidget(edtParkName);

        layoutWidget3 = new QWidget(BatchParkDialog);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(460, 20, 191, 42));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        edtParkSelfNum = new QLineEdit(layoutWidget3);
        edtParkSelfNum->setObjectName(QStringLiteral("edtParkSelfNum"));

        horizontalLayout_5->addWidget(edtParkSelfNum);


        verticalLayout_4->addLayout(horizontalLayout_5);

        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout_4->addWidget(label_10);

        layoutWidget4 = new QWidget(BatchParkDialog);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(260, 70, 181, 41));
        verticalLayout_3 = new QVBoxLayout(layoutWidget4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        edtUsedSpace = new QLineEdit(layoutWidget4);
        edtUsedSpace->setObjectName(QStringLiteral("edtUsedSpace"));

        horizontalLayout_3->addWidget(edtUsedSpace);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout_3->addWidget(label_9);

        ptnDelete->raise();
        ptnModify->raise();
        ptnAdd->raise();
        ptnSave->raise();
        ptnClose->raise();
        parkTableWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        label_2->raise();

        retranslateUi(BatchParkDialog);

        QMetaObject::connectSlotsByName(BatchParkDialog);
    } // setupUi

    void retranslateUi(QDialog *BatchParkDialog)
    {
        BatchParkDialog->setWindowTitle(QApplication::translate("BatchParkDialog", "Dialog", 0));
        ptnDelete->setText(QApplication::translate("BatchParkDialog", "\345\210\240\351\231\244", 0));
        ptnModify->setText(QApplication::translate("BatchParkDialog", "\344\277\256\346\224\271", 0));
        ptnAdd->setText(QApplication::translate("BatchParkDialog", "\345\242\236\345\212\240", 0));
        ptnSave->setText(QApplication::translate("BatchParkDialog", "\344\277\235\345\255\230", 0));
        ptnClose->setText(QApplication::translate("BatchParkDialog", "\345\217\226\346\266\210", 0));
        QTableWidgetItem *___qtablewidgetitem = parkTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BatchParkDialog", "\345\201\234\350\275\246\345\234\272\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = parkTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BatchParkDialog", "\345\201\234\350\275\246\345\234\272\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = parkTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("BatchParkDialog", "\350\275\246\344\275\215\346\200\273\346\225\260\351\207\217", 0));
        QTableWidgetItem *___qtablewidgetitem3 = parkTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("BatchParkDialog", "\345\267\262\345\201\234\350\275\246\344\275\215\351\207\217", 0));
        QTableWidgetItem *___qtablewidgetitem4 = parkTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("BatchParkDialog", "\350\207\252\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem5 = parkTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("BatchParkDialog", "\345\244\207\346\263\250", 0));
        label->setText(QApplication::translate("BatchParkDialog", "\345\201\234\350\275\246\345\234\272\347\274\226\345\217\267* \357\274\232", 0));
        label_7->setText(QApplication::translate("BatchParkDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220,\345\233\272\345\256\232\351\225\2774\344\275\215", 0));
        label_5->setText(QApplication::translate("BatchParkDialog", "\350\275\246\344\275\215\346\200\273\346\225\260\351\207\217*\357\274\232", 0));
        label_8->setText(QApplication::translate("BatchParkDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        label_3->setText(QApplication::translate("BatchParkDialog", "\345\244\207        \346\263\250\357\274\232", 0));
        label_2->setText(QApplication::translate("BatchParkDialog", "\345\201\234\350\275\246\345\234\272\345\220\215\347\247\260* \357\274\232", 0));
        label_6->setText(QApplication::translate("BatchParkDialog", "\345\201\234\350\275\246\345\234\272\350\207\252\347\274\226\345\217\267\357\274\232", 0));
        label_10->setText(QApplication::translate("BatchParkDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        label_4->setText(QApplication::translate("BatchParkDialog", "\345\267\262\345\201\234\350\275\246\344\275\215\351\207\217  \357\274\232", 0));
        label_9->setText(QApplication::translate("BatchParkDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
    } // retranslateUi

};

namespace Ui {
    class BatchParkDialog: public Ui_BatchParkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHPARKDIALOG_H
