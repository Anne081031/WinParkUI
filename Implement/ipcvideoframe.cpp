#include "Header\ipcvideoframe.h"
#include "ui_ipcvideoframe.h"
#include <QByteArray>
#include "./Common/logicinterface.h"

CIPCVideoFrame::CIPCVideoFrame(bool bIPC, QWidget *parent) :
    QFrame(parent),
    ui(new Ui::CIPCVideoFrame)
{
    ui->setupUi(this);
    bNetworkCamera = bIPC;

    if ( bNetworkCamera ) {
        pVideoThread = QIPCThread::GetInstance( );
    } else {
        ui->tabWidget->removeTab( 0 );
        pVideoThread = NULL;
    }

    setWindowState( Qt::WindowMaximized );
    InitializeIPC( );
}

CIPCVideoFrame::~CIPCVideoFrame()
{
    UninitializeIPC( );
    delete ui;
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

    GetHostIPC( );

    LogIPC( false, true );
    VideoIPC( true );
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

    QString strSQL = "select distinct shebeiname, video1ip, video2ip from roadconerinfo where video2ip != '127.0.0.1'";
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
