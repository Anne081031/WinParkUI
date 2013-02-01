#include "Header\ipcvideoframe.h"
#include "ui_ipcvideoframe.h"
#include <QByteArray>
#include "./Common/logicinterface.h"
#include <QDesktopWidget>
#include "Network/parkintranet.h"

CIPCVideoFrame::CIPCVideoFrame(bool bIPC, QWidget *parent) :
    QFrame(parent),
    ui(new Ui::CIPCVideoFrame)
{
    ui->setupUi(this);
    bNetworkCamera = bIPC;

    if ( bNetworkCamera ) {
        recSmallSize = frameGeometry( );
        pVideoThread = QIPCThread::GetInstance( );
        setWindowState( Qt::WindowMaximized );
        QDesktopWidget* pDesktop = QApplication::desktop( );
        recBigSize = pDesktop->screenGeometry( );
    } else {
        ui->tabWidget->removeTab( 0 );
        pVideoThread = NULL;
    }

    Qt::WindowFlags flags = windowFlags( );
    flags &= ( ~Qt::WindowMaximizeButtonHint );
    setWindowFlags( flags );
    InitializeIPC( );
}

CIPCVideoFrame::~CIPCVideoFrame()
{
    UninitializeIPC( );
    delete ui;
}

void CIPCVideoFrame::OperateGate( bool bOpen, bool bAll )
{
    QTableWidget* pTable = ui->tableWidget;
    int nRows = pTable->rowCount( );
    if ( 0 >= nRows ) {
        return;
    }

    bool bSend = true;
    QStringList lstCmd;

    for ( int nIndex = 0; nIndex < nRows; nIndex++ ) {
        lstCmd.clear( );
        QString strIP = pTable->item( nIndex, 0 )->data( Qt::WhatsThisRole ).toString( );

        if ( !bAll ) {
            bSend = ( pTable->item( nIndex, 2 )->checkState( ) == Qt::Checked );
        }

        if ( bSend ) {
            lstCmd << ( bOpen ? "1" : "0" ) << pTable->item( nIndex, 1 )->text( );

            CNetwork::Singleton( ).BroadcastDatagram( CommonDataType::DGGateCommand, lstCmd, strIP );
        }

        bSend = true;
    }
}

void CIPCVideoFrame::FillTable( )
{
    CCommonFunction::FreeAllRows( ui->tableWidget );

    QString strSQL = "select distinct shebeiname, shebeiadr, video1ip from roadconerinfo";
    QStringList lstRows;

    CLogicInterface::GetInterface( )->ExecuteSql( strSQL, lstRows );

    QTableWidgetItem* pItem = NULL;

    for ( int nIndex = 0; nIndex < lstRows.count( ); nIndex+= 3 ) {
        ui->tableWidget->insertRow( 0 );

        pItem = new QTableWidgetItem( lstRows.at( nIndex ) );
        ui->tableWidget->setItem( 0, 0, pItem );
        pItem->setFlags( Qt::ItemIsEnabled | Qt::ItemIsSelectable );
        pItem->setData( Qt::WhatsThisRole, lstRows.at( nIndex + 2 ) );

        pItem = new QTableWidgetItem( lstRows.at( nIndex + 1 ) );
        ui->tableWidget->setItem( 0, 1, pItem );
        pItem->setFlags( Qt::ItemIsEnabled | Qt::ItemIsSelectable );

        pItem = new QTableWidgetItem( );
        ui->tableWidget->setItem( 0, 2, pItem );
        pItem->setFlags( Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsUserCheckable );
        pItem->setCheckState( Qt::Unchecked );
    }
}

void CIPCVideoFrame::CapturePreviewImage( HWND hPlayWnd, QString& strFileName )
{
    if ( NULL == pVideoThread ) {
        return;
    }

    pVideoThread->CapturePreviewImage( hPlayWnd, strFileName );
}

void CIPCVideoFrame::CaptureDeviceImage( QString& strIP, QString& strFileName )
{
    if ( NULL == pVideoThread ) {
        return;
    }

    pVideoThread->CaptureDeviceImage( strIP, strFileName );
}

