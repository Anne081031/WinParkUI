#include "qanalogcamerathread.h"

QAnalogCameraThread* QAnalogCameraThread::pThreadInstance = NULL;

QAnalogCameraThread::QAnalogCameraThread(QObject *parent) :
    QThread(parent)
{
    hChannel = INVALID_HANDLE_VALUE;
}

QAnalogCameraThread* QAnalogCameraThread::GetInstance( )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = new QAnalogCameraThread( );
        pThreadInstance->moveToThread( pThreadInstance );
        pThreadInstance->start( );
    }

    return pThreadInstance;
}

void QAnalogCameraThread::InitHikSDK( int nChannel, HWND hVideo )
{
    int nDsp = InitDSPs( );

    if ( 0 >= nDsp ) {
        return;
    }

    hChannel = ChannelOpen( nChannel );

    if ( INVALID_HANDLE_VALUE == hChannel ) {
        DeInitDSPs( );
        return;
    }

    int nRet = StartVideoCapture( hChannel );
    if ( 0 != nRet ) {
        ChannelClose( hChannel );
        DeInitDSPs( );
        hChannel = INVALID_HANDLE_VALUE;
    }

    RECT rcClient;
    ::GetWindowRect( hVideo, &rcClient );
    nRet = StartVideoPreview( hChannel, hVideo, &rcClient, TRUE, 0, 25 );

    if ( 0 != nRet ) {
        StopVideoCapture( hChannel );
        ChannelClose( hChannel );
        DeInitDSPs( );
        hChannel = INVALID_HANDLE_VALUE;
    }
}

void QAnalogCameraThread::UninitHikSDK( )
{
    BOOL bRet = FALSE;
    int nRet = 0;

    if ( INVALID_HANDLE_VALUE != hChannel ) {
        nRet = StopVideoPreview( hChannel );
        nRet = StopVideoCapture( hChannel );
        nRet = ChannelClose( hChannel );
        bRet = DeInitDSPs( );
    }
}

void QAnalogCameraThread::run( )
{
    exec( );
}

void QAnalogCameraThread::customEvent( QEvent *e )
{
    QCameraEvent* pEvent = ( QCameraEvent* ) e;
    QCameraEvent::CameraEventType evtType = ( QCameraEvent::CameraEventType ) pEvent->type( );

    switch ( evtType ) {
    case QCameraEvent::CameraFileRecognize :
        break;

    case QCameraEvent::CameraVideoRecognize :
        break;
    }
}
