#include "qdigitalcamerathread.h"

//网络摄像机线程，完成图片抓取，视频流截取

QDigitalCameraThread::QDigitalCameraThread(QObject *parent) :
    QThread(parent)
{
    pCodec = QCommon::GetTextCodec( );
}

void QDigitalCameraThread::SendCaptureImage( QString& strFile, QString& strIP )
{
    emit CaptureImage( strFile, strIP );
}

void QDigitalCameraThread::PostEvent( QCameraEvent *pEvent )
{
    qApp->postEvent( this, pEvent );
}

void QDigitalCameraThread::PostIPCStartupEvent( )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::IPCStartup );
    PostEvent( pEvent );
}

void QDigitalCameraThread::PostIPCSetConnectTimeoutEvent( )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::IPCSetConnectTimeout );
    PostEvent( pEvent );
}

void QDigitalCameraThread::PostIPCSetReconnectTimeEvent( )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::IPCSetReconnectTime );
    PostEvent( pEvent );
}

void QDigitalCameraThread::PostIPCLoginEvent( QString& strIP  )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::IPCLogin );
    pEvent->SetIpcIp( strIP );
    PostEvent( pEvent );
}

void QDigitalCameraThread::PostIPCCaptureJPGEvent( QString& strIP, QString& strFile, bool bRecognize, HWND hPlayWnd )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::IPCCaptureJPG );
    pEvent->SetIpcIp( strIP );
    pEvent->SetImgFile( strFile );
    pEvent->SetVideoWndHandle( hPlayWnd );
    pEvent->SetRecognize( bRecognize );
    PostEvent( pEvent );
}

void QDigitalCameraThread::PostIPCStartRealPlayEvent( QString& strIP, bool bMainStream, HWND hPlayWnd )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::IPCStartRealPlay );
    pEvent->SetIpcIp( strIP );
    pEvent->SetMainStream( bMainStream );
    pEvent->SetVideoWndHandle( hPlayWnd );
    PostEvent( pEvent );
}

void QDigitalCameraThread::PostIPCStopRealPlayEvent( HWND hPlayWnd )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::IPCStopRealPlay );
    pEvent->SetVideoWndHandle( hPlayWnd );
    PostEvent( pEvent );
}

void QDigitalCameraThread::PostIPCLogoutEvent( QString& strIP )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::IPCLogout );
    pEvent->SetIpcIp( strIP );
    PostEvent( pEvent );
}

void QDigitalCameraThread::PostIPCCleanupEvent( )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::IPCCleanup );
    PostEvent( pEvent );
}

void QDigitalCameraThread::CaptureStaticImage( QString &strIP, QString &strFileName, HWND hPlayWnd )
{
    Q_UNUSED( strIP )
    Q_UNUSED( strFileName )
    Q_UNUSED( hPlayWnd )
}

void QDigitalCameraThread::SetUserID( QString& strIP, LONG lUserID )
{
    hashIP_UserHandle.insert( strIP, lUserID );
}

void QDigitalCameraThread::SetPlayHandle( HWND hPlayWnd, LONG lPlayHandle )
{
    if ( INVALID_HANDLE_VALUE == hPlayWnd ) {
        return;
    }

    hashWnd_PlayHandle.insert( hPlayWnd, lPlayHandle );
}

LONG QDigitalCameraThread::GetUserID( QString& strIP )
{
    return hashIP_UserHandle.value( strIP, -1 );
}

void QDigitalCameraThread::RemoveUserID( QString& strIP )
{
    hashIP_UserHandle.remove( strIP );
}

LONG QDigitalCameraThread::GetPlayHandle( HWND hPlayWnd )
{
    return hashWnd_PlayHandle.value( hPlayWnd, -1 );
}

void QDigitalCameraThread::RemovePlayHandle( HWND hPlayWnd )
{
    if ( INVALID_HANDLE_VALUE == hPlayWnd ) {
        return;
    }

    hashWnd_PlayHandle.remove( hPlayWnd );
}

void QDigitalCameraThread::ClearHash( )
{
    hashIP_UserHandle.clear( );
    hashWnd_PlayHandle.clear( );
}

