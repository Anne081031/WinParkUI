#include "qplatethread.h"
#include <QApplication>
#include <QDebug>
#include <QFileInfo>

//完成车牌识别
QPlateThread* QPlateThread::pThreadInstance = NULL;

QPlateThread::QPlateThread(QObject *parent) :
    QThread(parent)
{
    pCodec = QCommon::GetTextCodec( );
    QCommon::GetPlatePicPath( strPlatePath );
    bStopRecognize = false;
    nPlateWay = 1;
}

QPlateThread::~QPlateThread( )
{
}

QPlateThread* QPlateThread::GetInstance( )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = NewThread( );
    }

    return pThreadInstance;
}

void QPlateThread::HandlePlateResult( QStringList lstPlateParam, int nChannel, bool bSuccess, bool bVideo )
{
    emit PlateResult( lstPlateParam, nChannel, bSuccess, bVideo );
}

void QPlateThread::HandleUIPlateResult( QString strPlate, int nChannel, bool bSuccess,
                    bool bVideo, int nWidth, int nHeight, int nConfidence,
                    QString strDirection, QByteArray byData )
{
    emit UIPlateResult( strPlate, nChannel, bSuccess,
                        bVideo, nWidth, nHeight, nConfidence,
                        strDirection, byData );
}

QPlateThread* QPlateThread::CreateSubThread( QString &strThreadKey )
{
    QPlateThread* pThread = this; // MainThread---SubThread

    if ( 0 == pSubThreadHash.count( ) ) {
        pSubThreadHash.insert( strThreadKey, this );
    } else if ( NULL == ( pThread = pSubThreadHash.value( strThreadKey, NULL ) ) ) {
        pThread = NewThread( );
        connect( pThread, SIGNAL( PlateResult( QStringList, int, bool, bool ) ),
                 this, SLOT(HandlePlateResult( QStringList, int, bool, bool ) ) );
        connect( pThread, SIGNAL(UIPlateResult( QString, int, bool, bool, int, int, int, QString, QByteArray ) ),
                 this, SLOT(HandleUIPlateResult( QString, int, bool, bool, int, int, int, QString, QByteArray ) ) );

        pSubThreadHash.insert( strThreadKey, pThread );
    }

    return pThread;
}

QPlateThread* QPlateThread::NewThread( )
{
    QPlateThread* pThread = new QPlateThread( );
    pThread->moveToThread( pThread );
    pThread->start( );

    return pThread;
}

bool QPlateThread::SetRecognizeFlag( )
{
    bStopRecognize = !bStopRecognize;

    return bStopRecognize;
}

void QPlateThread::SetPlateWay( int nWay )
{
    nPlateWay = nWay;
}

void QPlateThread::run( )
{
    exec( );
}

void QPlateThread::PostPlateFileRecognize( QString &strFile, int nChannel, bool bMultiThread )
{
    QPlateEvent* pEvent = new QPlateEvent( ( QPlateEvent::Type ) QPlateEvent::PlateFileRecognize );
    pEvent->SetFilePath( strFile );
    pEvent->SetChannel( nChannel );
    pEvent->SetIpcVideoSource( false );
    pEvent->SetMultiThread( bMultiThread );

    PostEvent( pEvent );
}

void QPlateThread::PostPlateFileRecognize( QString &strFile, QString& strIP, bool bMultiThread )
{
    QPlateEvent* pEvent = new QPlateEvent( ( QPlateEvent::Type ) QPlateEvent::PlateFileRecognize );
    pEvent->SetFilePath( strFile );
    pEvent->SetIpcIp( strIP );
    pEvent->SetIpcVideoSource( true );
    pEvent->SetMultiThread( bMultiThread );

    PostEvent( pEvent );
}

void QPlateThread::PostPlateFileRecognize( QByteArray& byData, QString &strFile, int nChannel, bool bMultiThread )
{
    QPlateEvent* pEvent = new QPlateEvent( ( QPlateEvent::Type ) QPlateEvent::PlateFileRecognize );
    pEvent->SetFilePath( strFile );
    pEvent->SetChannel( nChannel );
    pEvent->SetByData( byData );
    pEvent->SetIpcVideoSource( false );
    pEvent->SetMultiThread( bMultiThread );

    PostEvent( pEvent );
}

void QPlateThread::PostPlateVideoRecognize( QByteArray &byVideo, int nWidth, int nHeight, int nChannel, bool bMultiThread )
{
    QPlateEvent* pEvent = new QPlateEvent( ( QPlateEvent::Type ) QPlateEvent::PlateVideoRecognize );
    pEvent->SetVideoFrame( byVideo );
    pEvent->SetChannel( nChannel );
    pEvent->SetVideoWidth( nWidth );
    pEvent->SetVideoHeight( nHeight );
    pEvent->SetIpcVideoSource( false );
    pEvent->SetMultiThread( bMultiThread );

    PostEvent( pEvent );
}

