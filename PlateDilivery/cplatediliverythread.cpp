#include "PlateDilivery\cplatediliverythread.h"
#include <QHostAddress>
#include <QDebug>

CPlateDiliveryThread* CPlateDiliveryThread::pThreadInstance = NULL;

// CWriteThread Serialport
CPlateDiliveryThread::CPlateDiliveryThread(QObject *parent) :
    QThread(parent)
{
    pSettings = CCommonFunction::GetSettings( CommonDataType::CfgSystem );
    pTextCodec = CCommonFunction::GetTextCodec( );
    connect( &tcpSocket, SIGNAL( readyRead( ) ), this, SLOT( IncommingData( ) ) );

    strIP = pSettings->value( "PlateDilivery/ReceiverIP", "127.0.0.1" ).toString( );
    nPort = pSettings->value( "PlateDilivery/ReceiverPort", 60000 ).toUInt( );
    int nInterval = pSettings->value( "PlateDilivery/TimerDetector", 600000 ).toInt( );

    strToken = "ScFuture";

    startTimer( nInterval );
}

CPlateDiliveryThread* CPlateDiliveryThread::GetSingleton( )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = new CPlateDiliveryThread( );
        pThreadInstance->start( );
        pThreadInstance->moveToThread( pThreadInstance );
    }

    return pThreadInstance;
}

void CPlateDiliveryThread::Connect2Host( )
{
    if ( QAbstractSocket::ConnectedState == tcpSocket.state( ) ) {
        return;
    }

    QHostAddress addr( strIP );
    tcpSocket.connectToHost( addr, nPort );
}

void CPlateDiliveryThread::run( )
{
    Connect2Host( );
    exec( );
}

void CPlateDiliveryThread::timerEvent( QTimerEvent *event )
{
    Connect2Host( );
}

void CPlateDiliveryThread::IncommingData( )
{
    QByteArray byteData = tcpSocket.readAll( );
    qDebug( ) << Q_FUNC_INFO << byteData.length( );

    //QString strContent( byteData );
    //QStringList lstData = strContent.split( "," );

    //emit WeighingRequest( lstData );
}

void CPlateDiliveryThread::CheckSum( QByteArray &byteData, char &nCheckSum )
{
    nCheckSum = byteData.at( 0 );

    for ( int nIndex = 1; nIndex < byteData.length( ); nIndex++ ) {
        nCheckSum ^= byteData.at( nIndex );
    }
}

void CPlateDiliveryThread::CreateSendData( QByteArray &byteData, QStringList &lstData )
{
    //  lstData << strPlate << strDateTime << QString::number( nConfidence ) << strFileName;

    byteData.clear( );

    QByteArray byteToken = pTextCodec->fromUnicode(  strToken );
    QByteArray bytePlate = pTextCodec->fromUnicode(  lstData.at( 0 ) );
    QByteArray byteDateTime = pTextCodec->fromUnicode(  lstData.at( 1 ) );
    char nConfidence = ( char ) lstData.at( 2 ).toShort( );
    char nPlateLength = ( char ) bytePlate.length( );
    const QString& strFileName = lstData.at( 3 );
    char nCheckSum = 0;

    QByteArray fileData;
    picFile.setFileName( strFileName );
    if ( picFile.open( QIODevice::ReadOnly ) ) {
        fileData = picFile.readAll( );
        picFile.close( );
    }

    picFile.remove(  );
    quint32 nFileLength = fileData.length( );

    quint32 nStreamLength = byteToken.length() + sizeof ( quint32 ) + byteDateTime.length( ) +
            sizeof ( char ) + sizeof ( char ) + bytePlate.length( ) + sizeof ( char ) +
            sizeof ( quint32 ) + nFileLength;

    QByteArray byteStream( ( const char* ) &nStreamLength, sizeof ( quint32 ) );
    byteStream.append( byteDateTime );
    byteStream.append( nConfidence );
    byteStream.append( nPlateLength );
    byteStream.append( bytePlate );

    CheckSum( byteStream, nCheckSum );

    byteData.append( byteToken );
    byteData.append( byteStream );
    byteData.append( nCheckSum);
    byteData.append( ( const char* ) &nFileLength, sizeof ( quint32 ) );
    byteData.append( fileData );
}

void CPlateDiliveryThread::HandlePlateDilivery( QStringList lstData )
{
    if ( QAbstractSocket::ConnectedState != tcpSocket.state( ) || 4 != lstData.count( ) ) {
        return;
    }

    QByteArray byteData;

    CreateSendData( byteData, lstData );
    tcpSocket.write( byteData );
    qDebug( ) << Q_FUNC_INFO << byteData.length( );
}
