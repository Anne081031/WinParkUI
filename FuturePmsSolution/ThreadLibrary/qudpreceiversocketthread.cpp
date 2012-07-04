#include "qudpreceiversocketthread.h"

QUdpReceiverSocketThread::QUdpReceiverSocketThread(QObject *parent) :
    QMyBaseThread(parent)
{
    setObjectName( "QUdpReceiverSocketThread" );
    OutputMsg( QString( " Created" ) );
    quint32 nStackSize = GetIniValue( QManipulateIniFile::ThreadPeerStackSize );
    setStackSize( nStackSize );
    bServerEnd = true;
    pUdpServerSocket = NULL;
}

QUdpReceiverSocketThread::~QUdpReceiverSocketThread( )
{
    if ( NULL != pUdpServerSocket ) {
        delete pUdpServerSocket;
        pUdpServerSocket = NULL;
    }

    OutputMsg( "" );
}

QUdpReceiverSocketThread* QUdpReceiverSocketThread::GetInstance(  bool bServer  )
{
    QUdpReceiverSocketThread* pThreadInstance = new QUdpReceiverSocketThread( );
    pThreadInstance->InitializeThread( );
    pThreadInstance->SetServerFlag( bServer );
    pThreadInstance->start( );
    pThreadInstance->moveToThread( pThreadInstance );

    return pThreadInstance;
}

void QUdpReceiverSocketThread::SetServerFlag( bool bServer )
{
    bServerEnd = bServer;
}

void QUdpReceiverSocketThread::run( )
{
    InitializeSubThread( );
    exec( ); // Event Loop
}

quint32 QUdpReceiverSocketThread::GetIniValue( const QManipulateIniFile::IniFileSectionItems item )
{
    QManipulateIniFile::IniFileNames file = manipulateFile.GetIniFileNameType( );
    QVariant var;

    manipulateFile.IniFileValue( file, QManipulateIniFile::IniThread, item, false, var );

    return var.toUInt( );
}

void QUdpReceiverSocketThread::InitializeSubThread( )
{

    if ( bServerEnd && NULL == pDatabaseThread ) {
        pDatabaseThread = QDatabaseThread::GetSingleton( false );
    }

    if ( NULL == pUdpServerSocket ) {
        pUdpServerSocket = network.GenerateUdpServerSocket( commonFunction.GetTextCodec( ) );
        OutputMsg( objectName( ) );
    }

    connect( &network, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ), this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );
    connect( &network, SIGNAL( GetWholeUdpDatagram( void*, QString,quint16 ) ), this, SLOT( HandleGetWholeUdpDatagram( void*, QString, quint16 ) ) );
}

void QUdpReceiverSocketThread::PostDatabaseEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread *pReceiver )
{
    bool bEvent = ( ( MyEnums::DatabaseEventStart < event ) && ( MyEnums::DatabaseEventEnd > event ) ) || ( MyEnums::ThreadExit == event );
    if ( !bEvent ) {
        return;
    }

    QDatabaseThreadEvent* pEvent = new QDatabaseThreadEvent( ( QEvent::Type ) event );
    pEvent->SetEventParams( pQueueEventParams );

    qApp->postEvent( pReceiver, pEvent );
}

void QUdpReceiverSocketThread::ProcessDatabaseData( QByteArray *pByteArray, const QString& strSenderIP, const quint16 nSenderPort )
{
    //Post Event to Database thread
    quint32 nBytePointer = ( quint32 ) pByteArray;
    quint32 nSocketPointer = ( quint32 ) pUdpServerSocket;

    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash;

    hash.insertMulti( MyEnums::NetworkParamData, nBytePointer );
    hash.insertMulti( MyEnums::NetworkParamSenderThread, ( quint32 ) this );
    hash.insertMulti( MyEnums::NetworkParamSocket, nSocketPointer );
    hash.insertMulti( MyEnums::NetworkParamUdpSenderIP, strSenderIP );
    hash.insertMulti( MyEnums::NetworkParamUdpSenderPort, nSenderPort );

    pEventParams->enqueue( hash );
    PostDatabaseEvent( MyEnums::DatabaseCrud, pEventParams, pDatabaseThread );
}

void QUdpReceiverSocketThread::ProcessOtherData( QByteArray *pByteArray, const QString& strSenderIP, const quint16 nSenderPort )
{
    QThreadPoolTask* pTask = QThreadPoolTask::GetInstance( pByteArray, this, pUdpServerSocket, NULL, false, strSenderIP, nSenderPort );
    peerThreadPool.start( pTask );
}

void QUdpReceiverSocketThread::HandleGetWholeUdpDatagram( void* pByteArray, QString strSenderIP, quint16 nSenderPort )
{
    if ( NULL == pByteArray ) {
        return;
    }

    QByteArray* pByteData = ( QByteArray* ) pByteArray;
    //if ( Database ) {
        ProcessDatabaseData( pByteData, strSenderIP, nSenderPort );
    //} else if ( ... ) {
        //ProcessOtherData(  pByteData, strSenderIP, nSenderPort );
    //}
}

