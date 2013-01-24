#ifndef QMYTCPSOCKET_H
#define QMYTCPSOCKET_H

#include "../CommonLibrary/qcommonlibrary.h"
#include <QTcpSocket>

class QMyTcpSocket : public QTcpSocket
{
    Q_OBJECT
public:
    explicit QMyTcpSocket(QObject *parent = 0);
    quint64 SendData( const QByteArray & byteArray );

private:
    void GetErrorMsg( QString& strMsg, QAbstractSocket::SocketError code, QIODevice* pDevice );
    
signals:
    void DataIncoming( void* pSocket, void* pByteArray );
    void ConnectFinished( QTcpSocket* pSocket, bool bPeer );
    void DisconnectFinished( QTcpSocket* pSocket, bool bPeer );
    void ErrorInfo( qint32 logType, QString strText );
    
protected slots:
    void ReceiveData( );
    void TcpError( QAbstractSocket::SocketError socketError );
};

#endif // QMYTCPSOCKET_H
