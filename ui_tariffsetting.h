/********************************************************************************
** Form generated from reading UI file 'tariffsetting.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARIFFSETTING_H
#define UI_TARIFFSETTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CTariffSetting
{
public:
    QWidget *wgTime;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbxName;
    QLabel *label_2;
    QComboBox *cbxType;
    QSpinBox *spLimitTime;
    QLabel *label_3;
    QGroupBox *groupBox;
    QGroupBox *gbInner;
    QGroupBox *gbInnerFirst;
    QLabel *label_15;
    QSpinBox *rule4MinInner;
    QLabel *label_16;
    QSpinBox *rule4FootInner;
    QLabel *label_17;
    QLabel *label_21;
    QSpinBox *rule6MinInner;
    QLabel *label_22;
    QSpinBox *rule6FootInner;
    QLabel *label_23;
    QSpinBox *rule3MinInner;
    QLabel *label_13;
    QSpinBox *rule3FootInner;
    QLabel *label_14;
    QLabel *label_12;
    QSpinBox *rule2MinInner;
    QLabel *label_10;
    QSpinBox *rule2FootInner;
    QLabel *label_11;
    QLabel *label_9;
    QSpinBox *rule1MinInner;
    QLabel *label_7;
    QLabel *label_6;
    QSpinBox *rule1FootInner;
    QLabel *label_8;
    QLabel *label_18;
    QSpinBox *rule5MinInner;
    QLabel *label_19;
    QSpinBox *rule5FootInner;
    QLabel *label_20;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_28;
    QSpinBox *perMinInner;
    QLabel *label_29;
    QSpinBox *perMinFootInner;
    QLabel *label_30;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_63;
    QSpinBox *spLimitFootInner;
    QLabel *label_64;
    QGroupBox *gbNoSecQuota1;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_31;
    QSpinBox *perMinNoSectionLimit;
    QLabel *label_32;
    QSpinBox *perMinFootNoSection;
    QLabel *label_33;
    QGroupBox *gbNoSecQuota2;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_34;
    QSpinBox *perMinNoSectionFirst;
    QLabel *label_35;
    QGroupBox *gbTimeSection;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_11;
    QTimeEdit *tdtSection1;
    QLabel *label_27;
    QTimeEdit *tdtSection2;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *rbtnNoSection;
    QRadioButton *rbtnSection;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *spNoFullTime;
    QLabel *label_5;
    QGroupBox *gbOuter;
    QGroupBox *gbOuterFirst;
    QLabel *label_39;
    QSpinBox *rule1MinOuter;
    QLabel *label_40;
    QSpinBox *rule1FootOuter;
    QLabel *label_41;
    QLabel *label_42;
    QSpinBox *rule2MinOuter;
    QLabel *label_43;
    QSpinBox *rule2FootOuter;
    QLabel *label_44;
    QLabel *label_45;
    QSpinBox *rule3MinOuter;
    QLabel *label_46;
    QSpinBox *rule3FootOuter;
    QLabel *label_47;
    QLabel *label_48;
    QSpinBox *rule4MinOuter;
    QLabel *label_49;
    QSpinBox *rule4FootOuter;
    QLabel *label_50;
    QLabel *label_51;
    QSpinBox *rule5MinOuter;
    QLabel *label_52;
    QSpinBox *rule5FootOuter;
    QLabel *label_53;
    QLabel *label_54;
    QSpinBox *rule6MinOuter;
    QLabel *label_55;
    QSpinBox *rule6FootOuter;
    QLabel *label_56;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_60;
    QSpinBox *perMinOuter;
    QLabel *label_61;
    QSpinBox *perMinFootOuter;
    QLabel *label_62;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_65;
    QSpinBox *spLimitFootOuter;
    QLabel *label_66;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout;
    QPushButton *btnDownload;
    QPushButton *btnSave;
    QPushButton *btnSaveExit;
    QGroupBox *groupBox_2;
    QWidget *wgRate;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_36;
    QDateTimeEdit *dtStart;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_37;
    QDateTimeEdit *dtEnd;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_38;
    QComboBox *cbxStandard;
    QPushButton *btnCalculate;
    QLabel *lblTitle;
    QLabel *lblClose;

    void setupUi(QFrame *CTariffSetting)
    {
        if (CTariffSetting->objectName().isEmpty())
            CTariffSetting->setObjectName(QString::fromUtf8("CTariffSetting"));
        CTariffSetting->resize(730, 695);
        CTariffSetting->setStyleSheet(QString::fromUtf8("background-image:url(D:/WinParkUI/debug/Image/NewIcon/CommonMiddleBG-normal.jpg);"));
        CTariffSetting->setFrameShape(QFrame::StyledPanel);
        CTariffSetting->setFrameShadow(QFrame::Raised);
        wgTime = new QWidget(CTariffSetting);
        wgTime->setObjectName(QString::fromUtf8("wgTime"));
        wgTime->setGeometry(QRect(49, 40, 631, 631));
        wgTime->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget = new QWidget(wgTime);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 601, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cbxName = new QComboBox(layoutWidget);
        cbxName->setObjectName(QString::fromUtf8("cbxName"));

        horizontalLayout->addWidget(cbxName);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        cbxType = new QComboBox(layoutWidget);
        cbxType->setObjectName(QString::fromUtf8("cbxType"));
        cbxType->setEditable(false);
        cbxType->setModelColumn(0);

        horizontalLayout->addWidget(cbxType);

        spLimitTime = new QSpinBox(layoutWidget);
        spLimitTime->setObjectName(QString::fromUtf8("spLimitTime"));
        spLimitTime->setMaximum(999999999);

        horizontalLayout->addWidget(spLimitTime);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        groupBox = new QGroupBox(wgTime);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 38, 621, 451));
        gbInner = new QGroupBox(groupBox);
        gbInner->setObjectName(QString::fromUtf8("gbInner"));
        gbInner->setGeometry(QRect(10, 110, 291, 281));
        gbInner->setCheckable(false);
        gbInnerFirst = new QGroupBox(gbInner);
        gbInnerFirst->setObjectName(QString::fromUtf8("gbInnerFirst"));
        gbInnerFirst->setGeometry(QRect(10, 20, 271, 191));
        label_15 = new QLabel(gbInnerFirst);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(12, 106, 30, 16));
        rule4MinInner = new QSpinBox(gbInnerFirst);
        rule4MinInner->setObjectName(QString::fromUtf8("rule4MinInner"));
        rule4MinInner->setEnabled(false);
        rule4MinInner->setGeometry(QRect(48, 106, 78, 20));
        rule4MinInner->setMaximum(999999999);
        label_16 = new QLabel(gbInnerFirst);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(132, 106, 24, 16));
        rule4FootInner = new QSpinBox(gbInnerFirst);
        rule4FootInner->setObjectName(QString::fromUtf8("rule4FootInner"));
        rule4FootInner->setEnabled(false);
        rule4FootInner->setGeometry(QRect(162, 106, 78, 20));
        rule4FootInner->setMaximum(999999999);
        label_17 = new QLabel(gbInnerFirst);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(246, 106, 16, 16));
        label_21 = new QLabel(gbInnerFirst);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(12, 162, 30, 16));
        rule6MinInner = new QSpinBox(gbInnerFirst);
        rule6MinInner->setObjectName(QString::fromUtf8("rule6MinInner"));
        rule6MinInner->setEnabled(false);
        rule6MinInner->setGeometry(QRect(48, 162, 78, 20));
        rule6MinInner->setMaximum(999999999);
        label_22 = new QLabel(gbInnerFirst);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(132, 162, 24, 16));
        rule6FootInner = new QSpinBox(gbInnerFirst);
        rule6FootInner->setObjectName(QString::fromUtf8("rule6FootInner"));
        rule6FootInner->setEnabled(false);
        rule6FootInner->setGeometry(QRect(162, 162, 78, 20));
        rule6FootInner->setMaximum(999999999);
        label_23 = new QLabel(gbInnerFirst);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(246, 162, 16, 16));
        rule3MinInner = new QSpinBox(gbInnerFirst);
        rule3MinInner->setObjectName(QString::fromUtf8("rule3MinInner"));
        rule3MinInner->setEnabled(false);
        rule3MinInner->setGeometry(QRect(48, 78, 78, 20));
        rule3MinInner->setMaximum(999999999);
        label_13 = new QLabel(gbInnerFirst);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(132, 78, 24, 16));
        rule3FootInner = new QSpinBox(gbInnerFirst);
        rule3FootInner->setObjectName(QString::fromUtf8("rule3FootInner"));
        rule3FootInner->setEnabled(false);
        rule3FootInner->setGeometry(QRect(162, 78, 78, 20));
        rule3FootInner->setMaximum(999999999);
        label_14 = new QLabel(gbInnerFirst);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(246, 78, 16, 16));
        label_12 = new QLabel(gbInnerFirst);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(12, 78, 30, 16));
        rule2MinInner = new QSpinBox(gbInnerFirst);
        rule2MinInner->setObjectName(QString::fromUtf8("rule2MinInner"));
        rule2MinInner->setEnabled(false);
        rule2MinInner->setGeometry(QRect(48, 50, 78, 20));
        rule2MinInner->setMaximum(999999999);
        label_10 = new QLabel(gbInnerFirst);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(132, 50, 24, 16));
        rule2FootInner = new QSpinBox(gbInnerFirst);
        rule2FootInner->setObjectName(QString::fromUtf8("rule2FootInner"));
        rule2FootInner->setEnabled(false);
        rule2FootInner->setGeometry(QRect(162, 50, 78, 20));
        rule2FootInner->setMaximum(999999999);
        label_11 = new QLabel(gbInnerFirst);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(246, 50, 16, 16));
        label_9 = new QLabel(gbInnerFirst);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(12, 50, 30, 16));
        rule1MinInner = new QSpinBox(gbInnerFirst);
        rule1MinInner->setObjectName(QString::fromUtf8("rule1MinInner"));
        rule1MinInner->setGeometry(QRect(48, 22, 78, 20));
        rule1MinInner->setMaximum(999999999);
        label_7 = new QLabel(gbInnerFirst);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(132, 22, 24, 16));
        label_6 = new QLabel(gbInnerFirst);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(12, 22, 30, 16));
        rule1FootInner = new QSpinBox(gbInnerFirst);
        rule1FootInner->setObjectName(QString::fromUtf8("rule1FootInner"));
        rule1FootInner->setEnabled(false);
        rule1FootInner->setGeometry(QRect(162, 22, 78, 20));
        rule1FootInner->setMaximum(999999999);
        label_8 = new QLabel(gbInnerFirst);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(246, 22, 16, 16));
        label_18 = new QLabel(gbInnerFirst);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(12, 134, 30, 16));
        rule5MinInner = new QSpinBox(gbInnerFirst);
        rule5MinInner->setObjectName(QString::fromUtf8("rule5MinInner"));
        rule5MinInner->setEnabled(false);
        rule5MinInner->setGeometry(QRect(48, 134, 78, 20));
        rule5MinInner->setMaximum(999999999);
        label_19 = new QLabel(gbInnerFirst);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(132, 134, 24, 16));
        rule5FootInner = new QSpinBox(gbInnerFirst);
        rule5FootInner->setObjectName(QString::fromUtf8("rule5FootInner"));
        rule5FootInner->setEnabled(false);
        rule5FootInner->setGeometry(QRect(162, 134, 78, 20));
        rule5FootInner->setMaximum(999999999);
        label_20 = new QLabel(gbInnerFirst);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(246, 134, 16, 16));
        layoutWidget1 = new QWidget(gbInner);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 220, 258, 22));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(layoutWidget1);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_14->addWidget(label_28);

        perMinInner = new QSpinBox(layoutWidget1);
        perMinInner->setObjectName(QString::fromUtf8("perMinInner"));
        perMinInner->setMaximum(999999999);

        horizontalLayout_14->addWidget(perMinInner);

        label_29 = new QLabel(layoutWidget1);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_14->addWidget(label_29);

        perMinFootInner = new QSpinBox(layoutWidget1);
        perMinFootInner->setObjectName(QString::fromUtf8("perMinFootInner"));
        perMinFootInner->setMaximum(999999999);

        horizontalLayout_14->addWidget(perMinFootInner);

        label_30 = new QLabel(layoutWidget1);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout_14->addWidget(label_30);

        layoutWidget2 = new QWidget(gbInner);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(11, 251, 181, 22));
        horizontalLayout_27 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        horizontalLayout_27->setContentsMargins(0, 0, 0, 0);
        label_63 = new QLabel(layoutWidget2);
        label_63->setObjectName(QString::fromUtf8("label_63"));

        horizontalLayout_27->addWidget(label_63);

        spLimitFootInner = new QSpinBox(layoutWidget2);
        spLimitFootInner->setObjectName(QString::fromUtf8("spLimitFootInner"));
        spLimitFootInner->setMaximum(999999999);

        horizontalLayout_27->addWidget(spLimitFootInner);

        label_64 = new QLabel(layoutWidget2);
        label_64->setObjectName(QString::fromUtf8("label_64"));

        horizontalLayout_27->addWidget(label_64);

        gbNoSecQuota1 = new QGroupBox(groupBox);
        gbNoSecQuota1->setObjectName(QString::fromUtf8("gbNoSecQuota1"));
        gbNoSecQuota1->setEnabled(true);
        gbNoSecQuota1->setGeometry(QRect(10, 400, 291, 51));
        layoutWidget_7 = new QWidget(gbNoSecQuota1);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 20, 282, 22));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_31 = new QLabel(layoutWidget_7);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_15->addWidget(label_31);

        perMinNoSectionLimit = new QSpinBox(layoutWidget_7);
        perMinNoSectionLimit->setObjectName(QString::fromUtf8("perMinNoSectionLimit"));
        perMinNoSectionLimit->setMaximum(999999999);

        horizontalLayout_15->addWidget(perMinNoSectionLimit);

        label_32 = new QLabel(layoutWidget_7);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_15->addWidget(label_32);

        perMinFootNoSection = new QSpinBox(layoutWidget_7);
        perMinFootNoSection->setObjectName(QString::fromUtf8("perMinFootNoSection"));
        perMinFootNoSection->setMaximum(999999999);

        horizontalLayout_15->addWidget(perMinFootNoSection);

        label_33 = new QLabel(layoutWidget_7);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_15->addWidget(label_33);

        gbNoSecQuota2 = new QGroupBox(groupBox);
        gbNoSecQuota2->setObjectName(QString::fromUtf8("gbNoSecQuota2"));
        gbNoSecQuota2->setEnabled(true);
        gbNoSecQuota2->setGeometry(QRect(320, 400, 291, 51));
        layoutWidget_8 = new QWidget(gbNoSecQuota2);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(10, 20, 281, 22));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_34 = new QLabel(layoutWidget_8);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_16->addWidget(label_34);

        perMinNoSectionFirst = new QSpinBox(layoutWidget_8);
        perMinNoSectionFirst->setObjectName(QString::fromUtf8("perMinNoSectionFirst"));
        perMinNoSectionFirst->setMaximum(999999999);

        horizontalLayout_16->addWidget(perMinNoSectionFirst);

        label_35 = new QLabel(layoutWidget_8);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        horizontalLayout_16->addWidget(label_35);

        gbTimeSection = new QGroupBox(groupBox);
        gbTimeSection->setObjectName(QString::fromUtf8("gbTimeSection"));
        gbTimeSection->setGeometry(QRect(10, 49, 291, 51));
        layoutWidget3 = new QWidget(gbTimeSection);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(6, 20, 281, 22));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        tdtSection1 = new QTimeEdit(layoutWidget3);
        tdtSection1->setObjectName(QString::fromUtf8("tdtSection1"));

        horizontalLayout_11->addWidget(tdtSection1);

        label_27 = new QLabel(layoutWidget3);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_27);

        tdtSection2 = new QTimeEdit(layoutWidget3);
        tdtSection2->setObjectName(QString::fromUtf8("tdtSection2"));

        horizontalLayout_11->addWidget(tdtSection2);

        groupBox_7 = new QGroupBox(groupBox);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(320, 49, 291, 51));
        layoutWidget4 = new QWidget(groupBox_7);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 20, 271, 18));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        rbtnNoSection = new QRadioButton(layoutWidget4);
        rbtnNoSection->setObjectName(QString::fromUtf8("rbtnNoSection"));
        rbtnNoSection->setChecked(true);

        horizontalLayout_12->addWidget(rbtnNoSection);

        rbtnSection = new QRadioButton(layoutWidget4);
        rbtnSection->setObjectName(QString::fromUtf8("rbtnSection"));
        rbtnSection->setCheckable(true);

        horizontalLayout_12->addWidget(rbtnSection);

        layoutWidget5 = new QWidget(groupBox);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 20, 291, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        spNoFullTime = new QSpinBox(layoutWidget5);
        spNoFullTime->setObjectName(QString::fromUtf8("spNoFullTime"));
        spNoFullTime->setMaximum(999999999);

        horizontalLayout_3->addWidget(spNoFullTime);

        label_5 = new QLabel(layoutWidget5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        gbOuter = new QGroupBox(groupBox);
        gbOuter->setObjectName(QString::fromUtf8("gbOuter"));
        gbOuter->setGeometry(QRect(320, 110, 291, 281));
        gbOuter->setCheckable(false);
        gbOuter->setChecked(false);
        gbOuterFirst = new QGroupBox(gbOuter);
        gbOuterFirst->setObjectName(QString::fromUtf8("gbOuterFirst"));
        gbOuterFirst->setGeometry(QRect(10, 20, 271, 191));
        label_39 = new QLabel(gbOuterFirst);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(12, 22, 30, 16));
        rule1MinOuter = new QSpinBox(gbOuterFirst);
        rule1MinOuter->setObjectName(QString::fromUtf8("rule1MinOuter"));
        rule1MinOuter->setGeometry(QRect(48, 22, 78, 20));
        rule1MinOuter->setMaximum(999999999);
        label_40 = new QLabel(gbOuterFirst);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(132, 22, 24, 16));
        rule1FootOuter = new QSpinBox(gbOuterFirst);
        rule1FootOuter->setObjectName(QString::fromUtf8("rule1FootOuter"));
        rule1FootOuter->setEnabled(false);
        rule1FootOuter->setGeometry(QRect(162, 22, 78, 20));
        rule1FootOuter->setMaximum(999999999);
        label_41 = new QLabel(gbOuterFirst);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(246, 22, 16, 16));
        label_42 = new QLabel(gbOuterFirst);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(12, 50, 30, 16));
        rule2MinOuter = new QSpinBox(gbOuterFirst);
        rule2MinOuter->setObjectName(QString::fromUtf8("rule2MinOuter"));
        rule2MinOuter->setEnabled(false);
        rule2MinOuter->setGeometry(QRect(48, 50, 78, 20));
        rule2MinOuter->setMaximum(999999999);
        label_43 = new QLabel(gbOuterFirst);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(132, 50, 24, 16));
        rule2FootOuter = new QSpinBox(gbOuterFirst);
        rule2FootOuter->setObjectName(QString::fromUtf8("rule2FootOuter"));
        rule2FootOuter->setEnabled(false);
        rule2FootOuter->setGeometry(QRect(162, 50, 78, 20));
        rule2FootOuter->setMaximum(999999999);
        label_44 = new QLabel(gbOuterFirst);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(246, 50, 16, 16));
        label_45 = new QLabel(gbOuterFirst);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(12, 78, 30, 16));
        rule3MinOuter = new QSpinBox(gbOuterFirst);
        rule3MinOuter->setObjectName(QString::fromUtf8("rule3MinOuter"));
        rule3MinOuter->setEnabled(false);
        rule3MinOuter->setGeometry(QRect(48, 78, 78, 20));
        rule3MinOuter->setMaximum(999999999);
        label_46 = new QLabel(gbOuterFirst);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(132, 78, 24, 16));
        rule3FootOuter = new QSpinBox(gbOuterFirst);
        rule3FootOuter->setObjectName(QString::fromUtf8("rule3FootOuter"));
        rule3FootOuter->setEnabled(false);
        rule3FootOuter->setGeometry(QRect(162, 78, 78, 20));
        rule3FootOuter->setMaximum(999999999);
        label_47 = new QLabel(gbOuterFirst);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(246, 78, 16, 16));
        label_48 = new QLabel(gbOuterFirst);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(12, 106, 30, 16));
        rule4MinOuter = new QSpinBox(gbOuterFirst);
        rule4MinOuter->setObjectName(QString::fromUtf8("rule4MinOuter"));
        rule4MinOuter->setEnabled(false);
        rule4MinOuter->setGeometry(QRect(48, 106, 78, 20));
        rule4MinOuter->setMaximum(999999999);
        label_49 = new QLabel(gbOuterFirst);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(132, 106, 24, 16));
        rule4FootOuter = new QSpinBox(gbOuterFirst);
        rule4FootOuter->setObjectName(QString::fromUtf8("rule4FootOuter"));
        rule4FootOuter->setEnabled(false);
        rule4FootOuter->setGeometry(QRect(162, 106, 78, 20));
        rule4FootOuter->setMaximum(999999999);
        label_50 = new QLabel(gbOuterFirst);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(246, 106, 16, 16));
        label_51 = new QLabel(gbOuterFirst);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(12, 134, 30, 16));
        rule5MinOuter = new QSpinBox(gbOuterFirst);
        rule5MinOuter->setObjectName(QString::fromUtf8("rule5MinOuter"));
        rule5MinOuter->setEnabled(false);
        rule5MinOuter->setGeometry(QRect(48, 134, 78, 20));
        rule5MinOuter->setMaximum(999999999);
        label_52 = new QLabel(gbOuterFirst);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(132, 134, 24, 16));
        rule5FootOuter = new QSpinBox(gbOuterFirst);
        rule5FootOuter->setObjectName(QString::fromUtf8("rule5FootOuter"));
        rule5FootOuter->setEnabled(false);
        rule5FootOuter->setGeometry(QRect(162, 134, 78, 20));
        rule5FootOuter->setMaximum(999999999);
        label_53 = new QLabel(gbOuterFirst);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(246, 134, 16, 16));
        label_54 = new QLabel(gbOuterFirst);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(12, 162, 30, 16));
        rule6MinOuter = new QSpinBox(gbOuterFirst);
        rule6MinOuter->setObjectName(QString::fromUtf8("rule6MinOuter"));
        rule6MinOuter->setEnabled(false);
        rule6MinOuter->setGeometry(QRect(48, 162, 78, 20));
        rule6MinOuter->setMaximum(999999999);
        label_55 = new QLabel(gbOuterFirst);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(132, 162, 24, 16));
        rule6FootOuter = new QSpinBox(gbOuterFirst);
        rule6FootOuter->setObjectName(QString::fromUtf8("rule6FootOuter"));
        rule6FootOuter->setEnabled(false);
        rule6FootOuter->setGeometry(QRect(162, 162, 78, 20));
        rule6FootOuter->setMaximum(999999999);
        label_56 = new QLabel(gbOuterFirst);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(246, 162, 16, 16));
        layoutWidget_3 = new QWidget(gbOuter);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 220, 258, 22));
        horizontalLayout_26 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        label_60 = new QLabel(layoutWidget_3);
        label_60->setObjectName(QString::fromUtf8("label_60"));

        horizontalLayout_26->addWidget(label_60);

        perMinOuter = new QSpinBox(layoutWidget_3);
        perMinOuter->setObjectName(QString::fromUtf8("perMinOuter"));
        perMinOuter->setMaximum(999999999);

        horizontalLayout_26->addWidget(perMinOuter);

        label_61 = new QLabel(layoutWidget_3);
        label_61->setObjectName(QString::fromUtf8("label_61"));

        horizontalLayout_26->addWidget(label_61);

        perMinFootOuter = new QSpinBox(layoutWidget_3);
        perMinFootOuter->setObjectName(QString::fromUtf8("perMinFootOuter"));
        perMinFootOuter->setMaximum(999999999);

        horizontalLayout_26->addWidget(perMinFootOuter);

        label_62 = new QLabel(layoutWidget_3);
        label_62->setObjectName(QString::fromUtf8("label_62"));

        horizontalLayout_26->addWidget(label_62);

        layoutWidget6 = new QWidget(gbOuter);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(11, 250, 181, 22));
        horizontalLayout_28 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        horizontalLayout_28->setContentsMargins(0, 0, 0, 0);
        label_65 = new QLabel(layoutWidget6);
        label_65->setObjectName(QString::fromUtf8("label_65"));

        horizontalLayout_28->addWidget(label_65);

        spLimitFootOuter = new QSpinBox(layoutWidget6);
        spLimitFootOuter->setObjectName(QString::fromUtf8("spLimitFootOuter"));
        spLimitFootOuter->setMaximum(999999999);

        horizontalLayout_28->addWidget(spLimitFootOuter);

        label_66 = new QLabel(layoutWidget6);
        label_66->setObjectName(QString::fromUtf8("label_66"));

        horizontalLayout_28->addWidget(label_66);

        layoutWidget7 = new QWidget(wgTime);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(400, 502, 181, 121));
        verticalLayout = new QVBoxLayout(layoutWidget7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnDownload = new QPushButton(layoutWidget7);
        btnDownload->setObjectName(QString::fromUtf8("btnDownload"));

        verticalLayout->addWidget(btnDownload);

        btnSave = new QPushButton(layoutWidget7);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        verticalLayout->addWidget(btnSave);

        btnSaveExit = new QPushButton(layoutWidget7);
        btnSaveExit->setObjectName(QString::fromUtf8("btnSaveExit"));

        verticalLayout->addWidget(btnSaveExit);

        groupBox_2 = new QGroupBox(wgTime);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 496, 271, 124));
        wgRate = new QWidget(groupBox_2);
        wgRate->setObjectName(QString::fromUtf8("wgRate"));
        wgRate->setGeometry(QRect(20, 4, 241, 121));
        wgRate->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget_2 = new QWidget(wgRate);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 5, 231, 111));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_36 = new QLabel(layoutWidget_2);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        horizontalLayout_17->addWidget(label_36);

        dtStart = new QDateTimeEdit(layoutWidget_2);
        dtStart->setObjectName(QString::fromUtf8("dtStart"));

        horizontalLayout_17->addWidget(dtStart);


        verticalLayout_2->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_37 = new QLabel(layoutWidget_2);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        horizontalLayout_18->addWidget(label_37);

        dtEnd = new QDateTimeEdit(layoutWidget_2);
        dtEnd->setObjectName(QString::fromUtf8("dtEnd"));

        horizontalLayout_18->addWidget(dtEnd);


        verticalLayout_2->addLayout(horizontalLayout_18);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_38 = new QLabel(layoutWidget_2);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        horizontalLayout_4->addWidget(label_38);

        cbxStandard = new QComboBox(layoutWidget_2);
        cbxStandard->setObjectName(QString::fromUtf8("cbxStandard"));

        horizontalLayout_4->addWidget(cbxStandard);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        btnCalculate = new QPushButton(layoutWidget_2);
        btnCalculate->setObjectName(QString::fromUtf8("btnCalculate"));

        verticalLayout_3->addWidget(btnCalculate);

        lblTitle = new QLabel(CTariffSetting);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(170, 0, 0);"));
        lblClose = new QLabel(CTariffSetting);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(690, 7, 30, 15));

        retranslateUi(CTariffSetting);

        cbxType->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(CTariffSetting);
    } // setupUi

    void retranslateUi(QFrame *CTariffSetting)
    {
        CTariffSetting->setWindowTitle(QApplication::translate("CTariffSetting", "\350\264\271\347\216\207\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CTariffSetting", "\345\201\234\350\275\246\345\234\272\345\220\215\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CTariffSetting", "\346\224\266\350\264\271\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237\345\256\275\351\231\220\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CTariffSetting", "\350\256\241\350\264\271\350\247\204\345\210\231", 0, QApplication::UnicodeUTF8));
        gbInner->setTitle(QApplication::translate("CTariffSetting", "\346\256\265\345\206\205\350\256\241\350\264\271\346\240\207\345\207\206", 0, QApplication::UnicodeUTF8));
        gbInnerFirst->setTitle(QApplication::translate("CTariffSetting", "\351\246\226\346\256\265\350\256\241\350\264\271\346\240\207\345\207\206", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("CTariffSetting", "\350\247\204\345\210\2314", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("CTariffSetting", "\350\247\204\345\210\2316", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CTariffSetting", "\350\247\204\345\210\2313", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CTariffSetting", "\350\247\204\345\210\2312", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CTariffSetting", "\350\247\204\345\210\2311", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("CTariffSetting", "\350\247\204\345\210\2315", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("CTariffSetting", "\346\257\217", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237\346\224\266\350\264\271", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        label_63->setText(QApplication::translate("CTariffSetting", "\346\256\265\345\206\205\350\256\241\350\264\271\351\231\220\351\242\235", 0, QApplication::UnicodeUTF8));
        label_64->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        gbNoSecQuota1->setTitle(QApplication::translate("CTariffSetting", "\344\270\215\345\210\206\346\256\265\346\203\205\345\206\265\344\270\213\351\231\220\351\242\235\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("CTariffSetting", "\346\257\217", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237\351\231\220\351\242\235\346\224\266\350\264\271", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        gbNoSecQuota2->setTitle(QApplication::translate("CTariffSetting", "\344\270\215\345\210\206\346\256\265\346\203\205\345\206\265\344\270\213\351\246\226\346\256\265\350\256\241\350\264\271\350\247\204\345\210\231", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("CTariffSetting", "\346\257\217", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237\344\270\272\345\221\250\346\234\237\357\274\214\350\256\241\347\256\227\344\270\200\346\254\241\351\246\226\346\256\265\350\264\271\347\224\250", 0, QApplication::UnicodeUTF8));
        gbTimeSection->setTitle(QApplication::translate("CTariffSetting", "\346\227\266\351\227\264\346\256\265\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("CTariffSetting", "\350\207\263", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("CTariffSetting", "\346\230\257\345\220\246\346\227\266\351\227\264\346\256\265\350\256\241\347\256\227\350\264\271\347\216\207", 0, QApplication::UnicodeUTF8));
        rbtnNoSection->setText(QApplication::translate("CTariffSetting", "\344\270\215\345\210\206\346\256\265\350\256\241\347\256\227", 0, QApplication::UnicodeUTF8));
        rbtnSection->setText(QApplication::translate("CTariffSetting", "\345\210\206\346\256\265\350\256\241\347\256\227", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CTariffSetting", "\344\270\215\350\266\263", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237\357\274\214\344\270\215\346\224\266\350\264\271", 0, QApplication::UnicodeUTF8));
        gbOuter->setTitle(QApplication::translate("CTariffSetting", "\346\256\265\345\244\226\350\256\241\350\264\271\346\240\207\345\207\206", 0, QApplication::UnicodeUTF8));
        gbOuterFirst->setTitle(QApplication::translate("CTariffSetting", "\351\246\226\346\256\265\350\256\241\350\264\271\346\240\207\345\207\206", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("CTariffSetting", "\350\247\204\345\210\2311", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("CTariffSetting", "\350\247\204\345\210\2312", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("CTariffSetting", "\350\247\204\345\210\2313", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("CTariffSetting", "\350\247\204\345\210\2314", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("CTariffSetting", "\350\247\204\345\210\2315", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("CTariffSetting", "\350\247\204\345\210\2316", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        label_60->setText(QApplication::translate("CTariffSetting", "\346\257\217", 0, QApplication::UnicodeUTF8));
        label_61->setText(QApplication::translate("CTariffSetting", "\345\210\206\351\222\237\346\224\266\350\264\271", 0, QApplication::UnicodeUTF8));
        label_62->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        label_65->setText(QApplication::translate("CTariffSetting", "\346\256\265\345\244\226\350\256\241\350\264\271\351\231\220\351\242\235", 0, QApplication::UnicodeUTF8));
        label_66->setText(QApplication::translate("CTariffSetting", "\350\247\222", 0, QApplication::UnicodeUTF8));
        btnDownload->setText(QApplication::translate("CTariffSetting", "\344\270\213\344\274\240\350\264\271\347\216\207", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CTariffSetting", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        btnSaveExit->setText(QApplication::translate("CTariffSetting", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        label_36->setText(QApplication::translate("CTariffSetting", "\350\265\267\345\247\213\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("CTariffSetting", "\347\273\210\346\255\242\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("CTariffSetting", "\350\264\271\347\224\250\346\240\207\345\207\206\357\274\232", 0, QApplication::UnicodeUTF8));
        btnCalculate->setText(QApplication::translate("CTariffSetting", "\350\256\241\347\256\227\346\224\266\350\264\271", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CTariffSetting: public Ui_CTariffSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARIFFSETTING_H
