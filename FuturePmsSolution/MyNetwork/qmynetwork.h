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
    quint64 TcpSendData( QTcpClient* pTcpClient,  const char * data, qint64 maxSize );
    quint64 TcpSendData( QTcpClient* pTcpClient,  const QByteArray & byteArray );
    quint64 TcpReceiveData( QTcpClient* pTcpClient,  char* data, qint64 maxSize );
    QByteArray TcpReceiveData( QTcpClient* pTcpClient,  qint64 maxSize );
    QByteArray TcpReceiveData( QTcpClient* pTcpClient );

private:
    QMyTcpServer* pTcpServer;

signals:
    void NotifyMessage( QString strMsg, QManipulateIniFile::LogTypes type );
    void Accept( int socketDescriptor );
    void EnqueueThread( );
    void GetWholeTcpStreamData( void* pByteArray );

public slots:

private slots:
    void HandleMessage( QString strMsg, QManipulateIniFile::LogTypes type );
    void HandleAccept( int socketDescriptor );
    void HandleThreadEnqueue( );
    void HandleGetWholeTcpStreamData( void* pByteArray );

};

#endif // QMYNETWORK_H
