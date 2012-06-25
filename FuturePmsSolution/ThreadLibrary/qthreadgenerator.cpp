#include "qthreadgenerator.h"
#include <QMetaType>

QThreadGenerator* QThreadGenerator::pThreadGenerator = NULL;
QLoggerThread* QThreadGenerator::pLogThread = NULL;

QQueue< QTcpPeerSocketThread* > g_pPeerThreadQueue;

QThreadGenerator::QThreadGenerator(QObject *parent) :
    QObject(parent)
{
    qRegisterMetaType< QManipulateIniFile::LogTypes >( "QManipulateIniFile::LogTypes" );

    pLogThread = QLoggerThread::GetSingleton( );
}

QThreadGenerator* QThreadGenerator::GetSingleton( )
{
    if ( NULL == pThreadGenerator ) {
        pThreadGenerator = new QThreadGenerator( );
    }

    return pThreadGenerator;
}

QListenerThread* QThreadGenerator::GenerateTcpListenerThread( )
{
    QListenerThread* pThreadInstance = QListenerThread::GetInstance( );
    pThreadInstance->moveToThread( pThreadInstance );
    connect( pThreadInstance, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ),
                         this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );
    connect( pThreadInstance, SIGNAL( Accept( int ) ), this, SLOT( HandleAccept( int ) ) );

    return pThreadInstance;
}

QTcpClientSocketThread* QThreadGenerator::GenerateTcpClientThread( )
{
    QTcpClientSocketThread* pThreadInstance = QTcpClientSocketThread::GetInstance( );
    pThreadInstance->moveToThread( pThreadInstance );
    connect( pThreadInstance, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ),
                         this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );

    return pThreadInstance;
}

void QThreadGenerator::PostEvent( MyEnums::ThreadType thread, MyEnums::EventType event,
                                  MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver )
{
    switch ( thread ) {
    case MyEnums::ThreadLogger :
        PostLoggerEvent( event, pQueueEventParams, pLogThread );
        break;

    case MyEnums::ThreadListener :
        PostListenerEvent( event, pQueueEventParams, pReceiver );
        break;

    case MyEnums::ThreadTcpPeer :
        PostTcpPeerEvent( event, pQueueEventParams, pReceiver );
        break;

    case MyEnums::ThreadTcpClient :
        PostTcpClientEvent( event, pQueueEventParams, pReceiver );
        break;

    case MyEnums::ThreadDatabase :
        break;
    }
}

void QThreadGenerator::PostTcpClientEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread *pReceiver )
{
    bool bLogEvent = ( ( MyEnums::TcpClientEventStart < event ) && ( MyEnums::TcpClientEventEnd > event ) ) || ( MyEnums::ThreadExit == event );
    if ( !bLogEvent ) {
        return;
    }

    QTcpClientThreadEvent* pEvent = new QTcpClientThreadEvent( ( QEvent::Type ) event );
    pEvent->SetEventParams( pQueueEventParams );

    qApp->postEvent( pReceiver, pEvent );
}

void QThreadGenerator::PostLoggerEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver )
{
    bool bLogEvent = ( ( MyEnums::LogEventBegin < event ) && ( MyEnums::LogEventEnd > event ) ) || ( MyEnums::ThreadExit == event );
    if ( !bLogEvent ) {
        return;
    }

    QLoggerEvent* pEvent = new QLoggerEvent( ( QEvent::Type ) event );
    pEvent->SetEventParams( pQueueEventParams );

    qApp->postEvent( pReceiver, pEvent );
}

void QThreadGenerator::PostListenerEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver  )
{
    bool bListenerEvent = ( ( MyEnums::TcpLinstenerEventBegin < event ) && ( MyEnums::TcpLinstenerEventEnd > event ) ) || ( MyEnums::ThreadExit == event );
    if ( !bListenerEvent ) {
        return;
    }

    QListenerThreadEvent* pEvent = new QListenerThreadEvent( ( QEvent::Type ) event );
    pEvent->SetEventParams( pQueueEventParams );

    qApp->postEvent( pReceiver, pEvent );
}

void QThreadGenerator::SendEvent( MyEnums::ThreadType thread, MyEnums::EventType event,
                                  MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver )
{
    if ( NULL ==pQueueEventParams ) {
        return;
    }
}

void QThreadGenerator::PostTcpPeerEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver )
{
    bool bListenerEvent = ( ( MyEnums::TcpPeerEventStart < event ) && ( MyEnums::TcpPeerEventEnd > event ) ) || ( MyEnums::ThreadExit == event );
    if ( !bListenerEvent ) {
        return;
    }

    QTcpPeerThreadEvent* pEvent = new QTcpPeerThreadEvent( ( QEvent::Type ) event );
    pEvent->SetEventParams( pQueueEventParams );

    qApp->postEvent( pReceiver, pEvent );
}

void QThreadGenerator::HandleAccept( int socketDescriptor )
{
    bool bThreadNoRunning = g_pPeerThreadQueue.isEmpty( );
    QTcpPeerSocketThread* pReceiver = bThreadNoRunning ? QTcpPeerSocketThread::GetInstance( ) : g_pPeerThreadQueue.dequeue( );

    connect( pReceiver, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ),
                         this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );

    if ( bThreadNoRunning ) {
        pReceiver->moveToThread( pReceiver );
    }

    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash;

    hash.insertMulti( 1, socketDescriptor );
    pEventParams->enqueue( hash );

    PostTcpPeerEvent( MyEnums::TcpPeerCreateSocket, pEventParams, pReceiver);
}

void QThreadGenerator::HandleMessage( QString strMsg, QManipulateIniFile::LogTypes type )
{
    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash;

    hash.insertMulti( type, strMsg );
    pEventParams->enqueue( hash );
    PostEvent( MyEnums::ThreadLogger, MyEnums::LogWrite, pEventParams );
}
