#include "dlgabout.h"
#include "ui_dlgabout.h"

CDlgAbout::CDlgAbout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CDlgAbout)
{
    ui->setupUi(this);
}

CDlgAbout::~CDlgAbout()
{
    delete ui;
}
