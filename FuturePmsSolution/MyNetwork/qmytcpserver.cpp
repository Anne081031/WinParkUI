#include "qmytcpserver.h"
#include "../CommonLibrary/CommonMacro.h"

QMyTcpServer::QMyTcpServer( quint16 nPort, int nMaxConnections, QObject *parent ) :
    QTcpServer(parent), nServerPort( nPort ), nPendingMaxConnection( nMaxConnections )
{    
}

QMyTcpServer::~QMyTcpServer( )
{
    if ( isListening( ) ) {
        close( );
    }
}

void QMyTcpServer::Initialize( )
{
    Initialize( nServerPort, nPendingMaxConnection );
}

void QMyTcpServer::Initialize( quint16 nPort, int nMaxConnections )
{
    setMaxPendingConnections( nMaxConnections );
    bool bRet = listen( QHostAddress::Any, nPort );

    if ( !bRet) {
        QString strMsg = LogText( errorString( ) );
        emit NotifyMessage( strMsg, QManipulateIniFile::LogNetwork );
    }
}

void QMyTcpServer::incomingConnection( int socketDescriptor )
{
    OutputMsg( "Receive data" );
    emit Accept( socketDescriptor );
}
