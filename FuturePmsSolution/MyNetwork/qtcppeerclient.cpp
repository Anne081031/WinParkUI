#include "qtcppeerclient.h"
#include "qnetcommfunction.h"

QTcpPeerClient::QTcpPeerClient( QTextCodec* pCodec, QObject *parent ) :
    QTcpSocket(parent), pTextCodec( pCodec )
{
    connect( this, SIGNAL(readyRead( ) ), this, SLOT( IncomingData( ) ) );
    connect( this, SIGNAL(disconnected( ) ), this, SLOT( HandleDisconnected( ) ) );
    connect( this, SIGNAL(connected( ) ), this, SLOT( HandleConnected( ) ) );
    connect( this, SIGNAL(error( QAbstractSocket::SocketError ) ), this, SLOT( HandleError( QAbstractSocket::SocketError ) ) );
}

void QTcpPeerClient::GetKeyMsg( QString &strKey, QString &strMsg, bool bConnected )
{
    strKey = QString( "%1:%2" ).arg( peerAddress( ).toString( ), QString::number( peerPort( ) ) );

    QDateTime dt = QDateTime::currentDateTime( );
    strMsg = QString ( "%1%2%3%4" ).arg(
            dt.toString( "yyyy-MM-dd hh:mm:ss " ),
            strKey,
            bConnected ? " Connected" : " Disconnected" , " to Server.\r\n" );
}

void QTcpPeerClient::HandleDisconnected( )
{
    GenerateLogText( false );
    close( );
}

void QTcpPeerClient::GenerateLogText( bool bConnected )
{
    QString strKey;
    QString strMsg;

    GetKeyMsg( strKey, strMsg, bConnected );

    strMsg = strKey + " " + strMsg;

    emit NotifyMessage( LogText( strMsg ), QManipulateIniFile::LogNetwork );
}

void QTcpPeerClient::HandleConnected( )
{
    GenerateLogText( true );
}

void QTcpPeerClient::HandleError( QAbstractSocket::SocketError socketError )
{
    QString strMsg;
    QNetCommFunction::GetErrorMsg( strMsg, socketError, this );

    emit NotifyMessage( LogText( strMsg ), QManipulateIniFile::LogNetwork );
}

void QTcpPeerClient::IncomingData( )
{
    OutputMsg( "Receive data" );
}
