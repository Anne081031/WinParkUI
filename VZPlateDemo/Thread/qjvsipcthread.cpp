#include "qjvsipcthread.h"

QDigitalCameraThread* QJvsIPCThread::pThreadInstance = NULL;

QJvsIPCThread::QJvsIPCThread(QObject *parent) :
    QDigitalCameraThread(parent)
{
}

QDigitalCameraThread* QJvsIPCThread::GetInstance( )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = new QJvsIPCThread( );
        pThreadInstance->moveToThread( pThreadInstance );
        pThreadInstance->start( );
    }

    return pThreadInstance;
}

void QJvsIPCThread::run( )
{
    exec( );
}

void QJvsIPCThread::ProcessIPCStartupEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent )
}

void QJvsIPCThread::ProcessIPCSetConnectTimeoutEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent )
}

void QJvsIPCThread::ProcessIPCSetReconnectTimeEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent )
}

void QJvsIPCThread::ProcessIPCLoginEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent );
}

void QJvsIPCThread::ProcessIPCCaptureJPGEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent )
}

void QJvsIPCThread::ProcessIPCStartRealPlayEvent( QCameraEvent* pEvent )
{
    char* pIP;
    HWND hPlayWnd = pEvent->GetVideoWndHandle( );
    bool bMainStream = pEvent->GetMainStream( );

    tmPlayRealStreamCfg_t tPlayInfo = { 0 };
    tPlayInfo.dwSize = sizeof ( tmPlayRealStreamCfg_t );
    strcpy( tPlayInfo.szAddress, pIP );
    tPlayInfo.iPort = 6002;
    strcpy( tPlayInfo.szUser, "system" );
    strcpy( tPlayInfo.szPass, "system" );
    tPlayInfo.byStream = bMainStream ? 0 : 1;

    HANDLE hPreview = TMCC_Init( TMCC_INITTYPE_REALSTREAM );
    if ( NULL == hPreview ) {
        return;
    }

    int nRet = TMCC_SetAutoReConnect( hPreview, TRUE );
    nRet = TMCC_ConnectStream( hPreview, &tPlayInfo, hPlayWnd);
}

void QJvsIPCThread::ProcessIPCStopRealPlayEvent( QCameraEvent* pEvent )
{
    HANDLE hPreview;

    if ( NULL == hPreview ) {
        return;
    }

    int nRet = TMCC_CloseStream( hPreview );
    nRet = TMCC_DisConnect( hPreview );
    JwsCleanup( hPreview );
}

void QJvsIPCThread::ProcessIPCLogoutEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent );
}

void QJvsIPCThread::ProcessIPCCleanupEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent )
}

void QJvsIPCThread::JwsConnect( QCameraEvent* pEvent, HANDLE hCtrl )
{
    char* pIP;

    if ( TMCC_IsConnect( hCtrl ) ) {
        return;
    }

    tmConnectInfo_t tConnInfo = { 0 };

    tConnInfo.dwSize = sizeof ( tmConnectInfo_t );
    strcpy( tConnInfo.pIp, pIP );
    tConnInfo.iPort = 0;
    strcpy( tConnInfo.szUser, 0 );
    strcpy( tConnInfo.szPass, 0 );

    int nRet = TMCC_Connect( hCtrl, &tConnInfo, TRUE );
    Q_UNUSED( nRet )
}

void QJvsIPCThread::JwsCleanup( HANDLE hCtrl )
{
    if ( NULL == hCtrl ) {
        return;
    }

    int nRet = TMCC_ShutDown( hCtrl );
    nRet = TMCC_Done( hCtrl );
}

void QJvsIPCThread::customEvent( QEvent *e )
{
    QCameraEvent* pEvent = ( QCameraEvent* ) e;
    QCameraEvent::CameraEventType evtType = ( QCameraEvent::CameraEventType ) pEvent->type( );

    switch ( evtType ) {
    case QCameraEvent::IPCStartup :
        ProcessIPCStartupEvent( pEvent );
        break;

    case QCameraEvent::IPCSetConnectTimeout :
        ProcessIPCSetConnectTimeoutEvent( pEvent );
        break;

    case QCameraEvent::IPCSetReconnectTime :
        ProcessIPCSetReconnectTimeEvent( pEvent );
        break;

    case QCameraEvent::IPCLogin :
        ProcessIPCLoginEvent( pEvent );
        break;

    case QCameraEvent::IPCCaptureJPG :
        ProcessIPCCaptureJPGEvent( pEvent );
        break;

    case QCameraEvent::IPCStartRealPlay :
        ProcessIPCStartRealPlayEvent( pEvent );
        break;

    case QCameraEvent::IPCStopRealPlay :
        ProcessIPCStopRealPlayEvent( pEvent );
        break;

    case QCameraEvent::IPCLogout :
        ProcessIPCLogoutEvent( pEvent );
        break;

    case QCameraEvent::IPCCleanup :
        ProcessIPCCleanupEvent( pEvent );
        break;

    default :
        break;
    }
}
