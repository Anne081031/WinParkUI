#ifndef QTCPPEERSOCKETTHREAD_H
#define QTCPPEERSOCKETTHREAD_H

#include "qmybasethread.h"
#include "Event/qtcppeerthreadevent.h"
#include <QTcpSocket>

#include "qdatabasethread.h"
#include "Event/qdatabasethreadevent.h"

class QTcpPeerSocketThread : public QMyBaseThread
{
    Q_OBJECT
public:
    static QTcpPeerSocketThread* GetInstance( );
    ~QTcpPeerSocketThread( );

protected:
    explicit QTcpPeerSocketThread(QObject *parent = 0);

    void run( );
    void InitializeSubThread( );
    virtual void customEvent( QEvent* event );

private:
    void ProcessDatabaseData( QByteArray* pByteArray );
    void ProcessOtherData( QByteArray* pByteArray );
    void ProcessCreateSockeEvent( MyDataStructs::PQQueueEventParams pEventParams );

private:
    QTcpSocket* pPeerSocket;
    QDatabaseThread* pDatabaseThread;

signals:

public slots:

private slots:
    void HandleThreadEnqueue( );
    void HandleGetWholeTcpStreamData( void* pByteArray );
    
};

#endif // QTCPPEERSOCKETTHREAD_H
