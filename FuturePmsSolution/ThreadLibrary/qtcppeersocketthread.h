#ifndef QTCPPEERSOCKETTHREAD_H
#define QTCPPEERSOCKETTHREAD_H

#include "qmybasethread.h"
#include "Event/qtcppeerthreadevent.h"
#include "../MyNetwork/qtcppeerclient.h"
//#include <QThreadPool>

#include "qdatabasethread.h"
#include "Event/qdatabasethreadevent.h"

class QTcpPeerSocketThread : public QMyBaseThread
{
    Q_OBJECT
public:
    static QTcpPeerSocketThread* GetInstance( bool& bSignalConnected );
    ~QTcpPeerSocketThread( );

    bool SignalConnected( );

protected:
    explicit QTcpPeerSocketThread(QObject *parent = 0);

    void run( );
    void InitializeSubThread( );
    virtual void customEvent( QEvent* event );

private:
    inline void GetThreadPeerSocketCount( );
    QTcpPeerClient* CreatePeerSocket( char nMaxSocket );
    void DestroyPeerSocket( );
    quint32 GetIniValue( const QManipulateIniFile::IniFileSectionItems item );
    void ManagePeerSocketHash( QTcpSocket*& pPeerSocket, bool bInserted );
    void ThreadEnqueue( );

    void ProcessDatabaseData( QTcpSocket* pPeerSocket, QByteArray* pByteArray );
    void ProcessOtherData( QTcpSocket* pPeerSocket, QByteArray* pByteArray );

    void ProcessCreateSockeEvent( MyDataStructs::PQQueueEventParams pEventParams );
    void ProcessThreadPoolFeedbackEvent( MyDataStructs::PQQueueEventParams pEventParams );
    void PostDatabaseEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver );

private:
    //QTcpPeerClient* pPeerSocket;
    QDatabaseThread* pDatabaseThread;
    QThreadPool peerThreadPool;
    MyDataStructs::QSocketMultiHash socketHash;
    quint8 nThreadPeerSocketCount;
    static QQueue< QTcpPeerSocketThread* > peerThreadQueue;

signals:

public slots:

private slots:
    void HandleThreadEnqueue( QTcpSocket* pPeerSocket );
    void HandleGetWholeTcpStreamData( QTcpSocket* pPeerSocket, void* pByteArray );
    
};

#endif // QTCPPEERSOCKETTHREAD_H
