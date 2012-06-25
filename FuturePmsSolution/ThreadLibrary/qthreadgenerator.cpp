#include "qthreadgenerator.h"
#include <QMetaType>

QThreadGenerator* QThreadGenerator::pThreadGenerator = NULL;
QListenerThread* QThreadGenerator::pListenerThread = NULL;
QLoggerThread* QThreadGenerator::pLogThread = NULL;

QQueue< QTcpPeerSocketThread* > g_pPeerThreadQueue;

QThreadGenerator::QThreadGenerator(QObject *parent) :
    QObject(parent)
{
    qRegisterMetaType< QManipulateIniFile::LogTypes >( "QManipulateIniFile::LogTypes" );

    pLogThread = QLoggerThread::GetSingleton( );
    pListenerThread = QListenerThread::GetSingleton( );
}

QThreadGenerator* QThreadGenerator::GetSingleton( )
{
    if ( NULL == pThreadGenerator ) {
        pThreadGenerator = new QThreadGenerator( );
        connect( pListenerThread, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ),
                        pThreadGenerator, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );

        connect( pListenerThread, SIGNAL( Accept( int ) ), pThreadGenerator, SLOT( HandleAccept( int ) ) );
    }

    return pThreadGenerator;
}

QTcpClientSocketThread* QThreadGenerator::GenerateTcpClientThread( )
{
    QTcpClientSocketThread* pThreadInstance = QTcpClientSocketThread::GetInstance( );
    pThreadInstance->moveToThread( pThreadInstance );

    return pThreadInstance;
}

void QThreadGenerator::PostEvent( MyEnums::ThreadType thread, MyEnums::EventType event,
                                  MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver )
{
    switch ( thread ) {
    case MyEnums::ThreadLogger :
        PostLoggerEvent( event, pQueueEventParams );
        break;

    case MyEnums::ThreadListener :
        PostListenerEvent( event, pQueueEventParams );
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

void QThreadGenerator::PostLoggerEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams )
{
    bool bLogEvent = ( ( MyEnums::LogEventBegin < event ) && ( MyEnums::LogEventEnd > event ) ) || ( MyEnums::ThreadExit == event );
    if ( !bLogEvent ) {
        return;
    }

    QLoggerEvent* pEvent = new QLoggerEvent( ( QEvent::Type ) event );
    pEvent->SetEventParams( pQueueEventParams );

    qApp->postEvent( pLogThread, pEvent );
}

void QThreadGenerator::PostListenerEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams )
{
    bool bListenerEvent = ( ( MyEnums::LinstenerEventBegin < event ) && ( MyEnums::LinstenerEventEnd > event ) ) || ( MyEnums::ThreadExit == event );
    if ( !bListenerEvent ) {
        return;
    }

    QListenerThreadEvent* pEvent = new QListenerThreadEvent( ( QEvent::Type ) event );
    pEvent->SetEventParams( pQueueEventParams );

    qApp->postEvent( pListenerThread, pEvent );
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
