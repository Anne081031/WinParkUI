#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDir>
#include "Thread/qdirectorythread.h"
#include "Thread/qplatethread.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect( QPlateThread::GetInstance( ), SIGNAL( PlateResult( QStringList ) ), this, SLOT( HandlePlateResult( QStringList ) ) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::HandlePlateResult( QStringList lstResult )
{
    ui->tabResult->insertRow( 0 );
    qint32 nCol = 0;
    QTableWidgetItem* pItem;

    foreach ( const QString& str, lstResult ) {
        pItem = new QTableWidgetItem( str );
        pItem->setFlags( Qt::ItemIsEnabled | Qt::ItemIsSelectable );
        ui->tabResult->setItem( 0, nCol++, pItem );
    }

    LoadImg( ui->lblVideo, ui->lblPicture, ui->lblPlatePic, 0 );
     //qDebug( ) << Q_FUNC_INFO << ":" << lstResult.join( "," ) << endl;
}

void MainWindow::on_btnFile_clicked()
{
    QFileDialog dlg;
    QString strFile = dlg.getOpenFileName( );

    if ( strFile.isEmpty( ) ) {
        return;
    }

    QDir dir( strFile );
    dir.cdUp( );
    strFile = dir.path( );

    QDirectoryThread::GetInstance( )->PostDirectoryTraverse( strFile );
}

void MainWindow::on_tabResult_cellClicked(int row, int column)
{
    column = 0;
    LoadImg( ui->lblVideo, ui->lblPicture, ui->lblPlatePic, row );
}

void MainWindow::LoadImg( QLabel *lblCtrlLeft, QLabel *lblCtrlRight, QLabel* lblCtrlDown, int nRow )
{
    QTableWidget* tabWid = ui->tabResult;
    int nCol = tabWid->columnCount( ) - 1;
    QString strFile = tabWid->item( nRow, nCol )->text( );

    if ( strFile.isEmpty( ) ) {
        return;
    }

    QPixmap picMap( strFile );
    lblCtrlLeft->setPixmap( picMap );
    lblCtrlRight->setPixmap( picMap );

    strFile = tabWid->item( nRow, nCol - 1 )->text( );
    QPixmap plateMap( strFile );
    lblCtrlDown->setPixmap( plateMap );
}

void MainWindow::on_btnClear_clicked()
{
    for ( int nIndex = ui->tabResult->rowCount( ) - 1 ; nIndex >= 0; nIndex-- ) {
        ui->tabResult->removeRow( nIndex );
    }

    ui->lblPicture->clear( );
    ui->lblPlatePic->clear( );
    ui->lblVideo->clear( );
}

void MainWindow::on_btnAnalogCamera_clicked()
{

}

void MainWindow::on_btnDigitalCamera_clicked()
{

}

void MainWindow::on_btnVideoFile_clicked()
{

}