void CIPCVideoFrame::resizeEvent( QResizeEvent *event )
{
    if ( !bNetworkCamera ) {
        setMaximumSize( width( ), height( ) );
        setMinimumSize( width( ), height( ) );
        move( 123, 177 );
        return;
    }

    Q_UNUSED( event )
    QRect rect = frameRect( );
    ui->tabWidget->setGeometry( rect );

     rect = ui->tabVideo->frameGeometry( );
     ui->tabWidgetVideo->setGeometry( rect );
}

void CIPCVideoFrame::closeEvent( QCloseEvent *event )
{
    Q_UNUSED( event );
    VideoIPC( false );
    LogIPC( false, false );
}

void CIPCVideoFrame::UninitializeIPC( )
{
    if ( NULL == pVideoThread ) {
        return;
    }

    pVideoThread->PostIPCCleanupEvent( );
}

void CIPCVideoFrame::LocalIPCLogout( )
{
    LogIPC( true, false );
}

void CIPCVideoFrame::LocalIPCStartVideo( QString &strIP, HWND hPlayWnd )
{
    StartPlayIPC( strIP, hPlayWnd );
}

void CIPCVideoFrame::LocalIPCStopVideo( HWND hPlayWnd )
{
    StopPlayIPC( hPlayWnd );
}

void CIPCVideoFrame::showEvent( QShowEvent *event )
{
    Q_UNUSED( event )

    if ( bNetworkCamera ) {
        GetHostIPC( );
    }

    FillTable( );

    LogIPC( false, true );
    VideoIPC( true );

    if ( ui->tabWidget->count( ) > 1 && 0 != ui->tabWidget->currentIndex( ) ) {
        ui->tabWidget->setCurrentIndex( 0 );
    }
}

void CIPCVideoFrame::VideoIPC( bool bPlay )
{
    if ( NULL == pVideoThread ) {
        return;
    }

    QList< QString > lstIPC = hashHostIPC.values( );
    int nIPC = lstIPC.count( );
    int nTab = ui->tabWidgetVideo->count( );

    if ( nIPC > nTab ) {
        for ( int nIndex = 0; nIndex < nIPC - nTab; nIndex++ ) {
            QWidget* pTab = new QWidget( );
            ui->tabWidgetVideo->addTab( pTab, QString( ) );
        }
    } else if ( nIPC < nTab ) {
        for ( int nIndex = 0; nIndex < nTab - nIPC; nIndex++ ) {
            QWidget* pTab = ui->tabWidgetVideo->widget( nIndex );
            ui->tabWidgetVideo->removeTab( nIndex );
            delete pTab;
        }
    }

    if ( bPlay ) {
        int nCount = 0;

        foreach ( const QString& strIPC, lstIPC ) {
            ui->tabWidgetVideo->setTabText( nCount, hashIPCName.value( strIPC ) );
            WId hWnd = ui->tabWidgetVideo->widget( nCount++ )->winId( );
            StartPlayIPC( strIPC, hWnd );
        }
    } else {
        for ( int nIndex = 0; nIndex < nTab; nIndex++ ) {
            WId hWnd = ui->tabWidgetVideo->widget( nIndex )->winId( );
            StopPlayIPC( hWnd );
        }
    }
}

void CIPCVideoFrame::GetHostIPC( )
{
    hashHostIPC.clear( );
    hashIPCName.clear( );

    QString strSQL = "select distinct shebeiname, video1ip, video2ip \
            from roadconerinfo where video2ip != '127.0.0.1' \
            order by shebeiadr";
    QStringList lstRows;

    CLogicInterface::GetInterface( )->ExecuteSql( strSQL, lstRows );

    for ( int nIndex = 0; nIndex < lstRows.count( ); nIndex += 3 ) {
        hashIPCName.insert( lstRows.at( nIndex + 2 ), lstRows.at( nIndex ) );
        hashHostIPC.insertMulti( lstRows.at( nIndex + 1 ), lstRows.at( nIndex + 2 ) );
    }
}

