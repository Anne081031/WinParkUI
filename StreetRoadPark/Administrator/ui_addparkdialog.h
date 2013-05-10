/********************************************************************************
** Form generated from reading UI file 'addparkdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPARKDIALOG_H
#define UI_ADDPARKDIALOG_H

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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddParkDialog
{
public:
    QPushButton *ptnCancel;
    QPushButton *ptnAdd;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *edtParkNo;
    QLabel *label_7;
    QSplitter *splitter;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *edtParkName;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *edtParkSpace;
    QLabel *label_8;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *edtUsedSpace;
    QLabel *label_9;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *edtParkSelfNum;
    QLabel *label_10;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *edtParkComments;

    void setupUi(QDialog *AddParkDialog)
    {
        if (AddParkDialog->objectName().isEmpty())
            AddParkDialog->setObjectName(QStringLiteral("AddParkDialog"));
        AddParkDialog->resize(400, 400);
        AddParkDialog->setMinimumSize(QSize(400, 400));
        AddParkDialog->setMaximumSize(QSize(400, 400));
        ptnCancel = new QPushButton(AddParkDialog);
        ptnCancel->setObjectName(QStringLiteral("ptnCancel"));
        ptnCancel->setGeometry(QRect(210, 350, 75, 23));
        ptnAdd = new QPushButton(AddParkDialog);
        ptnAdd->setObjectName(QStringLiteral("ptnAdd"));
        ptnAdd->setGeometry(QRect(100, 350, 75, 23));
        layoutWidget = new QWidget(AddParkDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 20, 271, 41));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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

        splitter = new QSplitter(AddParkDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(60, 80, 271, 241));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        edtParkName = new QLineEdit(layoutWidget1);
        edtParkName->setObjectName(QStringLiteral("edtParkName"));

        horizontalLayout->addWidget(edtParkName);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        edtParkSpace = new QLineEdit(layoutWidget2);
        edtParkSpace->setObjectName(QStringLiteral("edtParkSpace"));

        horizontalLayout_2->addWidget(edtParkSpace);

        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("color:red"));

        horizontalLayout_2->addWidget(label_8);

        splitter->addWidget(layoutWidget2);
        layoutWidget3 = new QWidget(splitter);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        edtUsedSpace = new QLineEdit(layoutWidget3);
        edtUsedSpace->setObjectName(QStringLiteral("edtUsedSpace"));

        horizontalLayout_3->addWidget(edtUsedSpace);

        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("color:red"));

        horizontalLayout_3->addWidget(label_9);

        splitter->addWidget(layoutWidget3);
        layoutWidget4 = new QWidget(splitter);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        edtParkSelfNum = new QLineEdit(layoutWidget4);
        edtParkSelfNum->setObjectName(QStringLiteral("edtParkSelfNum"));

        horizontalLayout_5->addWidget(edtParkSelfNum);

        label_10 = new QLabel(layoutWidget4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("color:red"));

        horizontalLayout_5->addWidget(label_10);

        splitter->addWidget(layoutWidget4);
        layoutWidget5 = new QWidget(splitter);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget5);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        edtParkComments = new QLineEdit(layoutWidget5);
        edtParkComments->setObjectName(QStringLiteral("edtParkComments"));

        horizontalLayout_4->addWidget(edtParkComments);

        splitter->addWidget(layoutWidget5);

        retranslateUi(AddParkDialog);

        QMetaObject::connectSlotsByName(AddParkDialog);
    } // setupUi

    void retranslateUi(QDialog *AddParkDialog)
    {
        AddParkDialog->setWindowTitle(QApplication::translate("AddParkDialog", "\345\242\236\345\212\240\345\201\234\350\275\246\345\234\272", 0));
        ptnCancel->setText(QApplication::translate("AddParkDialog", "\345\217\226\346\266\210", 0));
        ptnAdd->setText(QApplication::translate("AddParkDialog", "\345\242\236\345\212\240", 0));
        label->setText(QApplication::translate("AddParkDialog", "\345\201\234\350\275\246\345\234\272\347\274\226\345\217\267* \357\274\232", 0));
        label_7->setText(QApplication::translate("AddParkDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220,\345\233\272\345\256\232\351\225\2774\344\275\215", 0));
        label_2->setText(QApplication::translate("AddParkDialog", "\345\201\234\350\275\246\345\234\272\345\220\215\347\247\260* \357\274\232", 0));
        label_5->setText(QApplication::translate("AddParkDialog", "\350\275\246\344\275\215\346\200\273\346\225\260\351\207\217* \357\274\232", 0));
        label_8->setText(QApplication::translate("AddParkDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        label_4->setText(QApplication::translate("AddParkDialog", "\345\267\262\345\201\234\350\275\246\344\275\215\351\207\217  \357\274\232", 0));
        label_9->setText(QApplication::translate("AddParkDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        label_6->setText(QApplication::translate("AddParkDialog", "\345\201\234\350\275\246\345\234\272\350\207\252\347\274\226\345\217\267\357\274\232", 0));
        label_10->setText(QApplication::translate("AddParkDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        label_3->setText(QApplication::translate("AddParkDialog", "\345\244\207        \346\263\250\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class AddParkDialog: public Ui_AddParkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPARKDIALOG_H
