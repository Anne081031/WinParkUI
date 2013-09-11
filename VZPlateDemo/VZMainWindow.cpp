#include "vzmainwindow.h"
#include "ui_vzmainwindow.h"
#include <QFileDialog>
#include <QDir>
#include <QDebug>
#include <QDateTime>

/*
 QT UI�¼����� MVC ��V C��ȫ����
 ͬһ��ؼ���ÿһ���¼�ʹ��ͬһ��Handler���ڲ�ͨ�� pCtl == ( Control ) sender( )����������
 connect( ctl0, SIGNAL( clicked() ), this, SLOT( Handler( ) ) );

 �¼������߼������ܶ�������дһ���������������� Logic


 inline Control* GetControl( ); ÿ���ؼ� һ������
 inline void SetControlEnable( bool bEnable ); ÿ���ؼ� һ������

 void Handler( )
 {
   if ( GetControl0() == ( Control ) sender( ) ) {
    pLogic->Handler0( );
   } else if ( GetControl1() == ( Control ) sender( ) ) {
    pLogic->Handler1( );
   }
 }
*/

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

    aResult[ 0 ] = ui->lblRes0;
    aResult[ 1 ] = ui->lblRes1;
    aResult[ 2 ] = ui->lblRes2;
    aResult[ 3 ] = ui->lblRes3;
}

void VZMainWindow::closeEvent(QCloseEvent *)
{
    //QTransparentFrame::DestroyFrame( );
    qApp->exit( );
}

VZMainWindow::~VZMainWindow( )
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
    bCapture = pConfig->ReadVideoCapture( );

    EnableButton( strVideoType );

    if ( "PictureFile" == strVideoType ) {
        nFormat = ImageFormatBGR;
        nPlateWay = 2;
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
    }

    pPlateThread->SetPlateMultiThread( pConfig->ReadPlateMultiThread( ) );

    EnableCaptureButton( false );
    EnableStopButton( false );
    ButtonEnable( false, false );

    connect( pPlateThread, SIGNAL( PlateResult( QStringList, int, bool, bool ) ),
             this, SLOT( HandlePlateResult( QStringList, int, bool, bool ) ) );

    connect( pPlateThread, SIGNAL( UIPlateResult( QString, int, bool, bool, int, int, int, QString, QByteArray, QRect, QRect ) ),
             this, SLOT( HandleUIPlateResult( QString, int, bool, bool, int, int, int, QString, QByteArray, QRect, QRect ) ) );

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

void VZMainWindow::EnableCaptureButton( bool bEnable )
{
    ui->btnCaptureFile->setEnabled( bEnable );
}

void VZMainWindow::EnableStopButton( bool bEnable )
{
    ui->btnStopVideoRecognize->setEnabled( bEnable );
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

void VZMainWindow::HandleUIPlateResult( QString strPlate, int nChannel, bool bSuccess,
                    bool bVideo, int nWidth, int nHeight, int nConfidence,
                    QString strDirection, QByteArray byData, QRect rectPlate, QRect rectVideo )
{
    QString strRes = QString( "%1 %2*%3 %4" ).arg( strPlate, QString::number( nWidth ),
                                                   QString::number( nHeight ), strDirection );
    aResult[ nChannel ]->setText( strRes );

    QTransparentFrame::CreateFrame( aLables[ nChannel ]->winId( ), rectPlate, rectVideo );
    //frmPlates[ nChannel ].ShowWnd( aLables[ nChannel ]->winId( ), rect );
    //DramBox( aLables[ nChannel ]->winId( ), rect );
}

void VZMainWindow::DramBox( HWND hVideoWnd, QRect& rect )
{
    if ( rect.left( ) <= 0 || rect.top( ) <= 0 ||
         rect.right( ) <= 0 || rect.bottom( ) <= 0 ) {
        return;
    }

    POINT pos;
    pos.x = rect.x( );
    pos.y = rect.y( );
    BOOL bRet = FALSE;
    setParent( NULL );

    HDC hVideoDc = GetDC( hVideoWnd );
    HPEN hMyPen = CreatePen( PS_SOLID, 5, RGB( 0,0,0 ) );
    HGDIOBJ hRawObj = SelectObject( hVideoDc, hMyPen );

    POINT poplyPoint[ 5 ];
    poplyPoint[ 0 ].x = rect.left( );
    poplyPoint[ 0 ].y = rect.top( );

    poplyPoint[ 1 ].x = rect.right( );
    poplyPoint[ 1 ].y = rect.top( );

    poplyPoint[ 2 ].x = rect.right( );
    poplyPoint[ 2 ].y = rect.bottom( );

    poplyPoint[ 3 ].x = rect.left( );
    poplyPoint[ 3 ].y = rect.bottom( );

    poplyPoint[ 4 ].x = rect.left( );
    poplyPoint[ 4 ].y = rect.top( );

    bRet = Polyline( hVideoDc, poplyPoint, 5 );

    hRawObj = SelectObject( hVideoDc, hRawObj );
    bRet = DeleteObject( hMyPen );
    bRet = ReleaseDC( hVideoWnd, hVideoDc );
}

void VZMainWindow::HandlePlateResult( QStringList lstResult, int nChannel, bool bSuccess, bool bVideo )
{
    ui->tabResult->insertRow( 0 );
    qint32 nCol = 0;
    QTableWidgetItem* pItem;
    lstResult << QString::number( nChannel ) << ( bVideo ? "��" : "��" );

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
    return QFileDialog::getOpenFileName( this, "ѡ��Ҫʶ����ļ�", qApp->applicationDirPath( ),
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

    pPlateThread->PostPlateFileRecognize( strFile, 0, true );
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
    pPlateThread->PostPlateFileRecognize( strFile, 0, true );
    pPlateThread->PostPlateFileRecognize( strFile, 1, true );
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

    if ( QString( "��" ) == ui->tabResult->item( row, ui->tabResult->columnCount( ) - 1 )->text() ) {
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

    for( int nIndex = 0; nIndex < 4; nIndex++ ) {
        aResult[ nIndex ]->clear( );
    }

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

    EnableCaptureButton( bCapture );
    EnableStopButton( !bCapture );
}

void VZMainWindow::on_btnVideoFile_clicked()
{

}

void VZMainWindow::CaptureImage( )
{
    QString strFile = strPlateDir + QString::number( QDateTime::currentMSecsSinceEpoch( ) ) + ".JPG";

    if ( NULL != pAnalogCamera ) {
        int nChannel = 0;
        pAnalogCamera->PostCaptrueImageEvent( nChannel, strFile, true );
    } else if ( NULL != pDigitalCamera ) {
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
    ui->btnStopVideoRecognize->setText( bFlag ? "������Ƶʶ��" : "ֹͣ��Ƶʶ��" );
}

void VZMainWindow::on_actParameter_triggered()
{
    CDlgConfig dlg( this );
    dlg.exec( );
}
