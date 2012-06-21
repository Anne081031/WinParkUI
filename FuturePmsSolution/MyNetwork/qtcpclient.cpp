#include "qtcpclient.h"
#include "qnetcommfunction.h"

QTcpClient::QTcpClient( QTextCodec* pCodec, QObject *parent) :
    QTcpSocket(parent), pTextCodec( pCodec )
{
    connect( this, SIGNAL(readyRead( ) ), this, SLOT( IncomingData( ) ) );
    connect( this, SIGNAL(disconnected( ) ), this, SLOT( HandleDisconnected( ) ) );
    connect( this, SIGNAL(connected( ) ), this, SLOT( HandleConnected( ) ) );
    connect( this, SIGNAL(error( QAbstractSocket::SocketError ) ), this, SLOT( HandleError( QAbstractSocket::SocketError ) ) );
}

QTcpClient::~QTcpClient( )
{

}

void QTcpClient::timerEvent( QTimerEvent *event )
{
    // ∂® ±÷ÿ¡¥
}

void QTcpClient::HandleDisconnected( )
{
    QString strMsg = "Disconnect to server";

    if ( QAbstractSocket::UnconnectedState == state( ) ) {
        connectToHost( serverAddress, nServerPort );
        strMsg += ", Reconnect to server";
    }

    emit NotifyMessage( LogText( strMsg ), QManipulateIniFile::LogNetwork );
}

void QTcpClient::HandleConnected( )
{
    QString strMsg = "Connect to server successfully";
    emit NotifyMessage( LogText( strMsg ), QManipulateIniFile::LogNetwork );
}

void QTcpClient::HandleError( QAbstractSocket::SocketError socketError )
{
    QString strMsg;
    QNetCommFunction::GetErrorMsg( strMsg, socketError, this );

    emit NotifyMessage( LogText( strMsg ), QManipulateIniFile::LogNetwork );
    HandleDisconnected( );
}

void QTcpClient::IncomingData( )
{
    OutputMsg( "Receive data" );
}

bool QTcpClient::Connect2Server( const QHostAddress &hostAddr, quint16 nPort )
{
    serverAddress = hostAddr;
    nServerPort = nPort;

    connectToHost( serverAddress, nServerPort );
    return true;
}

quint64 QTcpClient::SendData( const char * data, qint64 maxSize )
{
    return write( data, maxSize );
}

quint64 QTcpClient::SendData( const QByteArray & byteArray )
{
    quint64 nRet = 0;

    int nPackageSize = 10 * 1024 * 1024;
    int nTotalSize = byteArray.count( );
    int nMode = nTotalSize / nPackageSize;
    int nSurplus = nTotalSize % nPackageSize;
    const char* pData = byteArray.data( );
    const char* pPkgData = NULL;

    if ( 0 == nMode ) { // < 10M
        nRet += write( byteArray );
    } else { // >= 10M
        int nIndex = 0;
        for ( nIndex = 0; nIndex < nMode; nIndex++ ) {
            pPkgData = ( pData + nIndex * nPackageSize );
            nRet += write( pPkgData, nPackageSize );
        }

        if ( 0 != nSurplus ) {
            pPkgData = ( pData + nIndex * nPackageSize );
            nRet += write( pPkgData, nSurplus );
        }
    }

    if ( !flush( ) ) {
        waitForBytesWritten( );
    }

    return nRet;
}

quint64 QTcpClient::ReceiveData( char* data, qint64 maxSize )
{
    return read( data, maxSize );
}

QByteArray QTcpClient::ReceiveData( qint64 maxSize )
{
    return read( maxSize );
}

QByteArray QTcpClient::ReceiveData(  )
{
    return readAll( );
}

