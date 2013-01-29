#include "qdataparserthread.h"

QDataParserThread* QDataParserThread::pThreadInstance = 0;

QDataParserThread::QDataParserThread(QObject *parent) :
    QMyThread(parent)
{
    QString strToken = QCommonLibrary::GetDataToken( );
    byDataToken = QCommonLibrary::GetTextCodec( )->fromUnicode( strToken );
    bServerSideParser = false;
    setObjectName( "[Data Parser Thread]" );
}

void QDataParserThread::InitializeSubThread( )
{

}

void QDataParserThread::SetServerSide( bool bServerSide )
{
    bServerSideParser = bServerSide;
}

QDataParserThread* QDataParserThread::GetInstance( QObject *pParent )
{
    QDataParserThread* pThread = CreateThread( pParent );

    return pThread;
}

QDataParserThread* QDataParserThread::CreateThread( QObject *pParent )
{
    QDataParserThread* pThread = new QDataParserThread( pParent );
    pThread->StartThread( pThread );

    return pThread;
}

QDataParserThread* QDataParserThread::GetSingletonInstance( QObject *pParent )
{
    if ( 0 == pThreadInstance ) {
        pThreadInstance = CreateThread( pParent );
    }

    return pThreadInstance;
}

void QDataParserThread::run( )
{
    InitializeSubThread( );
    exec( ); // Event Loop
}

void QDataParserThread::customEvent( QEvent *event )
{
    QThreadEvent* pEvent = ( QThreadEvent* ) event;
    QCommonLibrary::ThreadEventType type = ( QCommonLibrary::ThreadEventType ) pEvent->type( );
    QCommonLibrary::EventParam& uParam = pEvent->GetEventParam( );

    if ( QCommonLibrary::EventExit == type ) {
        LaunchThreadExit( );
        pThreadInstance = NULL;
    } else if ( QCommonLibrary::EventTCPData == type ) {
        TcpParse( uParam );
    } else if ( QCommonLibrary::EventUDPData == type ) {
        UdpParse( uParam );
    }
}

void QDataParserThread::TcpParse( QCommonLibrary::EventParam &uParam )
{
    QTcpSocket* pSocket = uParam.ParamValue.ParserThread.DataParam.pSocket;
    QByteArray* pByteArray = uParam.ParamValue.ParserThread.DataParam.pByteArray;

    QByteArray* pData = tcpSocketByteArrayHash.value( pSocket );

    if ( 0 == pData ) {
        pData = new QByteArray( );
        tcpSocketByteArrayHash.insert( pSocket, pData );
    }

    pData->append( *pByteArray ); // Shared Memory

    bool bRet = false;
    do {
        bRet = ParseData( pSocket, *pData );
    } while ( bRet );
}

void QDataParserThread::UdpParse( QCommonLibrary::EventParam &uParam )
{
    Q_UNUSED( uParam )
}

bool QDataParserThread::ParseData( QTcpSocket* pSocket, QByteArray &data )
{
    bool bRet = false;
    QByteArray& byToken = byDataToken;

    qint32 nIndex = data.indexOf( byToken );
    qint32 nToken = byToken.length( );
    qint32 nLen = data.length( ); // Current Stream Length

    if ( -1 == nIndex ) {
        data.clear( );
        return bRet;
    } else if ( 0 < nIndex ) {
        data.remove( 0, nIndex ); // Not Token
    }

    qint32 nDataSize = sizeof ( qint32 );
    if ( nLen <= ( nToken + nDataSize ) ) {
        return bRet;
    }


    QByteArray byDataLen = data.mid( nToken, nDataSize );
    const char* pLen = byDataLen.data( );
    qint32 nTotal = *( ( qint32* ) pLen ); // Message Size Token + DataSize + MessageSize
    nTotal = qFromBigEndian< quint32 >( nTotal );

    if ( nLen < nTotal ) { // Whole Package
        return bRet;
    }

    if ( bServerSideParser ) {
        QByteArray byPackage = data.left( nTotal );
        // Send to Socket Thread Server --> Socket Thread Client
        QCommonLibrary::EventParam uParam;
        uParam.ParamValue.ServerSocketThread.Param.Data.pSocket = pSocket;
        uParam.ParamValue.ServerSocketThread.Param.Data.pByteArray = new QByteArray( byPackage );
        PostThreadEvent( pSocket->thread( ),
                         QCommonLibrary::ThreadSocketServer,
                         QCommonLibrary::EventServerSendData,
                         uParam );
    }

    qint32 nExtraSize = nToken + nDataSize;
    data.remove( 0, nExtraSize );

    qint32 nDataLen = nTotal - nExtraSize;
    //char* pData = new char[ nDataLen + 1 ];
    //memcpy( pData, data.data( ), nDataLen );
    //pData[ nDataLen ] = '\0';

    //CNetProcessData* processor  = CNetProcessData::GetInstance( pData, nDataLen );

    //if ( !strIP.isEmpty( ) ) {
    //    processor->SetUdpIP( strIP );
    //}
    //svrThreadPool->start( processor );

    QByteArray byBody = data.left( nDataLen );

    QString strBody = QString( byBody );
    QCommonLibrary::PrintLog( strBody );

    if( !bServerSideParser ) {
        QByteArray* pUIData = new QByteArray( byBody );
        emit DataIncoming( pSocket, pUIData );
    }

    data.remove( 0, nDataLen );
    bRet = ( data.length( ) > nExtraSize );

    return bRet;
}
