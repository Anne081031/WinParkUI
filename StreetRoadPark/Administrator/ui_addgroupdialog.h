/********************************************************************************
** Form generated from reading UI file 'addgroupdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGROUPDIALOG_H
#define UI_ADDGROUPDIALOG_H

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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddGroupDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *edtGroupNo;
    QLabel *label_7;
    QPushButton *ptnAdd;
    QSplitter *splitter;
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
    QPushButton *ptnCancel;

    void setupUi(QDialog *AddGroupDialog)
    {
        if (AddGroupDialog->objectName().isEmpty())
            AddGroupDialog->setObjectName(QStringLiteral("AddGroupDialog"));
        AddGroupDialog->resize(400, 400);
        AddGroupDialog->setMinimumSize(QSize(400, 400));
        AddGroupDialog->setMaximumSize(QSize(400, 400));
        layoutWidget = new QWidget(AddGroupDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 40, 241, 51));
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

        ptnAdd = new QPushButton(AddGroupDialog);
        ptnAdd->setObjectName(QStringLiteral("ptnAdd"));
        ptnAdd->setGeometry(QRect(100, 350, 75, 23));
        splitter = new QSplitter(AddGroupDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(80, 110, 241, 181));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        edtGroupName = new QLineEdit(layoutWidget_2);
        edtGroupName->setObjectName(QStringLiteral("edtGroupName"));

        horizontalLayout->addWidget(edtGroupName);

        splitter->addWidget(layoutWidget_2);
        layoutWidget_3 = new QWidget(splitter);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
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

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);
        splitter->addWidget(layoutWidget_3);
        layoutWidget_6 = new QWidget(splitter);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_6);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        edtGroupComments = new QLineEdit(layoutWidget_6);
        edtGroupComments->setObjectName(QStringLiteral("edtGroupComments"));

        horizontalLayout_4->addWidget(edtGroupComments);

        splitter->addWidget(layoutWidget_6);
        ptnCancel = new QPushButton(AddGroupDialog);
        ptnCancel->setObjectName(QStringLiteral("ptnCancel"));
        ptnCancel->setGeometry(QRect(210, 350, 75, 23));

        retranslateUi(AddGroupDialog);

        QMetaObject::connectSlotsByName(AddGroupDialog);
    } // setupUi

    void retranslateUi(QDialog *AddGroupDialog)
    {
        AddGroupDialog->setWindowTitle(QApplication::translate("AddGroupDialog", "\345\242\236\345\212\240\346\235\203\351\231\220\347\273\204", 0));
        label->setText(QApplication::translate("AddGroupDialog", "\347\273\204\347\274\226\345\217\267*\357\274\232", 0));
        label_7->setText(QApplication::translate("AddGroupDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        ptnAdd->setText(QApplication::translate("AddGroupDialog", "\345\242\236\345\212\240", 0));
        label_2->setText(QApplication::translate("AddGroupDialog", "\347\273\204\345\220\215\347\247\260*\357\274\232", 0));
        label_5->setText(QApplication::translate("AddGroupDialog", "\347\273\204\346\235\203\351\231\220*\357\274\232", 0));
        label_3->setText(QApplication::translate("AddGroupDialog", "\345\244\207   \346\263\250\357\274\232", 0));
        ptnCancel->setText(QApplication::translate("AddGroupDialog", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class AddGroupDialog: public Ui_AddGroupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGROUPDIALOG_H
