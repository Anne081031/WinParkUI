/********************************************************************************
** Form generated from reading UI file 'cdlgconfig.ui'
**
** Created: Thu Aug 29 12:14:43 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDLGCONFIG_H
#define UI_CDLGCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgConfig
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbxUIType;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnOk;
    QPushButton *btnClose;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *cbxVideoType;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *spPlateWay;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *edtIpcIP;
    QCheckBox *chxMainStream;
    QCheckBox *chxVideoCapture;

    void setupUi(QDialog *CDlgConfig)
    {
        if (CDlgConfig->objectName().isEmpty())
            CDlgConfig->setObjectName(QString::fromUtf8("CDlgConfig"));
        CDlgConfig->resize(191, 294);
        CDlgConfig->setMinimumSize(QSize(191, 294));
        CDlgConfig->setMaximumSize(QSize(191, 294));
        layoutWidget = new QWidget(CDlgConfig);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(23, 20, 151, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cbxUIType = new QComboBox(layoutWidget);
        cbxUIType->setObjectName(QString::fromUtf8("cbxUIType"));

        horizontalLayout->addWidget(cbxUIType);

        layoutWidget1 = new QWidget(CDlgConfig);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 260, 158, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnOk = new QPushButton(layoutWidget1);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout_2->addWidget(btnOk);

        btnClose = new QPushButton(layoutWidget1);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout_2->addWidget(btnClose);

        layoutWidget2 = new QWidget(CDlgConfig);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(22, 49, 151, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        cbxVideoType = new QComboBox(layoutWidget2);
        cbxVideoType->setObjectName(QString::fromUtf8("cbxVideoType"));

        horizontalLayout_3->addWidget(cbxVideoType);

        layoutWidget3 = new QWidget(CDlgConfig);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(22, 77, 150, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        spPlateWay = new QSpinBox(layoutWidget3);
        spPlateWay->setObjectName(QString::fromUtf8("spPlateWay"));
        spPlateWay->setMinimum(1);
        spPlateWay->setMaximum(4);
        spPlateWay->setValue(1);

        horizontalLayout_4->addWidget(spPlateWay);

        layoutWidget4 = new QWidget(CDlgConfig);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(22, 104, 151, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        edtIpcIP = new QLineEdit(layoutWidget4);
        edtIpcIP->setObjectName(QString::fromUtf8("edtIpcIP"));

        horizontalLayout_5->addWidget(edtIpcIP);

        chxMainStream = new QCheckBox(CDlgConfig);
        chxMainStream->setObjectName(QString::fromUtf8("chxMainStream"));
        chxMainStream->setGeometry(QRect(22, 132, 151, 16));
        chxVideoCapture = new QCheckBox(CDlgConfig);
        chxVideoCapture->setObjectName(QString::fromUtf8("chxVideoCapture"));
        chxVideoCapture->setGeometry(QRect(22, 150, 151, 16));

        retranslateUi(CDlgConfig);

        QMetaObject::connectSlotsByName(CDlgConfig);
    } // setupUi

    void retranslateUi(QDialog *CDlgConfig)
    {
        CDlgConfig->setWindowTitle(QApplication::translate("CDlgConfig", "\345\217\202\346\225\260\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDlgConfig", "\344\270\273\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        btnOk->setText(QApplication::translate("CDlgConfig", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("CDlgConfig", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CDlgConfig", "\350\257\206\345\210\253\346\272\220", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CDlgConfig", "\350\275\246\347\211\214\350\267\257\346\225\260", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CDlgConfig", "\347\275\221\347\273\234\347\233\270\346\234\272IP", 0, QApplication::UnicodeUTF8));
        chxMainStream->setText(QApplication::translate("CDlgConfig", "\347\275\221\347\273\234\347\233\270\346\234\272\344\270\273\347\240\201\346\265\201", 0, QApplication::UnicodeUTF8));
        chxVideoCapture->setText(QApplication::translate("CDlgConfig", "\350\247\206\351\242\221\346\212\223\345\233\276\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDlgConfig: public Ui_CDlgConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDLGCONFIG_H
