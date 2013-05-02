#include "qjwsipcthread.h"

QJwsIPCThread* QJwsIPCThread::pThreadInstance = NULL;

BOOL CALLBACK TmccConnectCallback( HANDLE hTmCC, BOOL bConnect, unsigned int dwResult, void *context )
{
    if ( NULL == context ) {
        return bConnect;
    }

    QJwsIPCThread* pThread = ( QJwsIPCThread* ) context;
    pThread->SendNotify( hTmCC, bConnect, dwResult );

    return bConnect;
}

QJwsIPCThread::QJwsIPCThread(QObject *parent) :
    QThread(parent)
{
    bStarted = false;
    //pCodec = CCommonFunction::GetTextCodec( );

    //hTmccCtrl = NULL;
    hTmccPreview = NULL;
}

void QJwsIPCThread::SendNotify( HANDLE hTmCC, BOOL bConnect, unsigned int dwResult )
{
    Q_UNUSED( dwResult )

    QString strText;

    /*if ( hTmccCtrl == hTmCC ) {
        strText = "基本控制 %1";
    } else */if ( hTmccPreview == hTmCC ) {
        strText = "视频流播放 %1";
    }

    strText = strText.arg( bConnect ? "连接" : "断开" );

    EmitMsg( strText, Q_FUNC_INFO );
}

void QJwsIPCThread::PostIPCEvent( QJwsIPCEvent::IPCEventType evtType )
{
    QJwsIPCEvent* pEvent = QJwsIPCEvent::GetInstance( evtType );

    qApp->postEvent( this, pEvent );
}

void QJwsIPCThread::PostIPCEvent( QJwsIPCEvent::IPCEventType evtType,
                               QJwsIPCEvent::EventParam &uParam )
{
    QJwsIPCEvent* pEvent = QJwsIPCEvent::GetInstance( evtType );

    pEvent->SetEventParam( uParam );
    qApp->postEvent( this, pEvent );
}

void QJwsIPCThread::PostIPCStartupEvent( )
{
    PostIPCEvent( QJwsIPCEvent::IPCStartup );
}

void QJwsIPCThread::PostIPCSetConnectTimeoutEvent( QJwsIPCEvent::EventParam& uParam )
{
    PostIPCEvent( QJwsIPCEvent::IPCSetConnectTimeout, uParam );
}

void QJwsIPCThread::PostIPCSetReconnectTimeEvent( QJwsIPCEvent::EventParam& uParam )
{
    PostIPCEvent( QJwsIPCEvent::IPCSetReconnectTime, uParam );
}

void QJwsIPCThread::PostIPCLoginEvent( QJwsIPCEvent::EventParam& uParam )
{
    PostIPCEvent( QJwsIPCEvent::IPCLogin, uParam );
}

void QJwsIPCThread::PostIPCCaptureJPGEvent( QJwsIPCEvent::EventParam& uParam )
{
    PostIPCEvent( QJwsIPCEvent::IPCCaptureJPG, uParam );
}

void QJwsIPCThread::PostIPCStartRealPlayEvent( QJwsIPCEvent::EventParam& uParam )
{
    PostIPCEvent( QJwsIPCEvent::IPCStartRealPlay, uParam );
}

void QJwsIPCThread::PostIPCStopRealPlayEvent( QJwsIPCEvent::EventParam& uParam )
{
    PostIPCEvent( QJwsIPCEvent::IPCStopRealPlay, uParam );
}

void QJwsIPCThread::PostIPCLogoutEvent( QJwsIPCEvent::EventParam& uParam )
{
    PostIPCEvent( QJwsIPCEvent::IPCLogout, uParam );
}

void QJwsIPCThread::PostIPCCleanupEvent( )
{
    PostIPCEvent( QJwsIPCEvent::IPCCleanup );
}

QJwsIPCThread* QJwsIPCThread::GetInstance( )
{
    if ( NULL == pThreadInstance ) {
        QJwsIPCThread* pThread = new QJwsIPCThread( );

        pThread->InitializeThread( );
        pThread->start( );
        pThread->moveToThread( pThread );

        pThreadInstance = pThread;
    }

    return pThreadInstance;
}

void QJwsIPCThread::InitializeThread( )
{
    bool bRet = connect( this, SIGNAL( started( ) ),
                         this, SLOT( HandleStarted( ) ) );
    bRet = connect( this, SIGNAL( finished( ) ),
                             this, SLOT( HandleFinished( ) ) );
}

void QJwsIPCThread::HandleStarted( )
{
}

void QJwsIPCThread::HandleFinished( )
{
}

void QJwsIPCThread::run( )
{
    exec( );
}

void QJwsIPCThread::CapturePreviewImage( HWND hPlayWnd, QString& strFileName )
{

}

void QJwsIPCThread::CaptureDeviceImage( QString& strIP, QString& strFileName )
{

}

void QJwsIPCThread::GetErrorMessage( )
{
    int nCode = TMCC_GetLastError( );
    QString strText = QString::number( nCode, 16 );
    EmitMsg( strText, Q_FUNC_INFO );
}

