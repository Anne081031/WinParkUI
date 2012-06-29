#ifndef QMYNETWORK_H
#define QMYNETWORK_H

#include "QMyNetwork_global.h"

#include "qmytcpserver.h"
#include "qtcpclient.h"
#include "qtcppeerclient.h"

#include "../ManipulateIniFile/qmanipulateinifile.h"

class QMYNETWORKSHARED_EXPORT QMyNetwork :public QObject
{
    Q_OBJECT
public:
    explicit QMyNetwork( QObject* parent = 0 );
    virtual ~QMyNetwork( );

    void StartupTcpServer( quint16 nPort, int nMaxConnections );
    QTcpPeerClient* GenerateTcpPeerSocket( QTextCodec* pCodec );
    QTcpClient* GenerateTcpClientSocket( QTextCodec* pCodec );

    bool TcpConnect2Server( QTcpClient* pTcpClient, const QHostAddress &hostAddr, quint16 nPort );
    quint64 TcpSendData( QMyTcpSocket* pTcpSocket,  const char * data, qint64 maxSize );
    quint64 TcpSendData( QMyTcpSocket* pTcpSocket,  const QByteArray & byteArray );
    quint64 TcpReceiveData( QMyTcpSocket* pTcpSocket,  char* data, qint64 maxSize );
    QByteArray TcpReceiveData( QMyTcpSocket* pTcpSocket,  qint64 maxSize );
    QByteArray TcpReceiveData( QMyTcpSocket* pTcpSocket );

private:
    QMyTcpServer* pTcpServer;

signals:
    void NotifyMessage( QString strMsg, QManipulateIniFile::LogTypes type );
    void Accept( int socketDescriptor );
    void EnqueueThread( QTcpSocket* pPeerSocket );
    void GetWholeTcpStreamData( QTcpSocket* pPeerSocket, void* pByteArray );

public slots:

private slots:
    void HandleMessage( QString strMsg, QManipulateIniFile::LogTypes type );
    void HandleAccept( int socketDescriptor );
    void HandleThreadEnqueue( QTcpSocket* pPeerSocket );
    void HandleGetWholeTcpStreamData( QTcpSocket* pPeerSocket, void* pByteArray );

};

#endif // QMYNETWORK_H
