/********************************************************************************
** Form generated from reading UI file 'batchuserdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHUSERDIALOG_H
#define UI_BATCHUSERDIALOG_H

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

class Ui_BatchUserDialog
{
public:
    QPushButton *ptnDelete;
    QPushButton *ptnModify;
    QPushButton *ptnAdd;
    QPushButton *ptnSave;
    QPushButton *ptnClose;
    QTableWidget *userTableWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *edtUserNo;
    QLabel *label_7;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *edtUserPwd;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *edtUserComments;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *edtUserName;

    void setupUi(QDialog *BatchUserDialog)
    {
        if (BatchUserDialog->objectName().isEmpty())
            BatchUserDialog->setObjectName(QStringLiteral("BatchUserDialog"));
        BatchUserDialog->resize(700, 700);
        BatchUserDialog->setMinimumSize(QSize(700, 700));
        BatchUserDialog->setMaximumSize(QSize(700, 700));
        ptnDelete = new QPushButton(BatchUserDialog);
        ptnDelete->setObjectName(QStringLiteral("ptnDelete"));
        ptnDelete->setGeometry(QRect(580, 91, 75, 23));
        ptnModify = new QPushButton(BatchUserDialog);
        ptnModify->setObjectName(QStringLiteral("ptnModify"));
        ptnModify->setGeometry(QRect(499, 91, 75, 23));
        ptnAdd = new QPushButton(BatchUserDialog);
        ptnAdd->setObjectName(QStringLiteral("ptnAdd"));
        ptnAdd->setGeometry(QRect(418, 91, 75, 23));
        ptnSave = new QPushButton(BatchUserDialog);
        ptnSave->setObjectName(QStringLiteral("ptnSave"));
        ptnSave->setGeometry(QRect(407, 620, 75, 23));
        ptnClose = new QPushButton(BatchUserDialog);
        ptnClose->setObjectName(QStringLiteral("ptnClose"));
        ptnClose->setGeometry(QRect(537, 620, 75, 23));
        userTableWidget = new QTableWidget(BatchUserDialog);
        if (userTableWidget->columnCount() < 4)
            userTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        userTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        userTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        userTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        userTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        userTableWidget->setObjectName(QStringLiteral("userTableWidget"));
        userTableWidget->setGeometry(QRect(37, 130, 620, 470));
        layoutWidget = new QWidget(BatchUserDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(37, 31, 151, 41));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        edtUserNo = new QLineEdit(layoutWidget);
        edtUserNo->setObjectName(QStringLiteral("edtUserNo"));

        horizontalLayout_6->addWidget(edtUserNo);


        verticalLayout->addLayout(horizontalLayout_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout->addWidget(label_7);

        layoutWidget1 = new QWidget(BatchUserDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(367, 30, 141, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        edtUserPwd = new QLineEdit(layoutWidget1);
        edtUserPwd->setObjectName(QStringLiteral("edtUserPwd"));
        edtUserPwd->setEchoMode(QLineEdit::Normal);

        horizontalLayout_2->addWidget(edtUserPwd);

        layoutWidget2 = new QWidget(BatchUserDialog);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(527, 30, 121, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        edtUserComments = new QLineEdit(layoutWidget2);
        edtUserComments->setObjectName(QStringLiteral("edtUserComments"));

        horizontalLayout_3->addWidget(edtUserComments);

        layoutWidget3 = new QWidget(BatchUserDialog);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(207, 30, 151, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        edtUserName = new QLineEdit(layoutWidget3);
        edtUserName->setObjectName(QStringLiteral("edtUserName"));

        horizontalLayout->addWidget(edtUserName);


        retranslateUi(BatchUserDialog);

        QMetaObject::connectSlotsByName(BatchUserDialog);
    } // setupUi

    void retranslateUi(QDialog *BatchUserDialog)
    {
        BatchUserDialog->setWindowTitle(QApplication::translate("BatchUserDialog", "Dialog", 0));
        ptnDelete->setText(QApplication::translate("BatchUserDialog", "\345\210\240\351\231\244", 0));
        ptnModify->setText(QApplication::translate("BatchUserDialog", "\344\277\256\346\224\271", 0));
        ptnAdd->setText(QApplication::translate("BatchUserDialog", "\345\242\236\345\212\240", 0));
        ptnSave->setText(QApplication::translate("BatchUserDialog", "\344\277\235\345\255\230", 0));
        ptnClose->setText(QApplication::translate("BatchUserDialog", "\345\217\226\346\266\210", 0));
        QTableWidgetItem *___qtablewidgetitem = userTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BatchUserDialog", "\347\224\250\346\210\267\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = userTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BatchUserDialog", "\347\224\250\346\210\267\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = userTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("BatchUserDialog", "\345\244\207\346\263\250", 0));
        QTableWidgetItem *___qtablewidgetitem3 = userTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("BatchUserDialog", "\345\257\206\347\240\201", 0));
        label->setText(QApplication::translate("BatchUserDialog", "\347\224\250\346\210\267\347\274\226\345\217\267*\357\274\232", 0));
        label_7->setText(QApplication::translate("BatchUserDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        label_5->setText(QApplication::translate("BatchUserDialog", "\347\224\250\346\210\267\345\257\206\347\240\201*\357\274\232", 0));
        label_3->setText(QApplication::translate("BatchUserDialog", "\345\244\207\346\263\250\357\274\232", 0));
        label_2->setText(QApplication::translate("BatchUserDialog", "\347\224\250\346\210\267\345\220\215\347\247\260*\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class BatchUserDialog: public Ui_BatchUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHUSERDIALOG_H
