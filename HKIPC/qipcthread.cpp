#include "qipcthread.h"
#include <QApplication>

QIPCThread* QIPCThread::pThreadInstance = NULL;

void CALLBACK ExceptionCallback( DWORD dwType,
                                 LONG lUserID,
                                 LONG lHandle,
                                 void* pUser )
{
    if ( NULL == pUser ) {
        return;
    }

    QIPCThread* pThread = ( QIPCThread* ) pUser;
    pThread->SendNotify( dwType, lUserID, lHandle );
}

QIPCThread::QIPCThread(QObject *parent) :
    QThread(parent)
{
    bStarted = false;
    pCodec = CCommonFunction::GetTextCodec( );
}

void QIPCThread::SendNotify( DWORD dwType, LONG lUserID, LONG lHandle )
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

    EmitMsg( strText, Q_FUNC_INFO );
}

void QIPCThread::PostIPCEvent( QIPCEvent::IPCEventType evtType )
{
    QIPCEvent* pEvent = QIPCEvent::GetInstance( evtType );

    qApp->postEvent( this, pEvent );
}

void QIPCThread::PostIPCEvent( QIPCEvent::IPCEventType evtType,
                               QIPCEvent::EventParam &uParam )
{
    QIPCEvent* pEvent = QIPCEvent::GetInstance( evtType );

    pEvent->SetEventParam( uParam );
    qApp->postEvent( this, pEvent );
}

void QIPCThread::PostIPCStartupEvent( )
{
    PostIPCEvent( QIPCEvent::IPCStartup );
}

void QIPCThread::PostIPCSetConnectTimeoutEvent( QIPCEvent::EventParam& uParam )
{
    PostIPCEvent( QIPCEvent::IPCSetConnectTimeout, uParam );
}

void QIPCThread::PostIPCSetReconnectTimeEvent( QIPCEvent::EventParam& uParam )
{
    PostIPCEvent( QIPCEvent::IPCSetReconnectTime, uParam );
}

void QIPCThread::PostIPCLoginEvent( QIPCEvent::EventParam& uParam )
{
    PostIPCEvent( QIPCEvent::IPCLogin, uParam );
}

void QIPCThread::PostIPCCaptureJPGEvent( QIPCEvent::EventParam& uParam )
{
    PostIPCEvent( QIPCEvent::IPCCaptureJPG, uParam );
}

void QIPCThread::PostIPCStartRealPlayEvent( QIPCEvent::EventParam& uParam )
{
    PostIPCEvent( QIPCEvent::IPCStartRealPlay, uParam );
}

void QIPCThread::PostIPCStopRealPlayEvent( QIPCEvent::EventParam& uParam )
{
    PostIPCEvent( QIPCEvent::IPCStopRealPlay, uParam );
}

void QIPCThread::PostIPCLogoutEvent( QIPCEvent::EventParam& uParam )
{
    PostIPCEvent( QIPCEvent::IPCLogout, uParam );
}

void QIPCThread::PostIPCCleanupEvent( )
{
    PostIPCEvent( QIPCEvent::IPCCleanup );
}

QIPCThread* QIPCThread::GetInstance( )
{
    if ( NULL == pThreadInstance ) {
        QIPCThread* pThread = new QIPCThread( );

        pThread->InitializeThread( );
        pThread->start( );
        pThread->moveToThread( pThread );

        pThreadInstance = pThread;
    }

    return pThreadInstance;
}

void QIPCThread::InitializeThread( )
{
    bool bRet = connect( this, SIGNAL( started( ) ),
                         this, SLOT( HandleStarted( ) ) );
    bRet = connect( this, SIGNAL( finished( ) ),
                             this, SLOT( HandleFinished( ) ) );
}

void QIPCThread::HandleStarted( )
{
}

void QIPCThread::HandleFinished( )
{
}

void QIPCThread::run( )
{
    exec( );
}

void QIPCThread::CapturePreviewImage( HWND hPlayWnd, QString& strFileName )
{
    if ( INVALID_HANDLE_VALUE == hPlayWnd ) {
        return;
    }

    QByteArray byData = pCodec->fromUnicode( strFileName );
    byData.append( char( 0 ) );
    char* pFile = byData.data( );

    LONG lPlayHandle = GetPlayHandle( hPlayWnd );
    if ( -1 == lPlayHandle ) {
        return;
    }

    BOOL bRet = NET_DVR_CapturePicture( lPlayHandle, pFile );
    bRet = TRUE;
}