void QPlateThread::PostPlateVideoRecognize( QByteArray &byVideo, int nWidth, int nHeight, QString& strIP, bool bMultiThread )
{
    QPlateEvent* pEvent = new QPlateEvent( ( QPlateEvent::Type ) QPlateEvent::PlateVideoRecognize );
    pEvent->SetVideoFrame( byVideo );
    pEvent->SetIpcIp( strIP );
    pEvent->SetVideoWidth( nWidth );
    pEvent->SetVideoHeight( nHeight );
    pEvent->SetIpcVideoSource( true );
    pEvent->SetMultiThread( bMultiThread );

    PostEvent( pEvent );
}

void QPlateThread::PostPlateInitEvent( int nFormat, int nChannel )
{
    QPlateEvent* pEvent = new QPlateEvent( ( QPlateEvent::Type ) QPlateEvent::PlateInit );
    pEvent->SetImageFormat( nFormat );
    pEvent->SetChannel( ++nChannel );

    PostEvent( pEvent );
}

void QPlateThread::PostPlateUninitEvent( int nChannel )
{
    QPlateEvent* pEvent = new QPlateEvent( ( QPlateEvent::Type ) QPlateEvent::PlateUninit );
    pEvent->SetChannel( ++nChannel );

    PostEvent( pEvent );
}

void QPlateThread::PostEvent( QPlateEvent *pEvent )
{
    bool bMultiThread = pEvent->GetMultiThread( );
    QPlateThread* pReceiver = this;

    if ( bMultiThread ) {
        bool bIpcIP = pEvent->GetIpcVideoSource( );
        QString strThreadKey = bIpcIP ? pEvent->GetIpcIp( ) : QString::number( pEvent->GetChannel( ) );
        pReceiver = CreateSubThread( strThreadKey );
    }

    qApp->postEvent( pReceiver, pEvent );
}

QString QPlateThread::GetPlateMoveDirection( int nDirection )
{
    QString strDirection = "";

    switch ( nDirection ) {
    case DIRECTION_LEFT :
        strDirection = "左";
        break;

    case DIRECTION_RIGHT :
        strDirection = "右";
        break;

    case DIRECTION_UP :
        strDirection = "上";
        break;

    case DIRECTION_DOWN :
        strDirection = "下";
        break;
    default :
        strDirection = "无";
        break;
    }

    return strDirection;
}

QString QPlateThread::GetWidthHeight( TH_PlateResult *pResult )
{
    int nWidth = pResult->rcLocation.right - pResult->rcLocation.left;
    int nHeight = pResult->rcLocation.bottom - pResult->rcLocation.top;

    return QString::number( nWidth ) + "*" + QString::number( nHeight );
}

QString QPlateThread::GetPlateColor( qint32 nColor )
{
    QString strDescript = "";

    switch ( nColor ) {
    case LC_UNKNOWN : //  0  //未知
        strDescript = "未知";
        break;

    case LC_BLUE : //   1  //蓝色
        strDescript = "蓝色";
        break;

    case LC_YELLOW : // 2  //黄色
        strDescript = "黄色";
        break;

    case LC_WHITE : //   3  //白色
        strDescript = "白色";
        break;

    case LC_BLACK : //   4  //黑色
        strDescript = "黑色";
        break;

    case LC_GREEN : //   5  //绿色
        strDescript =  "绿色";
        break;
    }

    return strDescript;
}

void QPlateThread::SendUIResult( int nChannel, bool bSuccess, qint32 nNum, TH_PlateResult *pResult, bool bVideo,  QByteArray& byData )
{
    QString strPlate;
    int nWidth = 0;
    int nHeight = 0;

    for ( int nIndex = 0; nIndex < nNum; nIndex++ ) {
        strPlate = QString( pResult[ nIndex ].license );
        nWidth = pResult[ nIndex ].rcLocation.right - pResult[ nIndex ].rcLocation.left;
        nHeight = pResult[ nIndex ].rcLocation.bottom - pResult[ nIndex ].rcLocation.top;
        emit UIPlateResult( strPlate, nChannel, bSuccess, bVideo, nWidth, nHeight,
                            pResult[ nIndex ].nConfidence,
                            GetPlateMoveDirection( pResult[ nIndex ].nDirection ), byData );
    }

    //qDebug( ) << Q_FUNC_INFO << strPlate << ( bVideo ? " Video" : " File" );
}

void QPlateThread::GetResultInfo( QStringList &lstResult, QString &strFile, bool bSuccess, qint32 nNum, TH_PlateResult *pResult )
{
    QFileInfo info( strFile );

    for ( int nIndex = 0; nIndex < nNum; nIndex++ ) {
        lstResult << ( bSuccess ? QString( pResult[ nIndex ].license ) : "失败" );
        lstResult << ( bSuccess ? QString::number( pResult[ nIndex ].nTime )  : "" );
        lstResult << ( bSuccess ? QString::number( pResult[ nIndex ].nConfidence ) : "" );
        lstResult << ( bSuccess ? GetPlateColor( pResult[ nIndex ].nColor ) : "" );
        lstResult << ( bSuccess ? GetWidthHeight( &pResult[ nIndex ] ) : "" );
        lstResult << ( bSuccess ? GetPlateMoveDirection( pResult[ nIndex ].nDirection ) : "" );
        lstResult << ( bSuccess ? ( strPlatePath + info.baseName( ) + QString::number( nIndex )+ ".bmp" ) : "" );
        lstResult << strFile;
    }
}

