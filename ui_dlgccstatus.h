/********************************************************************************
** Form generated from reading UI file 'dlgccstatus.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCCSTATUS_H
#define UI_DLGCCSTATUS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_CDlgCCStatus
{
public:
    QLabel *label;
    QComboBox *cbxMode;
    QLabel *label_2;
    QCheckBox *chxDisplay;
    QLabel *label_3;
    QPushButton *btnSave;
    QPushButton *btnCancel;
    QSpinBox *spAmount;
    QSpinBox *spHour;
    QLabel *label_6;
    QSpinBox *spMin;
    QPushButton *btnTest;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *lblTitle;
    QLabel *lblClose;

    void setupUi(QDialog *CDlgCCStatus)
    {
        if (CDlgCCStatus->objectName().isEmpty())
            CDlgCCStatus->setObjectName(QString::fromUtf8("CDlgCCStatus"));
        CDlgCCStatus->resize(463, 350);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CDlgCCStatus->sizePolicy().hasHeightForWidth());
        CDlgCCStatus->setSizePolicy(sizePolicy);
        CDlgCCStatus->setStyleSheet(QString::fromUtf8("background-image: url(D:/WinParkUI/debug/Image/NewIcon/CommonBG-normal.jpg);"));
        label = new QLabel(CDlgCCStatus);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(51, 61, 72, 16));
        label->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        cbxMode = new QComboBox(CDlgCCStatus);
        cbxMode->setObjectName(QString::fromUtf8("cbxMode"));
        cbxMode->setGeometry(QRect(154, 61, 74, 20));
        cbxMode->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        label_2 = new QLabel(CDlgCCStatus);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(51, 101, 96, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        chxDisplay = new QCheckBox(CDlgCCStatus);
        chxDisplay->setObjectName(QString::fromUtf8("chxDisplay"));
        chxDisplay->setGeometry(QRect(154, 101, 16, 16));
        chxDisplay->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        label_3 = new QLabel(CDlgCCStatus);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(51, 140, 91, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        btnSave = new QPushButton(CDlgCCStatus);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(256, 290, 75, 23));
        btnSave->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        btnCancel = new QPushButton(CDlgCCStatus);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(337, 290, 75, 23));
        btnCancel->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        spAmount = new QSpinBox(CDlgCCStatus);
        spAmount->setObjectName(QString::fromUtf8("spAmount"));
        spAmount->setGeometry(QRect(285, 163, 42, 20));
        spAmount->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        spAmount->setMaximum(999);
        spHour = new QSpinBox(CDlgCCStatus);
        spHour->setObjectName(QString::fromUtf8("spHour"));
        spHour->setGeometry(QRect(90, 163, 42, 20));
        spHour->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        spHour->setMaximum(999);
        label_6 = new QLabel(CDlgCCStatus);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 162, 31, 16));
        label_6->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        spMin = new QSpinBox(CDlgCCStatus);
        spMin->setObjectName(QString::fromUtf8("spMin"));
        spMin->setGeometry(QRect(187, 163, 36, 20));
        spMin->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        btnTest = new QPushButton(CDlgCCStatus);
        btnTest->setObjectName(QString::fromUtf8("btnTest"));
        btnTest->setGeometry(QRect(337, 162, 75, 23));
        btnTest->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        label_5 = new QLabel(CDlgCCStatus);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(164, 162, 21, 16));
        label_5->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        label_4 = new QLabel(CDlgCCStatus);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(53, 162, 31, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        lblTitle = new QLabel(CDlgCCStatus);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(20, 5, 141, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"color: rgb(85, 0, 0);"));
        lblClose = new QLabel(CDlgCCStatus);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(423, 6, 30, 15));

        retranslateUi(CDlgCCStatus);

        QMetaObject::connectSlotsByName(CDlgCCStatus);
    } // setupUi

    void retranslateUi(QDialog *CDlgCCStatus)
    {
        CDlgCCStatus->setWindowTitle(QApplication::translate("CDlgCCStatus", "\344\270\255\345\277\203\346\216\247\345\210\266\345\231\250\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDlgCCStatus", "\351\200\232\344\277\241\346\250\241\345\274\217\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        cbxMode->clear();
        cbxMode->insertItems(0, QStringList()
         << QApplication::translate("CDlgCCStatus", "\344\270\262\345\217\243\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CDlgCCStatus", "\347\275\221\347\273\234\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("CDlgCCStatus", "\346\230\257\345\220\246\346\230\276\347\244\272\346\224\266\350\264\271\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        chxDisplay->setText(QString());
        label_3->setText(QApplication::translate("CDlgCCStatus", "\346\230\276\347\244\272\344\277\241\346\201\257\346\265\213\350\257\225\357\274\232", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CDlgCCStatus", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CDlgCCStatus", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CDlgCCStatus", "\346\224\266\350\264\271\357\274\232", 0, QApplication::UnicodeUTF8));
        btnTest->setText(QApplication::translate("CDlgCCStatus", "\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CDlgCCStatus", "\345\210\206\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CDlgCCStatus", "\345\260\217\346\227\266\357\274\232", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CDlgCCStatus: public Ui_CDlgCCStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGCCSTATUS_H
