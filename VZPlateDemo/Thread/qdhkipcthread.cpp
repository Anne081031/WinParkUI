#include "qdhkipcthread.h"

QDigitalCameraThread* QDHkIPCThread::pThreadInstance = NULL;

QDHkIPCThread::QDHkIPCThread(QObject *parent) :
    QDigitalCameraThread(parent)
{
}

QDigitalCameraThread* QDHkIPCThread::GetInstance( )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = new QDHkIPCThread( );
        pThreadInstance->moveToThread( pThreadInstance );
        pThreadInstance->start( );
    }

    return pThreadInstance;
}

void QDHkIPCThread::run( )
{
    exec( );
}

void QDHkIPCThread::CaptureStaticImage(QString &strFile, int nChannel)
{

}

void QDHkIPCThread::ProcessIPCStartupEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent )
    BOOL bRet = NET_DVR_Init( );
    Q_UNUSED( bRet )

    // Lookup SDK info log
    //bRet = NET_DVR_SetLogToFile( 3 );

    //bRet = NET_DVR_SetExceptionCallBack_V30( 0, NULL, NULL, this );
}

void QDHkIPCThread::ProcessIPCSetConnectTimeoutEvent( QCameraEvent* pEvent )
{
    // 300,75000 // Reserved

    BOOL bRet = NET_DVR_SetConnectTime(
                0,
                0 );
    Q_UNUSED( bRet )
}

void QDHkIPCThread::ProcessIPCSetReconnectTimeEvent( QCameraEvent* pEvent )
{
    BOOL bRet = NET_DVR_SetReconnect(
                0,
                0 );
    Q_UNUSED( bRet )
}

void QDHkIPCThread::ProcessIPCLoginEvent( QCameraEvent* pEvent )
{
    NET_DVR_DEVICEINFO_V30 sDevInfo;
    char* pIP;

    // Login once, play multiple
    LONG lUserID = NET_DVR_Login_V30( pIP,
                                 0,
                                 0,
                                 0,
                                 &sDevInfo );
}

void QDHkIPCThread::ProcessIPCCaptureJPGEvent( QCameraEvent* pEvent )
{
    LONG lUserID;
    char* pFile;

    BOOL bRet = FALSE;
    NET_DVR_JPEGPARA sJpgData = { 0 };

    sJpgData.wPicSize = 0xff;
    sJpgData.wPicQuality = 0;

    bRet = NET_DVR_CaptureJPEGPicture( lUserID, 1, &sJpgData, pFile );
    QString strFile = pFile;

    //emit CapturedJPGImage( uParam.EventCaptureJPG.nChannel, strFile ); // Send to UI
}

void QDHkIPCThread::ProcessIPCStartRealPlayEvent( QCameraEvent* pEvent )
{
    LONG lUserID;
    bool bMainStream = true;
    HWND hPlayWnd;
    LONG lPlayHandle;

    NET_DVR_CLIENTINFO sClientInfo = { 0 };
    sClientInfo.lChannel = 1;
    sClientInfo.lLinkMode  = bMainStream ? 0x00000000 : 0x80000000;
    sClientInfo.hPlayWnd = hPlayWnd;

    lPlayHandle = NET_DVR_RealPlay_V30( lUserID, &sClientInfo, NULL );
}

void QDHkIPCThread::ProcessIPCStopRealPlayEvent( QCameraEvent* pEvent )
{
    LONG lPlayHandle;
    BOOL bRet = NET_DVR_StopRealPlay( lPlayHandle );
    Q_UNUSED( bRet )
}

void QDHkIPCThread::ProcessIPCLogoutEvent( QCameraEvent* pEvent )
{
    LONG lUserID;
    BOOL bRet = NET_DVR_Logout( lUserID );
    Q_UNUSED( bRet )
}

void QDHkIPCThread::ProcessIPCCleanupEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent )

    BOOL bRet = NET_DVR_Cleanup( );
    Q_UNUSED( bRet )
}

void QDHkIPCThread::customEvent( QEvent *e )
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
