#include "vzmainwindow.h"
#include "ui_vzmainwindow.h"
#include <QFileDialog>
#include <QDir>
#include <QDebug>
#include <QDateTime>

VZMainWindow::VZMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VZMainWindow)
{
    ui->setupUi(this);
    Initialize( );

    QCommon::GetPlatePicPath( strPlateDir );
    LoadLogoTitle( );

    nFileIndex = 0;
    aLables[ 0 ] = ui->lblVideo0;
    aLables[ 1 ] = ui->lblVideo1;
    aLables[ 2 ] = ui->lblVideo2;
    aLables[ 3 ] = ui->lblVideo3;
}

VZMainWindow::~VZMainWindow()
{
    delete ui;
}

void VZMainWindow::FileButton( bool bEnable )
{
    ui->btnFile->setEnabled( bEnable );
    ui->btnSingleFile->setEnabled( bEnable );
    ui->btnPreFile->setEnabled( bEnable );
    ui->btnNextFile->setEnabled( bEnable );
}

void VZMainWindow::VideoButton( bool bEnable )
{
    ui->btnCamera->setEnabled( bEnable );
    ui->btnCaptureFile->setEnabled( bEnable );
    ui->btnStopVideoRecognize->setEnabled( bEnable );
    //ui->btnFile->setEnabled( bEnable );
}

void VZMainWindow::EnableButton( QString &strVideoType )
{
    if ( "PictureFile" == strVideoType ) {
        FileButton( true );
        VideoButton( false );
    } else if ( "HkAnalog" == strVideoType ) {
        FileButton( false );
        VideoButton( true );
    } else if ( "TmAnalog" == strVideoType ) {
        FileButton( false );
        VideoButton( true );
    } else if ( "HkIPC" == strVideoType ) {
        FileButton( false );
        VideoButton( true );
    } else if ( "JwsIPC" == strVideoType ) {
        FileButton( false );
        VideoButton( true );
    } else if ( "OnvifIPC" == strVideoType ) {
        FileButton( false );
        VideoButton( true );
    } else if ( "VideoFile" == strVideoType ) {

    }
}

void VZMainWindow::Initialize( )
{
    pAnalogCamera = NULL;
    pDigitalCamera = NULL;
    pFileCamera = NULL;

    pConfig = CConfigurator::CreateInstance( );

    QString strVideoType;
    pConfig->ReadVideoType( strVideoType );
    pConfig->ReadIpcIP( strIpcIP );

    nPlateWay = pConfig->ReadPlateWay( );
    int nFormat = ImageFormatBGR;
    bool bCapture = pConfig->ReadVideoCapture( );

    EnableButton( strVideoType );

    if ( "PictureFile" == strVideoType ) {
        nFormat = ImageFormatBGR;
        nPlateWay = 1;
    } else if ( "HkAnalog" == strVideoType ) {
        nFormat = bCapture ? ImageFormatBGR : ImageFormatYUV420COMPASS;
        pAnalogCamera = QHkCaptureCardThread::GetInstance( );
    } else if ( "TmAnalog" == strVideoType ) {
        pAnalogCamera = QTmCaptureCardThread::GetInstance( );
        nFormat = ImageFormatRGB;
    } else if ( "HkIPC" == strVideoType ) {
        pDigitalCamera = QDHkIPCThread::GetInstance( );
    } else if ( "JwsIPC" == strVideoType ) {
        pDigitalCamera = QJvsIPCThread::GetInstance( );
    } else if ( "OnvifIPC" == strVideoType ) {
        pDigitalCamera = QOnvifThread::GetInstance( );
    } else if ( "VideoFile" == strVideoType ) {
        pFileCamera = QFileCameraThread::GetInstance( );
    }

    pPlateThread = QPlateThread::GetInstance( );
    pPlateThread->SetPlateWay( nPlateWay );

    if ( bCapture ) {
        pPlateThread->SetRecognizeFlag( );
        ui->btnStopVideoRecognize->setEnabled( false );
    }

    connect( pPlateThread, SIGNAL( PlateResult( QStringList, int, bool, bool ) ),
             this, SLOT( HandlePlateResult( QStringList, int, bool, bool ) ) );

    for ( int nIndex = 0; nIndex < nPlateWay; nIndex++ ) {
        pPlateThread->PostPlateInitEvent( nFormat, nIndex );
    }

    //ImageFormat YUV420COMPASS : ImageFormatBGR
    //QPlateThread::GetInstance( )->PostPlateInitEvent( ImageFormatBGR, 0 ); // HK
    //QPlateThread::GetInstance( )->PostPlateInitEvent( ImageFormatBGR, 1 );

    //QPlateThread::GetInstance( )->PostPlateInitEvent( ImageFormatRGB, 0 ); //TM
    //QPlateThread::GetInstance( )->PostPlateInitEvent( ImageFormatRGB, 1 );
    //QPlateThread::GetInstance( )->PostPlateInitEvent( ImageFormatRGB, 2 );
    //QPlateThread::GetInstance( )->PostPlateInitEvent( ImageFormatRGB, 3 );
}

