#ifndef QUDPSENDERTHREAD_H
#define QUDPSENDERTHREAD_H

#include "qmybasethread.h"
#include "Event/qudpsenderthreadevent.h"
#include "../MyNetwork/qudpclient.h"

class QUdpSenderThread : public QMyBaseThread
{
    Q_OBJECT
public:
    static QUdpSenderThread* GetInstance(  );
    ~QUdpSenderThread( );

protected:
    explicit QUdpSenderThread(QObject *parent = 0);

    void run( );
    void InitializeSubThread( );
    virtual void customEvent( QEvent* event );

private:
    void ProcessBroadcastDatagramEvent( MyDataStructs::PQQueueEventParams pEventParams );
    void ProcessSendDatagramEvent( MyDataStructs::PQQueueEventParams pEventParams );

private:
    QUdpClient* pUdpClientSocket;

signals:
    void GetWholeUdpDatagram( void* pByteArray, QString strSenderIP, quint16 nSenderPort );

public slots:

private slots:
    void HandleGetWholeUdpDatagram( void* pByteArray, QString strSenderIP, quint16 nSenderPort );

};

#endif // QUDPSENDERTHREAD_H
