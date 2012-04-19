#include "monitor.h"
#include "ui_monitor.h"
#include <QMessageBox>
#include <QMenu>
#include "frame.h"

CMonitor::CMonitor(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::CMonitor)
{
    ui->setupUi(this);

    QMenu* pMenu = new QMenu( );
    ui->pushButton->setMenu( pMenu );
    pMenu->addAction( "1" );
    pMenu->addAction( "2" );
    pMenu->addAction( "3" );

    Frame* p = new Frame( this );

    connect( p, SIGNAL(Test()), this, SLOT(close()));
}

CMonitor::~CMonitor()
{
    delete ui;
}

void CMonitor::on_pushButton_clicked()
{
    QMessageBox a( this );
    a.addButton( QMessageBox::Ok );
    a.exec( );
}
