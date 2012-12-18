#include "qplatethread.h"
#include <QApplication>
#include <QDebug>
#include <QFileInfo>

QPlateThread* QPlateThread::pThreadInstance = NULL;

QPlateThread::QPlateThread(QObject *parent) :
    QThread(parent)
{
    pCodec = QCommon::GetTextCodec( );
    QCommon::GetPlatePicPath( strPlatePath );
}

QPlateThread* QPlateThread::GetInstance( )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = new QPlateThread( );
        pThreadInstance->moveToThread( pThreadInstance );
        pThreadInstance->start( );
    }

    return pThreadInstance;
}

void QPlateThread::run( )
{
    InitVZSDK( 1 );
    exec( );
}

void QPlateThread::PostPlateFileRecognize( QString &strFile )
{
    QPlateEvent* pEvent = new QPlateEvent( ( QPlateEvent::Type ) QPlateEvent::PlateFileRecognize );
    pEvent->SetFilePath( strFile );

    PostEvent( pEvent );
}

void QPlateThread::PostPlateVideoRecognize( QByteArray &byVideo )
{
    QPlateEvent* pEvent = new QPlateEvent( ( QPlateEvent::Type ) QPlateEvent::PlateVideoRecognize );
    pEvent->SetVideoFrame( byVideo );

    PostEvent( pEvent );
}

void QPlateThread::PostEvent( QPlateEvent *pEvent )
{
    qApp->postEvent( this, pEvent );
}

QString QPlateThread::GetPlateColor( qint32 nColor )
{
    QString strDescript = "";

    switch ( nColor ) {
    case LC_UNKNOWN : //  0  //δ֪
        strDescript = "δ֪";
        break;

    case LC_BLUE : //   1  //��ɫ
        strDescript = "��ɫ";
        break;

    case LC_YELLOW : // 2  //��ɫ
        strDescript = "��ɫ";
        break;

    case LC_WHITE : //   3  //��ɫ
        strDescript = "��ɫ";
        break;

    case LC_BLACK : //   4  //��ɫ
        strDescript = "��ɫ";
        break;

    case LC_GREEN : //   5  //��ɫ
        strDescript =  "��ɫ";
        break;
    }

    return strDescript;
}

void QPlateThread::GetResultInfo( QStringList &lstResult, QString &strFile, bool bSuccess, qint32 nNum, TH_PlateResult *pResult )
{
    QFileInfo info( strFile );

    for ( int nIndex = 0; nIndex < nNum; nIndex++ ) {
        lstResult << ( bSuccess ? QString( pResult[ nIndex ].license ) : "ʧ��" );
        lstResult << ( bSuccess ? QString::number( pResult[ nIndex ].nTime )  : "" );
        lstResult << ( bSuccess ? QString::number( pResult[ nIndex ].nConfidence ) : "" );
        lstResult << ( bSuccess ? GetPlateColor( pResult[ nIndex ].nColor ) : "" );
        lstResult << ( bSuccess ? ( strPlatePath + info.baseName( ) + QString::number( nIndex )+ ".bmp" ) : "" );
        lstResult << strFile;
    }
}

void QPlateThread::FileRecognize( QPlateEvent *pEvent )
{
    QString& strFile = pEvent->GetFilePath( );
    int nNum = 0;
    TH_RECT rcRange = { 0 };

    TH_PlateResult	result[ 6 ];
    ZeroMemory( result, sizeof ( result ) );

    QByteArray byFile = pCodec->fromUnicode( strFile );
    char* pFile = byFile.data( );

    QByteArray byPath = pCodec->fromUnicode( strPlatePath );
    char* pPath = byPath.data( );

    BOOL bRet = LPR_FileEx( pFile, pPath, result, nNum, &rcRange, 1 );
    QStringList lstResult;

    if ( !bRet ) {
        nNum = 1;
    }

    GetResultInfo( lstResult, strFile, bRet, nNum, result );
    emit PlateResult( lstResult );
}

void QPlateThread::VideoRecognize( QPlateEvent *pEvent )
{
    QByteArray& byVideo = pEvent->GetVideoFrame( );
}

BOOL QPlateThread::InitVZSDK( qint32 nChannel )
{
    // nChannel 1 2 3 4
    BOOL bRet = LPR_SetImageFormat ( FALSE, FALSE, ImageFormatBGR,
                                                                    FALSE, 60, 400, TRUE, FALSE, FALSE, nChannel );
    if ( !bRet ) {
        return bRet;
    }

    bRet = LPR_InitEx( nChannel );
    if ( !bRet ) {
        return bRet;
    }

    bRet = LPR_SetPlateType( TRUE, FALSE, FALSE, FALSE, FALSE,
                                                  FALSE, FALSE, FALSE, FALSE, nChannel ); //�˴�����Ϊʶ��˫����ơ����Զ�����������ã�ȡĬ��ֵ��
    if ( !bRet ) {
        return bRet;
    }

    char cProvince[] = "";
    bRet = LPR_SetSpecialParameters( FALSE, 5, 2, 6, cProvince, nChannel ); //���Զ�����������ã�ȡĬ��ֵ��

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
    }
}
