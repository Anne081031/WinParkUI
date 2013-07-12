#include "qhkcapturecardthread.h"

QAnalogCameraThread* QHkCaptureCardThread::pThreadInstance = NULL;

QHkCaptureCardThread::QHkCaptureCardThread(QObject *parent) :
    QAnalogCameraThread(parent)
{
    hChannels[ 0 ] = INVALID_HANDLE_VALUE;
    hChannels[ 1 ] = INVALID_HANDLE_VALUE;
    hChannels[ 2 ] = INVALID_HANDLE_VALUE;
    hChannels[ 3 ] = INVALID_HANDLE_VALUE;
}

QAnalogCameraThread* QHkCaptureCardThread::GetInstance( )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = new QHkCaptureCardThread( );
        pThreadInstance->moveToThread( pThreadInstance );
        pThreadInstance->start( );
    }

    return pThreadInstance;
}

void QHkCaptureCardThread::run( )
{
    exec( );
}

void QHkCaptureCardThread::customEvent( QEvent *e )
{
    QCameraEvent* pEvent = ( QCameraEvent* ) e;
    QCameraEvent::CameraEventType eType = ( QCameraEvent::CameraEventType ) e->type( );

    switch ( eType ) {
        case QCameraEvent::CameraInit :
            ProcessInitEvent( pEvent );
            break;

        case QCameraEvent::CameraUninit :
            ProcessUninitEvent( pEvent );
            break;

        case QCameraEvent::CameraOpenChannel :
            ProcessOpenChannelEvent( pEvent );
            break;

        case QCameraEvent::CameraCloseChannel :
            ProcessCloseChannelEvent( pEvent );
            break;

        case QCameraEvent::CameraStartCapture :
            ProcessStartCaptureEvent( pEvent );
            break;

        case QCameraEvent::CameraStopCapture :
            ProcessStopCaptureEvent( pEvent );
            break;

        case QCameraEvent::CameraStartPreview :
            ProcessStartPreviewEvent( pEvent );
            break;

        case QCameraEvent::CameraStopPreview :
            ProcessStopPreviewEvent( pEvent );
            break;

        case QCameraEvent::CameraCaptureImage :
            ProcessCaptureImageEvent( pEvent );
            break;
    }
}

void QHkCaptureCardThread::ProcessInitEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent )
    int nDsp = InitDSPs( );
    Q_UNUSED( nDsp )
}

void QHkCaptureCardThread::ProcessUninitEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent );
    int nRet = DeInitDSPs( );
    Q_UNUSED( nRet )
}

void QHkCaptureCardThread::ProcessOpenChannelEvent( QCameraEvent* pEvent )
{
    int nChannel = pEvent->GetChannel( );
    hChannels[ nChannel ] = ChannelOpen( nChannel );
}

void QHkCaptureCardThread::ProcessCloseChannelEvent( QCameraEvent* pEvent )
{
    int nChannel = pEvent->GetChannel( );
    int nRet = ChannelClose( hChannels[ nChannel ] );
    Q_UNUSED( nRet )
}

void QHkCaptureCardThread::ProcessStartCaptureEvent( QCameraEvent* pEvent )
{
    int nChannel = pEvent->GetChannel( );
    int nRet  = StartVideoCapture( hChannels[ nChannel ] );
    Q_UNUSED( nRet )
}

void QHkCaptureCardThread::ProcessStopCaptureEvent( QCameraEvent* pEvent )
{
    int nChannel = pEvent->GetChannel( );
    int nRet = StopVideoCapture( hChannels[ nChannel ] );
    Q_UNUSED( nRet )
}

void QHkCaptureCardThread::ProcessStartPreviewEvent( QCameraEvent* pEvent )
{
    int nChannel = pEvent->GetChannel( );
    RECT rcClient;
    HWND hVideo = pEvent->GetVideoWndHandle( );
    //::GetWindowRect( hVideo, &rcClient );
    ::GetClientRect( hVideo, &rcClient );

    int nRet = StartVideoPreview( hChannels[ nChannel ], hVideo, &rcClient, TRUE, 0, 25 );
    Q_UNUSED( nRet )
}

void QHkCaptureCardThread::ProcessStopPreviewEvent( QCameraEvent* pEvent )
{
    int nChannel = pEvent->GetChannel( );
    int nRet = StopVideoPreview( hChannels[ nChannel ] );
    Q_UNUSED( nRet )
}

void QHkCaptureCardThread::ProcessCaptureImageEvent( QCameraEvent* pEvent )
{
    int nRet = 0;
    ULONG lSize = 1024 * 1024 * 1;
    PUCHAR pImgBuff = new UCHAR[ lSize ];
    int nChannel = pEvent->GetChannel( );
    nRet = GetJpegImage( hChannels[ nChannel ], pImgBuff, &lSize, 65 );
    if ( 0 != nRet ) {
        delete [ ] pImgBuff;
        return;
    }

    QString& strFile = pEvent->GetImgFile( );
    QFile imgFile( strFile );
    if ( imgFile.open( QIODevice::WriteOnly ) ) {
        const char* pData = ( const char* ) pImgBuff;
        imgFile.write( pData, lSize );
        imgFile.close( );
    }

    delete [ ] pImgBuff;

    QPlateThread::GetInstance( )->PostPlateFileRecognize( strFile, nChannel );
}
