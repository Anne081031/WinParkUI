#include "qdigitalcamerathread.h"

//网络摄像机线程，完成图片抓取，视频流截取

QDigitalCameraThread::QDigitalCameraThread(QObject *parent) :
    QThread(parent)
{
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

void QDigitalCameraThread::PostIPCLoginEvent( )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::IPCLogin );
    PostEvent( pEvent );
}

void QDigitalCameraThread::PostIPCCaptureJPGEvent( )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::IPCCaptureJPG );
    PostEvent( pEvent );
}

void QDigitalCameraThread::PostIPCStartRealPlayEvent( )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::IPCStartRealPlay );
    PostEvent( pEvent );
}

void QDigitalCameraThread::PostIPCStopRealPlayEvent( )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::IPCStopRealPlay );
    PostEvent( pEvent );
}

void QDigitalCameraThread::PostIPCLogoutEvent( )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::IPCLogout );
    PostEvent( pEvent );
}

void QDigitalCameraThread::PostIPCCleanupEvent( )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::IPCCleanup );
    PostEvent( pEvent );
}

void QDigitalCameraThread::CaptureStaticImage( QString& strFile, int nChannel )
{
    Q_UNUSED( strFile )
    Q_UNUSED( nChannel )
}