void VZMainWindow::LoadLogoTitle( )
{
    QString strPath;
    QString strNameFilter = "logo_*.*";
    QDir dir( strPath, strNameFilter, QDir::Unsorted, QDir::NoDotAndDotDot | QDir::Files );

    QFileInfoList lstFiles = dir.entryInfoList( );

    if ( 0 == lstFiles.count( ) ) {
        return;
    }

    const QFileInfo& fileInfo = lstFiles.at( 0 );
    QString strFile = fileInfo.absoluteFilePath( );

    QIcon winIcon( strFile );
    setWindowIcon( winIcon );

    QPixmap lblPic( strFile );
    ui->lblPicture->setPixmap( lblPic );

    QString strSuffix = "." + fileInfo.suffix( ).toLower( );
    strSuffix = fileInfo.baseName( ).toLower( ).remove( "logo_" ).remove( strSuffix );
    setWindowTitle( strSuffix );
}

void VZMainWindow::HandlePlateResult( QStringList lstResult, int nChannel, bool bSuccess, bool bVideo )
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

void VZMainWindow::HandleCaptureImage( QString strFile, int nChannel )
{

}

void VZMainWindow::HandleCaptureImage( QString strFile, QString strIP )
{

}

void VZMainWindow::HandleNotifyMessage( QString strMsg, bool bSuccess )
{

}

void VZMainWindow::HandleDetectInfo( int nChannel, bool bMotion )
{

}

QString VZMainWindow::GetSelectedFile( )
{
    return QFileDialog::getOpenFileName( this, "选择要识别的文件", qApp->applicationDirPath( ),
                                                    "Image Files (*.BMP *.JPG *.JPEG *.PNG *.TIF);;All Files(*.*)" );
}

void VZMainWindow::on_btnFile_clicked()
{
    QString strFile = GetSelectedFile( );

    if ( strFile.isEmpty( ) ) {
        return;
    }

    QDir dir( strFile );
    dir.cdUp( );
    strFile = dir.path( );

    QDirectoryThread::GetInstance( )->PostDirectoryTraverse( strFile );
}

void VZMainWindow::ButtonEnable( bool bPreEnable, bool bNextEnable )
{
    ui->btnPreFile->setEnabled( bPreEnable );
    ui->btnNextFile->setEnabled( bNextEnable );
}

void VZMainWindow::on_btnSingleFile_clicked()
{
    QString strFile = GetSelectedFile( );

    if ( strFile.isEmpty( ) ) {
        return;
    }

    ButtonEnable( false, false );
    nFileIndex = 0;

    QDir dir( strFile );
    dir.cdUp( );

    QStringList lstFilter;
    lstFilter << "*.BMP" << "*.JPG" << "*.JPEG" << "*.PNG" << "*.TIF";
    dir.setNameFilters( lstFilter );

    lstFiles = dir.entryInfoList( );
    int nCount = lstFiles.count( );
    if ( 0 == nCount ) {
        return;
    } else if ( 1 < nCount ) {
        ButtonEnable( false, true );
    }

    pPlateThread->PostPlateFileRecognize( strFile, 0 );
}

void VZMainWindow::SingleFileRecognize( bool bPreFile )
{
    int nCount = lstFiles.count( ) - 1;

    if ( bPreFile ) {
        if ( 0 < nFileIndex ) {
            nFileIndex--;
        }

        ButtonEnable( 0 != nFileIndex, true );
    } else {
        if ( nCount > nFileIndex ) {
            nFileIndex++;
        }

        ButtonEnable( true, nCount != nFileIndex );
    }

    QString strFile = lstFiles.at( nFileIndex ).absoluteFilePath( );
    pPlateThread->PostPlateFileRecognize( strFile, 0 );
}

void VZMainWindow::on_btnPreFile_clicked()
{
    SingleFileRecognize( true );
}

void VZMainWindow::on_btnNextFile_clicked()
{
    SingleFileRecognize( false );
}

