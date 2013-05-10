/********************************************************************************
** Form generated from reading UI file 'batchadmindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHADMINDIALOG_H
#define UI_BATCHADMINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_BatchAdminDialog
{
public:
    QTableWidget *adminTableWidget;
    QPushButton *ptnClose;
    QPushButton *ptnSave;
    QPushButton *ptnAdd;
    QPushButton *ptnDelete;
    QPushButton *ptnModify;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QComboBox *cbxAdmin;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *edtComments;

    void setupUi(QDialog *BatchAdminDialog)
    {
        if (BatchAdminDialog->objectName().isEmpty())
            BatchAdminDialog->setObjectName(QStringLiteral("BatchAdminDialog"));
        BatchAdminDialog->resize(700, 700);
        BatchAdminDialog->setMinimumSize(QSize(700, 700));
        BatchAdminDialog->setMaximumSize(QSize(700, 700));
        adminTableWidget = new QTableWidget(BatchAdminDialog);
        if (adminTableWidget->columnCount() < 2)
            adminTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        adminTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        adminTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        adminTableWidget->setObjectName(QStringLiteral("adminTableWidget"));
        adminTableWidget->setGeometry(QRect(40, 130, 620, 470));
        ptnClose = new QPushButton(BatchAdminDialog);
        ptnClose->setObjectName(QStringLiteral("ptnClose"));
        ptnClose->setGeometry(QRect(560, 640, 75, 23));
        ptnSave = new QPushButton(BatchAdminDialog);
        ptnSave->setObjectName(QStringLiteral("ptnSave"));
        ptnSave->setGeometry(QRect(430, 640, 75, 23));
        ptnAdd = new QPushButton(BatchAdminDialog);
        ptnAdd->setObjectName(QStringLiteral("ptnAdd"));
        ptnAdd->setGeometry(QRect(369, 80, 75, 23));
        ptnDelete = new QPushButton(BatchAdminDialog);
        ptnDelete->setObjectName(QStringLiteral("ptnDelete"));
        ptnDelete->setGeometry(QRect(531, 80, 75, 23));
        ptnModify = new QPushButton(BatchAdminDialog);
        ptnModify->setObjectName(QStringLiteral("ptnModify"));
        ptnModify->setGeometry(QRect(450, 80, 75, 23));
        layoutWidget = new QWidget(BatchAdminDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 221, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        cbxAdmin = new QComboBox(layoutWidget);
        cbxAdmin->setObjectName(QStringLiteral("cbxAdmin"));

        horizontalLayout_2->addWidget(cbxAdmin);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        edtComments = new QLineEdit(layoutWidget);
        edtComments->setObjectName(QStringLiteral("edtComments"));

        horizontalLayout->addWidget(edtComments);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget->raise();
        ptnClose->raise();
        ptnSave->raise();
        ptnAdd->raise();
        ptnDelete->raise();
        ptnModify->raise();
        adminTableWidget->raise();

        retranslateUi(BatchAdminDialog);

        QMetaObject::connectSlotsByName(BatchAdminDialog);
    } // setupUi

    void retranslateUi(QDialog *BatchAdminDialog)
    {
        BatchAdminDialog->setWindowTitle(QApplication::translate("BatchAdminDialog", "\346\211\271\351\207\217\346\267\273\345\212\240\350\241\214\346\224\277\345\214\272", 0));
        QTableWidgetItem *___qtablewidgetitem = adminTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BatchAdminDialog", "\350\241\214\346\224\277\345\214\272", 0));
        QTableWidgetItem *___qtablewidgetitem1 = adminTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BatchAdminDialog", "\345\244\207\346\263\250", 0));
        ptnClose->setText(QApplication::translate("BatchAdminDialog", "\345\217\226\346\266\210", 0));
        ptnSave->setText(QApplication::translate("BatchAdminDialog", "\344\277\235\345\255\230", 0));
        ptnAdd->setText(QApplication::translate("BatchAdminDialog", "\345\242\236\345\212\240", 0));
        ptnDelete->setText(QApplication::translate("BatchAdminDialog", "\345\210\240\351\231\244", 0));
        ptnModify->setText(QApplication::translate("BatchAdminDialog", "\344\277\256\346\224\271", 0));
        label_5->setText(QApplication::translate("BatchAdminDialog", "\350\241\214\346\224\277\345\214\272\357\274\232", 0));
        label_6->setText(QApplication::translate("BatchAdminDialog", "\345\244\207  \346\263\250\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class BatchAdminDialog: public Ui_BatchAdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHADMINDIALOG_H
