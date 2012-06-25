#include "qmynetwork.h"

QMyNetwork::QMyNetwork( QObject* parent ) : QObject( parent )
{
    qRegisterMetaType< QAbstractSocket::SocketError >( "QAbstractSocket::SocketError" );
    pTcpServer = NULL;
}

QMyNetwork::~QMyNetwork( )
{
    if ( NULL != pTcpServer ) {
        delete pTcpServer;
    }
}

void QMyNetwork::HandleGetWholeTcpStreamData( void *pByteArray )
{
    emit GetWholeTcpStreamData( pByteArray );
}

void QMyNetwork::HandleThreadEnqueue( )
{
    emit EnqueueThread( );
}

void QMyNetwork::StartupTcpServer( quint16 nPort, int nMaxConnections )
{
    if ( NULL == pTcpServer ) {
        pTcpServer = new QMyTcpServer( nPort, nMaxConnections );
        connect( pTcpServer, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ), this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );
        connect( pTcpServer, SIGNAL( Accept( int ) ), this, SLOT( HandleAccept( int ) ) );
        pTcpServer->Initialize( );
    }
}

QTcpPeerClient* QMyNetwork::GenerateTcpPeerSocket( QTextCodec* pCodec )
{
    QTcpPeerClient* pPeerSocket = new QTcpPeerClient( pCodec );
    connect( pPeerSocket, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ), this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );
    connect( pPeerSocket, SIGNAL( EnqueueThread( ) ), this, SLOT( HandleThreadEnqueue( ) ) );

    return pPeerSocket;
}

QTcpClient* QMyNetwork::GenerateTcpClientSocket( QTextCodec *pCodec )
{
    QTcpClient* pClientSocket = new QTcpClient( pCodec );
    connect( pClientSocket, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ), this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );

    return pClientSocket;
}

void QMyNetwork::HandleMessage( QString strMsg, QManipulateIniFile::LogTypes type )
{
    emit NotifyMessage( strMsg, type );
}

void QMyNetwork::HandleAccept( int socketDescriptor )
{
    emit Accept( socketDescriptor );
}

bool QMyNetwork::TcpConnect2Server( QTcpClient* pTcpClient, const QHostAddress &hostAddr, quint16 nPort )
{
    return pTcpClient->Connect2Server( hostAddr, nPort );
}

quint64 QMyNetwork::TcpSendData( QTcpClient* pTcpClient,  const char * data, qint64 maxSize )
{
    return pTcpClient->SendData( data, maxSize );
}

quint64 QMyNetwork::TcpSendData( QTcpClient* pTcpClient,  const QByteArray & byteArray )
{
    return pTcpClient->SendData( byteArray );
}

quint64 QMyNetwork::TcpReceiveData( QTcpClient* pTcpClient,  char* data, qint64 maxSize )
{
    return pTcpClient->ReceiveData( data, maxSize );
}

QByteArray QMyNetwork::QMyNetwork::TcpReceiveData( QTcpClient* pTcpClient,  qint64 maxSize )
{
    return pTcpClient->ReceiveData( maxSize );
}

QByteArray QMyNetwork::TcpReceiveData( QTcpClient* pTcpClient )
{
    return pTcpClient->ReceiveData( );
}
