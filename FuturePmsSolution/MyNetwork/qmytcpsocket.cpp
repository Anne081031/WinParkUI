#include "qmytcpsocket.h"

QMyTcpSocket::QMyTcpSocket(QObject *parent) :
    QTcpSocket(parent)
{
    pByteArray = NULL;
    Clear( );
}

void QMyTcpSocket::SetMaxDataSize( quint64 nSize )
{
    nDataLen = nSize;
}

quint64 QMyTcpSocket::GetMaxDataSize( )
{
    return nDataLen;
}

void QMyTcpSocket::Clear( )
{
    nDataLen = 0;
    nCurrentLen = 0;
}

bool QMyTcpSocket::GetTcpStreamData( )
{
    bool bRet = false;

    quint64 nRealTimeDataLen = bytesAvailable( );

    if ( NULL == pByteArray ) {
        pByteArray = new QByteArray( );
    }

    quint64 nPreSize = GetCurrentDataSize( );
    quint64 nCurDataSize = nPreSize + nRealTimeDataLen;
    if ( 0 == GetMaxDataSize( ) || processMsg.GetCommonHeaderSize( ) > nCurDataSize ) {
        pByteArray->resize( nCurDataSize );
    }

    char* pSegData = ( char* ) ( ( quint64 ) pByteArray->data( ) + nPreSize );
    quint64 nDataRetLen = read( pSegData, nRealTimeDataLen );
    SetCurrentDataSize( nDataRetLen );

    if ( 0 == GetMaxDataSize( ) && processMsg.GetCommonHeaderSize( ) <= nCurDataSize ) {
        MyDataStructs::CommonHeader& commHeader = processMsg.GetCommonHeader( pSegData );
        SetMaxDataSize( commHeader.nDataLen );
        pByteArray->resize( commHeader.nDataLen );
    }

#ifndef QT_NO_DEBUG
    if ( nDataRetLen != nRealTimeDataLen ) {
        OutputMsg( QString( "Read Client data: %1 error" ).arg( peerAddress( ).toString( ) ) );
    }
#endif

    if ( GetCurrentDataSize( ) == GetMaxDataSize( ) ) { // Read to finish
        Clear( );
        write( HANDSHAKE );
        bRet = true;
    }

    return bRet;
}

void QMyTcpSocket::SetCurrentDataSize( quint64 nSize )
{
    nCurrentLen += nSize;
}

quint64 QMyTcpSocket::GetCurrentDataSize( )
{
    return nCurrentLen;
}
