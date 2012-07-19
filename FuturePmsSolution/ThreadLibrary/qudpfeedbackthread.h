#ifndef QUDPFEEDBACKTHREAD_H
#define QUDPFEEDBACKTHREAD_H

#include "qmybasethread.h"
#include "Event/qudpsenderthreadevent.h"
#include "../MyNetwork/qudpclient.h"

class QUdpFeedbackThread : public QMyBaseThread
{
    Q_OBJECT
public:
    static QUdpFeedbackThread* GetInstance( QThread* pReceiver );
    ~QUdpFeedbackThread( );

    void SendSetSocketDescriptorSignal( int nSocket );

protected:
    explicit QUdpFeedbackThread( QThread* pReceiver, QObject *parent = 0 );
    void InitializeSubThread( );

    void run( );

private:
    void ReadFeedbackData( );
    void ProcessFeedbackData( QByteArray *pByteArray, QString& strSenderIP, quint16 nSenderPort );
    void PostUdpReceiveEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread *pReceiver );

private:
    QUdpClient* pUdpClientSocket;
    QByteArray* pByteArray;
    QHostAddress senderAddr;
    quint16 senderPort;
    QThread* pReceiverThread;

signals:
    void SetSocketDescriptor( int nSocket );
    void SendFeedbackData( void* pByteArray, QString senderIP, quint16 senderPort );

public slots:

private slots:
    void HandleSetSocketDescriptor( int nSocket );
    void HandleSendFeedbackData( void* pByteArray, QString senderIP, quint16 senderPort );

};

#endif // QUDPFEEDBACKTHREAD_H
