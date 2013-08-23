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

void QDHkIPCThread::SendNotify( DWORD dwType, LONG lUserID, LONG lHandle )
{
    Q_UNUSED( lUserID )
    Q_UNUSED( lHandle )

    QString strText;

    switch ( dwType ) {
    case EXCEPTION_EXCHANGE :
        strText = "用户交互时异常（注册心跳超时，心跳间隔为2分钟）";
        break;

    case EXCEPTION_AUDIOEXCHANGE :
        strText = "语音对讲异常";
        break;

    case EXCEPTION_ALARM :
        strText = "报警异常";
        break;

    case EXCEPTION_PREVIEW :
        strText = "网络预览异常";
        break;

    case EXCEPTION_SERIAL :
        strText = "透明通道异常";
        break;

    case EXCEPTION_RECONNECT :
        strText = "预览时重连";
        break;

    case EXCEPTION_ALARMRECONNECT :
        strText = "报警时重连";
        break;

    case EXCEPTION_SERIALRECONNECT :
        strText = "透明通道重连";
        break;

    case SERIAL_RECONNECTSUCCESS :
        strText = "透明通道重连成功";
        break;

    case EXCEPTION_PLAYBACK :
        strText = "回放异常";
        break;

    case EXCEPTION_DISKFMT :
        strText = "硬盘格式化";
        break;

    case EXCEPTION_PASSIVEDECODE :
        strText = "被动解码异常";
        break;

    case EXCEPTION_EMAILTEST :
        strText = "邮件测试异常";
        break;

    case EXCEPTION_BACKUP :
        strText = "备份异常";
        break;

    case PREVIEW_RECONNECTSUCCESS :
        strText = "预览时重连成功";
        break;

    case ALARM_RECONNECTSUCCESS :
        strText = "报警时重连成功";
        break;

    case RESUME_EXCHANGE :
        strText = "用户交互恢复";
        break;

    case NETWORK_FLOWTEST_EXCEPTION :
        strText = "网络流量检测异常";
        break;

    case EXCEPTION_PICPREVIEWRECONNECT :
        strText = "图片预览重连";
        break;

    case PICPREVIEW_RECONNECTSUCCESS :
        strText = "图片预览重连成功";
        break;

   case EXCEPTION_PICPREVIEW :
        strText = "图片预览异常";
        break;
    }


    qDebug( ) << strText << NET_DVR_GetErrorMsg( ) << Q_FUNC_INFO << endl;
}

void CALLBACK ExceptionCallbackDemo( DWORD dwType,
                                 LONG lUserID,
                                 LONG lHandle,
                                 void* pUser )
{
    if ( NULL == pUser ) {
        return;
    }

    QDHkIPCThread* pThread = ( QDHkIPCThread* ) pUser;
    pThread->SendNotify( dwType, lUserID, lHandle );
}

void QDHkIPCThread::run( )
{
    exec( );
}

void QDHkIPCThread::CaptureStaticImage( QString &strIP, QString &strFileName, HWND hPlayWnd )
{
    Q_UNUSED( hPlayWnd )
    //CProcessData::CaptureSenseImage
    CapturePicture( strIP, strFileName );
}

void QDHkIPCThread::CapturePicture( QString &strIP, QString &strFile )
{
    QByteArray byData = pCodec->fromUnicode( strIP );
    byData.append( char( 0 ) );
    LONG lUserID = GetUserID( strIP );

    byData = pCodec->fromUnicode( strFile );
    byData.append( char( 0 ) );
    char* pFile = byData.data( );

    if ( -1 == lUserID ) {
        return;
    }

    BOOL bRet = FALSE;
    NET_DVR_JPEGPARA sJpgData = { 0 };

    sJpgData.wPicSize = 0xff;
    sJpgData.wPicQuality = 0;

    bRet = NET_DVR_CaptureJPEGPicture( lUserID, 1, &sJpgData, pFile );
}

