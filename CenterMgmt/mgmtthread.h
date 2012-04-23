#ifndef MGMTTHREAD_H
#define MGMTTHREAD_H

#include <QThread>
#include "getconfig.h"
#include "DataType.h"

#include "Network/tcpclient.h"
#include "Network/tcpdispatcher.h"

class CMgmtThread : public QThread
{
    Q_OBJECT
public:
    explicit CMgmtThread( bool bSender, QObject *parent = 0 );
    static CMgmtThread* GetThread( bool bSender );

protected:
    void run( );
    void timerEvent ( QTimerEvent * event );
    void customEvent( QEvent * event );

private:
    void ClientRun( );
    void ServerRun( );
    bool SendTableData( QString& strFile, const QString& strTable );
    void PeerRequest( );
    void SendPeerRequest( QStringList& lstRows, const QString& strTable );
    void SendTableData( bool bRequest, QString& strWhere, QString& strTableName );
    inline quint32 GetCommonHeaderSize( );
    inline Mgmt::CommonHeader& GetCommonHeader( const char* pData );
    inline quint32 GetContentHeaderSize( );
    inline Mgmt::ContentHeader& GetContentHeader( const char* pData );
    inline const char* GetBody( const char* pData );

    CPeerSocket* GetPeerSocket( const QString& strKey );
    bool SendFilterData( CPeerSocket* pPeer, QString& strWhere, const QString& strTable );

    void SetPacketType( Mgmt::CommonHeader& sHeader, Mgmt::ePacketType eType );
    Mgmt::ePacketType GetPacketType( Mgmt::CommonHeader& sHeader );
    bool ConnectMySQL( );

    void ProcessRequest( const char* pData );
    void ProcessTableRequest( const char* pData );
    void ProcessHandshakeRequest( const char* pData );

private:
    CGetConfig config;
    int nInterval;
    int nClientTimer;
    int nServerTimer;
    QString strPath;

    CMySqlDatabase* pMySQL;
    CTcpClient* pTcpClient;
    CTcpDispatcher* pTcpServer;
    QTextCodec* pTxtCodec;
    bool bClient;

    static CMgmtThread* pSenderThread;
    static CMgmtThread* pReceiverThread;
    
signals:
    
public slots:
    void ThreadExit( );
    void NotifyMsg( QString strMsg );
    void PeerData( );
};

#endif // MGMTTHREAD_H
