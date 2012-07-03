#include "qudpserver.h"
#include "qnetcommfunction.h"

QUdpServer::QUdpServer( QTextCodec* pCodec, QObject *parent) :
    QMyUdpSocket(parent)
{
    pTextCodec = pCodec;
    setObjectName( "QUdpServer" );
    connect( this, SIGNAL( readyRead( ) ), this, SLOT( IncomingData( ) ) );
    connect( this, SIGNAL( error( QAbstractSocket::SocketError ) ), this, SLOT( HandleError( QAbstractSocket::SocketError ) ) );
}

QUdpServer::~QUdpServer( )
{
    if ( NULL != pByteArray ) {
        delete pByteArray;
        pByteArray = NULL;
    }
}

void QUdpServer::HandleError( QAbstractSocket::SocketError socketError )
{
    QString strMsg;
    QNetCommFunction::GetErrorMsg( strMsg, socketError, this );

    OutputMsg( "Sender:" + sender( )->objectName( ) + QString( "emit NotifyMessage( %1, QManipulateIniFile::LogNetwork )" ).arg( LogText( strMsg ) ) );
    emit NotifyMessage( LogText( strMsg ), QManipulateIniFile::LogNetwork );
}

void QUdpServer::IncomingData( )
{
    OutputMsg( "Receive data" );

    if ( NULL == pByteArray ) {
        pByteArray = new QByteArray( );
    }

    QHostAddress senderAddr;
    quint16 senderPort;
    GetUdpDatagram( senderAddr, senderPort );

    emit GetWholeUdpDatagram( pByteArray, senderAddr.toString( ), senderPort );

    pByteArray = NULL;
}
