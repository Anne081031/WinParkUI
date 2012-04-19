#include "tcpdispatcher.h"

CTcpDispatcher::CTcpDispatcher(QObject *parent) :
    QObject(parent)
{
    tcpServer = NULL;
}

CTcpDispatcher::~CTcpDispatcher( )
{
    if ( NULL != tcpServer ) {
        delete tcpServer;
        tcpServer = NULL;
    }
}

bool CTcpDispatcher::InitServer( quint16 nPort, int nConnections, quint16 nThreadPool )
{
    if ( NULL == tcpServer ) {
        tcpServer = new CMyTcpServer( nThreadPool );
    }

    connect( tcpServer, SIGNAL( NotifyMessage( QString ) ), this, SLOT( HandleMessage( QString ) ) );
    tcpServer->setMaxPendingConnections( nConnections );
    bool bRet = tcpServer->listen( QHostAddress::Any, nPort );

    if ( !bRet ) {
        QString strMsg;
        CNetCommFunction::GetErrorMsg( strMsg, tcpServer->serverError( ) );
        strMsg = "Listen socket :\r\n" + strMsg;
        strMsg += "\r\n";
        strMsg += tcpServer->errorString( );
        strMsg += "\r\n";
        emit NotifyMessage( strMsg );
    }

    return bRet;
}

void CTcpDispatcher::HandleMessage( QString strMsg )
{
    emit NotifyMessage( strMsg );
}
