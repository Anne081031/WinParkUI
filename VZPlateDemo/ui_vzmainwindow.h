/********************************************************************************
** Form generated from reading UI file 'vzmainwindow.ui'
**
** Created: Fri Jul 26 14:04:43 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VZMAINWINDOW_H
#define UI_VZMAINWINDOW_H

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

class Ui_VZMainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lblPicture;
    QLabel *lblPlatePic;
    QTableWidget *tabResult;
    QLabel *lblVideo0;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnFile;
    QPushButton *btnClear;
    QPushButton *btnAnalogCamera;
    QPushButton *btnAnalogCaptureFile;
    QPushButton *btnDigitalCamera;
    QPushButton *btnIPCCaptureFile;
    QPushButton *btnVideoFile;
    QPushButton *btnStopVideoRecognize;
    QLabel *lblVideo1;
    QLabel *lblVideo2;
    QLabel *lblVideo3;

    void setupUi(QMainWindow *VZMainWindow)
    {
        if (VZMainWindow->objectName().isEmpty())
            VZMainWindow->setObjectName(QString::fromUtf8("VZMainWindow"));
        VZMainWindow->resize(1221, 762);
        VZMainWindow->setMinimumSize(QSize(1221, 762));
        VZMainWindow->setMaximumSize(QSize(1221, 762));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Imgs/logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        VZMainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(VZMainWindow);
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
        if (tabResult->columnCount() < 10)
            tabResult->setColumnCount(10);
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
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tabResult->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        tabResult->setObjectName(QString::fromUtf8("tabResult"));
        tabResult->setGeometry(QRect(870, 340, 341, 411));
        lblVideo0 = new QLabel(centralWidget);
        lblVideo0->setObjectName(QString::fromUtf8("lblVideo0"));
        lblVideo0->setGeometry(QRect(10, 10, 421, 341));
        lblVideo0->setAutoFillBackground(true);
        lblVideo0->setFrameShape(QFrame::Panel);
        lblVideo0->setFrameShadow(QFrame::Sunken);
        lblVideo0->setTextFormat(Qt::RichText);
        lblVideo0->setScaledContents(true);
        lblVideo0->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        lblVideo0->setWordWrap(false);
        lblVideo0->setOpenExternalLinks(false);
        lblVideo0->setTextInteractionFlags(Qt::NoTextInteraction);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 730, 649, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnFile = new QPushButton(layoutWidget);
        btnFile->setObjectName(QString::fromUtf8("btnFile"));

        horizontalLayout->addWidget(btnFile);

        btnClear = new QPushButton(layoutWidget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout->addWidget(btnClear);

        btnAnalogCamera = new QPushButton(layoutWidget);
        btnAnalogCamera->setObjectName(QString::fromUtf8("btnAnalogCamera"));
        btnAnalogCamera->setEnabled(false);

        horizontalLayout->addWidget(btnAnalogCamera);

        btnAnalogCaptureFile = new QPushButton(layoutWidget);
        btnAnalogCaptureFile->setObjectName(QString::fromUtf8("btnAnalogCaptureFile"));
        btnAnalogCaptureFile->setEnabled(false);

        horizontalLayout->addWidget(btnAnalogCaptureFile);

        btnDigitalCamera = new QPushButton(layoutWidget);
        btnDigitalCamera->setObjectName(QString::fromUtf8("btnDigitalCamera"));
        btnDigitalCamera->setEnabled(false);

        horizontalLayout->addWidget(btnDigitalCamera);

        btnIPCCaptureFile = new QPushButton(layoutWidget);
        btnIPCCaptureFile->setObjectName(QString::fromUtf8("btnIPCCaptureFile"));
        btnIPCCaptureFile->setEnabled(false);

        horizontalLayout->addWidget(btnIPCCaptureFile);

        btnVideoFile = new QPushButton(layoutWidget);
        btnVideoFile->setObjectName(QString::fromUtf8("btnVideoFile"));
        btnVideoFile->setEnabled(false);

        horizontalLayout->addWidget(btnVideoFile);

        btnStopVideoRecognize = new QPushButton(layoutWidget);
        btnStopVideoRecognize->setObjectName(QString::fromUtf8("btnStopVideoRecognize"));
        btnStopVideoRecognize->setEnabled(false);

        horizontalLayout->addWidget(btnStopVideoRecognize);

        lblVideo1 = new QLabel(centralWidget);
        lblVideo1->setObjectName(QString::fromUtf8("lblVideo1"));
        lblVideo1->setGeometry(QRect(440, 10, 421, 341));
        lblVideo1->setAutoFillBackground(true);
        lblVideo1->setFrameShape(QFrame::Panel);
        lblVideo1->setFrameShadow(QFrame::Sunken);
        lblVideo1->setTextFormat(Qt::RichText);
        lblVideo1->setScaledContents(true);
        lblVideo1->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        lblVideo1->setWordWrap(false);
        lblVideo1->setOpenExternalLinks(false);
        lblVideo1->setTextInteractionFlags(Qt::NoTextInteraction);
        lblVideo2 = new QLabel(centralWidget);
        lblVideo2->setObjectName(QString::fromUtf8("lblVideo2"));
        lblVideo2->setGeometry(QRect(10, 360, 421, 341));
        lblVideo2->setAutoFillBackground(true);
        lblVideo2->setFrameShape(QFrame::Panel);
        lblVideo2->setFrameShadow(QFrame::Sunken);
        lblVideo2->setTextFormat(Qt::RichText);
        lblVideo2->setScaledContents(true);
        lblVideo2->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        lblVideo2->setWordWrap(false);
        lblVideo2->setOpenExternalLinks(false);
        lblVideo2->setTextInteractionFlags(Qt::NoTextInteraction);
        lblVideo3 = new QLabel(centralWidget);
        lblVideo3->setObjectName(QString::fromUtf8("lblVideo3"));
        lblVideo3->setGeometry(QRect(440, 360, 421, 341));
        lblVideo3->setAutoFillBackground(true);
        lblVideo3->setFrameShape(QFrame::Panel);
        lblVideo3->setFrameShadow(QFrame::Sunken);
        lblVideo3->setTextFormat(Qt::RichText);
        lblVideo3->setScaledContents(true);
        lblVideo3->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        lblVideo3->setWordWrap(false);
        lblVideo3->setOpenExternalLinks(false);
        lblVideo3->setTextInteractionFlags(Qt::NoTextInteraction);
        VZMainWindow->setCentralWidget(centralWidget);

        retranslateUi(VZMainWindow);

        QMetaObject::connectSlotsByName(VZMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *VZMainWindow)
    {
        VZMainWindow->setWindowTitle(QApplication::translate("VZMainWindow", "\345\233\233\345\267\235\345\211\215\351\200\224\347\247\221\346\212\200\350\275\246\347\211\214\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        lblPicture->setText(QString());
        lblPlatePic->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tabResult->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("VZMainWindow", "\350\275\246\347\211\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tabResult->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("VZMainWindow", "\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tabResult->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("VZMainWindow", "\345\217\257\344\277\241\345\272\246", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tabResult->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("VZMainWindow", "\351\242\234\350\211\262", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tabResult->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("VZMainWindow", "\345\256\275\351\253\230", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tabResult->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("VZMainWindow", "\346\226\271\345\220\221", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tabResult->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("VZMainWindow", "\350\275\246\347\211\214\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tabResult->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("VZMainWindow", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tabResult->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("VZMainWindow", "\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tabResult->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("VZMainWindow", "\350\247\206\351\242\221\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        lblVideo0->setText(QString());
        btnFile->setText(QApplication::translate("VZMainWindow", "\350\257\206\345\210\253\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("VZMainWindow", "\346\270\205\351\231\244\346\211\200\346\234\211", 0, QApplication::UnicodeUTF8));
        btnAnalogCamera->setText(QApplication::translate("VZMainWindow", "\346\250\241\346\213\237\346\221\204\345\203\217\346\234\272", 0, QApplication::UnicodeUTF8));
        btnAnalogCaptureFile->setText(QApplication::translate("VZMainWindow", "\346\250\241\346\213\237\346\212\223\345\233\276", 0, QApplication::UnicodeUTF8));
        btnDigitalCamera->setText(QApplication::translate("VZMainWindow", "\346\225\260\345\255\227\346\221\204\345\203\217\346\234\272", 0, QApplication::UnicodeUTF8));
        btnIPCCaptureFile->setText(QApplication::translate("VZMainWindow", "\346\225\260\345\255\227\346\212\223\345\233\276", 0, QApplication::UnicodeUTF8));
        btnVideoFile->setText(QApplication::translate("VZMainWindow", "\350\247\206\351\242\221\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        btnStopVideoRecognize->setText(QApplication::translate("VZMainWindow", "\345\201\234\346\255\242\350\247\206\351\242\221\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        lblVideo1->setText(QString());
        lblVideo2->setText(QString());
        lblVideo3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VZMainWindow: public Ui_VZMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VZMAINWINDOW_H
