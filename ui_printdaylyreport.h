/********************************************************************************
** Form generated from reading UI file 'printdaylyreport.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTDAYLYREPORT_H
#define UI_PRINTDAYLYREPORT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_CPrintDaylyReport
{
public:
    QLabel *lblTitle;
    QWebView *wvReport;
    QGroupBox *gbType;
    QRadioButton *rdChx01;
    QRadioButton *rdChx02;
    QRadioButton *rdChx03;
    QRadioButton *rdChx04;
    QRadioButton *rdChx06;
    QRadioButton *rdChx05;
    QRadioButton *rdChx07;
    QRadioButton *rdChx08;
    QRadioButton *rdChx09;
    QRadioButton *rdChx10;
    QLabel *label_2;
    QLabel *label;
    QLabel *lblClose;
    QDateTimeEdit *dReportStartDate;
    QDateTimeEdit *dReportEndDate;
    QPushButton *btnPrint;
    QPushButton *btnGenerate;
    QPushButton *btnClose;

    void setupUi(QFrame *CPrintDaylyReport)
    {
        if (CPrintDaylyReport->objectName().isEmpty())
            CPrintDaylyReport->setObjectName(QString::fromUtf8("CPrintDaylyReport"));
        CPrintDaylyReport->resize(730, 692);
        CPrintDaylyReport->setStyleSheet(QString::fromUtf8("background-image:url(D:/WinParkUI/debug/Image/NewIcon/CommonMiddleBG-normal.jpg);"));
        CPrintDaylyReport->setFrameShape(QFrame::StyledPanel);
        CPrintDaylyReport->setFrameShadow(QFrame::Raised);
        lblTitle = new QLabel(CPrintDaylyReport);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(170, 0, 0);"));
        wvReport = new QWebView(CPrintDaylyReport);
        wvReport->setObjectName(QString::fromUtf8("wvReport"));
        wvReport->setGeometry(QRect(50, 60, 631, 461));
        wvReport->setUrl(QUrl("about:blank"));
        gbType = new QGroupBox(CPrintDaylyReport);
        gbType->setObjectName(QString::fromUtf8("gbType"));
        gbType->setGeometry(QRect(50, 560, 621, 61));
        gbType->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        rdChx01 = new QRadioButton(gbType);
        rdChx01->setObjectName(QString::fromUtf8("rdChx01"));
        rdChx01->setGeometry(QRect(17, 19, 71, 16));
        rdChx01->setChecked(true);
        rdChx02 = new QRadioButton(gbType);
        rdChx02->setObjectName(QString::fromUtf8("rdChx02"));
        rdChx02->setGeometry(QRect(90, 19, 71, 16));
        rdChx03 = new QRadioButton(gbType);
        rdChx03->setObjectName(QString::fromUtf8("rdChx03"));
        rdChx03->setGeometry(QRect(160, 19, 71, 16));
        rdChx04 = new QRadioButton(gbType);
        rdChx04->setObjectName(QString::fromUtf8("rdChx04"));
        rdChx04->setGeometry(QRect(230, 19, 111, 16));
        rdChx04->setChecked(false);
        rdChx06 = new QRadioButton(gbType);
        rdChx06->setObjectName(QString::fromUtf8("rdChx06"));
        rdChx06->setGeometry(QRect(460, 19, 111, 20));
        rdChx06->setChecked(false);
        rdChx05 = new QRadioButton(gbType);
        rdChx05->setObjectName(QString::fromUtf8("rdChx05"));
        rdChx05->setGeometry(QRect(340, 20, 111, 16));
        rdChx05->setChecked(false);
        rdChx07 = new QRadioButton(gbType);
        rdChx07->setObjectName(QString::fromUtf8("rdChx07"));
        rdChx07->setGeometry(QRect(17, 40, 71, 20));
        rdChx07->setChecked(false);
        rdChx08 = new QRadioButton(gbType);
        rdChx08->setObjectName(QString::fromUtf8("rdChx08"));
        rdChx08->setGeometry(QRect(90, 40, 71, 20));
        rdChx08->setChecked(false);
        rdChx09 = new QRadioButton(gbType);
        rdChx09->setObjectName(QString::fromUtf8("rdChx09"));
        rdChx09->setGeometry(QRect(160, 40, 81, 20));
        rdChx09->setChecked(false);
        rdChx10 = new QRadioButton(gbType);
        rdChx10->setObjectName(QString::fromUtf8("rdChx10"));
        rdChx10->setGeometry(QRect(250, 40, 101, 20));
        rdChx10->setChecked(false);
        label_2 = new QLabel(CPrintDaylyReport);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(253, 630, 16, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label = new QLabel(CPrintDaylyReport);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 630, 60, 16));
        label->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblClose = new QLabel(CPrintDaylyReport);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(690, 7, 30, 15));
        dReportStartDate = new QDateTimeEdit(CPrintDaylyReport);
        dReportStartDate->setObjectName(QString::fromUtf8("dReportStartDate"));
        dReportStartDate->setGeometry(QRect(120, 630, 121, 22));
        dReportStartDate->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        dReportStartDate->setCalendarPopup(true);
        dReportEndDate = new QDateTimeEdit(CPrintDaylyReport);
        dReportEndDate->setObjectName(QString::fromUtf8("dReportEndDate"));
        dReportEndDate->setGeometry(QRect(280, 630, 121, 22));
        dReportEndDate->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        dReportEndDate->setCalendarPopup(true);
        btnPrint = new QPushButton(CPrintDaylyReport);
        btnPrint->setObjectName(QString::fromUtf8("btnPrint"));
        btnPrint->setGeometry(QRect(514, 631, 75, 23));
        btnPrint->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnGenerate = new QPushButton(CPrintDaylyReport);
        btnGenerate->setObjectName(QString::fromUtf8("btnGenerate"));
        btnGenerate->setGeometry(QRect(433, 631, 75, 23));
        btnGenerate->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnClose = new QPushButton(CPrintDaylyReport);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(595, 631, 75, 23));
        btnClose->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        retranslateUi(CPrintDaylyReport);

        QMetaObject::connectSlotsByName(CPrintDaylyReport);
    } // setupUi

    void retranslateUi(QFrame *CPrintDaylyReport)
    {
        CPrintDaylyReport->setWindowTitle(QApplication::translate("CPrintDaylyReport", "\346\212\245\350\241\250\346\211\223\345\215\260", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        gbType->setTitle(QApplication::translate("CPrintDaylyReport", "\346\212\245\350\241\250\345\210\206\347\261\273", 0, QApplication::UnicodeUTF8));
        rdChx01->setText(QApplication::translate("CPrintDaylyReport", "\351\207\221\351\242\235\346\214\211\345\271\264", 0, QApplication::UnicodeUTF8));
        rdChx02->setText(QApplication::translate("CPrintDaylyReport", "\351\207\221\351\242\235\346\214\211\346\234\210", 0, QApplication::UnicodeUTF8));
        rdChx03->setText(QApplication::translate("CPrintDaylyReport", "\351\207\221\351\242\235\346\214\211\346\227\245", 0, QApplication::UnicodeUTF8));
        rdChx04->setText(QApplication::translate("CPrintDaylyReport", "\351\207\221\351\242\235\346\214\211\346\224\266\350\264\271\344\272\272\345\221\230", 0, QApplication::UnicodeUTF8));
        rdChx06->setText(QApplication::translate("CPrintDaylyReport", "\350\277\233\345\207\272\346\225\260\351\207\217\346\214\211\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
        rdChx05->setText(QApplication::translate("CPrintDaylyReport", "\350\256\241\346\227\266\345\215\241\346\224\266\350\264\271\346\230\216\347\273\206", 0, QApplication::UnicodeUTF8));
        rdChx07->setText(QApplication::translate("CPrintDaylyReport", "\346\214\211\347\234\201\347\273\237\350\256\241", 0, QApplication::UnicodeUTF8));
        rdChx08->setText(QApplication::translate("CPrintDaylyReport", "\347\234\201\345\206\205\347\273\237\350\256\241", 0, QApplication::UnicodeUTF8));
        rdChx09->setText(QApplication::translate("CPrintDaylyReport", "\346\234\210\347\247\237\345\215\241\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        rdChx10->setText(QApplication::translate("CPrintDaylyReport", "\346\234\210\347\247\237\345\215\241\350\277\233\345\207\272\346\254\241\346\225\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CPrintDaylyReport", "\350\207\263", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CPrintDaylyReport", "\346\237\245\350\257\242\350\214\203\345\233\264\357\274\232", 0, QApplication::UnicodeUTF8));
        lblClose->setText(QString());
        dReportStartDate->setDisplayFormat(QApplication::translate("CPrintDaylyReport", "yyyy-MM-dd", 0, QApplication::UnicodeUTF8));
        dReportEndDate->setDisplayFormat(QApplication::translate("CPrintDaylyReport", "yyyy-MM-dd", 0, QApplication::UnicodeUTF8));
        btnPrint->setText(QApplication::translate("CPrintDaylyReport", "\346\212\245\350\241\250\346\211\223\345\215\260", 0, QApplication::UnicodeUTF8));
        btnGenerate->setText(QApplication::translate("CPrintDaylyReport", "\346\212\245\350\241\250\347\224\237\346\210\220", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("CPrintDaylyReport", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CPrintDaylyReport: public Ui_CPrintDaylyReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTDAYLYREPORT_H
