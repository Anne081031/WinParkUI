/********************************************************************************
** Form generated from reading UI file 'publishledinfo.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUBLISHLEDINFO_H
#define UI_PUBLISHLEDINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CPublishLEDInfo
{
public:
    QWidget *widget;
    QGroupBox *groupBox;
    QTableWidget *tableWidget;
    QFrame *frame_2;
    QPushButton *btnUnselectAll;
    QPushButton *btnSelectAll;
    QFrame *frame;
    QPushButton *btnDownload;
    QPushButton *btnClose;
    QPushButton *btnDownloadTime;
    QLabel *lblTitle;
    QGroupBox *groupBox_2;
    QLabel *label_6;
    QPlainTextEdit *edtLedInfo;
    QLabel *lblClose;

    void setupUi(QFrame *CPublishLEDInfo)
    {
        if (CPublishLEDInfo->objectName().isEmpty())
            CPublishLEDInfo->setObjectName(QString::fromUtf8("CPublishLEDInfo"));
        CPublishLEDInfo->resize(730, 692);
        CPublishLEDInfo->setStyleSheet(QString::fromUtf8("background-image:url(D:/WinParkUI/debug/Image/NewIcon/CommonMiddleBG-normal.jpg);"));
        CPublishLEDInfo->setFrameShape(QFrame::StyledPanel);
        CPublishLEDInfo->setFrameShadow(QFrame::Raised);
        widget = new QWidget(CPublishLEDInfo);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 60, 631, 361));
        widget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 630, 351));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 611, 291));
        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(296, 313, 181, 31));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        btnUnselectAll = new QPushButton(frame_2);
        btnUnselectAll->setObjectName(QString::fromUtf8("btnUnselectAll"));
        btnUnselectAll->setGeometry(QRect(95, 3, 75, 23));
        btnUnselectAll->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnSelectAll = new QPushButton(frame_2);
        btnSelectAll->setObjectName(QString::fromUtf8("btnSelectAll"));
        btnSelectAll->setGeometry(QRect(9, 3, 75, 23));
        btnSelectAll->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        frame = new QFrame(CPublishLEDInfo);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(235, 620, 260, 25));
        frame->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btnDownload = new QPushButton(frame);
        btnDownload->setObjectName(QString::fromUtf8("btnDownload"));
        btnDownload->setGeometry(QRect(94, 0, 75, 23));
        btnDownload->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        btnClose = new QPushButton(frame);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(180, 0, 75, 23));
        btnDownloadTime = new QPushButton(frame);
        btnDownloadTime->setObjectName(QString::fromUtf8("btnDownloadTime"));
        btnDownloadTime->setGeometry(QRect(4, 0, 75, 23));
        btnDownloadTime->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        lblTitle = new QLabel(CPublishLEDInfo);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(170, 0, 0);"));
        groupBox_2 = new QGroupBox(CPublishLEDInfo);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(49, 430, 631, 181));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(11, 10, 291, 16));
        label_6->setStyleSheet(QString::fromUtf8("background-image:url( );"));
        edtLedInfo = new QPlainTextEdit(groupBox_2);
        edtLedInfo->setObjectName(QString::fromUtf8("edtLedInfo"));
        edtLedInfo->setGeometry(QRect(10, 35, 611, 141));
        edtLedInfo->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblClose = new QLabel(CPublishLEDInfo);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(690, 7, 30, 15));

        retranslateUi(CPublishLEDInfo);

        QMetaObject::connectSlotsByName(CPublishLEDInfo);
    } // setupUi

    void retranslateUi(QFrame *CPublishLEDInfo)
    {
        CPublishLEDInfo->setWindowTitle(QApplication::translate("CPublishLEDInfo", "\345\217\221\345\270\203LED\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CPublishLEDInfo", "LED\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CPublishLEDInfo", "\350\256\276\345\244\207CAN\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CPublishLEDInfo", "\344\270\273\346\234\272IP\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CPublishLEDInfo", "\347\233\256\346\240\207\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        btnUnselectAll->setText(QApplication::translate("CPublishLEDInfo", "\345\205\250\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        btnSelectAll->setText(QApplication::translate("CPublishLEDInfo", "\345\205\250\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        btnDownload->setText(QApplication::translate("CPublishLEDInfo", "\345\217\221\345\270\203\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("CPublishLEDInfo", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        btnDownloadTime->setText(QApplication::translate("CPublishLEDInfo", "\344\270\213\344\274\240\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        groupBox_2->setTitle(QString());
        label_6->setText(QApplication::translate("CPublishLEDInfo", "\344\277\241\346\201\257\345\206\205\345\256\271\357\274\210\344\270\215\350\266\205\350\277\20720\344\270\252\345\255\227\347\254\246\357\274\214\347\251\272\346\240\274\345\217\212\346\240\207\347\202\271\345\277\205\351\241\273\344\270\272\345\205\250\350\247\222\357\274\211", 0, QApplication::UnicodeUTF8));
        edtLedInfo->setPlainText(QApplication::translate("CPublishLEDInfo", "\345\211\215\351\200\224\347\247\221\346\212\200", 0, QApplication::UnicodeUTF8));
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CPublishLEDInfo: public Ui_CPublishLEDInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUBLISHLEDINFO_H
