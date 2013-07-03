#include "qanalogcamerathread.h"

//采集卡线程，完成图片抓取，视频流截取

QAnalogCameraThread::QAnalogCameraThread(QObject *parent) :
    QThread(parent)
{
}

void QAnalogCameraThread::PostEvent( QCameraEvent *pEvent )
{
    qApp->postEvent( this, pEvent );
}

void QAnalogCameraThread::PostInitCaptureSDKEvent( HWND hParentVideo )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::CameraInit );
    pEvent->SetParentWndHandle( hParentVideo );
    PostEvent( pEvent );
}

void QAnalogCameraThread::PostUninitCaptureSDKEvent( )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::CameraUninit );
    PostEvent( pEvent );
}

void QAnalogCameraThread::PostOpenChannelEvent( int nChannel )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::CameraOpenChannel );
    pEvent->SetChannel( nChannel );
    PostEvent( pEvent );
}

void QAnalogCameraThread::PostCloseChannelEvent( int nChannel )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::CameraCloseChannel );
    pEvent->SetChannel( nChannel );
    PostEvent( pEvent );
}

void QAnalogCameraThread::PostStartCaptureEvent( int nChannel )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::CameraStartCapture );
    pEvent->SetChannel( nChannel );
    PostEvent( pEvent );
}

void QAnalogCameraThread::PostStopCaptureEvent( int nChannel )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::CameraStopCapture );
    pEvent->SetChannel( nChannel );
    PostEvent( pEvent );
}

void QAnalogCameraThread::PostPlayVideoEvent( int nChannel, HWND hVideo )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::CameraStartPreview );
    pEvent->SetChannel( nChannel );
    pEvent->SetVideoWndHandle( hVideo );
    PostEvent( pEvent );
}

void QAnalogCameraThread::PostStopVideoEvent( int nChannel )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::CameraStopPreview );
    pEvent->SetChannel( nChannel );
    PostEvent( pEvent );
}

void QAnalogCameraThread::PostCaptrueImageEvent( int nChannel, QString& strFile )
{
    QCameraEvent* pEvent = new QCameraEvent( ( QEvent::Type ) QCameraEvent::CameraCaptureImage );
    pEvent->SetChannel( nChannel );
    pEvent->SetImgFile( strFile );
    PostEvent( pEvent );
}
