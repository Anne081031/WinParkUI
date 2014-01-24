/********************************************************************************
** Form generated from reading UI file 'qserialframe.ui'
**
** Created: Wed Jan 8 11:53:15 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSERIALFRAME_H
#define UI_QSERIALFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QSerialFrame
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spEnterCan;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *chkEnterSense0;
    QPushButton *btn0;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *chkEnterCard;
    QSpinBox *spEnterCard;
    QPushButton *btn1;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *chkEnterSense1;
    QPushButton *btn2;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spLeaveCan;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *chkLeaveSense0;
    QPushButton *btn3;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *chkLeaveCard;
    QSpinBox *spLeaveCard;
    QPushButton *btn4;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *chkLeaveSense1;
    QPushButton *btn5;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QSpinBox *spTimer;
    QLabel *label_6;
    QPushButton *btnTimer;

    void setupUi(QFrame *QSerialFrame)
    {
        if (QSerialFrame->objectName().isEmpty())
            QSerialFrame->setObjectName(QString::fromUtf8("QSerialFrame"));
        QSerialFrame->resize(492, 209);
        QSerialFrame->setMinimumSize(QSize(492, 209));
        QSerialFrame->setMaximumSize(QSize(492, 209));
        QSerialFrame->setFrameShape(QFrame::StyledPanel);
        QSerialFrame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(QSerialFrame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 231, 151));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 22, 210, 117));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spEnterCan = new QSpinBox(layoutWidget);
        spEnterCan->setObjectName(QString::fromUtf8("spEnterCan"));
        spEnterCan->setMinimum(1);
        spEnterCan->setValue(1);

        horizontalLayout->addWidget(spEnterCan);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        chkEnterSense0 = new QCheckBox(layoutWidget);
        chkEnterSense0->setObjectName(QString::fromUtf8("chkEnterSense0"));

        horizontalLayout_3->addWidget(chkEnterSense0);

        btn0 = new QPushButton(layoutWidget);
        btn0->setObjectName(QString::fromUtf8("btn0"));

        horizontalLayout_3->addWidget(btn0);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        chkEnterCard = new QCheckBox(layoutWidget);
        chkEnterCard->setObjectName(QString::fromUtf8("chkEnterCard"));

        horizontalLayout_4->addWidget(chkEnterCard);

        spEnterCard = new QSpinBox(layoutWidget);
        spEnterCard->setObjectName(QString::fromUtf8("spEnterCard"));
        spEnterCard->setMaximum(16777215);

        horizontalLayout_4->addWidget(spEnterCard);

        btn1 = new QPushButton(layoutWidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));

        horizontalLayout_4->addWidget(btn1);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        chkEnterSense1 = new QCheckBox(layoutWidget);
        chkEnterSense1->setObjectName(QString::fromUtf8("chkEnterSense1"));

        horizontalLayout_6->addWidget(chkEnterSense1);

        btn2 = new QPushButton(layoutWidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));

        horizontalLayout_6->addWidget(btn2);


        verticalLayout->addLayout(horizontalLayout_6);

        groupBox_2 = new QGroupBox(QSerialFrame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(250, 10, 231, 151));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 22, 210, 117));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spLeaveCan = new QSpinBox(layoutWidget1);
        spLeaveCan->setObjectName(QString::fromUtf8("spLeaveCan"));
        spLeaveCan->setMinimum(2);
        spLeaveCan->setMaximum(100);
        spLeaveCan->setValue(2);

        horizontalLayout_2->addWidget(spLeaveCan);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        chkLeaveSense0 = new QCheckBox(layoutWidget1);
        chkLeaveSense0->setObjectName(QString::fromUtf8("chkLeaveSense0"));

        horizontalLayout_7->addWidget(chkLeaveSense0);

        btn3 = new QPushButton(layoutWidget1);
        btn3->setObjectName(QString::fromUtf8("btn3"));

        horizontalLayout_7->addWidget(btn3);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        chkLeaveCard = new QCheckBox(layoutWidget1);
        chkLeaveCard->setObjectName(QString::fromUtf8("chkLeaveCard"));

        horizontalLayout_5->addWidget(chkLeaveCard);

        spLeaveCard = new QSpinBox(layoutWidget1);
        spLeaveCard->setObjectName(QString::fromUtf8("spLeaveCard"));
        spLeaveCard->setMaximum(16777215);

        horizontalLayout_5->addWidget(spLeaveCard);

        btn4 = new QPushButton(layoutWidget1);
        btn4->setObjectName(QString::fromUtf8("btn4"));

        horizontalLayout_5->addWidget(btn4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        chkLeaveSense1 = new QCheckBox(layoutWidget1);
        chkLeaveSense1->setObjectName(QString::fromUtf8("chkLeaveSense1"));

        horizontalLayout_10->addWidget(chkLeaveSense1);

        btn5 = new QPushButton(layoutWidget1);
        btn5->setObjectName(QString::fromUtf8("btn5"));

        horizontalLayout_10->addWidget(btn5);


        verticalLayout_2->addLayout(horizontalLayout_10);

        layoutWidget2 = new QWidget(QSerialFrame);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 170, 471, 25));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_8->addWidget(label_5);

        spTimer = new QSpinBox(layoutWidget2);
        spTimer->setObjectName(QString::fromUtf8("spTimer"));
        spTimer->setMinimum(1);
        spTimer->setMaximum(999999999);
        spTimer->setValue(2000);

        horizontalLayout_8->addWidget(spTimer);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        btnTimer = new QPushButton(layoutWidget2);
        btnTimer->setObjectName(QString::fromUtf8("btnTimer"));

        horizontalLayout_8->addWidget(btnTimer);


        retranslateUi(QSerialFrame);

        QMetaObject::connectSlotsByName(QSerialFrame);
    } // setupUi

    void retranslateUi(QFrame *QSerialFrame)
    {
        QSerialFrame->setWindowTitle(QApplication::translate("QSerialFrame", "\344\270\262\345\217\243\346\250\241\346\213\237\347\250\213\345\272\217", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QSerialFrame", "\345\205\245\345\217\243", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QSerialFrame", "CAN\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        chkEnterSense0->setText(QApplication::translate("QSerialFrame", "\345\234\260\346\204\237\345\221\275\344\273\244", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn0->setStatusTip(QApplication::translate("QSerialFrame", "0", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn0->setText(QApplication::translate("QSerialFrame", "\350\275\246\345\205\245", 0, QApplication::UnicodeUTF8));
        chkEnterCard->setText(QApplication::translate("QSerialFrame", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn1->setStatusTip(QApplication::translate("QSerialFrame", "1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn1->setText(QApplication::translate("QSerialFrame", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        chkEnterSense1->setText(QApplication::translate("QSerialFrame", "\345\234\260\346\204\237\345\221\275\344\273\244", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn2->setStatusTip(QApplication::translate("QSerialFrame", "2", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn2->setText(QApplication::translate("QSerialFrame", "\350\275\246\345\207\272", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QSerialFrame", "\345\207\272\345\217\243", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QSerialFrame", "CAN\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        chkLeaveSense0->setText(QApplication::translate("QSerialFrame", "\345\234\260\346\204\237\345\221\275\344\273\244", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn3->setStatusTip(QApplication::translate("QSerialFrame", "3", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn3->setText(QApplication::translate("QSerialFrame", "\350\275\246\345\205\245", 0, QApplication::UnicodeUTF8));
        chkLeaveCard->setText(QApplication::translate("QSerialFrame", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn4->setStatusTip(QApplication::translate("QSerialFrame", "4", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn4->setText(QApplication::translate("QSerialFrame", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        chkLeaveSense1->setText(QApplication::translate("QSerialFrame", "\345\234\260\346\204\237\345\221\275\344\273\244", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btn5->setStatusTip(QApplication::translate("QSerialFrame", "5", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btn5->setText(QApplication::translate("QSerialFrame", "\350\275\246\345\207\272", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QSerialFrame", "\345\256\232\346\227\266\345\217\221\351\200\201\351\227\264\351\232\224", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QSerialFrame", "ms", 0, QApplication::UnicodeUTF8));
        btnTimer->setText(QApplication::translate("QSerialFrame", "\345\220\257\347\224\250", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QSerialFrame: public Ui_QSerialFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSERIALFRAME_H
