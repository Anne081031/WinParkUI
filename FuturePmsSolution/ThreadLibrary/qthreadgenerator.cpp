#include "qthreadgenerator.h"
#include <QMetaType>

QThreadGenerator* QThreadGenerator::pThreadGenerator = NULL;

QThreadGenerator::QThreadGenerator(QObject *parent) :
    QObject(parent)
{
    setObjectName( "QThreadGenerator" );
    qRegisterMetaType< QManipulateIniFile::LogTypes >( "QManipulateIniFile::LogTypes" );
    OutputMsg( QString( " Created" ) );
    nThreadReleaseTimerID = 0;
}

void QThreadGenerator::timerEvent( QTimerEvent *event )
{
    if ( event->timerId( ) == nThreadReleaseTimerID ) {
        QTcpPeerSocketThread::ReleaseThread( );
    }
}

void QThreadGenerator::ControlTimer( const bool bStart, const int nInterval )
{
    if ( bStart ) {
        nThreadReleaseTimerID = startTimer( nInterval );
    } else {
        killTimer( nThreadReleaseTimerID );
    }
}

QLoggerThread* QThreadGenerator::GenerateLogThread( )
{
    return QLoggerThread::GetSingleton( );
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
    connect( pThreadInstance, SIGNAL( NotifyMessage( void*, QManipulateIniFile::LogTypes ) ),
                         this, SLOT( HandleMessage( void*, QManipulateIniFile::LogTypes ) ) );
    connect( pThreadInstance, SIGNAL( Accept( int ) ), this, SLOT( HandleAccept( int ) ) );

    return pThreadInstance;
}

QUdpReceiverSocketThread* QThreadGenerator::GenerateUdpListenerThread( const bool bServer, const MyEnums::UdpDatagramType dgType )
{
    QUdpReceiverSocketThread* pThreadInstance = QUdpReceiverSocketThread::GetInstance( bServer, dgType );
    connect( pThreadInstance, SIGNAL( NotifyMessage( void*, QManipulateIniFile::LogTypes ) ),
                         this, SLOT( HandleMessage( void*, QManipulateIniFile::LogTypes ) ) );

    return pThreadInstance;
}

QTcpClientSocketThread* QThreadGenerator::GenerateTcpClientThread( )
{
    QTcpClientSocketThread* pThreadInstance = QTcpClientSocketThread::GetInstance( );
    connect( pThreadInstance, SIGNAL( NotifyMessage( void*, QManipulateIniFile::LogTypes ) ),
                         this, SLOT( HandleMessage( void*, QManipulateIniFile::LogTypes ) ) );

    return pThreadInstance;
}

void QThreadGenerator::PostEvent( MyEnums::ThreadType thread, MyEnums::EventType event,
                                  MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver )
{
    switch ( thread ) {
    case MyEnums::ThreadLogger :
        PostLoggerEvent( event, pQueueEventParams, pReceiver );
        break;

    case MyEnums::ThreadTcpListener :
        PostTcpListenerEvent( event, pQueueEventParams, pReceiver );
        break;

    case MyEnums::ThreadTcpPeer :
        PostTcpPeerEvent( event, pQueueEventParams, pReceiver );
        break;

    case MyEnums::ThreadTcpClient :
        PostTcpClientEvent( event, pQueueEventParams, pReceiver );
        break;

    case MyEnums::ThreadUdpListener :
        PostUdpListenerEvent( event, pQueueEventParams, pReceiver );
        break;

    case MyEnums::ThreadDatabase :
        break;
    }
}

void QThreadGenerator::PostTcpClientEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread *pReceiver )
{
    bool bEvent = ( ( MyEnums::TcpClientEventStart < event ) && ( MyEnums::TcpClientEventEnd > event ) ) || ( MyEnums::ThreadExit == event );
    if ( !bEvent ) {
        return;
    }

    QTcpClientThreadEvent* pEvent = new QTcpClientThreadEvent( ( QEvent::Type ) event );
    pEvent->SetEventParams( pQueueEventParams );

    qApp->postEvent( pReceiver, pEvent );
}

