/********************************************************************************
** Form generated from reading UI file 'syssetting.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSSETTING_H
#define UI_SYSSETTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSysSetting
{
public:
    QWidget *tabCommonSetting;
    QWidget *wgCommon;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QSpinBox *spinBox;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QGroupBox *groupBox_9;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QPushButton *btnCancel;
    QGroupBox *groupBox_6;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBox_2;
    QLabel *label_2;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_10;
    QCheckBox *checkBox_8;
    QGroupBox *groupBox_4;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QGroupBox *groupBox_8;
    QCheckBox *checkBox_7;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *btnCommonSave;
    QWidget *tabUseTimeLimit;
    QGroupBox *gbTimeLimit;
    QLabel *label_3;
    QPushButton *btnOK;
    QDateEdit *dateValid;
    QWidget *tabVideoModeSetting;
    QWidget *wgVideo;
    QPushButton *btnVideoModeSave;
    QGroupBox *groupBox_12;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QListWidget *listWidget;
    QCheckBox *chkStartVideo;
    QWidget *tabVehicleIDSetting;
    QWidget *wgVichle;
    QCheckBox *checkBox_9;
    QGroupBox *groupBox_13;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_15;
    QRadioButton *radioButton_24;
    QPushButton *btnVichle;
    QWidget *tabSpecialSetting;
    QWidget *wgSpecial;
    QGroupBox *groupBox_14;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QPushButton *btnSpecialSave;
    QGroupBox *groupBox_15;
    QCheckBox *checkBox_12;
    QGroupBox *groupBox_16;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_14;
    QGroupBox *groupBox_17;
    QCheckBox *checkBox_15;

    void setupUi(QTabWidget *CSysSetting)
    {
        if (CSysSetting->objectName().isEmpty())
            CSysSetting->setObjectName(QString::fromUtf8("CSysSetting"));
        CSysSetting->resize(795, 651);
        tabCommonSetting = new QWidget();
        tabCommonSetting->setObjectName(QString::fromUtf8("tabCommonSetting"));
        wgCommon = new QWidget(tabCommonSetting);
        wgCommon->setObjectName(QString::fromUtf8("wgCommon"));
        wgCommon->setGeometry(QRect(10, 20, 501, 361));
        groupBox_3 = new QGroupBox(wgCommon);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 110, 151, 61));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 128, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        groupBox_2 = new QGroupBox(wgCommon);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(170, 10, 131, 81));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 20, 89, 16));
        radioButton_3->setChecked(true);
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(10, 50, 89, 16));
        groupBox_9 = new QGroupBox(wgCommon);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(330, 110, 120, 131));
        checkBox_4 = new QCheckBox(groupBox_9);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(30, 100, 71, 16));
        checkBox_5 = new QCheckBox(groupBox_9);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(30, 30, 71, 16));
        checkBox_6 = new QCheckBox(groupBox_9);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(30, 60, 71, 16));
        btnCancel = new QPushButton(wgCommon);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(400, 310, 75, 23));
        groupBox_6 = new QGroupBox(wgCommon);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(630, 620, 120, 80));
        groupBox_7 = new QGroupBox(wgCommon);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 180, 151, 61));
        layoutWidget_2 = new QWidget(groupBox_7);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 128, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        spinBox_2 = new QSpinBox(layoutWidget_2);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        horizontalLayout_2->addWidget(spinBox_2);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        groupBox_5 = new QGroupBox(wgCommon);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(330, 10, 141, 81));
        pushButton_3 = new QPushButton(groupBox_5);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 50, 75, 23));
        groupBox_10 = new QGroupBox(wgCommon);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(190, 260, 171, 71));
        checkBox_8 = new QCheckBox(groupBox_10);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setGeometry(QRect(10, 30, 131, 16));
        groupBox_4 = new QGroupBox(wgCommon);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(190, 110, 120, 131));
        checkBox = new QCheckBox(groupBox_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 30, 71, 16));
        checkBox_2 = new QCheckBox(groupBox_4);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 60, 71, 16));
        checkBox_3 = new QCheckBox(groupBox_4);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(20, 100, 71, 16));
        groupBox_8 = new QGroupBox(wgCommon);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 260, 151, 71));
        checkBox_7 = new QCheckBox(groupBox_8);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(20, 30, 101, 16));
        groupBox = new QGroupBox(wgCommon);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 131, 81));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(10, 20, 111, 16));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 50, 111, 16));
        btnCommonSave = new QPushButton(wgCommon);
        btnCommonSave->setObjectName(QString::fromUtf8("btnCommonSave"));
        btnCommonSave->setGeometry(QRect(400, 280, 75, 23));
        CSysSetting->addTab(tabCommonSetting, QString());
        tabUseTimeLimit = new QWidget();
        tabUseTimeLimit->setObjectName(QString::fromUtf8("tabUseTimeLimit"));
        gbTimeLimit = new QGroupBox(tabUseTimeLimit);
        gbTimeLimit->setObjectName(QString::fromUtf8("gbTimeLimit"));
        gbTimeLimit->setGeometry(QRect(20, 20, 511, 171));
        label_3 = new QLabel(gbTimeLimit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 30, 471, 91));
        label_3->setTextFormat(Qt::PlainText);
        label_3->setTextInteractionFlags(Qt::NoTextInteraction);
        btnOK = new QPushButton(gbTimeLimit);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setGeometry(QRect(400, 130, 75, 23));
        dateValid = new QDateEdit(gbTimeLimit);
        dateValid->setObjectName(QString::fromUtf8("dateValid"));
        dateValid->setGeometry(QRect(360, 90, 110, 22));
        CSysSetting->addTab(tabUseTimeLimit, QString());
        tabVideoModeSetting = new QWidget();
        tabVideoModeSetting->setObjectName(QString::fromUtf8("tabVideoModeSetting"));
        wgVideo = new QWidget(tabVideoModeSetting);
        wgVideo->setObjectName(QString::fromUtf8("wgVideo"));
        wgVideo->setGeometry(QRect(0, 0, 541, 201));
        btnVideoModeSave = new QPushButton(wgVideo);
        btnVideoModeSave->setObjectName(QString::fromUtf8("btnVideoModeSave"));
        btnVideoModeSave->setGeometry(QRect(440, 150, 75, 23));
        groupBox_12 = new QGroupBox(wgVideo);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setGeometry(QRect(10, 10, 131, 161));
        radioButton_5 = new QRadioButton(groupBox_12);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(30, 30, 89, 16));
        radioButton_5->setChecked(true);
        radioButton_6 = new QRadioButton(groupBox_12);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(30, 70, 89, 16));
        radioButton_7 = new QRadioButton(groupBox_12);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setGeometry(QRect(30, 110, 89, 16));
        listWidget = new QListWidget(wgVideo);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(180, 20, 201, 151));
        chkStartVideo = new QCheckBox(wgVideo);
        chkStartVideo->setObjectName(QString::fromUtf8("chkStartVideo"));
        chkStartVideo->setGeometry(QRect(400, 20, 81, 16));
        CSysSetting->addTab(tabVideoModeSetting, QString());
        tabVehicleIDSetting = new QWidget();
        tabVehicleIDSetting->setObjectName(QString::fromUtf8("tabVehicleIDSetting"));
        wgVichle = new QWidget(tabVehicleIDSetting);
        wgVichle->setObjectName(QString::fromUtf8("wgVichle"));
        wgVichle->setGeometry(QRect(50, 60, 341, 351));
        checkBox_9 = new QCheckBox(wgVichle);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setGeometry(QRect(20, 10, 141, 16));
        groupBox_13 = new QGroupBox(wgVichle);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setGeometry(QRect(20, 40, 151, 291));
        radioButton_8 = new QRadioButton(groupBox_13);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setGeometry(QRect(20, 20, 89, 16));
        radioButton_9 = new QRadioButton(groupBox_13);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        radioButton_9->setGeometry(QRect(20, 50, 89, 16));
        radioButton_10 = new QRadioButton(groupBox_13);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        radioButton_10->setGeometry(QRect(20, 110, 89, 16));
        radioButton_11 = new QRadioButton(groupBox_13);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));
        radioButton_11->setGeometry(QRect(20, 80, 89, 16));
        radioButton_12 = new QRadioButton(groupBox_13);
        radioButton_12->setObjectName(QString::fromUtf8("radioButton_12"));
        radioButton_12->setGeometry(QRect(20, 200, 101, 16));
        radioButton_13 = new QRadioButton(groupBox_13);
        radioButton_13->setObjectName(QString::fromUtf8("radioButton_13"));
        radioButton_13->setGeometry(QRect(20, 230, 91, 16));
        radioButton_14 = new QRadioButton(groupBox_13);
        radioButton_14->setObjectName(QString::fromUtf8("radioButton_14"));
        radioButton_14->setGeometry(QRect(20, 170, 89, 16));
        radioButton_15 = new QRadioButton(groupBox_13);
        radioButton_15->setObjectName(QString::fromUtf8("radioButton_15"));
        radioButton_15->setGeometry(QRect(20, 140, 89, 16));
        radioButton_24 = new QRadioButton(groupBox_13);
        radioButton_24->setObjectName(QString::fromUtf8("radioButton_24"));
        radioButton_24->setGeometry(QRect(20, 260, 89, 16));
        btnVichle = new QPushButton(wgVichle);
        btnVichle->setObjectName(QString::fromUtf8("btnVichle"));
        btnVichle->setGeometry(QRect(190, 300, 81, 31));
        CSysSetting->addTab(tabVehicleIDSetting, QString());
        tabSpecialSetting = new QWidget();
        tabSpecialSetting->setObjectName(QString::fromUtf8("tabSpecialSetting"));
        wgSpecial = new QWidget(tabSpecialSetting);
        wgSpecial->setObjectName(QString::fromUtf8("wgSpecial"));
        wgSpecial->setGeometry(QRect(30, 50, 631, 231));
        groupBox_14 = new QGroupBox(wgSpecial);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setGeometry(QRect(20, 20, 181, 80));
        checkBox_10 = new QCheckBox(groupBox_14);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        checkBox_10->setGeometry(QRect(10, 20, 161, 16));
        checkBox_11 = new QCheckBox(groupBox_14);
        checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));
        checkBox_11->setGeometry(QRect(10, 50, 161, 16));
        btnSpecialSave = new QPushButton(wgSpecial);
        btnSpecialSave->setObjectName(QString::fromUtf8("btnSpecialSave"));
        btnSpecialSave->setGeometry(QRect(530, 180, 75, 23));
        groupBox_15 = new QGroupBox(wgSpecial);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setGeometry(QRect(20, 120, 181, 80));
        checkBox_12 = new QCheckBox(groupBox_15);
        checkBox_12->setObjectName(QString::fromUtf8("checkBox_12"));
        checkBox_12->setGeometry(QRect(20, 30, 161, 16));
        groupBox_16 = new QGroupBox(wgSpecial);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        groupBox_16->setGeometry(QRect(230, 20, 271, 80));
        checkBox_13 = new QCheckBox(groupBox_16);
        checkBox_13->setObjectName(QString::fromUtf8("checkBox_13"));
        checkBox_13->setGeometry(QRect(10, 50, 161, 16));
        checkBox_14 = new QCheckBox(groupBox_16);
        checkBox_14->setObjectName(QString::fromUtf8("checkBox_14"));
        checkBox_14->setGeometry(QRect(10, 20, 161, 16));
        groupBox_17 = new QGroupBox(wgSpecial);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        groupBox_17->setGeometry(QRect(230, 120, 271, 80));
        checkBox_15 = new QCheckBox(groupBox_17);
        checkBox_15->setObjectName(QString::fromUtf8("checkBox_15"));
        checkBox_15->setGeometry(QRect(10, 30, 161, 16));
        CSysSetting->addTab(tabSpecialSetting, QString());

        retranslateUi(CSysSetting);

        CSysSetting->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CSysSetting);
    } // setupUi

    void retranslateUi(QTabWidget *CSysSetting)
    {
        CSysSetting->setWindowTitle(QApplication::translate("CSysSetting", "\347\263\273\347\273\237\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("CSysSetting", "\346\234\210\347\247\237\345\215\241\346\227\266\351\227\264\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CSysSetting", "\345\211\251\344\275\231", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CSysSetting", "\345\244\251\346\227\266\346\217\220\351\206\222", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("CSysSetting", "\345\267\245\344\275\234\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("CSysSetting", "\344\270\273\346\234\272\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("CSysSetting", "\344\273\216\346\234\272\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("CSysSetting", "\347\246\273\345\274\200\346\227\266\351\234\200\350\246\201\347\241\256\350\256\244\346\224\276\350\241\214", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("CSysSetting", "\350\256\241\346\227\266\345\215\241", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("CSysSetting", "\346\234\210\347\247\237\345\215\241", 0, QApplication::UnicodeUTF8));
        checkBox_6->setText(QApplication::translate("CSysSetting", "\345\202\250\345\200\274\345\215\241", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CSysSetting", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("CSysSetting", "GroupBox", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("CSysSetting", "\345\202\250\345\200\274\345\215\241\344\275\231\351\242\235\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CSysSetting", "\345\211\251\344\275\231", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CSysSetting", "\345\205\203\346\227\266\346\217\220\351\206\222", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("CSysSetting", "\346\240\274\345\274\217\345\214\226\350\204\261\346\234\272\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("CSysSetting", "\345\274\200\345\247\213\346\240\274\345\274\217\345\214\226", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("CSysSetting", "\345\274\272\350\241\214\345\274\200\351\227\270", 0, QApplication::UnicodeUTF8));
        checkBox_8->setText(QApplication::translate("CSysSetting", "\347\246\201\346\255\242\351\274\240\346\240\207\347\202\271\345\207\273\345\274\200\351\227\270", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("CSysSetting", "\350\277\233\345\205\245\346\227\266\351\234\200\350\246\201\347\241\256\350\256\244\346\224\276\350\241\214", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("CSysSetting", "\346\234\210\347\247\237\345\215\241", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("CSysSetting", "\345\202\250\345\200\274\345\215\241", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("CSysSetting", "\350\256\241\346\227\266\345\215\241", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("CSysSetting", "\346\234\210\347\247\237\345\215\241\345\267\245\344\275\234\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        checkBox_7->setText(QApplication::translate("CSysSetting", "\345\205\201\350\256\270\345\244\232\350\277\233\345\244\232\345\207\272", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CSysSetting", "\350\264\271\347\224\250\350\256\241\347\256\227\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("CSysSetting", "\344\275\277\347\224\250\350\207\252\345\256\232\344\271\211\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("CSysSetting", "\344\275\277\347\224\250\345\244\226\346\216\245DLL\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        btnCommonSave->setText(QApplication::translate("CSysSetting", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        CSysSetting->setTabText(CSysSetting->indexOf(tabCommonSetting), QApplication::translate("CSysSetting", "\345\270\270\347\224\250\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        gbTimeLimit->setTitle(QApplication::translate("CSysSetting", "\350\275\257\344\273\266\346\234\211\346\225\210\346\234\237\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CSysSetting", "\345\275\223\350\275\257\344\273\266\350\266\205\350\277\207\346\255\244\345\244\204\346\234\211\346\225\210\350\256\276\347\275\256\347\232\204\346\227\266\351\227\264\345\220\216\345\260\206\344\270\215\350\203\275\346\255\243\345\270\270\344\275\277\347\224\250\357\274\214\350\213\245\351\235\236\347\211\271\346\256\212\345\216\237\350\257\267\345\234\250\346\255\244\345\244\204\350\256\276\347\275\256\350\276\203\345\244\247\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        btnOK->setText(QApplication::translate("CSysSetting", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        CSysSetting->setTabText(CSysSetting->indexOf(tabUseTimeLimit), QApplication::translate("CSysSetting", "\344\275\277\347\224\250\346\227\266\351\227\264\351\231\220\345\210\266", 0, QApplication::UnicodeUTF8));
        btnVideoModeSave->setText(QApplication::translate("CSysSetting", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        groupBox_12->setTitle(QApplication::translate("CSysSetting", "\350\247\206\351\242\221\346\225\260\347\233\256\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        radioButton_5->setText(QApplication::translate("CSysSetting", "2\350\267\257", 0, QApplication::UnicodeUTF8));
        radioButton_6->setText(QApplication::translate("CSysSetting", "3\350\267\257", 0, QApplication::UnicodeUTF8));
        radioButton_7->setText(QApplication::translate("CSysSetting", "4\350\267\257", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("CSysSetting", "RGB24  320 X 240", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("CSysSetting", "RGB24  640 X 480", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("CSysSetting", "RGB24  720 X 288", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("CSysSetting", "RGB24  720 X 576", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        chkStartVideo->setText(QApplication::translate("CSysSetting", "\345\220\257\345\212\250\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
        CSysSetting->setTabText(CSysSetting->indexOf(tabVideoModeSetting), QApplication::translate("CSysSetting", "\350\247\206\351\242\221\346\250\241\345\274\217\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        checkBox_9->setText(QApplication::translate("CSysSetting", "\345\220\257\345\212\250\350\275\246\347\211\214\350\257\206\345\210\253\345\212\237\350\203\275", 0, QApplication::UnicodeUTF8));
        groupBox_13->setTitle(QApplication::translate("CSysSetting", "\350\257\206\345\210\253\347\262\276\345\272\246\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        radioButton_8->setText(QApplication::translate("CSysSetting", "\344\270\215\345\205\201\350\256\270\350\257\257\345\267\256", 0, QApplication::UnicodeUTF8));
        radioButton_9->setText(QApplication::translate("CSysSetting", "\345\205\201\350\256\270\350\257\257\345\267\256\344\270\200\344\275\215", 0, QApplication::UnicodeUTF8));
        radioButton_10->setText(QApplication::translate("CSysSetting", "\345\205\201\350\256\270\350\257\257\345\267\256\344\270\211\344\275\215", 0, QApplication::UnicodeUTF8));
        radioButton_11->setText(QApplication::translate("CSysSetting", "\345\205\201\350\256\270\350\257\257\345\267\256\344\272\214\344\275\215", 0, QApplication::UnicodeUTF8));
        radioButton_12->setText(QApplication::translate("CSysSetting", "\345\205\201\350\256\270\350\257\257\345\267\256\345\205\255\344\275\215", 0, QApplication::UnicodeUTF8));
        radioButton_13->setText(QApplication::translate("CSysSetting", "\345\205\201\350\256\270\350\257\257\345\267\256\344\270\203\344\275\215", 0, QApplication::UnicodeUTF8));
        radioButton_14->setText(QApplication::translate("CSysSetting", "\345\205\201\350\256\270\350\257\257\345\267\256\344\272\224\344\275\215", 0, QApplication::UnicodeUTF8));
        radioButton_15->setText(QApplication::translate("CSysSetting", "\345\205\201\350\256\270\350\257\257\345\267\256\345\233\233\344\275\215", 0, QApplication::UnicodeUTF8));
        radioButton_24->setText(QApplication::translate("CSysSetting", "\345\205\201\350\256\270\350\257\257\345\267\256\345\205\253\344\275\215", 0, QApplication::UnicodeUTF8));
        btnVichle->setText(QApplication::translate("CSysSetting", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        CSysSetting->setTabText(CSysSetting->indexOf(tabVehicleIDSetting), QApplication::translate("CSysSetting", "\350\275\246\347\211\214\350\207\252\345\212\250\350\257\206\345\210\253\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBox_14->setTitle(QApplication::translate("CSysSetting", "\350\275\246\344\275\215\350\256\241\347\256\227", 0, QApplication::UnicodeUTF8));
        checkBox_10->setText(QApplication::translate("CSysSetting", "\346\234\210\347\247\237\345\215\241\344\270\215\350\256\241\345\205\245\350\275\246\344\275\215", 0, QApplication::UnicodeUTF8));
        checkBox_11->setText(QApplication::translate("CSysSetting", "\345\202\250\345\200\274\345\215\241\344\270\215\350\256\241\345\205\245\350\275\246\344\275\215", 0, QApplication::UnicodeUTF8));
        btnSpecialSave->setText(QApplication::translate("CSysSetting", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        groupBox_15->setTitle(QApplication::translate("CSysSetting", "\346\225\260\346\215\256\345\220\214\346\255\245\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        checkBox_12->setText(QApplication::translate("CSysSetting", "\344\270\215\345\220\214\346\255\245\350\204\261\346\234\272\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        groupBox_16->setTitle(QApplication::translate("CSysSetting", "\344\270\255\345\277\203\346\216\247\345\210\266\345\231\250\345\210\267\345\215\241\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        checkBox_13->setText(QApplication::translate("CSysSetting", "\345\205\201\350\256\270\344\273\243\346\233\277\345\207\272\345\234\272\345\215\241\344\275\277\347\224\250", 0, QApplication::UnicodeUTF8));
        checkBox_14->setText(QApplication::translate("CSysSetting", "\345\205\201\350\256\270\344\273\243\346\233\277\345\205\245\345\234\272\345\210\267\345\215\241\344\275\277\347\224\250", 0, QApplication::UnicodeUTF8));
        groupBox_17->setTitle(QApplication::translate("CSysSetting", "\345\202\250\345\200\274\345\215\241\350\256\241\350\264\271", 0, QApplication::UnicodeUTF8));
        checkBox_15->setText(QApplication::translate("CSysSetting", "\345\202\250\345\200\274\345\215\24124\345\260\217\346\227\266\345\206\205\344\270\215\351\207\215\345\244\215\344\275\277\347\224\250", 0, QApplication::UnicodeUTF8));
        CSysSetting->setTabText(CSysSetting->indexOf(tabSpecialSetting), QApplication::translate("CSysSetting", "\347\211\271\346\256\212\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CSysSetting: public Ui_CSysSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSSETTING_H
