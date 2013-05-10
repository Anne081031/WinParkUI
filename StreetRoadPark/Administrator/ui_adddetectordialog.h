/********************************************************************************
** Form generated from reading UI file 'adddetectordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDETECTORDIALOG_H
#define UI_ADDDETECTORDIALOG_H

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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddDetectorDialog
{
public:
    QPushButton *ptnCancel;
    QPushButton *ptnAdd;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *edtDetectorNo;
    QLabel *label_8;
    QSplitter *splitter;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *edtDetectorChannelID;
    QLabel *label_7;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *edtDetectorComments;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *cmbReset;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpinBox *sbxThreshold;
    QLabel *label_4;
    QSpinBox *sbxDelayTime;

    void setupUi(QDialog *AddDetectorDialog)
    {
        if (AddDetectorDialog->objectName().isEmpty())
            AddDetectorDialog->setObjectName(QStringLiteral("AddDetectorDialog"));
        AddDetectorDialog->resize(400, 400);
        AddDetectorDialog->setMinimumSize(QSize(400, 400));
        AddDetectorDialog->setMaximumSize(QSize(400, 400));
        ptnCancel = new QPushButton(AddDetectorDialog);
        ptnCancel->setObjectName(QStringLiteral("ptnCancel"));
        ptnCancel->setGeometry(QRect(230, 340, 75, 23));
        ptnAdd = new QPushButton(AddDetectorDialog);
        ptnAdd->setObjectName(QStringLiteral("ptnAdd"));
        ptnAdd->setGeometry(QRect(90, 340, 75, 23));
        layoutWidget = new QWidget(AddDetectorDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 30, 271, 51));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        edtDetectorNo = new QLineEdit(layoutWidget);
        edtDetectorNo->setObjectName(QStringLiteral("edtDetectorNo"));

        horizontalLayout_2->addWidget(edtDetectorNo);


        verticalLayout->addLayout(horizontalLayout_2);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout->addWidget(label_8);

        splitter = new QSplitter(AddDetectorDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(62, 90, 271, 201));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        edtDetectorChannelID = new QLineEdit(layoutWidget1);
        edtDetectorChannelID->setObjectName(QStringLiteral("edtDetectorChannelID"));

        horizontalLayout->addWidget(edtDetectorChannelID);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color:red"));

        horizontalLayout->addWidget(label_7);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        edtDetectorComments = new QLineEdit(layoutWidget2);
        edtDetectorComments->setObjectName(QStringLiteral("edtDetectorComments"));

        horizontalLayout_4->addWidget(edtDetectorComments);

        splitter->addWidget(layoutWidget2);
        layoutWidget3 = new QWidget(splitter);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        cmbReset = new QComboBox(layoutWidget3);
        cmbReset->setObjectName(QStringLiteral("cmbReset"));

        horizontalLayout_6->addWidget(cmbReset);

        splitter->addWidget(layoutWidget3);
        layoutWidget4 = new QWidget(splitter);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        sbxThreshold = new QSpinBox(layoutWidget4);
        sbxThreshold->setObjectName(QStringLiteral("sbxThreshold"));
        sbxThreshold->setMaximum(65536);

        horizontalLayout_3->addWidget(sbxThreshold);

        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        sbxDelayTime = new QSpinBox(layoutWidget4);
        sbxDelayTime->setObjectName(QStringLiteral("sbxDelayTime"));
        sbxDelayTime->setMaximum(65536);

        horizontalLayout_3->addWidget(sbxDelayTime);

        splitter->addWidget(layoutWidget4);

        retranslateUi(AddDetectorDialog);

        QMetaObject::connectSlotsByName(AddDetectorDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDetectorDialog)
    {
        AddDetectorDialog->setWindowTitle(QApplication::translate("AddDetectorDialog", "\345\242\236\345\212\240\350\247\246\345\217\221\345\231\250", 0));
        ptnCancel->setText(QApplication::translate("AddDetectorDialog", "\345\217\226\346\266\210", 0));
        ptnAdd->setText(QApplication::translate("AddDetectorDialog", "\345\242\236\345\212\240", 0));
        label->setText(QApplication::translate("AddDetectorDialog", "\350\247\246\345\217\221\345\231\250\347\274\226\345\217\267*   \357\274\232", 0));
        label_8->setText(QApplication::translate("AddDetectorDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220\357\274\214\345\233\272\345\256\232\351\225\2773\344\275\215", 0));
        label_2->setText(QApplication::translate("AddDetectorDialog", "\350\247\246\345\217\221\345\231\250\344\277\241\351\201\223\347\274\226\345\217\267*\357\274\232", 0));
        label_7->setText(QApplication::translate("AddDetectorDialog", "\347\224\2610-9\347\232\204\346\225\260\345\255\227\347\273\204\346\210\220", 0));
        label_3->setText(QApplication::translate("AddDetectorDialog", "\345\244\207          \346\263\250\357\274\232", 0));
        label_6->setText(QApplication::translate("AddDetectorDialog", "\346\230\257\345\220\246\351\207\215\345\220\257\350\247\246\345\217\221\345\231\250\357\274\232", 0));
        cmbReset->clear();
        cmbReset->insertItems(0, QStringList()
         << QApplication::translate("AddDetectorDialog", "\346\230\257", 0)
         << QApplication::translate("AddDetectorDialog", "\345\220\246", 0)
        );
        label_5->setText(QApplication::translate("AddDetectorDialog", "\351\230\200    \345\200\274\357\274\232", 0));
        label_4->setText(QApplication::translate("AddDetectorDialog", "\345\273\266\351\225\277\346\227\266\351\227\264\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class AddDetectorDialog: public Ui_AddDetectorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDETECTORDIALOG_H
