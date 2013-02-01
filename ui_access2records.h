/********************************************************************************
** Form generated from reading UI file 'access2records.ui'
**
** Created: Fri Feb 1 10:57:14 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCESS2RECORDS_H
#define UI_ACCESS2RECORDS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CAccess2Records
{
public:
    QWidget *widget;
    QTableWidget *tableAccessRecord;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *gb0;
    QLabel *lblImg0;
    QGroupBox *gb1;
    QLabel *lblImg1;
    QGroupBox *gb2;
    QLabel *lblImg2;
    QGroupBox *gb3;
    QLabel *lblImg3;
    QWidget *tab_2;
    QGroupBox *gb5;
    QLabel *lblImg5;
    QGroupBox *gb4;
    QLabel *lblImg4;
    QGroupBox *gb6;
    QLabel *lblImg6;
    QGroupBox *gb7;
    QGroupBox *groupBox_11;
    QGraphicsView *graphicsView_11;
    QGroupBox *groupBox_12;
    QGraphicsView *graphicsView_12;
    QGroupBox *groupBox_13;
    QGraphicsView *graphicsView_13;
    QLabel *lblImg7;
    QPushButton *btnMinimalize;
    QFrame *frame;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cb0;
    QLabel *label_3;
    QComboBox *cb2;
    QLabel *label_7;
    QComboBox *cb3;
    QLabel *label_8;
    QComboBox *cb4;
    QLabel *label_9;
    QComboBox *cb5;
    QLabel *label_10;
    QComboBox *cb6;
    QLabel *label_12;
    QComboBox *cb7;
    QLabel *label_11;
    QComboBox *cb8;
    QPushButton *btnQuery;
    QPushButton *btnSerach;
    QLabel *lblTitle;
    QLabel *lblClose;
    QComboBox *cb1;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QFrame *CAccess2Records)
    {
        if (CAccess2Records->objectName().isEmpty())
            CAccess2Records->setObjectName(QString::fromUtf8("CAccess2Records"));
        CAccess2Records->resize(1390, 818);
        CAccess2Records->setStyleSheet(QString::fromUtf8("background-image:url(D:/WinParkUI/debug/Image/NewIcon/CommonBigBG-normal.jpg);"));
        CAccess2Records->setFrameShape(QFrame::StyledPanel);
        CAccess2Records->setFrameShadow(QFrame::Raised);
        widget = new QWidget(CAccess2Records);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 60, 1301, 731));
        widget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tableAccessRecord = new QTableWidget(widget);
        if (tableAccessRecord->columnCount() < 13)
            tableAccessRecord->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableAccessRecord->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableAccessRecord->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableAccessRecord->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableAccessRecord->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableAccessRecord->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableAccessRecord->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableAccessRecord->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableAccessRecord->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableAccessRecord->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableAccessRecord->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableAccessRecord->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableAccessRecord->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableAccessRecord->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        tableAccessRecord->setObjectName(QString::fromUtf8("tableAccessRecord"));
        tableAccessRecord->setGeometry(QRect(0, 40, 1301, 311));
        tableAccessRecord->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tableAccessRecord->setSelectionMode(QAbstractItemView::SingleSelection);
        tableAccessRecord->setSelectionBehavior(QAbstractItemView::SelectRows);
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 360, 1411, 321));
        tabWidget->setMaximumSize(QSize(1421, 321));
        tabWidget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gb0 = new QGroupBox(tab);
        gb0->setObjectName(QString::fromUtf8("gb0"));
        gb0->setGeometry(QRect(10, 10, 271, 281));
        gb0->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblImg0 = new QLabel(gb0);
        lblImg0->setObjectName(QString::fromUtf8("lblImg0"));
        lblImg0->setGeometry(QRect(10, 20, 251, 251));
        lblImg0->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg0->setFrameShape(QFrame::Panel);
        lblImg0->setFrameShadow(QFrame::Sunken);
        lblImg0->setLineWidth(2);
        lblImg0->setScaledContents(true);
        gb1 = new QGroupBox(tab);
        gb1->setObjectName(QString::fromUtf8("gb1"));
        gb1->setGeometry(QRect(300, 10, 271, 281));
        gb1->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblImg1 = new QLabel(gb1);
        lblImg1->setObjectName(QString::fromUtf8("lblImg1"));
        lblImg1->setGeometry(QRect(10, 20, 251, 251));
        lblImg1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg1->setFrameShape(QFrame::Panel);
        lblImg1->setFrameShadow(QFrame::Sunken);
        lblImg1->setLineWidth(2);
        lblImg1->setScaledContents(true);
        gb2 = new QGroupBox(tab);
        gb2->setObjectName(QString::fromUtf8("gb2"));
        gb2->setGeometry(QRect(590, 10, 271, 281));
        gb2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblImg2 = new QLabel(gb2);
        lblImg2->setObjectName(QString::fromUtf8("lblImg2"));
        lblImg2->setGeometry(QRect(10, 20, 251, 251));
        lblImg2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg2->setFrameShape(QFrame::Panel);
        lblImg2->setFrameShadow(QFrame::Sunken);
        lblImg2->setLineWidth(2);
        lblImg2->setScaledContents(true);
        gb3 = new QGroupBox(tab);
        gb3->setObjectName(QString::fromUtf8("gb3"));
        gb3->setGeometry(QRect(880, 10, 271, 281));
        gb3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        lblImg3 = new QLabel(gb3);
        lblImg3->setObjectName(QString::fromUtf8("lblImg3"));
        lblImg3->setGeometry(QRect(10, 20, 251, 251));
        lblImg3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg3->setFrameShape(QFrame::Panel);
        lblImg3->setFrameShadow(QFrame::Sunken);
        lblImg3->setLineWidth(2);
        lblImg3->setScaledContents(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gb5 = new QGroupBox(tab_2);
        gb5->setObjectName(QString::fromUtf8("gb5"));
        gb5->setGeometry(QRect(300, 10, 271, 281));
        lblImg5 = new QLabel(gb5);
        lblImg5->setObjectName(QString::fromUtf8("lblImg5"));
        lblImg5->setGeometry(QRect(10, 20, 251, 251));
        lblImg5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg5->setFrameShape(QFrame::Panel);
        lblImg5->setFrameShadow(QFrame::Sunken);
        lblImg5->setLineWidth(2);
        lblImg5->setScaledContents(true);
        gb4 = new QGroupBox(tab_2);
        gb4->setObjectName(QString::fromUtf8("gb4"));
        gb4->setGeometry(QRect(10, 10, 271, 281));
        lblImg4 = new QLabel(gb4);
        lblImg4->setObjectName(QString::fromUtf8("lblImg4"));
        lblImg4->setGeometry(QRect(10, 20, 251, 251));
        lblImg4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg4->setFrameShape(QFrame::Panel);
        lblImg4->setFrameShadow(QFrame::Sunken);
        lblImg4->setLineWidth(2);
        lblImg4->setScaledContents(true);
        gb6 = new QGroupBox(tab_2);
        gb6->setObjectName(QString::fromUtf8("gb6"));
        gb6->setGeometry(QRect(590, 10, 271, 281));
        lblImg6 = new QLabel(gb6);
        lblImg6->setObjectName(QString::fromUtf8("lblImg6"));
        lblImg6->setGeometry(QRect(10, 20, 251, 251));
        lblImg6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg6->setFrameShape(QFrame::Panel);
        lblImg6->setFrameShadow(QFrame::Sunken);
        lblImg6->setLineWidth(2);
        lblImg6->setScaledContents(true);
        gb7 = new QGroupBox(tab_2);
        gb7->setObjectName(QString::fromUtf8("gb7"));
        gb7->setGeometry(QRect(880, 10, 271, 281));
        groupBox_11 = new QGroupBox(gb7);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(-440, 0, 131, 201));
        graphicsView_11 = new QGraphicsView(groupBox_11);
        graphicsView_11->setObjectName(QString::fromUtf8("graphicsView_11"));
        graphicsView_11->setGeometry(QRect(0, 20, 111, 171));
        groupBox_12 = new QGroupBox(gb7);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setGeometry(QRect(-290, 0, 131, 201));
        graphicsView_12 = new QGraphicsView(groupBox_12);
        graphicsView_12->setObjectName(QString::fromUtf8("graphicsView_12"));
        graphicsView_12->setGeometry(QRect(10, 20, 111, 171));
        groupBox_13 = new QGroupBox(gb7);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setGeometry(QRect(-140, 0, 131, 201));
        graphicsView_13 = new QGraphicsView(groupBox_13);
        graphicsView_13->setObjectName(QString::fromUtf8("graphicsView_13"));
        graphicsView_13->setGeometry(QRect(10, 20, 111, 171));
        lblImg7 = new QLabel(gb7);
        lblImg7->setObjectName(QString::fromUtf8("lblImg7"));
        lblImg7->setGeometry(QRect(10, 20, 251, 251));
        lblImg7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lblImg7->setFrameShape(QFrame::Panel);
        lblImg7->setFrameShadow(QFrame::Sunken);
        lblImg7->setLineWidth(2);
        lblImg7->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        btnMinimalize = new QPushButton(widget);
        btnMinimalize->setObjectName(QString::fromUtf8("btnMinimalize"));
        btnMinimalize->setGeometry(QRect(683, 700, 75, 23));
        btnMinimalize->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1301, 31));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 7, 1166, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        cb0 = new QComboBox(layoutWidget);
        cb0->setObjectName(QString::fromUtf8("cb0"));
        cb0->setEditable(true);

        horizontalLayout->addWidget(cb0);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        cb2 = new QComboBox(layoutWidget);
        cb2->setObjectName(QString::fromUtf8("cb2"));
        cb2->setEditable(true);

        horizontalLayout->addWidget(cb2);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_7);

        cb3 = new QComboBox(layoutWidget);
        cb3->setObjectName(QString::fromUtf8("cb3"));
        cb3->setEditable(true);

        horizontalLayout->addWidget(cb3);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_8);

        cb4 = new QComboBox(layoutWidget);
        cb4->setObjectName(QString::fromUtf8("cb4"));
        cb4->setEditable(true);

        horizontalLayout->addWidget(cb4);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_9);

        cb5 = new QComboBox(layoutWidget);
        cb5->setObjectName(QString::fromUtf8("cb5"));
        cb5->setEditable(true);

        horizontalLayout->addWidget(cb5);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_10);

        cb6 = new QComboBox(layoutWidget);
        cb6->setObjectName(QString::fromUtf8("cb6"));
        cb6->setEditable(true);

        horizontalLayout->addWidget(cb6);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_12);

        cb7 = new QComboBox(layoutWidget);
        cb7->setObjectName(QString::fromUtf8("cb7"));
        cb7->setEditable(true);

        horizontalLayout->addWidget(cb7);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_11);

        cb8 = new QComboBox(layoutWidget);
        cb8->setObjectName(QString::fromUtf8("cb8"));
        cb8->setEditable(true);

        horizontalLayout->addWidget(cb8);

        btnQuery = new QPushButton(layoutWidget);
        btnQuery->setObjectName(QString::fromUtf8("btnQuery"));

        horizontalLayout->addWidget(btnQuery);

        btnSerach = new QPushButton(layoutWidget);
        btnSerach->setObjectName(QString::fromUtf8("btnSerach"));
        btnSerach->setEnabled(false);

        horizontalLayout->addWidget(btnSerach);

        lblTitle = new QLabel(CAccess2Records);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 5, 141, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url(none);\n"
"color: rgb(170, 0, 0);"));
        lblClose = new QLabel(CAccess2Records);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(1350, 8, 30, 15));
        lblClose->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        cb1 = new QComboBox(CAccess2Records);
        cb1->setObjectName(QString::fromUtf8("cb1"));
        cb1->setGeometry(QRect(240, 40, 69, 20));
        cb1->setEditable(true);
        label_2 = new QLabel(CAccess2Records);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(182, 40, 52, 20));
        lineEdit = new QLineEdit(CAccess2Records);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(430, 40, 113, 20));

        retranslateUi(CAccess2Records);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CAccess2Records);
    } // setupUi

    void retranslateUi(QFrame *CAccess2Records)
    {
        CAccess2Records->setWindowTitle(QApplication::translate("CAccess2Records", "\345\207\272\345\205\245\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableAccessRecord->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CAccess2Records", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableAccessRecord->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CAccess2Records", "\345\215\241\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableAccessRecord->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CAccess2Records", "\345\272\224\346\224\266\350\264\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableAccessRecord->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CAccess2Records", "\345\256\236\346\224\266\350\264\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableAccessRecord->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("CAccess2Records", "\344\274\230\346\203\240\345\216\237\345\233\240", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableAccessRecord->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("CAccess2Records", "\345\215\241\347\211\207\350\207\252\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableAccessRecord->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("CAccess2Records", "\350\277\233\345\205\245\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableAccessRecord->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("CAccess2Records", "\350\277\233\345\205\245\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableAccessRecord->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("CAccess2Records", "\347\246\273\345\274\200\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableAccessRecord->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("CAccess2Records", "\347\246\273\345\274\200\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableAccessRecord->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("CAccess2Records", "\346\224\266\350\264\271\350\275\246\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableAccessRecord->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("CAccess2Records", "\350\277\233\345\205\245\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableAccessRecord->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("CAccess2Records", "\347\246\273\345\274\200\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tableAccessRecord->setToolTip(QApplication::translate("CAccess2Records", "\345\215\225\345\207\273\343\200\220\345\215\241\345\217\267\345\210\227\343\200\221\346\237\245\347\234\213\350\277\233\345\207\272\345\233\276\347\211\207\343\200\202\n"
"\345\217\214\345\207\273\345\215\225\345\205\203\346\240\274\346\237\245\347\234\213\345\272\223\344\270\255\345\272\223\350\256\260\345\275\225\343\200\202", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        gb0->setTitle(QApplication::translate("CAccess2Records", "\345\233\276\345\203\2171", 0, QApplication::UnicodeUTF8));
        lblImg0->setText(QString());
        gb1->setTitle(QApplication::translate("CAccess2Records", "\345\233\276\345\203\2172", 0, QApplication::UnicodeUTF8));
        lblImg1->setText(QString());
        gb2->setTitle(QApplication::translate("CAccess2Records", "\345\233\276\345\203\2173", 0, QApplication::UnicodeUTF8));
        lblImg2->setText(QString());
        gb3->setTitle(QApplication::translate("CAccess2Records", "\345\233\276\345\203\2174", 0, QApplication::UnicodeUTF8));
        lblImg3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CAccess2Records", "\350\275\246\350\276\206\350\277\233\345\205\245\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        gb5->setTitle(QApplication::translate("CAccess2Records", "\345\233\276\345\203\2172", 0, QApplication::UnicodeUTF8));
        lblImg5->setText(QString());
        gb4->setTitle(QApplication::translate("CAccess2Records", "\345\233\276\345\203\2171", 0, QApplication::UnicodeUTF8));
        lblImg4->setText(QString());
        gb6->setTitle(QApplication::translate("CAccess2Records", "\345\233\276\345\203\2173", 0, QApplication::UnicodeUTF8));
        lblImg6->setText(QString());
        gb7->setTitle(QApplication::translate("CAccess2Records", "\345\233\276\345\203\2174", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QApplication::translate("CAccess2Records", "\345\233\276\345\203\2171", 0, QApplication::UnicodeUTF8));
        groupBox_12->setTitle(QApplication::translate("CAccess2Records", "\345\233\276\345\203\2172", 0, QApplication::UnicodeUTF8));
        groupBox_13->setTitle(QApplication::translate("CAccess2Records", "\345\233\276\345\203\2173", 0, QApplication::UnicodeUTF8));
        lblImg7->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CAccess2Records", "\350\275\246\350\276\206\347\246\273\345\274\200\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        btnMinimalize->setText(QApplication::translate("CAccess2Records", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CAccess2Records", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        cb0->setStatusTip(QApplication::translate("CAccess2Records", "cardno = '%1'", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_3->setText(QApplication::translate("CAccess2Records", "\345\215\241\350\207\252\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        cb2->setStatusTip(QApplication::translate("CAccess2Records", "cardselfno = '%1'", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_7->setText(QApplication::translate("CAccess2Records", "\350\277\233\345\205\245\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        cb3->setStatusTip(QApplication::translate("CAccess2Records", "inshebeiname = '%1'", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_8->setText(QApplication::translate("CAccess2Records", "\347\246\273\345\274\200\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        cb4->setStatusTip(QApplication::translate("CAccess2Records", "outshebeiname = '%1'", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_9->setText(QApplication::translate("CAccess2Records", "\350\277\233\345\205\245\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        cb5->setStatusTip(QApplication::translate("CAccess2Records", "intime like '%%1%'", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_10->setText(QApplication::translate("CAccess2Records", "\347\246\273\345\274\200\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        cb6->setStatusTip(QApplication::translate("CAccess2Records", "outtime like '%%1%'", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_12->setText(QApplication::translate("CAccess2Records", "\350\277\233\345\205\245\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        cb7->setStatusTip(QApplication::translate("CAccess2Records", "carcp = '%1'", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_11->setText(QApplication::translate("CAccess2Records", "\347\246\273\345\274\200\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        cb8->setStatusTip(QApplication::translate("CAccess2Records", "carcpout = '%1'", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        btnQuery->setToolTip(QApplication::translate("CAccess2Records", "\345\205\250\343\200\220\346\227\240\343\200\221\346\237\245\350\257\242\346\211\200\346\234\211\350\256\260\345\275\225\343\200\202", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnQuery->setText(QApplication::translate("CAccess2Records", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        btnSerach->setText(QApplication::translate("CAccess2Records", "\346\237\245\346\211\276", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        lblClose->setText(QString());
#ifndef QT_NO_STATUSTIP
        cb1->setStatusTip(QApplication::translate("CAccess2Records", "cardkind like '%%1%'", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_2->setText(QApplication::translate("CAccess2Records", "\345\215\241\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CAccess2Records: public Ui_CAccess2Records {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCESS2RECORDS_H
