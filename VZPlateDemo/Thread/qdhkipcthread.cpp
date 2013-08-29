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
        strText = "�û�����ʱ�쳣��ע��������ʱ���������Ϊ2���ӣ�";
        break;

    case EXCEPTION_AUDIOEXCHANGE :
        strText = "�����Խ��쳣";
        break;

    case EXCEPTION_ALARM :
        strText = "�����쳣";
        break;

    case EXCEPTION_PREVIEW :
        strText = "����Ԥ���쳣";
        break;

    case EXCEPTION_SERIAL :
        strText = "͸��ͨ���쳣";
        break;

    case EXCEPTION_RECONNECT :
        strText = "Ԥ��ʱ����";
        break;

    case EXCEPTION_ALARMRECONNECT :
        strText = "����ʱ����";
        break;

    case EXCEPTION_SERIALRECONNECT :
        strText = "͸��ͨ������";
        break;

    case SERIAL_RECONNECTSUCCESS :
        strText = "͸��ͨ�������ɹ�";
        break;

    case EXCEPTION_PLAYBACK :
        strText = "�ط��쳣";
        break;

    case EXCEPTION_DISKFMT :
        strText = "Ӳ�̸�ʽ��";
        break;

    case EXCEPTION_PASSIVEDECODE :
        strText = "���������쳣";
        break;

    case EXCEPTION_EMAILTEST :
        strText = "�ʼ������쳣";
        break;

    case EXCEPTION_BACKUP :
        strText = "�����쳣";
        break;

    case PREVIEW_RECONNECTSUCCESS :
        strText = "Ԥ��ʱ�����ɹ�";
        break;

    case ALARM_RECONNECTSUCCESS :
        strText = "����ʱ�����ɹ�";
        break;

    case RESUME_EXCHANGE :
        strText = "�û������ָ�";
        break;

    case NETWORK_FLOWTEST_EXCEPTION :
        strText = "������������쳣";
        break;

    case EXCEPTION_PICPREVIEWRECONNECT :
        strText = "ͼƬԤ������";
        break;

    case PICPREVIEW_RECONNECTSUCCESS :
        strText = "ͼƬԤ�������ɹ�";
        break;

   case EXCEPTION_PICPREVIEW :
        strText = "ͼƬԤ���쳣";
        break;
    }


    qDebug( ) << strText << NET_DVR_GetErrorMsg( ) << Q_FUNC_INFO << endl;
}

void QDHkIPCThread::ExceptionCallback( DWORD dwType, LONG lUserID, LONG lHandle, void* pUser )
{
    if ( NULL == pUser ) {
        return;
    }

    QDHkIPCThread* pThread = ( QDHkIPCThread* ) pUser;
    pThread->SendNotify( dwType, lUserID, lHandle );
}

void QDHkIPCThread::RealDataStreamCallback( LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, DWORD dwUser )
{
    if ( 0 == dwUser ) {
        return;
    }

    QDHkIPCThread* pThread = ( QDHkIPCThread* ) dwUser;
    pThread->RealStream( lRealHandle, dwDataType, pBuffer, dwBufSize );
}

void QDHkIPCThread::RealStream( LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize )
{
    if ( NET_DVR_STREAMDATA != dwDataType ) {
        return;
    }

    ProcessDataStream( lRealHandle, pBuffer, dwBufSize );
}

void QDHkIPCThread::ParseResolution( LONG lRealHandle, int &nWidth, int &nHeight )
{
    QString strResoluton = GetResolution( lRealHandle );
    QStringList lstResoluton = strResoluton.split( "*" );
    if ( 2 != lstResoluton.count( ) ) {
        return;
    }

    nWidth = lstResoluton.at( 0 ).toInt( );
    nHeight = lstResoluton.at( 1 ).toInt( );
}

void QDHkIPCThread::ProcessDataStream( LONG lRealHandle, BYTE *pBuffer, DWORD dwBufSize )
{
    QString strIP = GetIP( lRealHandle );
    QByteArray byVideo;
    byVideo.append( ( const char* ) pBuffer, dwBufSize );

    int nWidth = 0;
    int nHeight = 0;
    ParseResolution( lRealHandle, nWidth, nHeight );

    if ( 0 == nWidth || 0 == nHeight ) {
        return;
    }

    GetPlateThread( )->PostPlateVideoRecognize( byVideo, nWidth, nHeight, strIP );
}

