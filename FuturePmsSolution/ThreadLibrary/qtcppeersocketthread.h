#ifndef QTCPPEERSOCKETTHREAD_H
#define QTCPPEERSOCKETTHREAD_H

#include "qmybasethread.h"
#include "Event/qtcppeerthreadevent.h"
#include <QTcpSocket>

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
    void ProcessCreateSockeEvent( MyDataStructs::PQQueueEventParams pEventParams );

private:
    QTcpSocket* pPeerSocket;

signals:

public slots:

private slots:
    
};

#endif // QTCPPEERSOCKETTHREAD_H
