#include "dlgabout.h"
#include "ui_dlgabout.h"
#include "Common/commonfunction.h"

CDlgAbout::CDlgAbout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CDlgAbout)
{
    ui->setupUi(this);
    //CCommonFunction::ControlSysMenu( *this );
}

CDlgAbout::~CDlgAbout()
{
    delete ui;
}