void CIPCVideoFrame::InitializeIPC( )
{
    GetHostIPC( );

    if ( NULL == pVideoThread ) {
        return;
    }

    QIPCEvent::EventParam uParam;

    pVideoThread->PostIPCStartupEvent( );

    uParam.EventConnectTimeout.dwWaitTime = 2000;
    uParam.EventConnectTimeout.dwTryTimes = 1;
    pVideoThread->PostIPCSetConnectTimeoutEvent( uParam );

    uParam.EventReconnectTimeout.dwInterval = 10000;
    uParam.EventReconnectTimeout.bEnableRecon = TRUE;
    pVideoThread->PostIPCSetReconnectTimeEvent( uParam );

    LogIPC( true, true );
}

void CIPCVideoFrame::LogIPC( bool bLocal, bool bLogin )
{
    if ( NULL == pVideoThread ) {
        return;
    }

    QList< QString > lstIPC;
    QString strIP = CCommonFunction::GetHostIP( );

    if ( bLocal ) {
        lstIPC = hashHostIPC.values( strIP );
    } else {
        QList< QString > lstKey = hashHostIPC. uniqueKeys( );

        foreach ( const QString& strKey, lstKey ) {
            if ( strKey == strIP ) {
                continue;
            }

            lstIPC.append( hashHostIPC.values( strKey ) );
        }
    }

    foreach ( const QString& strIPC, lstIPC ) {
        bLogin ? LoginIPC( strIPC ) : LogoutIPC( strIPC );
    }
}

void CIPCVideoFrame::LoginIPC( const QString &strIP )
{
    if ( NULL == pVideoThread ) {
        return;
    }

    if ( strIP.isEmpty( ) ) {
        return;
    }

     QIPCEvent::EventParam uParam;
     QByteArray byData = strIP.toAscii( );
     byData.append( char( 0 ) );
     const char* pIP = byData.data( );

     strcpy( uParam.EventLogin.cIP, pIP );
     uParam.EventLogin.wPort = 8000;
     strcpy( uParam.EventLogin.cUser, "admin" );
     strcpy( uParam.EventLogin.cPwd, "12345" );

     pVideoThread->PostIPCLoginEvent( uParam );
}

void CIPCVideoFrame::LogoutIPC( const QString &strIP )
{
    if ( NULL == pVideoThread ) {
        return;
    }

    if ( strIP.isEmpty( ) ) {
        return;
    }

     QIPCEvent::EventParam uParam;
     QByteArray byData = strIP.toAscii( );
     byData.append( char( 0 ) );
     const char* pIP = byData.data( );

     strcpy( uParam.EventLogout.cIP, pIP );

     pVideoThread->PostIPCLogoutEvent( uParam );
}

void CIPCVideoFrame::StartPlayIPC( const QString &strIP, HWND hPlayWnd )
{
    if ( NULL == pVideoThread ) {
        return;
    }

    if ( strIP.isEmpty( ) || INVALID_HANDLE_VALUE == hPlayWnd ) {
        return;
    }

     QIPCEvent::EventParam uParam;
     QByteArray byData = strIP.toAscii( );
     byData.append( char( 0 ) );
     const char* pIP = byData.data( );

     strcpy( uParam.EventStartRealPlay.cIP, pIP );
     uParam.EventStartRealPlay.hPlayWnd = hPlayWnd;

     pVideoThread->PostIPCStartRealPlayEvent( uParam );
}

void CIPCVideoFrame::StopPlayIPC( HWND hPlayWnd )
{
    if ( NULL == pVideoThread ) {
        return;
    }

    QIPCEvent::EventParam uParam;

    uParam.EventStopRealPlay.hPlayWnd = hPlayWnd;
    pVideoThread->PostIPCStopRealPlayEvent( uParam );
}

void CIPCVideoFrame::on_tabWidget_currentChanged(int index)
{
    if ( 0 == index ) {
        setGeometry( recBigSize );
    } else if ( 1 == index  ) {
        setGeometry( recSmallSize );
    }

    move( 0, 0 );
}

void CIPCVideoFrame::on_btnOpen_clicked()
{
    OperateGate( true, false );
}

void CIPCVideoFrame::on_btnClose_clicked()
{
    OperateGate( false, false );
}

void CIPCVideoFrame::on_btnOpenAll_clicked()
{
    OperateGate( true, true );
}

void CIPCVideoFrame::on_btnCloseAll_clicked()
{
    OperateGate( false, true );
}