void QDHkIPCThread::RealStandardDataStreamCallback( LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, DWORD dwUser )
{
    if ( 0 == dwUser ) {
        return;
    }

    QDHkIPCThread* pThread = ( QDHkIPCThread* ) dwUser;
    pThread->RealStandardStream( lRealHandle, dwDataType, pBuffer, dwBufSize );
}

void QDHkIPCThread::RealStandardStream( LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize )
{
    if ( NET_DVR_STD_VIDEODATA != dwDataType ) {
        return;
    }

    ProcessDataStream( lRealHandle, pBuffer, dwBufSize );
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

    bRet = NET_DVR_SetExceptionCallBack_V30( 0, NULL, ExceptionCallback, this );
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
        GetPlateThread( )->PostPlateFileRecognize( strFile, strIP );
    }
}

#include <QFile>

void QDHkIPCThread::GetDeviceAbility( LONG lUserID, LONG lRealHandle )
{
    // #define  XML_BUF 3*1024*1024
    //char cOutBuf[ 1024 ] = { 0 };
    //char* pOutBuf = new char[ 1024 * 1024 * 3 ];
    //BOOL bRet = FALSE;
    //char* pInBuf = "<CurrentCompressInfo><ChannelNumber>1</ChannelNumber><VideoEncodeType>0</VideoEncodeType><VideoResolution>17</VideoResolution></CurrentCompressInfo>";

    //bRet = NET_DVR_GetDeviceAbility( lUserID, DEVICE_ENCODE_ALL_ABILITY, NULL, 0, pOutBuf, 1024 * 1024 * 3  );
    //qDebug( ) << QString( pOutBuf ) << Q_FUNC_INFO << endl;
    //QString strFile = "d:/xml.txt";
    //QString strData = QString( pOutBuf );
    //QFile file( strFile );
    //file.open( QFile::WriteOnly );
    //file.write( strData.toAscii( ) );
    //file.close( );

    QString strResolution;
    SetResolution( lRealHandle, strResolution );
}

void QDHkIPCThread::ProcessIPCStartRealPlayEvent( QCameraEvent* pEvent )
{
    QString& strIP = pEvent->GetIpcIp( );
    LONG lUserID = GetUserID( strIP );
    bool bMainStream = pEvent->GetMainStream( );
    HWND hPlayWnd = pEvent->GetVideoWndHandle( );
    LONG lPlayHandle = GetPlayHandle( hPlayWnd );
    BOOL bRet = FALSE;
    bool bRealStream = pEvent->GetRealStream( );

    if ( -1 != lPlayHandle ) {
        return;
    }

    NET_DVR_CLIENTINFO sClientInfo = { 0 };
    sClientInfo.lChannel = 1;
    sClientInfo.lLinkMode  = bMainStream ? 0x00000000 : 0x80000000;
    sClientInfo.hPlayWnd = hPlayWnd;

    lPlayHandle = NET_DVR_RealPlay_V30( lUserID, &sClientInfo, NULL );

    if ( bRealStream ) {
        bRet = NET_DVR_SetRealDataCallBack( lPlayHandle, RealDataStreamCallback, ( DWORD ) this );
    } else {
        bRet = NET_DVR_SetStandardDataCallBack( lPlayHandle, RealStandardDataStreamCallback, ( DWORD ) this );
    }

    SetIP( lPlayHandle, strIP );
    SetPlayHandle( hPlayWnd, lPlayHandle );
    GetDeviceAbility( lUserID, lPlayHandle );
}

void QDHkIPCThread::ProcessIPCStopRealPlayEvent( QCameraEvent* pEvent )
{
    HWND hPlayWnd = pEvent->GetVideoWndHandle( );
    LONG lPlayHandle = GetPlayHandle( hPlayWnd );
    RemoveIP( lPlayHandle );
    RemovePlayHandle( hPlayWnd );

    if ( - 1 == lPlayHandle ) {
        return;
    }

    BOOL bRet = NET_DVR_StopRealPlay( lPlayHandle );
    bRet = NET_DVR_SetRealDataCallBack( lPlayHandle, NULL, 0 );
    bRet = NET_DVR_SetStandardDataCallBack( lPlayHandle, NULL, 0 );
    RemoveResolution( lPlayHandle );
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
