#ifndef QTHREADGENERATOR_H
#define QTHREADGENERATOR_H

#include "ThreadLibrary_global.h"
#include "ThreadModule.h"
#include <QQueue>

class THREADLIBRARYSHARED_EXPORT QThreadGenerator : public QObject
{
    Q_OBJECT
public:
    static QThreadGenerator* GetSingleton( );

    QTcpClientSocketThread* GenerateTcpClientThread( );
    QListenerThread* GenerateTcpListenerThread( );
    QLoggerThread* GenerateLogThread( );

    void ControlTimer( const bool bStart, const int nInterval = 0 );

    // Free qQueueEventParams in Event destructor
    void SendEvent( MyEnums::ThreadType thread, MyEnums::EventType event,
                    MyDataStructs::PQQueueEventParams pQueueEventParams = NULL, QThread* pReceiver = NULL );
    void PostEvent( MyEnums::ThreadType thread, MyEnums::EventType event,
                    MyDataStructs::PQQueueEventParams pQueueEventParams = NULL, QThread* pReceiver = NULL );

protected:
    explicit QThreadGenerator(QObject *parent = 0);
    void	timerEvent ( QTimerEvent * event );

private:
    void PostLoggerEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver );
    void PostListenerEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver  );
    void PostTcpPeerEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver );
    void PostTcpClientEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver );

private:
    static QThreadGenerator* pThreadGenerator;
    int nThreadReleaseTimerID;
    
signals:
    
public slots:

private slots:
    void HandleMessage( QString strMsg, QManipulateIniFile::LogTypes type );
    void HandleAccept( int socketDescriptor );
    void HandlePeerThreadReleaseMyself( QTcpPeerSocketThread* pThread );
    
};

#endif // QTHREADGENERATOR_H
