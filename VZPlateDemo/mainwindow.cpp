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
    QTableWidget* tabWid = ( QTableWidget* ) sender( );
    column = tabWid->columnCount( ) - 1;
    QString strFile = tabWid->item( row, column )->text( );

    if ( strFile.isEmpty( ) ) {
        return;
    }

    QPixmap picMap( strFile );
    ui->lblPicture->setPixmap( picMap );

    strFile = tabWid->item( row, column - 1 )->text( );
    QPixmap plateMap( strFile );
    ui->lblPlatePic->setPixmap( plateMap );
}
