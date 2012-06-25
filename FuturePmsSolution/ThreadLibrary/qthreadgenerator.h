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

    // Free qQueueEventParams in Event destructor
    void SendEvent( MyEnums::ThreadType thread, MyEnums::EventType event,
                    MyDataStructs::PQQueueEventParams pQueueEventParams = NULL, QThread* pReceiver = NULL );
    void PostEvent( MyEnums::ThreadType thread, MyEnums::EventType event,
                    MyDataStructs::PQQueueEventParams pQueueEventParams = NULL, QThread* pReceiver = NULL );

protected:
    explicit QThreadGenerator(QObject *parent = 0);

private:
    void PostLoggerEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver );
    void PostListenerEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver  );
    void PostTcpPeerEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver );
    void PostTcpClientEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver );

private:
    static QThreadGenerator* pThreadGenerator;
    static QLoggerThread* pLogThread;
    
signals:
    
public slots:

private slots:
    void HandleMessage( QString strMsg, QManipulateIniFile::LogTypes type );
    void HandleAccept( int socketDescriptor );
    
};

#endif // QTHREADGENERATOR_H
