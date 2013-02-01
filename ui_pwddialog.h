/********************************************************************************
** Form generated from reading UI file 'pwddialog.ui'
**
** Created: Fri Feb 1 10:57:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PWDDIALOG_H
#define UI_PWDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CPwdDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *edtOldPwd;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *edtNewPwd1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *edtNewPwd2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnSave;
    QPushButton *btnCancel;
    QLabel *lblTitle;
    QLabel *lblClose;

    void setupUi(QDialog *CPwdDialog)
    {
        if (CPwdDialog->objectName().isEmpty())
            CPwdDialog->setObjectName(QString::fromUtf8("CPwdDialog"));
        CPwdDialog->setWindowModality(Qt::ApplicationModal);
        CPwdDialog->resize(463, 350);
        CPwdDialog->setWindowOpacity(1);
        CPwdDialog->setStyleSheet(QString::fromUtf8("background-image: url(D:/WinParkUI/debug/Image/NewIcon/CommonBG-normal.jpg);"));
        CPwdDialog->setSizeGripEnabled(false);
        CPwdDialog->setModal(true);
        layoutWidget = new QWidget(CPwdDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 60, 301, 171));
        layoutWidget->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout->addWidget(label);

        edtName = new QLineEdit(layoutWidget);
        edtName->setObjectName(QString::fromUtf8("edtName"));
        edtName->setAcceptDrops(false);
        edtName->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        edtName->setFrame(false);

        horizontalLayout->addWidget(edtName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_2->addWidget(label_2);

        edtOldPwd = new QLineEdit(layoutWidget);
        edtOldPwd->setObjectName(QString::fromUtf8("edtOldPwd"));
        edtOldPwd->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        edtOldPwd->setFrame(true);
        edtOldPwd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(edtOldPwd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_3->addWidget(label_3);

        edtNewPwd1 = new QLineEdit(layoutWidget);
        edtNewPwd1->setObjectName(QString::fromUtf8("edtNewPwd1"));
        edtNewPwd1->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        edtNewPwd1->setFrame(true);
        edtNewPwd1->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(edtNewPwd1);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_4->addWidget(label_4);

        edtNewPwd2 = new QLineEdit(layoutWidget);
        edtNewPwd2->setObjectName(QString::fromUtf8("edtNewPwd2"));
        edtNewPwd2->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        edtNewPwd2->setFrame(true);
        edtNewPwd2->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(edtNewPwd2);


        verticalLayout->addLayout(horizontalLayout_4);

        layoutWidget1 = new QWidget(CPwdDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(150, 270, 158, 25));
        layoutWidget1->setStyleSheet(QString::fromUtf8("background-image:url(none);"));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        btnSave = new QPushButton(layoutWidget1);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_5->addWidget(btnSave);

        btnCancel = new QPushButton(layoutWidget1);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setStyleSheet(QString::fromUtf8("background-image:url(none);"));

        horizontalLayout_5->addWidget(btnCancel);

        lblTitle = new QLabel(CPwdDialog);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 5, 141, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("background-image:url( );\n"
"color: rgb(85, 0, 0);"));
        lblClose = new QLabel(CPwdDialog);
        lblClose->setObjectName(QString::fromUtf8("lblClose"));
        lblClose->setGeometry(QRect(423, 6, 30, 15));

        retranslateUi(CPwdDialog);

        QMetaObject::connectSlotsByName(CPwdDialog);
    } // setupUi

    void retranslateUi(QDialog *CPwdDialog)
    {
        CPwdDialog->setWindowTitle(QApplication::translate("CPwdDialog", "\345\257\206\347\240\201\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CPwdDialog", "\343\200\200\343\200\200\347\224\250\346\210\267\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CPwdDialog", "\350\276\223\345\205\245\345\216\237\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CPwdDialog", "\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CPwdDialog", "\351\207\215\345\244\215\346\226\260\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("CPwdDialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CPwdDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QString());
        lblClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CPwdDialog: public Ui_CPwdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PWDDIALOG_H
