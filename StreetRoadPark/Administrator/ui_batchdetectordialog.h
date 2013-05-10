/********************************************************************************
** Form generated from reading UI file 'batchdetectordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHDETECTORDIALOG_H
#define UI_BATCHDETECTORDIALOG_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BatchDetectorDialog
{
public:
    QPushButton *ptnDelete;
    QPushButton *ptnModify;
    QPushButton *ptnAdd;
    QPushButton *ptnSave;
    QPushButton *ptnClose;
    QTableWidget *detectorTableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *edtDetectorNo;
    QLabel *label_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *edtDetectorChannelID;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpinBox *sbxThreshold;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpinBox *sbxDelayTime;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *cmbReset;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *edtDetectorComments;

    void setupUi(QDialog *BatchDetectorDialog)
    {
        if (BatchDetectorDialog->objectName().isEmpty())
            BatchDetectorDialog->setObjectName(QStringLiteral("BatchDetectorDialog"));
        BatchDetectorDialog->resize(700, 700);
        BatchDetectorDialog->setMinimumSize(QSize(640, 600));
        BatchDetectorDialog->setMaximumSize(QSize(700, 700));
        ptnDelete = new QPushButton(BatchDetectorDialog);
        ptnDelete->setObjectName(QStringLiteral("ptnDelete"));
        ptnDelete->setGeometry(QRect(573, 111, 75, 23));
        ptnModify = new QPushButton(BatchDetectorDialog);
        ptnModify->setObjectName(QStringLiteral("ptnModify"));
        ptnModify->setGeometry(QRect(492, 111, 75, 23));
        ptnAdd = new QPushButton(BatchDetectorDialog);
        ptnAdd->setObjectName(QStringLiteral("ptnAdd"));
        ptnAdd->setGeometry(QRect(411, 111, 75, 23));
        ptnSave = new QPushButton(BatchDetectorDialog);
        ptnSave->setObjectName(QStringLiteral("ptnSave"));
        ptnSave->setGeometry(QRect(430, 640, 75, 23));
        ptnSave->setMinimumSize(QSize(0, 0));
        ptnSave->setMaximumSize(QSize(16777215, 16777215));
        ptnClose = new QPushButton(BatchDetectorDialog);
        ptnClose->setObjectName(QStringLiteral("ptnClose"));
        ptnClose->setGeometry(QRect(560, 640, 75, 23));
        ptnClose->setMinimumSize(QSize(0, 0));
        ptnClose->setMaximumSize(QSize(16777215, 16777215));
        detectorTableWidget = new QTableWidget(BatchDetectorDialog);
        if (detectorTableWidget->columnCount() < 6)
            detectorTableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        detectorTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        detectorTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        detectorTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        detectorTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        detectorTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        detectorTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        detectorTableWidget->setObjectName(QStringLiteral("detectorTableWidget"));
        detectorTableWidget->setGeometry(QRect(30, 150, 620, 470));
        layoutWidget = new QWidget(BatchDetectorDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 631, 58));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        edtDetectorNo = new QLineEdit(layoutWidget);
        edtDetectorNo->setObjectName(QStringLiteral("edtDetectorNo"));

        horizontalLayout_2->addWidget(edtDetectorNo);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout_2->addWidget(label_8);


        horizontalLayout_7->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        edtDetectorChannelID = new QLineEdit(layoutWidget);
        edtDetectorChannelID->setObjectName(QStringLiteral("edtDetectorChannelID"));

        horizontalLayout->addWidget(edtDetectorChannelID);


        verticalLayout->addLayout(horizontalLayout);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout->addWidget(label_7);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        sbxThreshold = new QSpinBox(layoutWidget);
        sbxThreshold->setObjectName(QStringLiteral("sbxThreshold"));
        sbxThreshold->setMaximum(65536);

        horizontalLayout_3->addWidget(sbxThreshold);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        sbxDelayTime = new QSpinBox(layoutWidget);
        sbxDelayTime->setObjectName(QStringLiteral("sbxDelayTime"));
        sbxDelayTime->setMaximum(65536);

        horizontalLayout_5->addWidget(sbxDelayTime);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        cmbReset = new QComboBox(layoutWidget);
        cmbReset->setObjectName(QStringLiteral("cmbReset"));

        horizontalLayout_6->addWidget(cmbReset);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        edtDetectorComments = new QLineEdit(layoutWidget);
        edtDetectorComments->setObjectName(QStringLiteral("edtDetectorComments"));

        horizontalLayout_4->addWidget(edtDetectorComments);


        verticalLayout_4->addLayout(horizontalLayout_4);


        horizontalLayout_7->addLayout(verticalLayout_4);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 1);
        horizontalLayout_7->setStretch(3, 1);
        layoutWidget->raise();
        ptnDelete->raise();
        ptnModify->raise();
        ptnAdd->raise();
        ptnSave->raise();
        ptnClose->raise();
        detectorTableWidget->raise();

        retranslateUi(BatchDetectorDialog);

        QMetaObject::connectSlotsByName(BatchDetectorDialog);
    } // setupUi

    void retranslateUi(QDialog *BatchDetectorDialog)
    {
        BatchDetectorDialog->setWindowTitle(QApplication::translate("BatchDetectorDialog", "Dialog", 0));
        ptnDelete->setText(QApplication::translate("BatchDetectorDialog", "\345\210\240\351\231\244", 0));
        ptnModify->setText(QApplication::translate("BatchDetectorDialog", "\344\277\256\346\224\271", 0));
        ptnAdd->setText(QApplication::translate("BatchDetectorDialog", "\345\242\236\345\212\240", 0));
        ptnSave->setText(QApplication::translate("BatchDetectorDialog", "\344\277\235\345\255\230", 0));
        ptnClose->setText(QApplication::translate("BatchDetectorDialog", "\345\217\226\346\266\210", 0));
        QTableWidgetItem *___qtablewidgetitem = detectorTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BatchDetectorDialog", "\346\216\242\346\265\213\345\231\250\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = detectorTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BatchDetectorDialog", "\346\216\242\346\265\213\345\231\250\344\277\241\351\201\223\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem2 = detectorTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("BatchDetectorDialog", "\345\244\207\346\263\250", 0));
        QTableWidgetItem *___qtablewidgetitem3 = detectorTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("BatchDetectorDialog", "\351\230\200\345\200\274", 0));
        QTableWidgetItem *___qtablewidgetitem4 = detectorTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("BatchDetectorDialog", "\345\273\266\351\225\277\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem5 = detectorTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("BatchDetectorDialog", "\346\230\257\345\220\246\351\207\215\345\220\257\346\216\242\346\265\213\345\231\250", 0));
        label->setText(QApplication::translate("BatchDetectorDialog", "\346\216\242\346\265\213\345\231\250\347\274\226\345\217\267*\357\274\232", 0));
        label_8->setText(QApplication::translate("BatchDetectorDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220\357\274\214\345\233\272\345\256\232\351\225\2773\344\275\215", 0));
        label_2->setText(QApplication::translate("BatchDetectorDialog", "\346\216\242\346\265\213\345\231\250\344\277\241\351\201\223\347\274\226\345\217\267*\357\274\232", 0));
        label_7->setText(QApplication::translate("BatchDetectorDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        label_5->setText(QApplication::translate("BatchDetectorDialog", "\351\230\200    \345\200\274\357\274\232", 0));
        label_4->setText(QApplication::translate("BatchDetectorDialog", "\345\273\266\351\225\277\346\227\266\351\227\264\357\274\232", 0));
        label_6->setText(QApplication::translate("BatchDetectorDialog", "\346\230\257\345\220\246\351\207\215\345\220\257\346\216\242\346\265\213\345\231\250\357\274\232", 0));
        cmbReset->clear();
        cmbReset->insertItems(0, QStringList()
         << QApplication::translate("BatchDetectorDialog", "\346\230\257", 0)
         << QApplication::translate("BatchDetectorDialog", "\345\220\246", 0)
        );
        label_3->setText(QApplication::translate("BatchDetectorDialog", "\345\244\207\346\263\250\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class BatchDetectorDialog: public Ui_BatchDetectorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHDETECTORDIALOG_H