void QDHkIPCThread::ProcessIPCStartupEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent )
    BOOL bRet = NET_DVR_Init( );
    bRet = TRUE;

    // Lookup SDK info log
    //bRet = NET_DVR_SetLogToFile( 3 );

    bRet = NET_DVR_SetExceptionCallBack_V30( 0, NULL, ExceptionCallbackDemo, this );
}

void QDHkIPCThread::ProcessIPCSetConnectTimeoutEvent( QCameraEvent* pEvent )
{
    // 300,75000 // Reserved

    Q_UNUSED( pEvent )
    BOOL bRet = NET_DVR_SetConnectTime( 5000, 1 );
    bRet = TRUE;
}

void QDHkIPCThread::ProcessIPCSetReconnectTimeEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent )
    BOOL bRet = NET_DVR_SetReconnect( 5000, TRUE );
    bRet = TRUE;
}

void QDHkIPCThread::ProcessIPCLoginEvent( QCameraEvent* pEvent )
{
    NET_DVR_DEVICEINFO_V30 sDevInfo;

    QString& strIP = pEvent->GetIpcIp( );
    QByteArray byData = strIP.toAscii( );
    byData.append( char( 0 ) );

    char* pIP = byData.data( );
    char cUser[ ] = "admin";
    char cPwd[ ] = "12345";

    LONG lUserID = GetUserID( strIP );
    if ( -1 != lUserID ) {
        return;
    }

    // Login once, play multiple
    lUserID = NET_DVR_Login_V30( pIP, 8000, cUser, cPwd, &sDevInfo );
    SetUserID( strIP, lUserID );
}

void QDHkIPCThread::ProcessIPCCaptureJPGEvent( QCameraEvent* pEvent )
{
    QString& strIP = pEvent->GetIpcIp( );
    bool bRecognize = pEvent->GetRecognize( );
    QString& strFile = pEvent->GetImgFile( );

    CapturePicture( strIP, strFile );
    SendCaptureImage( strFile, strIP );

    if ( bRecognize ) {
        QPlateThread::GetInstance( )->PostPlateFileRecognize( strFile, 0 );
    }
}

void QDHkIPCThread::ProcessIPCStartRealPlayEvent( QCameraEvent* pEvent )
{
    QString& strIP = pEvent->GetIpcIp( );
    LONG lUserID = GetUserID( strIP );
    bool bMainStream = pEvent->GetMainStream( );
    HWND hPlayWnd = pEvent->GetVideoWndHandle( );
    LONG lPlayHandle = GetPlayHandle( hPlayWnd );

    if ( -1 != lPlayHandle ) {
        return;
    }

    NET_DVR_CLIENTINFO sClientInfo = { 0 };
    sClientInfo.lChannel = 1;
    sClientInfo.lLinkMode  = bMainStream ? 0x00000000 : 0x80000000;
    sClientInfo.hPlayWnd = hPlayWnd;

    lPlayHandle = NET_DVR_RealPlay_V30( lUserID, &sClientInfo, NULL );
    SetPlayHandle( hPlayWnd, lPlayHandle );
}

void QDHkIPCThread::ProcessIPCStopRealPlayEvent( QCameraEvent* pEvent )
{
    HWND hPlayWnd = pEvent->GetVideoWndHandle( );
    LONG lPlayHandle = GetPlayHandle( hPlayWnd );

    if ( - 1 == lPlayHandle ) {
        return;
    }

    BOOL bRet = NET_DVR_StopRealPlay( lPlayHandle );
    RemovePlayHandle( hPlayWnd );

    Q_UNUSED( bRet )
}

void QDHkIPCThread::ProcessIPCLogoutEvent( QCameraEvent* pEvent )
{
    QString& strIP = pEvent->GetIpcIp( );
    LONG lUserID = GetUserID( strIP );

    if ( - 1 == lUserID ) {
        return;
    }

    BOOL bRet = NET_DVR_Logout( lUserID );
    RemoveUserID( strIP );

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