void QIPCThread::CaptureDeviceImage( QString& strIP, QString& strFileName )
{
    //CProcessData::CaptureSenseImage
    QByteArray byData = pCodec->fromUnicode( strIP );
    byData.append( char( 0 ) );
    char* pIP = byData.data( );
    LONG lUserID = GetUserID( pIP );

    byData = pCodec->fromUnicode( strFileName );
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

void QIPCThread::GetErrorMessage( )
{
    char* pMsg = NET_DVR_GetErrorMsg( );
    QString strText = pMsg;
    EmitMsg( strText, Q_FUNC_INFO );
}

void QIPCThread::EmitMsg(QString strMsg, QString strFunName)
{
    emit NotifyMessage( strMsg );
    qDebug( ) << strMsg << ":" << strFunName << endl;
}

void QIPCThread::ProcessIPCStartupEvent( QIPCEvent* pEvent )
{
    Q_UNUSED( pEvent )

    if( bStarted ) {
        EmitMsg( "已经初始化了。", Q_FUNC_INFO );
        return;
    }

    bStarted = true;

    BOOL bRet = NET_DVR_Init( );
    if ( !bRet ) {
        GetErrorMessage( );
    }

    // Lookup SDK info log
    //bRet = NET_DVR_SetLogToFile( 3 );

    bRet = NET_DVR_SetExceptionCallBack_V30( 0, NULL, ExceptionCallback, this );
    if ( !bRet ) {
        GetErrorMessage( );
    }
}

void QIPCThread::ProcessIPCSetConnectTimeoutEvent( QIPCEvent* pEvent )
{
    // 300,75000 // Reserved
    QIPCEvent::EventParam& uParam = pEvent->GetEventParam( );

    BOOL bRet = NET_DVR_SetConnectTime(
                uParam.EventConnectTimeout.dwWaitTime,
                uParam.EventConnectTimeout.dwTryTimes );
    if ( !bRet ) {
        GetErrorMessage( );
    }
}

void QIPCThread::ProcessIPCSetReconnectTimeEvent( QIPCEvent* pEvent )
{
    QIPCEvent::EventParam& uParam = pEvent->GetEventParam( );

    BOOL bRet = NET_DVR_SetReconnect(
                uParam.EventReconnectTimeout.dwInterval,
                uParam.EventReconnectTimeout.bEnableRecon );
    if ( !bRet ) {
        GetErrorMessage( );
    }
}

void QIPCThread::SetUserID( char *pIP, LONG lUserID )
{
    if ( NULL == pIP ) {
        return;
    }

    hashIP_UserHandle.insert( pIP, lUserID );
}

void QIPCThread::SetPlayHandle( HWND hPlayWnd, LONG lPlayHandle )
{
    if ( INVALID_HANDLE_VALUE == hPlayWnd ) {
        return;
    }

    hashWnd_PlayHandle.insert( hPlayWnd, lPlayHandle );
}

LONG QIPCThread::GetUserID( char *pIP )
{
    LONG lUserID = -1;

    if ( NULL != pIP ) {
        lUserID = hashIP_UserHandle.value( pIP, -1 );
    }

    return lUserID;
}

void QIPCThread::RemoveUserID( char *pIP )
{
    if ( NULL == pIP ) {
        return;
    }

    hashIP_UserHandle.remove( pIP );
}

LONG QIPCThread::GetPlayHandle( HWND hPlayWnd )
{
    LONG lPlayHandle = -1;

    if ( INVALID_HANDLE_VALUE != hPlayWnd ) {
        lPlayHandle = hashWnd_PlayHandle.value( hPlayWnd, -1 );
    }

    return lPlayHandle;
}

void QIPCThread::RemovePlayHandle( HWND hPlayWnd )
{
    if ( INVALID_HANDLE_VALUE == hPlayWnd ) {
        return;
    }

    hashWnd_PlayHandle.remove( hPlayWnd );
}

void QIPCThread::ProcessIPCLoginEvent( QIPCEvent* pEvent )
{
    NET_DVR_DEVICEINFO_V30 sDevInfo;
    QIPCEvent::EventParam& uParam = pEvent->GetEventParam( );
    LONG lUserID = GetUserID( uParam.EventLogin.cIP );
    char* pIP = uParam.EventLogin.cIP;

    if ( -1 != lUserID ) {
        EmitMsg( QString( "已经登录【%1】." ).arg( pIP ), Q_FUNC_INFO );
        return;
    }

    // Login once, play multiple
    lUserID = NET_DVR_Login_V30( pIP,
                                 uParam.EventLogin.wPort,
                                 uParam.EventLogin.cUser,
                                 uParam.EventLogin.cPwd,
                                 &sDevInfo );

   if ( -1 == lUserID ) {
        GetErrorMessage( );
    } else {
        SetUserID( pIP, lUserID );
    }
}

void QIPCThread::ProcessIPCCaptureJPGEvent( QIPCEvent* pEvent )
{
    QIPCEvent::EventParam& uParam = pEvent->GetEventParam( );
    LONG lUserID = GetUserID( uParam.EventCaptureJPG.cIP );
    char* pFile = uParam.EventCaptureJPG.cFile;

    if ( -1 == lUserID ) {
        EmitMsg( "未登录.", Q_FUNC_INFO );
        return;
    }

    if ( NULL == pFile ) {
        EmitMsg( "文件未指定.", Q_FUNC_INFO );
        return;
    }

    BOOL bRet = FALSE;
    NET_DVR_JPEGPARA sJpgData = { 0 };

    sJpgData.wPicSize = 0xff;
    sJpgData.wPicQuality = 0;

    bRet = NET_DVR_CaptureJPEGPicture( lUserID, 1, &sJpgData, pFile );
    if ( !bRet ) {
        GetErrorMessage( );
        return;
    }

    QString strFile = pFile;

    emit CapturedJPGImage( uParam.EventCaptureJPG.nChannel, strFile ); // Send to UI
}

void QIPCThread::ProcessIPCStartRealPlayEvent( QIPCEvent* pEvent )
{
    QIPCEvent::EventParam& uParam = pEvent->GetEventParam( );
    LONG lUserID = GetUserID( uParam.EventStartRealPlay.cIP );

    if ( - 1 == lUserID ) {
        EmitMsg( "未登录.", Q_FUNC_INFO );
        return;
    }

    HWND hPlayWnd = uParam.EventStartRealPlay.hPlayWnd;
    LONG lPlayHandle = GetPlayHandle( hPlayWnd );

    if ( -1 != lPlayHandle ) {
        EmitMsg( "窗口正在播放.", Q_FUNC_INFO );
        return;
    }

    NET_DVR_CLIENTINFO sClientInfo = { 0 };
    sClientInfo.lChannel = 1;
    sClientInfo.lLinkMode  = 0;
    sClientInfo.hPlayWnd = hPlayWnd;

    lPlayHandle = NET_DVR_RealPlay_V30( lUserID, &sClientInfo, NULL );

    if ( -1 == lPlayHandle ) {
        GetErrorMessage( );
    } else {
        SetPlayHandle( hPlayWnd, lPlayHandle );
    }
}

void QIPCThread::ProcessIPCStopRealPlayEvent( QIPCEvent* pEvent )
{
    QIPCEvent::EventParam& uParam = pEvent->GetEventParam( );
    HWND hPlayWnd = uParam.EventStopRealPlay.hPlayWnd;
    LONG lPlayHandle = GetPlayHandle( hPlayWnd );

    if ( - 1 == lPlayHandle ) {
        EmitMsg( "未播放.", Q_FUNC_INFO );
        return;
    }

    BOOL bRet = NET_DVR_StopRealPlay( lPlayHandle );
    if ( !bRet ) {
        GetErrorMessage( );
        return;
    }

    RemovePlayHandle( hPlayWnd );
}

void QIPCThread::ProcessIPCLogoutEvent( QIPCEvent* pEvent )
{
    QIPCEvent::EventParam& uParam = pEvent->GetEventParam( );
    char* pIP = uParam.EventLogout.cIP;
    LONG lUserID = GetUserID( pIP );

    if ( - 1 == lUserID ) {
        EmitMsg( "未登录.", Q_FUNC_INFO );
        return;
    }

    BOOL bRet = NET_DVR_Logout( lUserID );
    if ( !bRet ) {
        GetErrorMessage( );
        return;
    }

    RemoveUserID( pIP );
}

void QIPCThread::ClearHash( )
{
    hashIP_UserHandle.clear( );
    hashWnd_PlayHandle.clear( );
}

void QIPCThread::ProcessIPCCleanupEvent( QIPCEvent* pEvent )
{
    Q_UNUSED( pEvent )

    BOOL bRet = NET_DVR_Cleanup( );
    if ( !bRet ) {
        GetErrorMessage( );
    }

    ClearHash( );
    bStarted = false;
}

void QIPCThread::customEvent( QEvent* event )
{
    QIPCEvent* pEvent = ( QIPCEvent* ) event;
    QIPCEvent::IPCEventType evtType = ( QIPCEvent::IPCEventType ) pEvent->type( );

    switch ( evtType ) {
    case QIPCEvent::IPCStartup :
        ProcessIPCStartupEvent( pEvent );
        break;

    case QIPCEvent::IPCSetConnectTimeout :
        ProcessIPCSetConnectTimeoutEvent( pEvent );
        break;

    case QIPCEvent::IPCSetReconnectTime :
        ProcessIPCSetReconnectTimeEvent( pEvent );
        break;

    case QIPCEvent::IPCLogin :
        ProcessIPCLoginEvent( pEvent );
        break;

    case QIPCEvent::IPCCaptureJPG :
        ProcessIPCCaptureJPGEvent( pEvent );
        break;

    case QIPCEvent::IPCStartRealPlay :
        ProcessIPCStartRealPlayEvent( pEvent );
        break;

    case QIPCEvent::IPCStopRealPlay :
        ProcessIPCStopRealPlayEvent( pEvent );
        break;

    case QIPCEvent::IPCLogout :
        ProcessIPCLogoutEvent( pEvent );
        break;

    case QIPCEvent::IPCCleanup :
        ProcessIPCCleanupEvent( pEvent );
        break;

    default :
        break;
    }
}
