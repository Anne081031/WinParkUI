#include "qtmcapturecardthread.h"

#define TM_CAPTURE_CARD "Sa7134Capture.dll"

QAnalogCameraThread* QTmCaptureCardThread::pThreadInstance = NULL;

QTmCaptureCardThread::QTmCaptureCardThread(QObject *parent) :
    QAnalogCameraThread(parent)
{
    GetFunctionPointer( );
}

QTmCaptureCardThread::~QTmCaptureCardThread( )
{
    if ( NULL != hDllMod ) {
        BOOL bRet = ::FreeLibrary( hDllMod );
        if ( !bRet ) {

        }
    }
}

QAnalogCameraThread* QTmCaptureCardThread::GetInstance( )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = new QTmCaptureCardThread( );
        pThreadInstance->moveToThread( pThreadInstance );
        pThreadInstance->start( );
    }

    return pThreadInstance;
}

void QTmCaptureCardThread::GetFunctionPointer( )
{
    QString strPath = qApp->applicationDirPath( ) + "/" + TM_CAPTURE_CARD;
    WCHAR* pPath = ( WCHAR* ) strPath.utf16( );

    hDllMod = ::LoadLibrary( pPath );
    if ( NULL == hDllMod ) {
        return;
    }

    MyVCAInitSdk = ( VCAInitSdk ) ::GetProcAddress( hDllMod, "VCAInitSdk" );
    MyVCAUnInitSdk = ( VCAUnInitSdk ) ::GetProcAddress( hDllMod, "VCAUnInitSdk" );
    MyVCAGetDevNum = ( VCAGetDevNum ) ::GetProcAddress( hDllMod, "VCAGetDevNum" );

    // VC4000
    MyVCAOpenDevice = ( VCAOpenDevice ) GetProcAddress( hDllMod, "VCAOpenDevice" );
    MyVCACloseDevice = ( VCACloseDevice ) GetProcAddress( hDllMod, "VCACloseDevice" );
    MyVCAStartVideoPreview = ( VCAStartVideoPreview ) GetProcAddress( hDllMod, "VCAStartVideoPreview" );
    MyVCAStopVideoPreview = ( VCAStopVideoPreview ) GetProcAddress( hDllMod, "VCAStopVideoPreview" );
    MyVCASaveAsBmpFile = ( VCASaveAsBmpFile ) GetProcAddress( hDllMod, "VCASaveAsBmpFile" );
    MyVCASaveAsJpegFile = ( VCASaveAsJpegFile ) GetProcAddress( hDllMod, "VCASaveAsJpegFile" );
    MyVCARegVidCapCallBack = ( VCARegVidCapCallBack ) GetProcAddress( hDllMod, "VCARegVidCapCallBack" );
    MyVCASetVidCapColorFormat = ( VCASetVidCapColorFormat ) GetProcAddress( hDllMod, "VCASetVidCapColorFormat" );
    MyVCAStartVideoCapture = ( VCAStartVideoCapture ) GetProcAddress( hDllMod, "VCAStartVideoCapture" );
    MyVCAStopVideoCapture = ( VCAStopVideoCapture ) GetProcAddress( hDllMod, "VCAStopVideoCapture" );
    MyVCAStartVideoCaptureEx = ( VCAStartVideoCaptureEx ) GetProcAddress( hDllMod, "VCAStartVideoCaptureEx" );
    MyVCAStopVideoCaptureEx = ( VCAStopVideoCaptureEx ) GetProcAddress( hDllMod, "VCAStopVideoCaptureEx" );
    MyVCASetVidCapSize = ( VCASetVidCapSize ) GetProcAddress( hDllMod, "VCASetVidCapSize" );
}

void QTmCaptureCardThread::run( )
{
    exec( );
}

void QTmCaptureCardThread::customEvent( QEvent *e )
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

void QTmCaptureCardThread::ProcessInitEvent( QCameraEvent* pEvent )
{
    int nRet = 0;
    HWND hOverlayWnd = pEvent->GetParentWndHandle( );
    nRet = MyVCAInitSdk( hOverlayWnd, PCI_OFFSCREEN_VIDEOMEMORY, FALSE );
}

void QTmCaptureCardThread::ProcessUninitEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent )
    int nRet = 0;
    nRet = MyVCAUnInitSdk( );
}

void QTmCaptureCardThread::ProcessOpenChannelEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent )
}

void QTmCaptureCardThread::ProcessCloseChannelEvent( QCameraEvent* pEvent )
{
    Q_UNUSED( pEvent )
}

void QTmCaptureCardThread::ProcessStartCaptureEvent( QCameraEvent* pEvent )
{
    BOOL bRet = FALSE;
    int nChannel = pEvent->GetChannel( );
    //QString& strFile = pEvent->GetImgFile( );
    //char* pFile = QCommon::GetTextCodec( )->fromUnicode( strFile ).data( );
    bRet = MyVCASetVidCapSize( nChannel, VIDEO_WIDTH, VIDEO_HEIGHT );
    bRet = MyVCAStartVideoCaptureEx( nChannel );
}

void QTmCaptureCardThread::ProcessStopCaptureEvent( QCameraEvent* pEvent )
{
    BOOL bRet = FALSE;
    int nChannel = pEvent->GetChannel( );
    bRet = MyVCAStopVideoCaptureEx( nChannel );
}

void QTmCaptureCardThread::VidCapCallBack( DWORD dwCard, BYTE *pbuff, DWORD dwSize )
{
    if ( 0 == dwSize ) {
        return;
    }

    QByteArray byVideo;
    byVideo.append( ( const char* ) pbuff, dwSize );
    Q_UNUSED( dwCard )
    QPlateThread::GetInstance( )->PostPlateVideoRecognize( byVideo );
}

void QTmCaptureCardThread::ProcessStartPreviewEvent( QCameraEvent* pEvent )
{
    int nRet = 0;
    SIZE cliSize;
    int nChannel = pEvent->GetChannel( );
    cliSize.cx = VIDEO_WIDTH;
    cliSize.cy = VIDEO_HEIGHT;
    HWND hVideoWnd = pEvent->GetVideoWndHandle( );

    nRet = MyVCARegVidCapCallBack( nChannel, VidCapCallBack );
    nRet = MyVCAOpenDevice( nChannel, hVideoWnd );
    nRet = MyVCAStartVideoPreview( nChannel );
}

void QTmCaptureCardThread::ProcessStopPreviewEvent( QCameraEvent* pEvent )
{
    int nRet = 0;
    int nChannel = pEvent->GetChannel( );
    nRet = MyVCAStopVideoPreview( nChannel );
    nRet = MyVCACloseDevice( nChannel );
}

void QTmCaptureCardThread::ProcessCaptureImageEvent( QCameraEvent* pEvent )
{
    int nRet = 0;
    int nChannel = pEvent->GetChannel( );
    QString& strFile = pEvent->GetImgFile( );
    QByteArray byData = QCommon::GetTextCodec( )->fromUnicode( strFile );
    char* pFile = byData.data( );
    nRet = MyVCASaveAsJpegFile( nChannel, pFile, 80 );

    QPlateThread::GetInstance( )->PostPlateFileRecognize( strFile );
}