void QThreadGenerator::PostLoggerEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver )
{
    bool bEvent = ( ( MyEnums::LogEventBegin < event ) && ( MyEnums::LogEventEnd > event ) ) || ( MyEnums::ThreadExit == event );
    if ( !bEvent ) {
        return;
    }

    QLoggerEvent* pEvent = new QLoggerEvent( ( QEvent::Type ) event );
    pEvent->SetEventParams( pQueueEventParams );

    qApp->postEvent( pReceiver, pEvent );
}

void QThreadGenerator::PostTcpListenerEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver  )
{
    bool bEvent = ( ( MyEnums::TcpLinstenerEventBegin < event ) && ( MyEnums::TcpLinstenerEventEnd > event ) ) || ( MyEnums::ThreadExit == event );
    if ( !bEvent ) {
        return;
    }

    QListenerThreadEvent* pEvent = new QListenerThreadEvent( ( QEvent::Type ) event );
    pEvent->SetEventParams( pQueueEventParams );

    qApp->postEvent( pReceiver, pEvent );
}

void QThreadGenerator::PostUdpListenerEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread* pReceiver  )
{
    bool bEvent = ( ( MyEnums::UdpServerEventStart < event ) && ( MyEnums::UdpServerEventEnd> event ) ) || ( MyEnums::ThreadExit == event );
    if ( !bEvent ) {
        return;
    }

    QUdpReceiverThreadEvent* pEvent = new QUdpReceiverThreadEvent( ( QEvent::Type ) event );
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
    bool bEvent = ( ( MyEnums::TcpPeerEventStart < event ) && ( MyEnums::TcpPeerEventEnd > event ) ) || ( MyEnums::ThreadExit == event );
    if ( !bEvent ) {
        return;
    }

    QTcpPeerThreadEvent* pEvent = new QTcpPeerThreadEvent( ( QEvent::Type ) event );
    pEvent->SetEventParams( pQueueEventParams );

    qApp->postEvent( pReceiver, pEvent );
}

void QThreadGenerator::HandleAccept( int socketDescriptor )
{
    OutputMsg( sender( )->objectName( ) );
    bool bSignalConnected = false;
    QTcpPeerSocketThread* pReceiver = QTcpPeerSocketThread::GetInstance( bSignalConnected );

    if ( !bSignalConnected ) { // Not connect
        connect( pReceiver, SIGNAL( NotifyMessage( void*, QManipulateIniFile::LogTypes ) ),
                             this, SLOT( HandleMessage( void*, QManipulateIniFile::LogTypes ) ) );
        connect( pReceiver, SIGNAL( ReleaseMyself( QTcpPeerSocketThread* ) ),
                 this, SLOT( HandlePeerThreadReleaseMyself( QTcpPeerSocketThread* ) ) );
    }

    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash;

    hash.insertMulti( 1, socketDescriptor );
    pEventParams->enqueue( hash );

    PostTcpPeerEvent( MyEnums::TcpPeerCreateSocket, pEventParams, pReceiver);
}

void QThreadGenerator::HandlePeerThreadReleaseMyself( QTcpPeerSocketThread *pThread )
{
    PostEvent( MyEnums::ThreadTcpPeer, MyEnums::ThreadExit, NULL, pThread );
}

void QThreadGenerator::HandleMessage( void* pstrMsg, QManipulateIniFile::LogTypes type )
{
    QString* pMsg = ( QString* ) pstrMsg;
    OutputMsg( "Sender:" + sender( )->objectName( ) + QString( ":( %1, LogTypes=%2 )" ).arg( *pMsg, QString::number( type ) ) );
    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash;

    hash.insertMulti( type, *pMsg );
    pEventParams->enqueue( hash );
    PostEvent( MyEnums::ThreadLogger, MyEnums::LogWrite, pEventParams, GenerateLogThread( ) );

    delete pMsg;
}
