/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Dec 19 10:07:01 2012
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lblPicture;
    QLabel *lblPlatePic;
    QTableWidget *tabResult;
    QLabel *lblVideo;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnFile;
    QPushButton *btnClear;
    QPushButton *btnAnalogCamera;
    QPushButton *btnDigitalCamera;
    QPushButton *btnVideoFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1221, 762);
        MainWindow->setMinimumSize(QSize(1221, 762));
        MainWindow->setMaximumSize(QSize(1221, 762));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Imgs/logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lblPicture = new QLabel(centralWidget);
        lblPicture->setObjectName(QString::fromUtf8("lblPicture"));
        lblPicture->setGeometry(QRect(870, 10, 341, 261));
        lblPicture->setFrameShape(QFrame::Panel);
        lblPicture->setFrameShadow(QFrame::Sunken);
        lblPicture->setPixmap(QPixmap(QString::fromUtf8(":/Imgs/logo.jpg")));
        lblPicture->setScaledContents(true);
        lblPicture->setAlignment(Qt::AlignCenter);
        lblPlatePic = new QLabel(centralWidget);
        lblPlatePic->setObjectName(QString::fromUtf8("lblPlatePic"));
        lblPlatePic->setGeometry(QRect(870, 280, 341, 51));
        lblPlatePic->setFrameShape(QFrame::Panel);
        lblPlatePic->setFrameShadow(QFrame::Sunken);
        lblPlatePic->setScaledContents(false);
        lblPlatePic->setAlignment(Qt::AlignCenter);
        tabResult = new QTableWidget(centralWidget);
        if (tabResult->columnCount() < 6)
            tabResult->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tabResult->setObjectName(QString::fromUtf8("tabResult"));
        tabResult->setGeometry(QRect(870, 340, 341, 411));
        lblVideo = new QLabel(centralWidget);
        lblVideo->setObjectName(QString::fromUtf8("lblVideo"));
        lblVideo->setGeometry(QRect(10, 10, 851, 711));
        lblVideo->setAutoFillBackground(true);
        lblVideo->setFrameShape(QFrame::Panel);
        lblVideo->setFrameShadow(QFrame::Sunken);
        lblVideo->setTextFormat(Qt::RichText);
        lblVideo->setScaledContents(true);
        lblVideo->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        lblVideo->setWordWrap(false);
        lblVideo->setOpenExternalLinks(false);
        lblVideo->setTextInteractionFlags(Qt::NoTextInteraction);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 730, 401, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnFile = new QPushButton(widget);
        btnFile->setObjectName(QString::fromUtf8("btnFile"));

        horizontalLayout->addWidget(btnFile);

        btnClear = new QPushButton(widget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout->addWidget(btnClear);

        btnAnalogCamera = new QPushButton(widget);
        btnAnalogCamera->setObjectName(QString::fromUtf8("btnAnalogCamera"));

        horizontalLayout->addWidget(btnAnalogCamera);

        btnDigitalCamera = new QPushButton(widget);
        btnDigitalCamera->setObjectName(QString::fromUtf8("btnDigitalCamera"));

        horizontalLayout->addWidget(btnDigitalCamera);

        btnVideoFile = new QPushButton(widget);
        btnVideoFile->setObjectName(QString::fromUtf8("btnVideoFile"));

        horizontalLayout->addWidget(btnVideoFile);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\233\233\345\267\235\345\211\215\351\200\224\347\247\221\346\212\200\350\275\246\347\211\214\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        lblPicture->setText(QString());
        lblPlatePic->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tabResult->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tabResult->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tabResult->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\345\217\257\344\277\241\345\272\246", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tabResult->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\351\242\234\350\211\262", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tabResult->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\350\275\246\347\211\214\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tabResult->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        lblVideo->setText(QString());
        btnFile->setText(QApplication::translate("MainWindow", "\350\257\206\345\210\253\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\346\211\200\346\234\211", 0, QApplication::UnicodeUTF8));
        btnAnalogCamera->setText(QApplication::translate("MainWindow", "\346\250\241\346\213\237\346\221\204\345\203\217\346\234\272", 0, QApplication::UnicodeUTF8));
        btnDigitalCamera->setText(QApplication::translate("MainWindow", "\346\225\260\345\255\227\346\221\204\345\203\217\346\234\272", 0, QApplication::UnicodeUTF8));
        btnVideoFile->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