void QJwsIPCThread::EmitMsg(QString strMsg, QString strFunName)
{
    emit NotifyMessage( strMsg );
    qDebug( ) << strMsg << ":" << strFunName << endl;
}

void QJwsIPCThread::ProcessIPCStartupEvent( QJwsIPCEvent* pEvent )
{
    Q_UNUSED( pEvent )

    if( bStarted ) {
        EmitMsg( "已经初始化了。", Q_FUNC_INFO );
        return;
    }

    bStarted = true; //TMCC_ERR_SUCCESS

    //hTmccCtrl = TMCC_Init( TMCC_INITTYPE_CONTROL );
    //if ( NULL == hTmccCtrl ) {
    //    GetErrorMessage( );
    //}

    //TMCC_RegisterConnectCallBack( hTmccCtrl, TmccConnectCallback, this );

    hTmccPreview = TMCC_Init( TMCC_INITTYPE_REALSTREAM );
    if ( NULL == hTmccPreview ) {
        GetErrorMessage( );
    }

    //TMCC_RegisterConnectCallBack( hTmccPreview, TmccConnectCallback, this );
}

void QJwsIPCThread::ProcessIPCSetConnectTimeoutEvent( QJwsIPCEvent* pEvent )
{
    // 300,75000 // Reserved
    QJwsIPCEvent::EventParam& uParam = pEvent->GetEventParam( );

    //int nRet = TMCC_SetTimeOut( hTmccCtrl, uParam.EventConnectTimeout.dwWaitTime );
    //if ( TMCC_ERR_SUCCESS != nRet ) {
    //    GetErrorMessage( );
    //}

    int nRet = TMCC_SetTimeOut( hTmccPreview, uParam.EventConnectTimeout.dwWaitTime );
    if ( TMCC_ERR_SUCCESS != nRet ) {
        GetErrorMessage( );
    }
}

void QJwsIPCThread::ProcessIPCSetReconnectTimeEvent( QJwsIPCEvent* pEvent )
{
    QJwsIPCEvent::EventParam& uParam = pEvent->GetEventParam( );

    //int nRet = TMCC_SetAutoReConnect( hTmccCtrl, uParam.EventReconnectTimeout.bEnableRecon );
    //if ( TMCC_ERR_SUCCESS != nRet ) {
    //    GetErrorMessage( );
    //}

    int nRet = TMCC_SetAutoReConnect( hTmccPreview, uParam.EventReconnectTimeout.bEnableRecon );
    if ( TMCC_ERR_SUCCESS != nRet ) {
        GetErrorMessage( );
    }
}

void QJwsIPCThread::SetUserID( char *pIP, LONG lUserID )
{
    if ( NULL == pIP ) {
        return;
    }

    hashIP_UserHandle.insert( pIP, lUserID );
}

void QJwsIPCThread::SetPlayHandle( HWND hPlayWnd, LONG lPlayHandle )
{
    if ( INVALID_HANDLE_VALUE == hPlayWnd ) {
        return;
    }

    hashWnd_PlayHandle.insert( hPlayWnd, lPlayHandle );
}

LONG QJwsIPCThread::GetUserID( char *pIP )
{
    LONG lUserID = -1;

    if ( NULL != pIP ) {
        lUserID = hashIP_UserHandle.value( pIP, -1 );
    }

    return lUserID;
}

void QJwsIPCThread::RemoveUserID( char *pIP )
{
    if ( NULL == pIP ) {
        return;
    }

    hashIP_UserHandle.remove( pIP );
}

LONG QJwsIPCThread::GetPlayHandle( HWND hPlayWnd )
{
    LONG lPlayHandle = -1;

    if ( INVALID_HANDLE_VALUE != hPlayWnd ) {
        lPlayHandle = hashWnd_PlayHandle.value( hPlayWnd, -1 );
    }

    return lPlayHandle;
}

void QJwsIPCThread::RemovePlayHandle( HWND hPlayWnd )
{
    if ( INVALID_HANDLE_VALUE == hPlayWnd ) {
        return;
    }

    hashWnd_PlayHandle.remove( hPlayWnd );
}

void QJwsIPCThread::JwsConnect( QJwsIPCEvent* pEvent, HANDLE hCtrl )
{
    QJwsIPCEvent::EventParam& uParam = pEvent->GetEventParam( );
    char* pIP = uParam.EventLogin.cIP;

    if ( TMCC_IsConnect( hCtrl ) ) {
        EmitMsg( QString( "已经登录【%1】." ).arg( pIP ), Q_FUNC_INFO );
        return;
    }

    tmConnectInfo_t tConnInfo = { 0 };

    tConnInfo.dwSize = sizeof ( tmConnectInfo_t );
    strcpy( tConnInfo.pIp, pIP );
    tConnInfo.iPort = uParam.EventLogin.wPort;
    strcpy( tConnInfo.szUser, uParam.EventLogin.cUser );
    strcpy( tConnInfo.szPass, uParam.EventLogin.cPwd );

    int nRet = TMCC_Connect( hCtrl, &tConnInfo, TRUE );
    if ( TMCC_ERR_SUCCESS != nRet ) {
        GetErrorMessage( );
    }
}

