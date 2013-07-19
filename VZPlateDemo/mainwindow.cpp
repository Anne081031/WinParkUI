#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDir>
#include <QDebug>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pAnalogCamera = NULL;
    connect( QPlateThread::GetInstance( ), SIGNAL( PlateResult( QStringList, int, bool, bool ) ),
             this, SLOT( HandlePlateResult( QStringList, int, bool, bool ) ) );
    QCommon::GetPlatePicPath( strPlateDir );

    aLables[ 0 ] = ui->lblVideo0;
    aLables[ 1 ] = ui->lblVideo1;
    aLables[ 2 ] = ui->lblVideo2;
    aLables[ 3 ] = ui->lblVideo3;
    //ImageFormatYUV420COMPASS : ImageFormatBGR
    QPlateThread::GetInstance( )->PostPlateInitEvent( ImageFormatYUV420COMPASS, 0 ); // HK
    QPlateThread::GetInstance( )->PostPlateInitEvent( ImageFormatYUV420COMPASS, 1 );

    //QPlateThread::GetInstance( )->PostPlateInitEvent( ImageFormatRGB, 0 ); //TM
    //QPlateThread::GetInstance( )->PostPlateInitEvent( ImageFormatRGB, 1 );
    //QPlateThread::GetInstance( )->PostPlateInitEvent( ImageFormatRGB, 2 );
    //QPlateThread::GetInstance( )->PostPlateInitEvent( ImageFormatRGB, 3 );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::HandlePlateResult( QStringList lstResult, int nChannel, bool bSuccess, bool bVideo )
{
    ui->tabResult->insertRow( 0 );
    qint32 nCol = 0;
    QTableWidgetItem* pItem;
    lstResult << QString::number( nChannel ) << ( bVideo ? "是" : "否" );

    foreach ( const QString& str, lstResult ) {
        pItem = new QTableWidgetItem( str );
        pItem->setFlags( Qt::ItemIsEnabled | Qt::ItemIsSelectable );
        ui->tabResult->setItem( 0, nCol++, pItem );
    }

    if ( !bVideo ) {
        LoadImg( ui->lblVideo0, ui->lblPicture, ui->lblPlatePic, 0 );
    }
     //qDebug( ) << Q_FUNC_INFO << ":" << lstResult.join( "," ) << endl;
}

void MainWindow::HandleCaptureImage( QString strFile, int nChannel )
{

}

void MainWindow::HandleNotifyMessage( QString strMsg, bool bSuccess )
{

}

void MainWindow::HandleDetectInfo( int nChannel, bool bMotion )
{

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
    if ( QString( "否" ) == ui->tabResult->item( row, ui->tabResult->columnCount( ) - 1 )->text() ) {
        LoadImg( ui->lblVideo0, ui->lblPicture, ui->lblPlatePic, row );
    }
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
    ui->lblVideo0->clear( );
}

void MainWindow::on_btnAnalogCamera_clicked()
{
    if ( NULL != pAnalogCamera ) {
        return;
    }

    //pAnalogCamera = QTmCaptureCardThread::GetInstance( );
    pAnalogCamera = QHkCaptureCardThread::GetInstance( );

    connect( pAnalogCamera, SIGNAL( CaptureImage( QString, int ) ),
             this, SLOT( HandleCaptureImage( QString, int ) ) );
    connect( pAnalogCamera, SIGNAL( NotifyMessage( QString, bool ) ),
             this, SLOT( HandleNotifyMessage( QString, bool ) ) );
    connect( pAnalogCamera, SIGNAL( DetectInfo( int, bool ) ),
             this, SLOT( HandleDetectInfo( int, bool ) ) );

    pAnalogCamera->PostInitCaptureSDKEvent( winId( ) );

    for ( int nChannel = 0; nChannel < CHANNEL_WAY - 2; nChannel++ ) {
        pAnalogCamera->PostOpenChannelEvent( nChannel );
        pAnalogCamera->PostPlayVideoEvent( nChannel, aLables[ nChannel ]->winId( ) );
        pAnalogCamera->PostStartCaptureEvent( nChannel );
        pAnalogCamera->PostStartMotionDetectEvent( nChannel );
        pAnalogCamera->PostStartSourceStreamEvent( nChannel, 0 == nChannel );
    }
}

void MainWindow::on_btnDigitalCamera_clicked()
{

}

void MainWindow::on_btnVideoFile_clicked()
{

}

void MainWindow::on_btnAnalogCaptureFile_clicked()
{
    if ( NULL == pAnalogCamera ) {
        return;
    }

    int nChannel = 0;

    QString strFile = strPlateDir + QString::number( QDateTime::currentMSecsSinceEpoch( ) ) + ".JPG";
    pAnalogCamera->PostCaptrueImageEvent( nChannel, strFile, true );
}

void MainWindow::on_btnIPCCaptureFile_clicked()
{

}

void MainWindow::on_btnStopVideoRecognize_clicked()
{
    bool bFlag = QPlateThread::GetInstance( )->SetRecognizeFlag( );

    ui->btnStopVideoRecognize->setText( bFlag ? "启动视频识别" : "停止视频识别" );
}