void QPlateThread::FileRecognize( QPlateEvent *pEvent )
{
    QString& strFile = pEvent->GetFilePath( );
    int nChannel = pEvent->GetChannel( );

    if ( nChannel >= nPlateWay ) {
        return;
    }

    int nNum = 0;
    TH_RECT rcRange = { 0 };

    TH_PlateResult	result[ 6 ];
    ZeroMemory( result, sizeof ( result ) );

    QByteArray byFile = pCodec->fromUnicode( strFile );
    char* pFile = byFile.data( );

    QByteArray byPath = pCodec->fromUnicode( strPlatePath );
    char* pPath = byPath.data( );

    BOOL bRet = LPR_FileEx( pFile, pPath, result, nNum, &rcRange, nChannel + 1 );
    QStringList lstResult;

    if ( !bRet || 0 == nNum ) {
        nNum = 1;

        if ( 0 == nNum ) {
            bRet = false;
        }
    }

    GetResultInfo( lstResult, strFile, bRet, nNum, result );
    emit PlateResult( lstResult, nChannel, bRet, false );
    SendUIResult( nChannel, bRet, nNum, result, false, pEvent->GetByData( ) );
}

void QPlateThread::VideoRecognize( QPlateEvent *pEvent )
{
    if ( bStopRecognize ) {
        return;
    }

    QByteArray& byVideo = pEvent->GetVideoFrame( );
    int nChannel = pEvent->GetChannel( );

    if ( nChannel >= nPlateWay ) {
        return;
    }

    int nWidth = pEvent->GetVideoWidth( );
    int nHeight = pEvent->GetVideoHeight( );

    int nNum = 0;
    TH_RECT rcRange = { 0 };

    TH_PlateResult	result[ 6 ];
    ZeroMemory( result, sizeof ( result ) );
    QString strFile;

    BOOL bRet = LPR_RGB888Ex( ( PBYTE ) byVideo.data( ), nWidth, nHeight, result, nNum, &rcRange, nChannel + 1 );
    QStringList lstResult;

    if ( !bRet || 0 == nNum ) {
        nNum = 1;

        if ( 0 == nNum ) {
            bRet = false;
        }
    }

    GetResultInfo( lstResult, strFile, bRet, nNum, result );
    emit PlateResult( lstResult, nChannel, bRet, true );
    SendUIResult( nChannel, bRet, nNum, result, true, pEvent->GetByData( ) );
}

void QPlateThread::InitSDK( QPlateEvent* pEvent )
{
    int nChannel = pEvent->GetChannel( );
    int nFormat = pEvent->GetImageFormat( );
    InitVZSDK( nFormat, nChannel );
}

void QPlateThread::UninitSDK( QPlateEvent *pEvent )
{
    int nChannel = pEvent->GetChannel( );
    UninitVZSDK( nChannel );
}

BOOL QPlateThread::InitVZSDK( int nFormat, qint32 nChannel )
{
    // nChannel 1 2 3 4
    //ImageFormatYUV420COMPASS : ImageFormatBGR
    BOOL bRet = LPR_SetImageFormat ( FALSE, FALSE, nFormat,
                                     FALSE, 60, 400, TRUE, FALSE, FALSE, nChannel );
    if ( !bRet ) {
        return bRet;
    }

    bRet = LPR_InitEx( nChannel );
    if ( !bRet ) {
        return bRet;
    }

    bRet = LPR_SetPlateType( TRUE, FALSE, FALSE, FALSE, FALSE,
                                                  FALSE, FALSE, FALSE, FALSE, nChannel ); //此处设置为识别双层黄牌。可以对这个函数设置，取默认值。
    if ( !bRet ) {
        return bRet;
    }

    char cProvince[] = "";
    bRet = LPR_SetSpecialParameters( FALSE, 5, 2, 6, cProvince, nChannel ); //可以对这个函数设置，取默认值。

    return bRet;
}

void QPlateThread::UninitVZSDK( qint32 nChannel )
{
    LPR_UninitEx( nChannel );
}

void QPlateThread::customEvent( QEvent *e )
{
    QPlateEvent* pEvent = ( QPlateEvent* ) e;
    QPlateEvent::PlateEventType evtType = ( QPlateEvent::PlateEventType ) pEvent->type( );

    switch ( evtType ) {
    case QPlateEvent::PlateFileRecognize :
        FileRecognize( pEvent );
        break;

    case QPlateEvent::PlateVideoRecognize :
        VideoRecognize( pEvent );
        break;

    case QPlateEvent::PlateInit :
        InitSDK( pEvent );
        break;

    case QPlateEvent::PlateUninit :
        UninitSDK( pEvent );
        break;
    }
}
