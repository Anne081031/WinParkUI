#include "qtcpclient.h"
#include "qnetcommfunction.h"

QTcpClient::QTcpClient( QTextCodec* pCodec, QObject *parent) :
    QMyTcpSocket(parent)
{
    pTextCodec = pCodec;
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
    // ¶¨Ê±ÖØÁ´
}

void QTcpClient::HandleDisconnected( )
{
    GenerateLogText( false );

    if ( QAbstractSocket::UnconnectedState == state( ) ) {
        connectToHost( serverAddress, nServerPort );
    }
}

void QTcpClient::HandleConnected( )
{
     GenerateLogText( true );
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
    QByteArray byteData = readAll( );
    if ( NULL == pByteArray ) {
        pByteArray = new QByteArray( );
        pByteArray->append( byteData );
    }
    emit GetWholeTcpStreamData( pByteArray );
    pByteArray = NULL;
    return;
    bool bRet = GetTcpStreamData( );

    if ( bRet ) {
        emit GetWholeTcpStreamData( pByteArray );
        pByteArray = NULL;
    }
}

bool QTcpClient::Connect2Server( const QHostAddress &hostAddr, quint16 nPort )
{
    serverAddress = hostAddr;
    nServerPort = nPort;

    connectToHost( serverAddress, nServerPort );
    return true;
}

