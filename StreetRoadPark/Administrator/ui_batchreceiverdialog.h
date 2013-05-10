/********************************************************************************
** Form generated from reading UI file 'batchreceiverdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHRECEIVERDIALOG_H
#define UI_BATCHRECEIVERDIALOG_H

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

class Ui_BatchReceiverDialog
{
public:
    QPushButton *ptnDelete;
    QPushButton *ptnModify;
    QPushButton *ptnAdd;
    QPushButton *ptnSave;
    QPushButton *ptnClose;
    QTableWidget *receiverTableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *edtReceiverComments;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *edtChannelID;
    QLabel *label_8;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtReceiverNo;
    QLabel *label_7;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *edtReceiverName;

    void setupUi(QDialog *BatchReceiverDialog)
    {
        if (BatchReceiverDialog->objectName().isEmpty())
            BatchReceiverDialog->setObjectName(QStringLiteral("BatchReceiverDialog"));
        BatchReceiverDialog->resize(700, 700);
        BatchReceiverDialog->setMinimumSize(QSize(700, 700));
        BatchReceiverDialog->setMaximumSize(QSize(700, 700));
        ptnDelete = new QPushButton(BatchReceiverDialog);
        ptnDelete->setObjectName(QStringLiteral("ptnDelete"));
        ptnDelete->setGeometry(QRect(583, 91, 75, 23));
        ptnModify = new QPushButton(BatchReceiverDialog);
        ptnModify->setObjectName(QStringLiteral("ptnModify"));
        ptnModify->setGeometry(QRect(502, 91, 75, 23));
        ptnAdd = new QPushButton(BatchReceiverDialog);
        ptnAdd->setObjectName(QStringLiteral("ptnAdd"));
        ptnAdd->setGeometry(QRect(421, 91, 75, 23));
        ptnSave = new QPushButton(BatchReceiverDialog);
        ptnSave->setObjectName(QStringLiteral("ptnSave"));
        ptnSave->setGeometry(QRect(410, 640, 75, 23));
        ptnClose = new QPushButton(BatchReceiverDialog);
        ptnClose->setObjectName(QStringLiteral("ptnClose"));
        ptnClose->setGeometry(QRect(540, 640, 75, 23));
        ptnClose->setMinimumSize(QSize(0, 0));
        receiverTableWidget = new QTableWidget(BatchReceiverDialog);
        if (receiverTableWidget->columnCount() < 4)
            receiverTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        receiverTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        receiverTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        receiverTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        receiverTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        receiverTableWidget->setObjectName(QStringLiteral("receiverTableWidget"));
        receiverTableWidget->setGeometry(QRect(40, 140, 620, 470));
        layoutWidget = new QWidget(BatchReceiverDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(530, 30, 131, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        edtReceiverComments = new QLineEdit(layoutWidget);
        edtReceiverComments->setObjectName(QStringLiteral("edtReceiverComments"));

        horizontalLayout_4->addWidget(edtReceiverComments);

        layoutWidget1 = new QWidget(BatchReceiverDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(210, 30, 151, 42));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        edtChannelID = new QLineEdit(layoutWidget1);
        edtChannelID->setObjectName(QStringLiteral("edtChannelID"));

        horizontalLayout_2->addWidget(edtChannelID);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout_2->addWidget(label_8);

        layoutWidget2 = new QWidget(BatchReceiverDialog);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 30, 161, 42));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        edtReceiverNo = new QLineEdit(layoutWidget2);
        edtReceiverNo->setObjectName(QStringLiteral("edtReceiverNo"));

        horizontalLayout->addWidget(edtReceiverNo);


        verticalLayout->addLayout(horizontalLayout);

        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QLatin1String("color:red\n"
""));

        verticalLayout->addWidget(label_7);

        layoutWidget3 = new QWidget(BatchReceiverDialog);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(370, 30, 151, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        edtReceiverName = new QLineEdit(layoutWidget3);
        edtReceiverName->setObjectName(QStringLiteral("edtReceiverName"));

        horizontalLayout_3->addWidget(edtReceiverName);


        retranslateUi(BatchReceiverDialog);

        QMetaObject::connectSlotsByName(BatchReceiverDialog);
    } // setupUi

    void retranslateUi(QDialog *BatchReceiverDialog)
    {
        BatchReceiverDialog->setWindowTitle(QApplication::translate("BatchReceiverDialog", "Dialog", 0));
        ptnDelete->setText(QApplication::translate("BatchReceiverDialog", "\345\210\240\351\231\244", 0));
        ptnModify->setText(QApplication::translate("BatchReceiverDialog", "\344\277\256\346\224\271", 0));
        ptnAdd->setText(QApplication::translate("BatchReceiverDialog", "\345\242\236\345\212\240", 0));
        ptnSave->setText(QApplication::translate("BatchReceiverDialog", "\344\277\235\345\255\230", 0));
        ptnClose->setText(QApplication::translate("BatchReceiverDialog", "\345\217\226\346\266\210", 0));
        QTableWidgetItem *___qtablewidgetitem = receiverTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BatchReceiverDialog", "\346\216\245\346\224\266\345\231\250\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem1 = receiverTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BatchReceiverDialog", "\346\216\245\346\224\266\345\231\250\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem2 = receiverTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("BatchReceiverDialog", "\344\277\241\351\201\223\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem3 = receiverTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("BatchReceiverDialog", "\345\244\207\346\263\250", 0));
        label_3->setText(QApplication::translate("BatchReceiverDialog", "\345\244\207 \346\263\250\357\274\232", 0));
        label_4->setText(QApplication::translate("BatchReceiverDialog", "\344\277\241\351\201\223\347\274\226\345\217\267*\357\274\232", 0));
        label_8->setText(QApplication::translate("BatchReceiverDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        label->setText(QApplication::translate("BatchReceiverDialog", "\346\216\245\346\224\266\345\231\250\347\274\226\345\217\267*\357\274\232", 0));
        label_7->setText(QApplication::translate("BatchReceiverDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220,\345\233\272\345\256\232\351\225\2773\344\275\215", 0));
        label_2->setText(QApplication::translate("BatchReceiverDialog", "\346\216\245\346\224\266\345\231\250\345\220\215\347\247\260*\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class BatchReceiverDialog: public Ui_BatchReceiverDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHRECEIVERDIALOG_H
