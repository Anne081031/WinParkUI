/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Oct 31 16:57:29 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnSet;
    QPushButton *btnTestFlash;
    QPushButton *btnSaveSet;
    QPushButton *tbnReadSet;
    QLabel *label_3;
    QLabel *lblMode;
    QFrame *frame;
    QGroupBox *groupBox;
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QSpinBox *spinBox_2;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QCheckBox *checkBox;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_9;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QSpinBox *spinBox_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QSpinBox *spinBox_4;
    QGroupBox *groupBox_3;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_15;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBox_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(532, 453);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 167, 167);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 171, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/LOGO.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 10, 151, 16));
        btnSet = new QPushButton(centralWidget);
        btnSet->setObjectName(QString::fromUtf8("btnSet"));
        btnSet->setGeometry(QRect(370, 40, 75, 23));
        btnSet->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(72, 72, 72);"));
        btnTestFlash = new QPushButton(centralWidget);
        btnTestFlash->setObjectName(QString::fromUtf8("btnTestFlash"));
        btnTestFlash->setGeometry(QRect(450, 40, 75, 23));
        btnTestFlash->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(72, 72, 72);"));
        btnSaveSet = new QPushButton(centralWidget);
        btnSaveSet->setObjectName(QString::fromUtf8("btnSaveSet"));
        btnSaveSet->setGeometry(QRect(370, 70, 75, 23));
        btnSaveSet->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(72, 72, 72);"));
        tbnReadSet = new QPushButton(centralWidget);
        tbnReadSet->setObjectName(QString::fromUtf8("tbnReadSet"));
        tbnReadSet->setGeometry(QRect(450, 70, 75, 23));
        tbnReadSet->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(72, 72, 72);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 20, 161, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);
        lblMode = new QLabel(centralWidget);
        lblMode->setObjectName(QString::fromUtf8("lblMode"));
        lblMode->setGeometry(QRect(200, 70, 161, 16));
        lblMode->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lblMode->setAlignment(Qt::AlignCenter);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 120, 741, 361));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 118, 118);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 211, 231));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(90, 90, 90);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 10, 61, 21));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 40, 117, 142));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(widget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(widget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_7);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(32);

        horizontalLayout->addWidget(spinBox);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_8);

        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMaximum(32);

        horizontalLayout_2->addWidget(spinBox_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(310, 10, 211, 231));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(90, 90, 90);"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 10, 71, 21));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(40, 200, 71, 16));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 40, 117, 142));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_11 = new QRadioButton(widget1);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));

        verticalLayout_2->addWidget(radioButton_11);

        radioButton_12 = new QRadioButton(widget1);
        radioButton_12->setObjectName(QString::fromUtf8("radioButton_12"));

        verticalLayout_2->addWidget(radioButton_12);

        radioButton_10 = new QRadioButton(widget1);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));

        verticalLayout_2->addWidget(radioButton_10);

        radioButton_9 = new QRadioButton(widget1);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));

        verticalLayout_2->addWidget(radioButton_9);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_9);

        spinBox_3 = new QSpinBox(widget1);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMaximum(100);

        horizontalLayout_3->addWidget(spinBox_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_10 = new QLabel(widget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_10);

        spinBox_4 = new QSpinBox(widget1);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setMaximum(100);

        horizontalLayout_4->addWidget(spinBox_4);


        verticalLayout_3->addLayout(horizontalLayout_4);

        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 260, 511, 61));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(90, 90, 90);"));
        widget2 = new QWidget(groupBox_3);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 10, 491, 18));
        horizontalLayout_5 = new QHBoxLayout(widget2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_11);

        radioButton_13 = new QRadioButton(widget2);
        radioButton_13->setObjectName(QString::fromUtf8("radioButton_13"));

        horizontalLayout_5->addWidget(radioButton_13);

        radioButton_14 = new QRadioButton(widget2);
        radioButton_14->setObjectName(QString::fromUtf8("radioButton_14"));

        horizontalLayout_5->addWidget(radioButton_14);

        radioButton_15 = new QRadioButton(widget2);
        radioButton_15->setObjectName(QString::fromUtf8("radioButton_15"));

        horizontalLayout_5->addWidget(radioButton_15);

        widget3 = new QWidget(groupBox_3);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(10, 30, 491, 24));
        horizontalLayout_7 = new QHBoxLayout(widget3);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        checkBox_2 = new QCheckBox(widget3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_7->addWidget(checkBox_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_12 = new QLabel(widget3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(label_12);

        lineEdit = new QLineEdit(widget3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(56, 56, 56);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(lineEdit);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\231\272\350\203\275\350\241\245\345\205\211\347\201\257\347\263\273\347\273\237-\344\270\262\345\217\243:COM", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "http://www.foracctv.com/", 0, QApplication::UnicodeUTF8));
        btnSet->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        btnTestFlash->setText(QApplication::translate("MainWindow", "\350\257\225\351\227\252\345\205\263", 0, QApplication::UnicodeUTF8));
        btnSaveSet->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        tbnReadSet->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "LED\346\231\272\350\203\275\350\241\245\345\205\211\347\201\257", 0, QApplication::UnicodeUTF8));
        lblMode->setText(QString());
        groupBox->setTitle(QString());
        label_4->setText(QApplication::translate("MainWindow", "\345\271\263\351\227\252\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", "\350\241\245\345\205\211\347\201\257\345\274\272\345\272\246-\351\253\230", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindow", "\350\241\245\345\205\211\347\201\257\345\274\272\345\272\246-\350\276\203\351\253\230", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("MainWindow", "\350\241\245\345\205\211\347\201\257\345\274\272\345\272\246-\344\270\255", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("MainWindow", "\350\241\245\345\205\211\347\201\257\345\274\272\345\272\246-\344\275\216", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\351\225\277\345\272\246", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        label_5->setText(QApplication::translate("MainWindow", "\351\227\252\345\205\211\347\201\257\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "\345\237\272\347\241\200\344\272\256\345\272\246", 0, QApplication::UnicodeUTF8));
        radioButton_11->setText(QApplication::translate("MainWindow", "\351\227\252\345\205\211\347\201\257\345\274\272\345\272\246-\351\253\230", 0, QApplication::UnicodeUTF8));
        radioButton_12->setText(QApplication::translate("MainWindow", "\351\227\252\345\205\211\347\201\257\345\274\272\345\272\246-\350\276\203\351\253\230", 0, QApplication::UnicodeUTF8));
        radioButton_10->setText(QApplication::translate("MainWindow", "\351\227\252\345\205\211\347\201\257\345\274\272\345\272\246-\344\270\255", 0, QApplication::UnicodeUTF8));
        radioButton_9->setText(QApplication::translate("MainWindow", "\351\227\252\345\205\211\347\201\257\345\274\272\345\272\246-\344\275\216", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QString());
        label_11->setText(QApplication::translate("MainWindow", "\345\220\214\346\255\245\346\250\241\345\274\217\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        radioButton_13->setText(QApplication::translate("MainWindow", "\344\270\213\351\231\215\346\262\277\350\247\246\345\217\221", 0, QApplication::UnicodeUTF8));
        radioButton_14->setText(QApplication::translate("MainWindow", "\344\270\212\345\215\207\346\262\277\350\247\246\345\217\221", 0, QApplication::UnicodeUTF8));
        radioButton_15->setText(QApplication::translate("MainWindow", "\350\267\237\351\232\217\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("MainWindow", "\345\205\211\346\225\217\347\246\201\347\224\250", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
