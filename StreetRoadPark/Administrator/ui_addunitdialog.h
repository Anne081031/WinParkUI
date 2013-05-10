/********************************************************************************
** Form generated from reading UI file 'addunitdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUNITDIALOG_H
#define UI_ADDUNITDIALOG_H

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

class Ui_AddUnitDialog
{
public:
    QPushButton *ptnAdd;
    QPushButton *ptnCancel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *edtUnitNo;
    QLabel *label_5;
    QSplitter *splitter;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
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

    void setupUi(QDialog *AddUnitDialog)
    {
        if (AddUnitDialog->objectName().isEmpty())
            AddUnitDialog->setObjectName(QStringLiteral("AddUnitDialog"));
        AddUnitDialog->resize(400, 400);
        AddUnitDialog->setMinimumSize(QSize(400, 400));
        AddUnitDialog->setMaximumSize(QSize(400, 400));
        ptnAdd = new QPushButton(AddUnitDialog);
        ptnAdd->setObjectName(QStringLiteral("ptnAdd"));
        ptnAdd->setGeometry(QRect(90, 310, 75, 23));
        ptnCancel = new QPushButton(AddUnitDialog);
        ptnCancel->setObjectName(QStringLiteral("ptnCancel"));
        ptnCancel->setGeometry(QRect(200, 310, 75, 23));
        layoutWidget = new QWidget(AddUnitDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 40, 221, 42));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        edtUnitNo = new QLineEdit(layoutWidget);
        edtUnitNo->setObjectName(QStringLiteral("edtUnitNo"));

        horizontalLayout_2->addWidget(edtUnitNo);


        verticalLayout->addLayout(horizontalLayout_2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout->addWidget(label_5);

        splitter = new QSplitter(AddUnitDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(80, 100, 221, 171));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        edtUnitName = new QLineEdit(layoutWidget1);
        edtUnitName->setObjectName(QStringLiteral("edtUnitName"));

        horizontalLayout->addWidget(edtUnitName);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        edtUnitAddress = new QLineEdit(layoutWidget2);
        edtUnitAddress->setObjectName(QStringLiteral("edtUnitAddress"));

        horizontalLayout_3->addWidget(edtUnitAddress);

        splitter->addWidget(layoutWidget2);
        layoutWidget3 = new QWidget(splitter);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        edtUnitComments = new QLineEdit(layoutWidget3);
        edtUnitComments->setObjectName(QStringLiteral("edtUnitComments"));

        horizontalLayout_4->addWidget(edtUnitComments);

        splitter->addWidget(layoutWidget3);
        layoutWidget->raise();
        splitter->raise();
        ptnAdd->raise();
        ptnCancel->raise();

        retranslateUi(AddUnitDialog);

        QMetaObject::connectSlotsByName(AddUnitDialog);
    } // setupUi

    void retranslateUi(QDialog *AddUnitDialog)
    {
        AddUnitDialog->setWindowTitle(QApplication::translate("AddUnitDialog", "\345\242\236\345\212\240\344\274\201\344\270\232", 0));
        ptnAdd->setText(QApplication::translate("AddUnitDialog", "\345\242\236\345\212\240", 0));
        ptnCancel->setText(QApplication::translate("AddUnitDialog", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("AddUnitDialog", "\344\274\201\344\270\232\347\274\226\345\217\267*\357\274\232", 0));
        label_5->setText(QApplication::translate("AddUnitDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220,\345\233\272\345\256\232\351\225\2779\344\275\215", 0));
        label_2->setText(QApplication::translate("AddUnitDialog", "\344\274\201\344\270\232\345\220\215\347\247\260*\357\274\232", 0));
        label_4->setText(QApplication::translate("AddUnitDialog", "\344\274\201\344\270\232\345\234\260\345\235\200*\357\274\232", 0));
        label_3->setText(QApplication::translate("AddUnitDialog", "\345\244\207     \346\263\250\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class AddUnitDialog: public Ui_AddUnitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUNITDIALOG_H
