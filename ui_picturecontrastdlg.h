/********************************************************************************
** Form generated from reading UI file 'picturecontrastdlg.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTURECONTRASTDLG_H
#define UI_PICTURECONTRASTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CPictureContrastDlg
{
public:
    QWidget *widget_2;
    QPushButton *btnPass;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *edtCardID;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *edtCardSelf;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *edtCardType;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *edtOwner;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *edtVechilePlate;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *edtVechileType;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *edtSurplus;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *edtExpiration;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *edtEnterChannel;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *edtEnterTime;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_22;
    QLineEdit *edtLeaveChannel;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_23;
    QLineEdit *edtLeaveTime;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_25;
    QLineEdit *edtStayTime;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *btnPass1;
    QPushButton *btnPass2;
    QPushButton *btnPass3;
    QPushButton *btnPass4;
    QPlainTextEdit *edtComments;
    QLabel *label;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_12;
    QComboBox *cbxDiscount;
    QLabel *label_26;
    QLineEdit *edtAmount;
    QLabel *lblEnterImg;
    QLabel *lblLeaveImg;
    QLabel *lblCarImg;
    QLabel *lblUserImg;
    QLabel *lblTitle;
    QLabel *lblLicence28;
    QLabel *lblLicence18;
    QLabel *lblLicence22;
    QLabel *lblLicence25;
    QLabel *lblLicence14;
    QPushButton *btnVerifyOut;
    QLabel *lblLicence26;
    QLabel *lblLicence21;
    QLabel *lblLicence27;
    QLabel *lblLicence17;
    QPushButton *btnVerifyIn;
    QLabel *lblLicence16;
    QLabel *lblLicence23;
    QLabel *lblLicence11;
    QLabel *lblLicence15;
    QLabel *lblLicence13;
    QLabel *lblLicence12;
    QLabel *lblLicence24;
    QGroupBox *gbFee;
    QRadioButton *rdx8;
    QRadioButton *rdx7;
    QRadioButton *rdx5;
    QRadioButton *rdx1;
    QRadioButton *rdx2;
    QRadioButton *rdx3;
    QRadioButton *rdx6;
    QRadioButton *rdx4;
    QFrame *frame;
    QLabel *lblDateTime;

    void setupUi(QDialog *CPictureContrastDlg)
    {
        if (CPictureContrastDlg->objectName().isEmpty())
            CPictureContrastDlg->setObjectName(QString::fromUtf8("CPictureContrastDlg"));
        CPictureContrastDlg->resize(950, 780);
        CPictureContrastDlg->setStyleSheet(QString::fromUtf8("background-image:url(d:/WinParkUI/debug/Image/NewIcon/FeeBG-normal.jpg);"));
        widget_2 = new QWidget(CPictureContrastDlg);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(271, 465, 631, 291));
        widget_2->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        btnPass = new QPushButton(widget_2);
        btnPass->setObjectName(QString::fromUtf8("btnPass"));
        btnPass->setGeometry(QRect(487, 228, 143, 47));
        btnPass->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 4, 203, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout->addWidget(label_2);

        edtCardID = new QLineEdit(layoutWidget);
        edtCardID->setObjectName(QString::fromUtf8("edtCardID"));
        edtCardID->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtCardID->setReadOnly(true);

        horizontalLayout->addWidget(edtCardID);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_2->addWidget(label_3);

        edtCardSelf = new QLineEdit(layoutWidget);
        edtCardSelf->setObjectName(QString::fromUtf8("edtCardSelf"));
        edtCardSelf->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtCardSelf->setReadOnly(true);

        horizontalLayout_2->addWidget(edtCardSelf);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_3->addWidget(label_4);

        edtCardType = new QLineEdit(layoutWidget);
        edtCardType->setObjectName(QString::fromUtf8("edtCardType"));
        edtCardType->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtCardType->setReadOnly(true);

        horizontalLayout_3->addWidget(edtCardType);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_4->addWidget(label_7);

        edtOwner = new QLineEdit(layoutWidget);
        edtOwner->setObjectName(QString::fromUtf8("edtOwner"));
        edtOwner->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtOwner->setReadOnly(true);

        horizontalLayout_4->addWidget(edtOwner);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_5->addWidget(label_6);

        edtVechilePlate = new QLineEdit(layoutWidget);
        edtVechilePlate->setObjectName(QString::fromUtf8("edtVechilePlate"));
        edtVechilePlate->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtVechilePlate->setReadOnly(true);

        horizontalLayout_5->addWidget(edtVechilePlate);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_6->addWidget(label_5);

        edtVechileType = new QLineEdit(layoutWidget);
        edtVechileType->setObjectName(QString::fromUtf8("edtVechileType"));
        edtVechileType->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtVechileType->setReadOnly(true);

        horizontalLayout_6->addWidget(edtVechileType);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_7->addWidget(label_8);

        edtSurplus = new QLineEdit(layoutWidget);
        edtSurplus->setObjectName(QString::fromUtf8("edtSurplus"));
        edtSurplus->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtSurplus->setReadOnly(true);

        horizontalLayout_7->addWidget(edtSurplus);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_8->addWidget(label_9);

        edtExpiration = new QLineEdit(layoutWidget);
        edtExpiration->setObjectName(QString::fromUtf8("edtExpiration"));
        edtExpiration->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtExpiration->setReadOnly(true);

        horizontalLayout_8->addWidget(edtExpiration);


        verticalLayout_2->addLayout(horizontalLayout_8);

        layoutWidget1 = new QWidget(widget_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(425, 5, 203, 151));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_10->addWidget(label_10);

        edtEnterChannel = new QLineEdit(layoutWidget1);
        edtEnterChannel->setObjectName(QString::fromUtf8("edtEnterChannel"));
        edtEnterChannel->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtEnterChannel->setReadOnly(true);

        horizontalLayout_10->addWidget(edtEnterChannel);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_11->addWidget(label_11);

        edtEnterTime = new QLineEdit(layoutWidget1);
        edtEnterTime->setObjectName(QString::fromUtf8("edtEnterTime"));
        edtEnterTime->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtEnterTime->setReadOnly(true);

        horizontalLayout_11->addWidget(edtEnterTime);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_22 = new QLabel(layoutWidget1);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_12->addWidget(label_22);

        edtLeaveChannel = new QLineEdit(layoutWidget1);
        edtLeaveChannel->setObjectName(QString::fromUtf8("edtLeaveChannel"));
        edtLeaveChannel->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtLeaveChannel->setReadOnly(true);

        horizontalLayout_12->addWidget(edtLeaveChannel);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_23 = new QLabel(layoutWidget1);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_13->addWidget(label_23);

        edtLeaveTime = new QLineEdit(layoutWidget1);
        edtLeaveTime->setObjectName(QString::fromUtf8("edtLeaveTime"));
        edtLeaveTime->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtLeaveTime->setReadOnly(true);

        horizontalLayout_13->addWidget(edtLeaveTime);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_25 = new QLabel(layoutWidget1);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_14->addWidget(label_25);

        edtStayTime = new QLineEdit(layoutWidget1);
        edtStayTime->setObjectName(QString::fromUtf8("edtStayTime"));
        edtStayTime->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtStayTime->setReadOnly(true);

        horizontalLayout_14->addWidget(edtStayTime);


        verticalLayout->addLayout(horizontalLayout_14);

        layoutWidget2 = new QWidget(widget_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(220, 232, 191, 41));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        btnPass1 = new QPushButton(layoutWidget2);
        btnPass1->setObjectName(QString::fromUtf8("btnPass1"));
        btnPass1->setMinimumSize(QSize(30, 30));
        btnPass1->setMaximumSize(QSize(30, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        btnPass1->setFont(font);
        btnPass1->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_16->addWidget(btnPass1);

        btnPass2 = new QPushButton(layoutWidget2);
        btnPass2->setObjectName(QString::fromUtf8("btnPass2"));
        btnPass2->setMinimumSize(QSize(30, 30));
        btnPass2->setMaximumSize(QSize(30, 30));
        btnPass2->setFont(font);
        btnPass2->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_16->addWidget(btnPass2);

        btnPass3 = new QPushButton(layoutWidget2);
        btnPass3->setObjectName(QString::fromUtf8("btnPass3"));
        btnPass3->setMinimumSize(QSize(30, 30));
        btnPass3->setMaximumSize(QSize(30, 30));
        btnPass3->setFont(font);
        btnPass3->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_16->addWidget(btnPass3);

        btnPass4 = new QPushButton(layoutWidget2);
        btnPass4->setObjectName(QString::fromUtf8("btnPass4"));
        btnPass4->setMinimumSize(QSize(30, 30));
        btnPass4->setMaximumSize(QSize(30, 30));
        btnPass4->setFont(font);
        btnPass4->setStyleSheet(QString::fromUtf8("background-image:url( );"));

        horizontalLayout_16->addWidget(btnPass4);

        edtComments = new QPlainTextEdit(widget_2);
        edtComments->setObjectName(QString::fromUtf8("edtComments"));
        edtComments->setGeometry(QRect(227, 24, 181, 121));
        edtComments->setReadOnly(true);
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(283, 3, 60, 20));
        label->setAlignment(Qt::AlignCenter);
        layoutWidget3 = new QWidget(widget_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(230, 164, 181, 40));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        verticalLayout_3->addWidget(label_12);

        cbxDiscount = new QComboBox(layoutWidget3);
        cbxDiscount->setObjectName(QString::fromUtf8("cbxDiscount"));

        verticalLayout_3->addWidget(cbxDiscount);

        label_26 = new QLabel(widget_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(426, 179, 41, 20));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        label_26->setFont(font2);
        label_26->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"color: rgb(170, 0, 0);"));
        edtAmount = new QLineEdit(widget_2);
        edtAmount->setObjectName(QString::fromUtf8("edtAmount"));
        edtAmount->setGeometry(QRect(475, 160, 151, 51));
        QFont font3;
        font3.setPointSize(51);
        font3.setBold(true);
        font3.setWeight(75);
        edtAmount->setFont(font3);
        edtAmount->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"color: rgb(170, 0, 0);"));
        edtAmount->setAlignment(Qt::AlignCenter);
        edtAmount->setReadOnly(true);
        lblEnterImg = new QLabel(CPictureContrastDlg);
        lblEnterImg->setObjectName(QString::fromUtf8("lblEnterImg"));
        lblEnterImg->setGeometry(QRect(39, 60, 411, 281));
        lblEnterImg->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        lblEnterImg->setFrameShape(QFrame::Panel);
        lblEnterImg->setFrameShadow(QFrame::Sunken);
        lblEnterImg->setLineWidth(3);
        lblEnterImg->setScaledContents(true);
        lblLeaveImg = new QLabel(CPictureContrastDlg);
        lblLeaveImg->setObjectName(QString::fromUtf8("lblLeaveImg"));
        lblLeaveImg->setGeometry(QRect(499, 60, 411, 281));
        lblLeaveImg->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        lblLeaveImg->setFrameShape(QFrame::Panel);
        lblLeaveImg->setFrameShadow(QFrame::Sunken);
        lblLeaveImg->setLineWidth(3);
        lblLeaveImg->setScaledContents(true);
        lblCarImg = new QLabel(CPictureContrastDlg);
        lblCarImg->setObjectName(QString::fromUtf8("lblCarImg"));
        lblCarImg->setGeometry(QRect(39, 425, 212, 141));
        lblCarImg->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        lblCarImg->setFrameShape(QFrame::Panel);
        lblCarImg->setFrameShadow(QFrame::Sunken);
        lblCarImg->setLineWidth(3);
        lblCarImg->setScaledContents(true);
        lblUserImg = new QLabel(CPictureContrastDlg);
        lblUserImg->setObjectName(QString::fromUtf8("lblUserImg"));
        lblUserImg->setGeometry(QRect(39, 604, 212, 142));
        lblUserImg->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        lblUserImg->setFrameShape(QFrame::Panel);
        lblUserImg->setFrameShadow(QFrame::Sunken);
        lblUserImg->setLineWidth(3);
        lblUserImg->setScaledContents(true);
        lblTitle = new QLabel(CPictureContrastDlg);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(20, 5, 141, 21));
        lblTitle->setFont(font1);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"color: rgb(170, 0, 0);"));
        lblLicence28 = new QLabel(CPictureContrastDlg);
        lblLicence28->setObjectName(QString::fromUtf8("lblLicence28"));
        lblLicence28->setGeometry(QRect(798, 341, 37, 37));
        lblLicence28->setAutoFillBackground(false);
        lblLicence28->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence28->setFrameShape(QFrame::Panel);
        lblLicence28->setFrameShadow(QFrame::Raised);
        lblLicence28->setLineWidth(4);
        lblLicence28->setTextFormat(Qt::AutoText);
        lblLicence28->setScaledContents(false);
        lblLicence28->setAlignment(Qt::AlignCenter);
        lblLicence18 = new QLabel(CPictureContrastDlg);
        lblLicence18->setObjectName(QString::fromUtf8("lblLicence18"));
        lblLicence18->setGeometry(QRect(338, 341, 37, 37));
        lblLicence18->setAutoFillBackground(false);
        lblLicence18->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence18->setFrameShape(QFrame::Panel);
        lblLicence18->setFrameShadow(QFrame::Raised);
        lblLicence18->setLineWidth(4);
        lblLicence18->setTextFormat(Qt::AutoText);
        lblLicence18->setScaledContents(false);
        lblLicence18->setAlignment(Qt::AlignCenter);
        lblLicence22 = new QLabel(CPictureContrastDlg);
        lblLicence22->setObjectName(QString::fromUtf8("lblLicence22"));
        lblLicence22->setGeometry(QRect(546, 341, 37, 37));
        lblLicence22->setAutoFillBackground(false);
        lblLicence22->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence22->setFrameShape(QFrame::Panel);
        lblLicence22->setFrameShadow(QFrame::Raised);
        lblLicence22->setLineWidth(4);
        lblLicence22->setTextFormat(Qt::AutoText);
        lblLicence22->setScaledContents(false);
        lblLicence22->setAlignment(Qt::AlignCenter);
        lblLicence25 = new QLabel(CPictureContrastDlg);
        lblLicence25->setObjectName(QString::fromUtf8("lblLicence25"));
        lblLicence25->setGeometry(QRect(672, 341, 37, 37));
        lblLicence25->setAutoFillBackground(false);
        lblLicence25->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence25->setFrameShape(QFrame::Panel);
        lblLicence25->setFrameShadow(QFrame::Raised);
        lblLicence25->setLineWidth(4);
        lblLicence25->setTextFormat(Qt::AutoText);
        lblLicence25->setScaledContents(false);
        lblLicence25->setAlignment(Qt::AlignCenter);
        lblLicence14 = new QLabel(CPictureContrastDlg);
        lblLicence14->setObjectName(QString::fromUtf8("lblLicence14"));
        lblLicence14->setGeometry(QRect(170, 341, 37, 37));
        lblLicence14->setAutoFillBackground(false);
        lblLicence14->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence14->setFrameShape(QFrame::Panel);
        lblLicence14->setFrameShadow(QFrame::Raised);
        lblLicence14->setLineWidth(4);
        lblLicence14->setTextFormat(Qt::AutoText);
        lblLicence14->setScaledContents(false);
        lblLicence14->setAlignment(Qt::AlignCenter);
        btnVerifyOut = new QPushButton(CPictureContrastDlg);
        btnVerifyOut->setObjectName(QString::fromUtf8("btnVerifyOut"));
        btnVerifyOut->setGeometry(QRect(840, 341, 63, 37));
        btnVerifyOut->setStyleSheet(QString::fromUtf8("backgroud-image:url(none);\n"
"background-color: rgb(255, 255, 255);"));
        lblLicence26 = new QLabel(CPictureContrastDlg);
        lblLicence26->setObjectName(QString::fromUtf8("lblLicence26"));
        lblLicence26->setGeometry(QRect(714, 341, 37, 37));
        lblLicence26->setAutoFillBackground(false);
        lblLicence26->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence26->setFrameShape(QFrame::Panel);
        lblLicence26->setFrameShadow(QFrame::Raised);
        lblLicence26->setLineWidth(4);
        lblLicence26->setTextFormat(Qt::AutoText);
        lblLicence26->setScaledContents(false);
        lblLicence26->setAlignment(Qt::AlignCenter);
        lblLicence21 = new QLabel(CPictureContrastDlg);
        lblLicence21->setObjectName(QString::fromUtf8("lblLicence21"));
        lblLicence21->setGeometry(QRect(505, 341, 37, 37));
        lblLicence21->setAutoFillBackground(false);
        lblLicence21->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence21->setFrameShape(QFrame::Panel);
        lblLicence21->setFrameShadow(QFrame::Raised);
        lblLicence21->setLineWidth(4);
        lblLicence21->setTextFormat(Qt::AutoText);
        lblLicence21->setScaledContents(false);
        lblLicence21->setAlignment(Qt::AlignCenter);
        lblLicence27 = new QLabel(CPictureContrastDlg);
        lblLicence27->setObjectName(QString::fromUtf8("lblLicence27"));
        lblLicence27->setGeometry(QRect(756, 341, 37, 37));
        lblLicence27->setAutoFillBackground(false);
        lblLicence27->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence27->setFrameShape(QFrame::Panel);
        lblLicence27->setFrameShadow(QFrame::Raised);
        lblLicence27->setLineWidth(4);
        lblLicence27->setTextFormat(Qt::AutoText);
        lblLicence27->setScaledContents(false);
        lblLicence27->setAlignment(Qt::AlignCenter);
        lblLicence17 = new QLabel(CPictureContrastDlg);
        lblLicence17->setObjectName(QString::fromUtf8("lblLicence17"));
        lblLicence17->setGeometry(QRect(296, 341, 37, 37));
        lblLicence17->setAutoFillBackground(false);
        lblLicence17->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence17->setFrameShape(QFrame::Panel);
        lblLicence17->setFrameShadow(QFrame::Raised);
        lblLicence17->setLineWidth(4);
        lblLicence17->setTextFormat(Qt::AutoText);
        lblLicence17->setScaledContents(false);
        lblLicence17->setAlignment(Qt::AlignCenter);
        btnVerifyIn = new QPushButton(CPictureContrastDlg);
        btnVerifyIn->setObjectName(QString::fromUtf8("btnVerifyIn"));
        btnVerifyIn->setGeometry(QRect(380, 341, 63, 37));
        btnVerifyIn->setStyleSheet(QString::fromUtf8("backgroud-image:url(none);\n"
"background-color: rgb(255, 255, 255);"));
        lblLicence16 = new QLabel(CPictureContrastDlg);
        lblLicence16->setObjectName(QString::fromUtf8("lblLicence16"));
        lblLicence16->setGeometry(QRect(254, 341, 37, 37));
        lblLicence16->setAutoFillBackground(false);
        lblLicence16->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence16->setFrameShape(QFrame::Panel);
        lblLicence16->setFrameShadow(QFrame::Raised);
        lblLicence16->setLineWidth(4);
        lblLicence16->setTextFormat(Qt::AutoText);
        lblLicence16->setScaledContents(false);
        lblLicence16->setAlignment(Qt::AlignCenter);
        lblLicence23 = new QLabel(CPictureContrastDlg);
        lblLicence23->setObjectName(QString::fromUtf8("lblLicence23"));
        lblLicence23->setGeometry(QRect(588, 341, 37, 37));
        lblLicence23->setAutoFillBackground(false);
        lblLicence23->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence23->setFrameShape(QFrame::Panel);
        lblLicence23->setFrameShadow(QFrame::Raised);
        lblLicence23->setLineWidth(4);
        lblLicence23->setTextFormat(Qt::AutoText);
        lblLicence23->setScaledContents(false);
        lblLicence23->setAlignment(Qt::AlignCenter);
        lblLicence11 = new QLabel(CPictureContrastDlg);
        lblLicence11->setObjectName(QString::fromUtf8("lblLicence11"));
        lblLicence11->setGeometry(QRect(45, 341, 37, 37));
        lblLicence11->setAutoFillBackground(false);
        lblLicence11->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence11->setFrameShape(QFrame::Panel);
        lblLicence11->setFrameShadow(QFrame::Raised);
        lblLicence11->setLineWidth(4);
        lblLicence11->setTextFormat(Qt::AutoText);
        lblLicence11->setScaledContents(false);
        lblLicence11->setAlignment(Qt::AlignCenter);
        lblLicence15 = new QLabel(CPictureContrastDlg);
        lblLicence15->setObjectName(QString::fromUtf8("lblLicence15"));
        lblLicence15->setGeometry(QRect(212, 341, 37, 37));
        lblLicence15->setAutoFillBackground(false);
        lblLicence15->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence15->setFrameShape(QFrame::Panel);
        lblLicence15->setFrameShadow(QFrame::Raised);
        lblLicence15->setLineWidth(4);
        lblLicence15->setTextFormat(Qt::AutoText);
        lblLicence15->setScaledContents(false);
        lblLicence15->setAlignment(Qt::AlignCenter);
        lblLicence13 = new QLabel(CPictureContrastDlg);
        lblLicence13->setObjectName(QString::fromUtf8("lblLicence13"));
        lblLicence13->setGeometry(QRect(128, 341, 37, 37));
        lblLicence13->setAutoFillBackground(false);
        lblLicence13->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence13->setFrameShape(QFrame::Panel);
        lblLicence13->setFrameShadow(QFrame::Raised);
        lblLicence13->setLineWidth(4);
        lblLicence13->setTextFormat(Qt::AutoText);
        lblLicence13->setScaledContents(false);
        lblLicence13->setAlignment(Qt::AlignCenter);
        lblLicence12 = new QLabel(CPictureContrastDlg);
        lblLicence12->setObjectName(QString::fromUtf8("lblLicence12"));
        lblLicence12->setGeometry(QRect(86, 341, 37, 37));
        lblLicence12->setAutoFillBackground(false);
        lblLicence12->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence12->setFrameShape(QFrame::Panel);
        lblLicence12->setFrameShadow(QFrame::Raised);
        lblLicence12->setLineWidth(4);
        lblLicence12->setTextFormat(Qt::AutoText);
        lblLicence12->setScaledContents(false);
        lblLicence12->setAlignment(Qt::AlignCenter);
        lblLicence24 = new QLabel(CPictureContrastDlg);
        lblLicence24->setObjectName(QString::fromUtf8("lblLicence24"));
        lblLicence24->setGeometry(QRect(629, 341, 37, 37));
        lblLicence24->setAutoFillBackground(false);
        lblLicence24->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"background-color: rgb(20, 37, 81);\n"
"color: rgb(255, 255, 255);\n"
"font: 25pt \"\351\273\221\344\275\223\";"));
        lblLicence24->setFrameShape(QFrame::Panel);
        lblLicence24->setFrameShadow(QFrame::Raised);
        lblLicence24->setLineWidth(4);
        lblLicence24->setTextFormat(Qt::AutoText);
        lblLicence24->setScaledContents(false);
        lblLicence24->setAlignment(Qt::AlignCenter);
        gbFee = new QGroupBox(CPictureContrastDlg);
        gbFee->setObjectName(QString::fromUtf8("gbFee"));
        gbFee->setGeometry(QRect(270, 410, 631, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        gbFee->setFont(font4);
        gbFee->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        rdx8 = new QRadioButton(gbFee);
        rdx8->setObjectName(QString::fromUtf8("rdx8"));
        rdx8->setGeometry(QRect(552, 21, 71, 16));
        rdx8->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        rdx7 = new QRadioButton(gbFee);
        rdx7->setObjectName(QString::fromUtf8("rdx7"));
        rdx7->setGeometry(QRect(398, 21, 71, 16));
        rdx7->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        rdx5 = new QRadioButton(gbFee);
        rdx5->setObjectName(QString::fromUtf8("rdx5"));
        rdx5->setGeometry(QRect(91, 21, 59, 16));
        rdx5->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        rdx1 = new QRadioButton(gbFee);
        rdx1->setObjectName(QString::fromUtf8("rdx1"));
        rdx1->setGeometry(QRect(14, 21, 59, 16));
        rdx1->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        rdx2 = new QRadioButton(gbFee);
        rdx2->setObjectName(QString::fromUtf8("rdx2"));
        rdx2->setGeometry(QRect(168, 21, 59, 16));
        rdx2->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        rdx2->setChecked(true);
        rdx3 = new QRadioButton(gbFee);
        rdx3->setObjectName(QString::fromUtf8("rdx3"));
        rdx3->setGeometry(QRect(245, 21, 59, 16));
        rdx3->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        rdx6 = new QRadioButton(gbFee);
        rdx6->setObjectName(QString::fromUtf8("rdx6"));
        rdx6->setGeometry(QRect(322, 21, 59, 16));
        rdx6->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        rdx4 = new QRadioButton(gbFee);
        rdx4->setObjectName(QString::fromUtf8("rdx4"));
        rdx4->setGeometry(QRect(475, 21, 71, 16));
        rdx4->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        frame = new QFrame(CPictureContrastDlg);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(269, 400, 631, 21));
        frame->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lblDateTime = new QLabel(frame);
        lblDateTime->setObjectName(QString::fromUtf8("lblDateTime"));
        lblDateTime->setGeometry(QRect(400, 0, 221, 20));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font5.setPointSize(9);
        font5.setBold(false);
        font5.setWeight(50);
        lblDateTime->setFont(font5);
        lblDateTime->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblDateTime->setAlignment(Qt::AlignCenter);

        retranslateUi(CPictureContrastDlg);

        QMetaObject::connectSlotsByName(CPictureContrastDlg);
    } // setupUi

    void retranslateUi(QDialog *CPictureContrastDlg)
    {
        CPictureContrastDlg->setWindowTitle(QApplication::translate("CPictureContrastDlg", "\346\224\276\350\241\214\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        btnPass->setText(QString());
        label_2->setText(QApplication::translate("CPictureContrastDlg", "\343\200\200\343\200\200\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CPictureContrastDlg", "\343\200\200\350\207\252\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CPictureContrastDlg", "\343\200\200\345\215\241\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CPictureContrastDlg", "\343\200\200\343\200\200\350\275\246\344\270\273\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CPictureContrastDlg", "\343\200\200\343\200\200\350\275\246\347\211\214\357\274\232", 0, QApplication::UnicodeUTF8));
        edtVechilePlate->setText(QString());
        label_5->setText(QApplication::translate("CPictureContrastDlg", "\343\200\200\343\200\200\350\275\246\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CPictureContrastDlg", "\343\200\200\343\200\200\344\275\231\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CPictureContrastDlg", "\345\210\260\346\234\237\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        edtExpiration->setText(QString());
        label_10->setText(QApplication::translate("CPictureContrastDlg", "\350\277\233\345\205\245\351\200\232\351\201\223\357\274\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CPictureContrastDlg", "\350\277\233\345\205\245\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("CPictureContrastDlg", "\347\246\273\345\274\200\351\200\232\351\201\223\357\274\232", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("CPictureContrastDlg", "\347\246\273\345\274\200\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("CPictureContrastDlg", "\345\201\234\347\225\231\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        btnPass1->setText(QApplication::translate("CPictureContrastDlg", "1", 0, QApplication::UnicodeUTF8));
        btnPass2->setText(QApplication::translate("CPictureContrastDlg", "2", 0, QApplication::UnicodeUTF8));
        btnPass3->setText(QApplication::translate("CPictureContrastDlg", "3", 0, QApplication::UnicodeUTF8));
        btnPass4->setText(QApplication::translate("CPictureContrastDlg", "4", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CPictureContrastDlg", "\345\244\207   \346\263\250", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CPictureContrastDlg", "\346\212\230\346\211\243\351\200\211\346\213\251\357\274\232", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("CPictureContrastDlg", "\346\224\266\350\264\271\357\274\232", 0, QApplication::UnicodeUTF8));
        edtAmount->setText(QString());
        lblEnterImg->setText(QString());
        lblLeaveImg->setText(QString());
        lblCarImg->setText(QString());
        lblUserImg->setText(QString());
        lblTitle->setText(QString());
        lblLicence28->setText(QString());
        lblLicence18->setText(QString());
        lblLicence22->setText(QString());
        lblLicence25->setText(QString());
        lblLicence14->setText(QString());
        btnVerifyOut->setText(QString());
        lblLicence26->setText(QString());
        lblLicence21->setText(QString());
        lblLicence27->setText(QString());
        lblLicence17->setText(QString());
        btnVerifyIn->setText(QString());
        lblLicence16->setText(QString());
        lblLicence23->setText(QString());
        lblLicence11->setText(QString());
        lblLicence15->setText(QString());
        lblLicence13->setText(QString());
        lblLicence12->setText(QString());
        lblLicence24->setText(QString());
        gbFee->setTitle(QApplication::translate("CPictureContrastDlg", "\351\200\211\346\213\251\350\264\271\347\216\207", 0, QApplication::UnicodeUTF8));
        rdx8->setText(QApplication::translate("CPictureContrastDlg", "\350\207\252\345\256\232\344\271\211\344\270\211", 0, QApplication::UnicodeUTF8));
        rdx7->setText(QApplication::translate("CPictureContrastDlg", "\350\207\252\345\256\232\344\271\211\344\270\200", 0, QApplication::UnicodeUTF8));
        rdx5->setText(QApplication::translate("CPictureContrastDlg", "\344\270\255\345\236\213\350\275\246", 0, QApplication::UnicodeUTF8));
        rdx1->setText(QApplication::translate("CPictureContrastDlg", "\345\244\247\345\236\213\350\275\246", 0, QApplication::UnicodeUTF8));
        rdx2->setText(QApplication::translate("CPictureContrastDlg", "\345\260\217\345\236\213\350\275\246", 0, QApplication::UnicodeUTF8));
        rdx3->setText(QApplication::translate("CPictureContrastDlg", "\346\221\251\346\211\230\350\275\246", 0, QApplication::UnicodeUTF8));
        rdx6->setText(QApplication::translate("CPictureContrastDlg", "\345\205\215\350\264\271\350\275\246", 0, QApplication::UnicodeUTF8));
        rdx4->setText(QApplication::translate("CPictureContrastDlg", "\350\207\252\345\256\232\344\271\211\344\272\214", 0, QApplication::UnicodeUTF8));
        lblDateTime->setText(QApplication::translate("CPictureContrastDlg", "2001\345\271\26410\346\234\21031\346\227\245 22\357\274\23214\357\274\23245", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CPictureContrastDlg: public Ui_CPictureContrastDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTURECONTRASTDLG_H
