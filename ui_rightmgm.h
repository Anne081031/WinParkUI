/********************************************************************************
** Form generated from reading UI file 'rightmgm.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIGHTMGM_H
#define UI_RIGHTMGM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRightMgm
{
public:
    QGroupBox *gbRight;
    QTableWidget *tableRight;
    QWidget *wgButton;
    QWidget *layoutWidget;
    QHBoxLayout *hbLayout;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QPushButton *btnExit;
    QLabel *lblTitle;
    QLabel *lblClose;

    void setupUi(QFrame *CRightMgm)
    {
        if (CRightMgm->objectName().isEmpty())
            CRightMgm->setObjectName(QString::fromUtf8("CRightMgm"));
        CRightMgm->resize(1390, 818);
        CRightMgm->setStyleSheet(QString::fromUtf8("background-image:url(D:/WinParkUI/debug/Image/NewIcon/CommonBigBG-normal.jpg);"));
        CRightMgm->setFrameShape(QFrame::NoFrame);
        CRightMgm->setFrameShadow(QFrame::Raised);
        gbRight = new QGroupBox(CRightMgm);
        gbRight->setObjectName(QString::fromUtf8("gbRight"));
        gbRight->setGeometry(QRect(40, 50, 1301, 681));
        gbRight->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tableRight = new QTableWidget(gbRight);
        if (tableRight->columnCount() < 33)
            tableRight->setColumnCount(33);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(15, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(16, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(17, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(18, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(19, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(20, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(21, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(22, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(23, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(24, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(25, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(26, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(27, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(28, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(29, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(30, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(31, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableRight->setHorizontalHeaderItem(32, __qtablewidgetitem32);
        if (tableRight->rowCount() < 1)
            tableRight->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableRight->setVerticalHeaderItem(0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableRight->setItem(0, 0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableRight->setItem(0, 2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableRight->setItem(0, 3, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setCheckState(Qt::Checked);
        tableRight->setItem(0, 4, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setCheckState(Qt::Checked);
        tableRight->setItem(0, 5, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setCheckState(Qt::Checked);
        tableRight->setItem(0, 6, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setCheckState(Qt::Checked);
        tableRight->setItem(0, 7, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setCheckState(Qt::Checked);
        tableRight->setItem(0, 8, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setCheckState(Qt::Checked);
        tableRight->setItem(0, 9, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setCheckState(Qt::Checked);
        tableRight->setItem(0, 10, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setCheckState(Qt::Checked);
        tableRight->setItem(0, 11, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setCheckState(Qt::Checked);
        tableRight->setItem(0, 12, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setCheckState(Qt::Checked);
        tableRight->setItem(0, 13, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setCheckState(Qt::Checked);
        tableRight->setItem(0, 14, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setCheckState(Qt::Checked);
        tableRight->setItem(0, 15, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setCheckState(Qt::Checked);
        tableRight->setItem(0, 16, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setCheckState(Qt::Checked);
        tableRight->setItem(0, 17, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setCheckState(Qt::Checked);
        tableRight->setItem(0, 18, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        __qtablewidgetitem52->setCheckState(Qt::Checked);
        tableRight->setItem(0, 19, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        __qtablewidgetitem53->setCheckState(Qt::Checked);
        tableRight->setItem(0, 21, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        __qtablewidgetitem54->setCheckState(Qt::Checked);
        tableRight->setItem(0, 22, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        __qtablewidgetitem55->setCheckState(Qt::Checked);
        tableRight->setItem(0, 23, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        __qtablewidgetitem56->setCheckState(Qt::Checked);
        tableRight->setItem(0, 24, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        __qtablewidgetitem57->setCheckState(Qt::Checked);
        __qtablewidgetitem57->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableRight->setItem(0, 25, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        __qtablewidgetitem58->setCheckState(Qt::Checked);
        tableRight->setItem(0, 26, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        __qtablewidgetitem59->setCheckState(Qt::Checked);
        tableRight->setItem(0, 27, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        __qtablewidgetitem60->setCheckState(Qt::Checked);
        tableRight->setItem(0, 28, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        __qtablewidgetitem61->setCheckState(Qt::Checked);
        tableRight->setItem(0, 29, __qtablewidgetitem61);
        tableRight->setObjectName(QString::fromUtf8("tableRight"));
        tableRight->setGeometry(QRect(10, 20, 1281, 651));
        tableRight->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        wgButton = new QWidget(CRightMgm);
        wgButton->setObjectName(QString::fromUtf8("wgButton"));
        wgButton->setGeometry(QRect(490, 750, 401, 31));
        wgButton->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        layoutWidget = new QWidget(wgButton);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 401, 25));
        layoutWidget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        hbLayout = new QHBoxLayout(layoutWidget);
        hbLayout->setObjectName(QString::fromUtf8("hbLayout"));
        hbLayout->setContentsMargins(0, 0, 0, 0);
        btnNew = new QPushButton(layoutWidget);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));
        btnNew->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        hbLayout->addWidget(btnNew);

        btnEdit = new QPushButton(layoutWidget);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        hbLayout->addWidget(btnEdit);

        btnDelete = new QPushButton(layoutWidget);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        hbLayout->addWidget(btnDelete);

        btnExit = new QPushButton(layoutWidget);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        hbLayout->addWidget(btnExit);

        lblTitle = new QLabel(CRightMgm);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(170, 0, 0);"));
        lblClose = new QLabel(CRightMgm);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(1350, 6, 30, 15));

        retranslateUi(CRightMgm);

        QMetaObject::connectSlotsByName(CRightMgm);
    } // setupUi

    void retranslateUi(QFrame *CRightMgm)
    {
        CRightMgm->setWindowTitle(QApplication::translate("CRightMgm", "\346\235\203\351\231\220\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        gbRight->setTitle(QApplication::translate("CRightMgm", "\346\235\203\351\231\220\345\210\206\351\205\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableRight->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CRightMgm", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableRight->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CRightMgm", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableRight->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CRightMgm", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableRight->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CRightMgm", "\346\235\203\351\231\220\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableRight->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("CRightMgm", "\346\235\203\351\231\220\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableRight->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("CRightMgm", "\350\264\271\347\216\207\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableRight->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("CRightMgm", "\346\225\260\346\215\256\347\273\264\346\212\244", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableRight->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("CRightMgm", "\347\263\273\347\273\237\346\227\245\345\277\227", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableRight->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("CRightMgm", "\350\247\206\351\242\221\346\234\215\345\212\241", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableRight->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("CRightMgm", "\350\275\246\347\211\214\346\234\215\345\212\241", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableRight->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("CRightMgm", "\350\277\236\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableRight->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("CRightMgm", "\351\200\200\345\207\272\350\275\257\344\273\266", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableRight->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("CRightMgm", "\346\234\210\347\247\237\345\215\241", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableRight->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QApplication::translate("CRightMgm", "\345\202\250\345\200\274\345\215\241", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableRight->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QApplication::translate("CRightMgm", "\350\256\241\346\227\266\345\215\241", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableRight->horizontalHeaderItem(15);
        ___qtablewidgetitem15->setText(QApplication::translate("CRightMgm", "\345\217\221\345\270\203\346\230\276\347\244\272\345\261\217\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableRight->horizontalHeaderItem(16);
        ___qtablewidgetitem16->setText(QApplication::translate("CRightMgm", "\350\256\276\345\244\207\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableRight->horizontalHeaderItem(17);
        ___qtablewidgetitem17->setText(QApplication::translate("CRightMgm", "\347\263\273\347\273\237\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = tableRight->horizontalHeaderItem(18);
        ___qtablewidgetitem18->setText(QApplication::translate("CRightMgm", "\346\211\271\351\207\217\350\256\276\347\275\256\345\215\241\347\211\207\350\277\233\345\207\272\346\235\203", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = tableRight->horizontalHeaderItem(19);
        ___qtablewidgetitem19->setText(QApplication::translate("CRightMgm", "\346\224\266\350\264\271\346\212\230\346\211\243\347\247\215\347\261\273\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = tableRight->horizontalHeaderItem(20);
        ___qtablewidgetitem20->setText(QApplication::translate("CRightMgm", "\351\273\221\345\220\215\345\215\225", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = tableRight->horizontalHeaderItem(21);
        ___qtablewidgetitem21->setText(QApplication::translate("CRightMgm", "\344\270\262\345\217\243\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = tableRight->horizontalHeaderItem(22);
        ___qtablewidgetitem22->setText(QApplication::translate("CRightMgm", "\350\275\246\347\211\214\350\257\206\345\210\253\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem23 = tableRight->horizontalHeaderItem(23);
        ___qtablewidgetitem23->setText(QApplication::translate("CRightMgm", "\346\227\266\351\227\264\345\220\214\346\255\245", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem24 = tableRight->horizontalHeaderItem(24);
        ___qtablewidgetitem24->setText(QApplication::translate("CRightMgm", "\345\207\272\345\205\245\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem25 = tableRight->horizontalHeaderItem(25);
        ___qtablewidgetitem25->setText(QApplication::translate("CRightMgm", "\347\273\255\350\264\271\347\272\252\345\275\225", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem26 = tableRight->horizontalHeaderItem(26);
        ___qtablewidgetitem26->setText(QApplication::translate("CRightMgm", "\346\212\230\346\211\243\346\261\207\346\200\273\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem27 = tableRight->horizontalHeaderItem(27);
        ___qtablewidgetitem27->setText(QApplication::translate("CRightMgm", "\346\211\223\345\215\260\346\227\245\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem28 = tableRight->horizontalHeaderItem(28);
        ___qtablewidgetitem28->setText(QApplication::translate("CRightMgm", "\346\211\223\345\215\260\346\234\210\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem29 = tableRight->horizontalHeaderItem(29);
        ___qtablewidgetitem29->setText(QApplication::translate("CRightMgm", "\346\211\223\345\215\260\345\271\264\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem30 = tableRight->horizontalHeaderItem(30);
        ___qtablewidgetitem30->setText(QApplication::translate("CRightMgm", "\344\275\217\345\235\200", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem31 = tableRight->horizontalHeaderItem(31);
        ___qtablewidgetitem31->setText(QApplication::translate("CRightMgm", "\347\224\265\350\257\235", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem32 = tableRight->horizontalHeaderItem(32);
        ___qtablewidgetitem32->setText(QApplication::translate("CRightMgm", "id", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem33 = tableRight->verticalHeaderItem(0);
        ___qtablewidgetitem33->setText(QApplication::translate("CRightMgm", "1", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = tableRight->isSortingEnabled();
        tableRight->setSortingEnabled(false);
        tableRight->setSortingEnabled(__sortingEnabled);

        btnNew->setText(QApplication::translate("CRightMgm", "\346\226\260\345\273\272", 0, QApplication::UnicodeUTF8));
        btnEdit->setText(QApplication::translate("CRightMgm", "\347\274\226\350\276\221", 0, QApplication::UnicodeUTF8));
        btnDelete->setText(QApplication::translate("CRightMgm", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        btnExit->setText(QApplication::translate("CRightMgm", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CRightMgm: public Ui_CRightMgm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIGHTMGM_H
