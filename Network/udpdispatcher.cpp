#include "udpdispatcher.h"
#include <QDebug>

// Generate  a UdpDispatcherThread to finish the task
CUdpDispatcher::CUdpDispatcher(QObject *parent) :
    QObject(parent)
{
    svrThreadPool = NULL;
    //bool bRet = udpServer.bind( QHostAddress::LocalHost, 6001, QUdpSocket::ShareAddress );
    connect( &udpServer, SIGNAL( error( QAbstractSocket::SocketError ) ),
                             this, SLOT( UdpError( QAbstractSocket::SocketError ) ) );

    nPeerSize = sizeof ( peerAddr );
}

CUdpDispatcher::~CUdpDispatcher( )
{
    if ( NULL != svrThreadPool ) {
        delete svrThreadPool;
    }
}

bool CUdpDispatcher::InitServer( quint16 nPort, quint16 nThreadPool )
{
    svrThreadPool = new QThreadPool( this );
    svrThreadPool->setMaxThreadCount( nThreadPool );
    svrThreadPool->setExpiryTimeout( -1 );

    bool bRet = connect( &udpServer, SIGNAL( readyRead( ) ), this, SLOT( GetDatagrams( ) ) );
    bRet = udpServer.bind( QHostAddress::Any, nPort, QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint );

    return bRet;
}

void CUdpDispatcher::UdpError( QAbstractSocket::SocketError socketError )
{
    QString strMsg;
    QUdpSocket* pUdpServer = qobject_cast< QUdpSocket* > ( sender( ) );
    CNetCommFunction::GetErrorMsg( strMsg, socketError, pUdpServer );
    strMsg = "Udp socket :\r\n" + strMsg;
    emit NotifyMessage( strMsg );
}

void CUdpDispatcher::GetDatagrams( )
{
    QUdpSocket* pUdpServer = qobject_cast< QUdpSocket* > ( sender( ) );

    while ( pUdpServer->hasPendingDatagrams( ) ) {
        quint64 nDataLen = pUdpServer->pendingDatagramSize( );
        char* pData = new char[ nDataLen + 1 ];
        pData [ nDataLen ] = '\0';
        quint64 nReadLen = pUdpServer->readDatagram( pData, nDataLen ) ;
        //::recvfrom( pUdpServer->socketDescriptor( ), pData, nDataLen, 0, ( struct sockaddr* ) &peerAddr, &nPeerSize );
#ifndef QT_NO_DEBUG
        if ( nReadLen != nDataLen ) {
            qDebug( ) << "GetDatagrams( ) error" << endl;
        }

        //qDebug( ) << "Datagrams : " << pData << endl;
#endif

        //pUdpServer->writeDatagram( HANDSHAKE, strlen( HANDSHAKE ),
        //                                             pUdpServer->peerAddress( ), pUdpServer->peerPort( ) );
        //nWs2Ret = ::sendto( pUdpServer->socketDescriptor( ), HANDSHAKE, strlen( HANDSHAKE ), 0, ( struct sockaddr* ) &peerAddr, nPeerSize );
        CNetProcessData* processor = CNetProcessData::GetInstance( pData, nReadLen );
        svrThreadPool->start( processor );
    }
}

quint64 CUdpDispatcher::SendData( QByteArray &byData, const QHostAddress& hostAddr, quint16 nPort )
{
    udpServer.connectToHost( hostAddr, nPort );
    return udpServer.writeDatagram( byData, hostAddr, nPort );
}
