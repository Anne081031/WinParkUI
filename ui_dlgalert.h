/********************************************************************************
** Form generated from reading UI file 'dlgalert.ui'
**
** Created: Fri Feb 1 10:57:16 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGALERT_H
#define UI_DLGALERT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_CDlgAlert
{
public:
    QTableWidget *tabAlert;
    QLabel *lblClose;
    QLabel *lblTitle;
    QGroupBox *groupBox;
    QLabel *lblOwner;
    QGroupBox *groupBox_2;
    QLabel *lblCar;
    QGroupBox *groupBox_3;
    QLabel *lblInOut;

    void setupUi(QDialog *CDlgAlert)
    {
        if (CDlgAlert->objectName().isEmpty())
            CDlgAlert->setObjectName(QString::fromUtf8("CDlgAlert"));
        CDlgAlert->resize(730, 692);
        CDlgAlert->setStyleSheet(QString::fromUtf8("background-image: url(D:/WinParkUI/debug/Image/NewIcon/CommonMiddleBG-normal.jpg);"));
        tabAlert = new QTableWidget(CDlgAlert);
        if (tabAlert->columnCount() < 5)
            tabAlert->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabAlert->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabAlert->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabAlert->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabAlert->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabAlert->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tabAlert->setObjectName(QString::fromUtf8("tabAlert"));
        tabAlert->setGeometry(QRect(41, 50, 641, 361));
        tabAlert->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        lblClose = new QLabel(CDlgAlert);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(689, 5, 31, 16));
        lblTitle = new QLabel(CDlgAlert);
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
        groupBox = new QGroupBox(CDlgAlert);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(41, 430, 210, 221));
        groupBox->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        lblOwner = new QLabel(groupBox);
        lblOwner->setObjectName(QString::fromUtf8("lblOwner"));
        lblOwner->setGeometry(QRect(10, 20, 191, 191));
        lblOwner->setStyleSheet(QString::fromUtf8("background-image: url(none);\n"
"background-color: rgb(255, 255, 255);"));
        lblOwner->setFrameShape(QFrame::Panel);
        lblOwner->setFrameShadow(QFrame::Sunken);
        lblOwner->setLineWidth(2);
        lblOwner->setScaledContents(true);
        groupBox_2 = new QGroupBox(CDlgAlert);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(260, 430, 210, 221));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        lblCar = new QLabel(groupBox_2);
        lblCar->setObjectName(QString::fromUtf8("lblCar"));
        lblCar->setGeometry(QRect(10, 20, 191, 191));
        lblCar->setStyleSheet(QString::fromUtf8("background-image: url(none);\n"
"background-color: rgb(255, 255, 255);"));
        lblCar->setFrameShape(QFrame::Panel);
        lblCar->setFrameShadow(QFrame::Sunken);
        lblCar->setLineWidth(2);
        lblCar->setScaledContents(true);
        groupBox_3 = new QGroupBox(CDlgAlert);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(480, 430, 210, 221));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-image: url(none);"));
        lblInOut = new QLabel(groupBox_3);
        lblInOut->setObjectName(QString::fromUtf8("lblInOut"));
        lblInOut->setGeometry(QRect(10, 20, 191, 191));
        lblInOut->setStyleSheet(QString::fromUtf8("background-image: url(none);\n"
"background-color: rgb(255, 255, 255);"));
        lblInOut->setFrameShape(QFrame::Panel);
        lblInOut->setFrameShadow(QFrame::Sunken);
        lblInOut->setLineWidth(2);
        lblInOut->setScaledContents(true);

        retranslateUi(CDlgAlert);

        QMetaObject::connectSlotsByName(CDlgAlert);
    } // setupUi

    void retranslateUi(QDialog *CDlgAlert)
    {
        CDlgAlert->setWindowTitle(QApplication::translate("CDlgAlert", "\346\212\245\350\255\246\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tabAlert->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CDlgAlert", "\345\201\234\350\275\246\345\234\272\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tabAlert->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CDlgAlert", "\350\275\246\347\211\214/\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tabAlert->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CDlgAlert", "\350\277\233\345\207\272\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tabAlert->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CDlgAlert", "\346\212\245\350\255\246\345\216\237\345\233\240", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tabAlert->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("CDlgAlert", "AlertString", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tabAlert->setToolTip(QApplication::translate("CDlgAlert", "\345\217\214\345\207\273\343\200\220\346\212\245\350\255\246\345\216\237\345\233\240\343\200\221\345\215\225\345\205\203\346\240\274\357\274\214\346\230\276\347\244\272\345\233\276\345\203\217\343\200\202", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblClose->setText(QString());
        lblTitle->setText(QString());
        groupBox->setTitle(QApplication::translate("CDlgAlert", "\344\270\232\344\270\273", 0, QApplication::UnicodeUTF8));
        lblOwner->setText(QString());
        groupBox_2->setTitle(QApplication::translate("CDlgAlert", "\350\275\246\350\276\206", 0, QApplication::UnicodeUTF8));
        lblCar->setText(QString());
        groupBox_3->setTitle(QApplication::translate("CDlgAlert", "\350\277\233\345\207\272\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        lblInOut->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CDlgAlert: public Ui_CDlgAlert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGALERT_H
