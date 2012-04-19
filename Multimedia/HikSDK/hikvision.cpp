#include "hikvision.h"
#include <QDebug>
#include <QFile>
#include <QDateTime>
#include <QTextCodec>

CHikVision::CHikVision()
{
    GetParameters( );
}

CHikVision::~CHikVision( )
{

}

int CHikVision::SystemStartup( HWND hOverlayWnd )
{
    int nEncodeChannel = InitDSPs( );
    qDebug( ) << "Encode Channel Number :" << nEncodeChannel << endl;

    return nEncodeChannel;
}

int CHikVision::SystemShutdown( )
{
    return DeInitDSPs( );
}

HANDLE CHikVision::OpenChannel( int nChannelNum )
{
    return ChannelOpen( nChannelNum );
}

int CHikVision::CloseChannel( HANDLE hChannel )
{
    return ChannelClose( hChannel );
}

int CHikVision::GetYuv422Data( HANDLE hChannel, quint8* pData, ULONG& lSize )
{
    int nRet = 0;
    nRet = GetOriginalImage( hChannel, pData, &lSize );

    return nRet;
}

int CHikVision::RegisterStreamCB( HK_STREAM_CB pCBF, PVOID pContext )
{
    int nRet = 0;
    nRet = RegisterImageStreamCallback( pCBF, pContext );

    return nRet;
}

int CHikVision::MotionDetection( HANDLE hChannel, bool bStart )
{
    int bRet = 0;
    bRet = bStart ? StartMotionDetection( hChannel) : StopMotionDetection( hChannel );

    return bRet;
}

void CHikVision::GetParameters( )
{
    QString strKey = QString( "WintonePlate/WintonePlate%1/%2" );

    for ( int nIndex = 0; nIndex < VIDEO_WAY; nIndex++ ) {
        nGrade[ nIndex ] = pSettings->value( strKey.arg( QString::number( nIndex ), "PlateGrade" ), 2 ).toInt( );
        nDelay[ nIndex ] = pSettings->value( strKey.arg( QString::number( nIndex ), "PlateDetectionDelay" ), 5 ).toInt( );
        nFps[ nIndex ] = pSettings->value( strKey.arg( QString::number( nIndex ), "PlateFrameRate" ), 25 ).toInt( );

        rDetectionRange[ nIndex ].left = pSettings->value( strKey.arg( QString::number( nIndex ), "PlateDetectionLeft" ), 0 ).toInt( );
        rDetectionRange[ nIndex ].right = pSettings->value( strKey.arg( QString::number( nIndex ), "PlateDetectionRight" ), 703 ).toInt( );
        rDetectionRange[ nIndex ].top = pSettings->value( strKey.arg( QString::number( nIndex ), "PlateDetectionUp" ), 0 ).toInt( );
        rDetectionRange[ nIndex ].bottom = pSettings->value( strKey.arg( QString::number( nIndex ), "PlateDetectionDown" ), 575 ).toInt( );
    }
}

int CHikVision::SetupDetection( HANDLE hChannel, HK_MOTION_CB pCBF, int nIndex, LPVOID pContext )
{
    int nGradeValue = nGrade[ nIndex ];
    int nFastFps = 6;
    int nSlowFps = 18;
    quint32 nDelayTime = nDelay[ nIndex ];
    RECT rect = rDetectionRange[ nIndex ];
    int nCount = 1;
    int nReserve = ( int ) pContext;
    int nRet = SetupMotionDetectionEx( hChannel, nGradeValue, nFastFps, nSlowFps, nDelayTime, &rect, nCount, pCBF, nReserve );

    return nRet;
}

int CHikVision::GetStreamData( HANDLE hChannel, BOOL bStart, quint8 *pData, int nIndex )
{
    int nRet = 0;
    nRet = SetImageStream( hChannel, bStart, nFps[ nIndex ], 704, 576, pData );

    return nRet;
}

