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
    MyVCAEnableMotionDetect = ( VCAEnableMotionDetect ) GetProcAddress( hDllMod, "VCAEnableMotionDetect" );
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

    QPlateThread::GetInstance( )->PostPlateVideoRecognize( byVideo, 352, 288, dwCard );
}

void QTmCaptureCardThread::MotionDelect( DWORD dwCard, BOOL bMove, BYTE *pbuff, DWORD dwSize, LPVOID lpContext )
{

}

void CALLBACK MyPrcCbMotionDetect( DWORD dwCard, BOOL bMove, BYTE *pbuff, DWORD dwSize, LPVOID lpContext )
{
    DWORD lnCardID = dwCard;
    qDebug( ) << "MyPrcCbMotionDetect " << endl;
}

void QTmCaptureCardThread::ProcessStartPreviewEvent( QCameraEvent* pEvent )
{
    int nRet = 0;
    SIZE cliSize;
    int nChannel = pEvent->GetChannel( );
    cliSize.cx = VIDEO_WIDTH;
    cliSize.cy = VIDEO_HEIGHT;
    HWND hVideoWnd = pEvent->GetVideoWndHandle( );

    nRet = MyVCASetVidCapColorFormat( nChannel, RGB888 );
    nRet = MyVCARegVidCapCallBack( nChannel, VidCapCallBack );
    nRet = MyVCAOpenDevice( nChannel, hVideoWnd );
    nRet = MyVCAStartVideoPreview( nChannel );

    DWORD ulCapWidth = 352;
    DWORD ulCapHeight = 288;
    DWORD ulWidth  = (ulCapWidth  / 16);
    DWORD ulHeight = (ulCapHeight / 16);
    DWORD dwAreaMapSize  = ulWidth * ulHeight;
    int   nDetectPrecision = 10;//动态检测的精度,默认值为10
    BYTE *pAreaMap = new BYTE[dwAreaMapSize];  //检测区域
    if (NULL==pAreaMap)
        return;

    for (UINT i=0;i<ulHeight;i++)
    {
        for (UINT j=0;j<ulWidth;j++)
            pAreaMap[i*ulWidth+j] = nDetectPrecision;
    }

    nRet = MyVCAEnableMotionDetect( nChannel,    //动态检测的通道号
        TRUE,                            //是否允许动态检测
        pAreaMap,                        //运动检测地图
        dwAreaMapSize,                   //pAreaMap尺寸,以BYTE为单位
        4,                               //物体持续nPersistTime秒不动则认为停止 1-30s ,如果nPersistTime = －1;则回调运动检测地图。取消（开始、停止）回调。
        2,                               //降低采样比较倍数
        this,                            //监测上下文
        MyPrcCbMotionDetect             //运动/停止回调函数
        );

    if (NULL != pAreaMap)
    {
        delete [] pAreaMap;
        pAreaMap = NULL;
    }
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

    QPlateThread::GetInstance( )->PostPlateFileRecognize( strFile, nChannel );
}
