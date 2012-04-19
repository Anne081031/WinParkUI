#ifndef MGMTTHREAD_H
#define MGMTTHREAD_H

#include <QThread>
#include "getconfig.h"

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

private:
    void ClientRun( );
    void ServerRun( );
    bool SendTableData( QString& strFile, const QString& strTable );

private:
    CGetConfig config;
    int nInterval;
    int nTimer;
    QString strPath;

    CMySqlDatabase* pMySQL;
    CTcpClient* pTcpClient;
    CTcpDispatcher* pTcpServer;
    bool bClient;

    static CMgmtThread* pSenderThread;
    static CMgmtThread* pReceiverThread;
    
signals:
    
public slots:
    void ThreadExit( );
    void NotifyMsg( QString strMsg );
};

#endif // MGMTTHREAD_H