int CHikVision::CaptureBMP( HANDLE hChannel, QString &strFile )
{
    int nRet = -1;
    ULONG lSize = 1024 * 1024 * 2;
    PUCHAR pImgBuff = new UCHAR[ lSize ];

    nRet = GetOriginalImage( hChannel, pImgBuff, &lSize );
    if( 0 != nRet ) {
        delete [ ] pImgBuff;
        return nRet;
    }

    int nWidth = 0;
    int nHeight = 0;

    // 16 BMP
    switch ( lSize ) {
    case 704 * 576 * 2 : // 405504
        nWidth = 704;
        nHeight = 576;
        break;

    case 704 * 480 * 2 : // 337920
        nWidth = 704;
        nHeight = 480;
        break;

    case 352 * 288 * 2 : // 101376
        nWidth = 352;
        nHeight = 288;
        break;

    case 352 * 240 * 2 : // 84480
        nWidth = 352;
        nHeight = 240;
        break;

    case 352 * 144 * 2 : // 50688
        nWidth = 352;
        nHeight = 144;
        break;

    case 352 * 120 * 2 : // 42240
        nWidth = 352;
        nHeight = 120;
        break;

    //case 176 * 288 * 2 : // 50688
    //    nWidth = 176;
    //   nHeight = 288;
    //    break;

    //case 176 * 240 * 2 : // 42240
    //    nWidth = 176;
    //    nHeight = 240;
    //    break;

    case 176 * 144 * 2 : // 25344
        nWidth = 176;
        nHeight = 144;
        break;

    case 176 * 120 * 2 : // 21120
        nWidth = 176;
        nHeight = 120;
        break;
    }

    QByteArray byData = pCodec->fromUnicode( strFile );
    char* pFile = byData.data( );

    nRet = SaveYUVToBmpFile( pFile, pImgBuff, nWidth, nHeight );
    delete [ ] pImgBuff;

    return nRet;
}

int CHikVision::CaptureJpeg( HANDLE hChannel, QString& strFile )
{
    int nRet = 0;
    ULONG lSize = 1024 * 1024 * 1;
    PUCHAR pImgBuff = new UCHAR[ lSize ];
    nRet = GetJpegImage( hChannel, pImgBuff, &lSize, 65 );
    if ( 0 != nRet ) {
        delete [ ] pImgBuff;
        qDebug( ) << "GetJpegImage : Failed " << endl;
        return nRet;
    }
    // DS-40xxHC/HC+/HF/HCS JPEG4CIF(QCIF)
    // 4CIF 704¡Á576 QCIF 176¡Á144 CIF 352¡Á288
    // Save File

    QFile imgFile( strFile );
    if ( imgFile.open( QIODevice::WriteOnly ) ) {
        const char* pData = ( const char* ) pImgBuff;
        imgFile.write( pData, lSize );
        imgFile.close( );
    }

    delete [ ] pImgBuff;
    return nRet;
}

int CHikVision::PlayVideo(HANDLE hChannel, HWND hWnd, QRect &rect, int nIndex )
{
  RECT winRect;
  POINT point;
  point.x = rect.left( );
  point.y = rect.top( );

  //BOOL bRet = ClientToScreen( hWnd, &point );

  winRect.left   = point.x;
  winRect.top    = point.y;
  winRect.right  = rect.right( );
  winRect.bottom = rect.bottom( );

  qDebug( ) << "left = "
            << winRect.left
            << "top = "
            << winRect.top
            << "right = "
            << winRect.right
            << "bottom = "
            << winRect.bottom
            << endl;

  //int nRet = SetPreviewOverlayMode( TRUE );
  int nRet = StartVideoPreview( hChannel, hWnd, &winRect, true, 0, nFps[ nIndex ] );
  return nRet;
}

int CHikVision::StopVideo( HANDLE hChannel )
{
    return StopVideoPreview( hChannel );
}