void VZMainWindow::on_tabResult_cellClicked(int row, int column)
{
    if ( 0 != column ) {
        return;
    }

    if ( QString( "否" ) == ui->tabResult->item( row, ui->tabResult->columnCount( ) - 1 )->text() ) {
        LoadImg( ui->lblVideo0, ui->lblPicture, ui->lblPlatePic, row );
    }
}

void VZMainWindow::LoadImg( QLabel *lblCtrlLeft, QLabel *lblCtrlRight, QLabel* lblCtrlDown, int nRow )
{
    QTableWidget* tabWid = ui->tabResult;
    int nCol = tabWid->columnCount( ) - 1;
    QTableWidgetItem* pItem = tabWid->item( nRow, nCol - 2 );

    if ( NULL == pItem ) {
        return;
    }

    QString strFile = pItem->text( );

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

void VZMainWindow::on_btnClear_clicked()
{
    for ( int nIndex = ui->tabResult->rowCount( ) - 1 ; nIndex >= 0; nIndex-- ) {
        ui->tabResult->removeRow( nIndex );
    }

    ui->lblPicture->clear( );
    ui->lblPlatePic->clear( );
    ui->lblVideo0->clear( );

    LoadLogoTitle( );
}

void VZMainWindow::StartVideo( )
{
    if ( NULL != pAnalogCamera ) {
        connect( pAnalogCamera, SIGNAL( CaptureImage( QString, int ) ),
                 this, SLOT( HandleCaptureImage( QString, int ) ) );
        connect( pAnalogCamera, SIGNAL( NotifyMessage( QString, bool ) ),
                 this, SLOT( HandleNotifyMessage( QString, bool ) ) );
        connect( pAnalogCamera, SIGNAL( DetectInfo( int, bool ) ),
                 this, SLOT( HandleDetectInfo( int, bool ) ) );

        pAnalogCamera->PostInitCaptureSDKEvent( winId( ) );

        for ( int nChannel = 0; nChannel < nPlateWay; nChannel++ ) {
            pAnalogCamera->PostOpenChannelEvent( nChannel );
            pAnalogCamera->PostPlayVideoEvent( nChannel, aLables[ nChannel ]->winId( ) );
            pAnalogCamera->PostStartCaptureEvent( nChannel );
            pAnalogCamera->PostStartMotionDetectEvent( nChannel );
            pAnalogCamera->PostStartSourceStreamEvent( nChannel, 0 == nChannel );
        }
    } else if ( NULL != pDigitalCamera ) {
        connect( pDigitalCamera, SIGNAL( CaptureImage( QString, QString ) ),
                 this, SLOT( HandleCaptureImage( QString, QString ) ) );

        pDigitalCamera->PostIPCStartupEvent( );
        pDigitalCamera->PostIPCSetConnectTimeoutEvent( );
        pDigitalCamera->PostIPCSetReconnectTimeEvent( );
        pDigitalCamera->PostIPCLoginEvent( strIpcIP );

        for ( int nChannel = 0; nChannel < nPlateWay; nChannel++ ) {
            pDigitalCamera->PostIPCStartRealPlayEvent( strIpcIP, pConfig->ReadMainStream( ),
                                                       pConfig->ReadRealStream( ),
                                                       aLables[ nChannel ]->winId( ) );
        }
    }
}

void VZMainWindow::on_btnCamera_clicked()
{
    StartVideo( );
}

void VZMainWindow::on_btnVideoFile_clicked()
{

}

void VZMainWindow::CaptureImage( )
{
    if ( NULL != pAnalogCamera ) {
        int nChannel = 0;
        QString strFile = strPlateDir + QString::number( QDateTime::currentMSecsSinceEpoch( ) ) + ".JPG";
        pAnalogCamera->PostCaptrueImageEvent( nChannel, strFile, true );
    } else if ( NULL != pDigitalCamera ) {
        QString strFile = strPlateDir + QString::number( QDateTime::currentMSecsSinceEpoch( ) ) + ".JPG";
        pDigitalCamera->PostIPCCaptureJPGEvent( strIpcIP, strFile, true, ui->lblVideo0->winId( ) );
    }
}

void VZMainWindow::on_btnCaptureFile_clicked()
{
    CaptureImage( );
}

void VZMainWindow::on_btnStopVideoRecognize_clicked()
{
    bool bFlag = pPlateThread->SetRecognizeFlag( );
    ui->btnStopVideoRecognize->setText( bFlag ? "启动视频识别" : "停止视频识别" );
}

void VZMainWindow::on_actParameter_triggered()
{
    CDlgConfig dlg( this );
    dlg.exec( );
}
