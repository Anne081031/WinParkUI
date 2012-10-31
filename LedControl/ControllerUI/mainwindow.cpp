#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdlgconfig.h"
#include <QFileDialog>

//
// Command request, Command response
//

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    DlgConfig( );

    QControllerCommon::InitApp( );
    controller.ConrollSP( true );
}

void MainWindow::DlgConfig( )
{
    QDlgConfig dlg;
    dlg.exec( );
}

MainWindow::~MainWindow()
{
    controller.ConrollSP( false );
    delete ui;
}

void MainWindow::on_btnSet_clicked()
{
    DlgConfig( );
}

void MainWindow::on_btnSaveSet_clicked()
{
    LedControll::SSysConfig sConfig;
    QControllerCommon::SaveSystemConfig( sConfig );
}

void MainWindow::on_tbnReadSet_clicked()
{
    LedControll::SSysConfig sConfig;
    QFileDialog dlg( this );
    dlg.exec( );
    QControllerCommon::GetSystemConfig( sConfig );
}
