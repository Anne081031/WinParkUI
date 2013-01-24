#include "qtcppeersocket.h"

QTcpPeerSocket::QTcpPeerSocket(QObject *parent) :
    QMyTcpSocket(parent)
{
    connect( this, SIGNAL( connected( ) ), this, SLOT( HandleConnected( ) ) );
    connect( this, SIGNAL( disconnected( ) ), this, SLOT( HandleDisconnected( ) ) );
}

void QTcpPeerSocket::HandleConnected( )
{
    emit ConnectFinished( this, true );
}

void QTcpPeerSocket::HandleDisconnected( )
{
    emit DisconnectFinished( this, true );
}