void QUdpReceiverSocketThread::ProcessThreadPoolFeedbackEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    if ( NULL == pEventParams || pEventParams->isEmpty( ) ) {
        return;
    }

    MyDataStructs::QEventMultiHash& hash = pEventParams->head( );

    QVariant varData = hash.value( MyEnums::NetworkParamSocket );
    quint32 nSocketPointer = varData.toUInt( );
    QMyUdpSocket* pPeerSocket = ( QMyUdpSocket* ) nSocketPointer;

    varData = hash.value( MyEnums::NetworkParamData );
    quint32 nBytePointer = varData.toUInt( );
    QByteArray* pByteData = ( QByteArray* ) nBytePointer;

    varData = hash.value( MyEnums::NetworkParamUdpSenderIP );
    QString strSenderIP = varData.toString( );
    QHostAddress hostAddr( strSenderIP );

    varData = hash.value( MyEnums::NetworkParamUdpSenderPort );
    quint16 nSenderPort = ( quint16 ) varData.toUInt( );

    network.UdpSendDatagram( pPeerSocket, *pByteData, hostAddr, nSenderPort ); // Feedback data to client endpoint

    delete pByteData;
}

void QUdpReceiverSocketThread::ProcessStartupListeningEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    if ( NULL == pEventParams || pEventParams->isEmpty( ) ) {
        return;
    }

    MyDataStructs::QEventMultiHash& hash = pEventParams->head( );
    QVariant varData = hash.value( MyEnums::NetworkParamListenerPort );
    quint16 nPort = ( quint16 ) varData.toUInt( );

    network.StartupUdpListening( pUdpServerSocket, nPort );
}

void QUdpReceiverSocketThread::ProcessJoinMulticastEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    if ( NULL == pEventParams || pEventParams->isEmpty( ) ) {
        return;
    }

    MyDataStructs::QEventMultiHash& hash = pEventParams->head( );
    QVariant varData = hash.value( MyEnums::NetworkParamIP );
    QString strIP = varData.toString( );
    QHostAddress groupAddress( strIP );

    network.UdpOperateMulticast( pUdpServerSocket, groupAddress, true );
}

void QUdpReceiverSocketThread::ProcessLeaveMulticastEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    if ( NULL == pEventParams || pEventParams->isEmpty( ) ) {
        return;
    }

    MyDataStructs::QEventMultiHash& hash = pEventParams->head( );
    QVariant varData = hash.value( MyEnums::NetworkParamIP );
    QString strIP = varData.toString( );
    QHostAddress groupAddress( strIP );

    network.UdpOperateMulticast( pUdpServerSocket, groupAddress, false );
}

void QUdpReceiverSocketThread::ProcessBroadcastDatagramEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    if ( NULL == pEventParams || pEventParams->isEmpty( ) ) {
        return;
    }

    MyDataStructs::QEventMultiHash& hash = pEventParams->head( );
    QVariant varData = hash.value( MyEnums::NetworkParamPort );
    quint16 nPort = ( quint16 ) varData.toUInt( );

    varData = hash.value( MyEnums::NetworkParamData );
    quint32 nBytePointer = varData.toUInt( );
    QByteArray* pByteArray = ( QByteArray* ) nBytePointer;

    network.UdpBroadcastDatagram( pUdpServerSocket, *pByteArray, nPort );

    delete pByteArray;
}

void QUdpReceiverSocketThread::ProcessSendDatagramEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    if ( NULL == pEventParams || pEventParams->isEmpty( ) ) {
        return;
    }

    MyDataStructs::QEventMultiHash& hash = pEventParams->head( );
    QVariant varData = hash.value( MyEnums::NetworkParamPort );
    quint16 nPort = ( quint16 ) varData.toUInt( );

    varData = hash.value( MyEnums::NetworkParamData );
    quint32 nBytePointer = varData.toUInt( );
    QByteArray* pByteArray = ( QByteArray* ) nBytePointer;

    varData = hash.value( MyEnums::NetworkParamIP );
    QString strIP = varData.toString( );
    QHostAddress hostAddress( strIP );

    network.UdpSendDatagram( pUdpServerSocket, *pByteArray, hostAddress, nPort );

    delete pByteArray;
}

void QUdpReceiverSocketThread::customEvent( QEvent *event )
{
    QUdpReceiverThreadEvent* pEvent = ( QUdpReceiverThreadEvent* ) event;
    MyEnums::EventType type = ( MyEnums::EventType ) pEvent->type( );
    MyDataStructs::PQQueueEventParams pEventParams = pEvent->GetEventParams( );

    if ( MyEnums::UdpServerStartupListening == type ) {
        ProcessStartupListeningEvent( pEventParams );
    } else if ( MyEnums::UdpServerJoinMulticast == type ) {
        ProcessJoinMulticastEvent( pEventParams );
    } else if ( MyEnums::UdpServerLeaveMulticast == type ) {
        ProcessLeaveMulticastEvent( pEventParams );
    } else if ( MyEnums::UdpServerBroadcastDatagram == type ) {
        ProcessBroadcastDatagramEvent( pEventParams );
    } else if ( MyEnums::UdpServerSendDatagram == type ) {
        ProcessSendDatagramEvent( pEventParams );
    } else if ( MyEnums::UdpServerThreadPoolFeedback == type ) {
        ProcessThreadPoolFeedbackEvent( pEventParams );
    } else if ( MyEnums::ThreadExit == type ) {
       LaunchThreadExit( );
    }
}