void QJwsIPCThread::ProcessIPCLoginEvent( QJwsIPCEvent* pEvent )
{
    Q_UNUSED( pEvent );
    //JwsConnect( pEvent, hTmccCtrl );
    //JwsConnect( pEvent, hTmccPreview );
    int nRet = TMCC_SetDisplayShow( hTmccPreview, TRUE );
    if ( TMCC_ERR_SUCCESS != nRet ) {
        GetErrorMessage( );
    }
}

void QJwsIPCThread::ProcessIPCCaptureJPGEvent( QJwsIPCEvent* pEvent )
{

}

void QJwsIPCThread::ProcessIPCStartRealPlayEvent( QJwsIPCEvent* pEvent )
{
    QJwsIPCEvent::EventParam& uParam = pEvent->GetEventParam( );
    tmPlayRealStreamCfg_t tPlayInfo = { 0 };

    tPlayInfo.dwSize = sizeof ( tmPlayRealStreamCfg_t );
    strcpy( tPlayInfo.szAddress, uParam.EventStartRealPlay.cIP );
    //    char		szTurnAddress[32];//转发器地址
    tPlayInfo.iPort = 6002;		//服务器连接的端口
    strcpy( tPlayInfo.szUser, "system" );	//登录用户名
    strcpy( tPlayInfo.szPass, "system" );	//登录用户口令
     //   unsigned char	byChannel;	//通道
     //   unsigned char	byStream;	//码流号
     //   unsigned char	byTranstType;	//传输类型
     //   unsigned char	byReConnectNum;	//从连次数
      //  int		iTranstPackSize;//传输包大小
     //   int		iReConnectTime;	//重连的时间间隔
   //tPlayInfo.byTransProtocol = 2;//传输协议0-内部自定,1-SONY,2-RTSP



    int nRet = TMCC_ConnectStream( hTmccPreview, &tPlayInfo, uParam.EventStartRealPlay.hPlayWnd );
    if ( TMCC_ERR_SUCCESS != nRet ) {
        GetErrorMessage( );
    }
}

void QJwsIPCThread::ProcessIPCStopRealPlayEvent( QJwsIPCEvent* pEvent )
{

}

void QJwsIPCThread::ProcessIPCLogoutEvent( QJwsIPCEvent* pEvent )
{
    Q_UNUSED( pEvent );

    //int nRet = TMCC_DisConnect( hTmccCtrl );
    //if ( TMCC_ERR_SUCCESS != nRet ) {
    //    GetErrorMessage( );
    //}

    int nRet = TMCC_DisConnect( hTmccPreview );
    if ( TMCC_ERR_SUCCESS != nRet ) {
        GetErrorMessage( );
    }
}

void QJwsIPCThread::ClearHash( )
{
    hashIP_UserHandle.clear( );
    hashWnd_PlayHandle.clear( );
}

void QJwsIPCThread::JwsCleanup( HANDLE hCtrl )
{
    if ( NULL == hCtrl ) {
        return;
    }

    int nRet = TMCC_ShutDown( hCtrl );
    if ( TMCC_ERR_SUCCESS != nRet ) {
        GetErrorMessage( );
    }

    nRet = TMCC_Done( hCtrl );
    if ( TMCC_ERR_SUCCESS != nRet ) {
        GetErrorMessage( );
    }
}

void QJwsIPCThread::ProcessIPCCleanupEvent( QJwsIPCEvent* pEvent )
{
    Q_UNUSED( pEvent )

    //JwsCleanup( hTmccCtrl );
    JwsCleanup( hTmccPreview );

    ClearHash( );
    bStarted = false;
}

void QJwsIPCThread::customEvent( QEvent* event )
{
    QJwsIPCEvent* pEvent = ( QJwsIPCEvent* ) event;
    QJwsIPCEvent::IPCEventType evtType = ( QJwsIPCEvent::IPCEventType ) pEvent->type( );

    switch ( evtType ) {
    case QJwsIPCEvent::IPCStartup :
        ProcessIPCStartupEvent( pEvent );
        break;

    case QJwsIPCEvent::IPCSetConnectTimeout :
        ProcessIPCSetConnectTimeoutEvent( pEvent );
        break;

    case QJwsIPCEvent::IPCSetReconnectTime :
        ProcessIPCSetReconnectTimeEvent( pEvent );
        break;

    case QJwsIPCEvent::IPCLogin :
        ProcessIPCLoginEvent( pEvent );
        break;

    case QJwsIPCEvent::IPCCaptureJPG :
        ProcessIPCCaptureJPGEvent( pEvent );
        break;

    case QJwsIPCEvent::IPCStartRealPlay :
        ProcessIPCStartRealPlayEvent( pEvent );
        break;

    case QJwsIPCEvent::IPCStopRealPlay :
        ProcessIPCStopRealPlayEvent( pEvent );
        break;

    case QJwsIPCEvent::IPCLogout :
        ProcessIPCLogoutEvent( pEvent );
        break;

    case QJwsIPCEvent::IPCCleanup :
        ProcessIPCCleanupEvent( pEvent );
        break;

    default :
        break;
    }
}
