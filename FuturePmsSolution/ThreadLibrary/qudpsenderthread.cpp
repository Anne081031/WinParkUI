#include "qudpsenderthread.h"

QUdpSenderThread::QUdpSenderThread(QObject *parent) :
    QMyBaseThread(parent)
{
    setObjectName( "QUdpSenderThread" );
    OutputMsg( QString( " Created" ) );

    qRegisterMetaType< MyEnums::UdpDatagramType >( "MyEnums::UdpDatagramType" );

    pFeedbackThread = NULL;
    pUdpClientSocket = NULL;
}

QUdpSenderThread::~QUdpSenderThread( )
{
    if ( NULL != pUdpClientSocket ) {
        delete pUdpClientSocket;
        pUdpClientSocket = NULL;
    }

    if ( NULL != pFeedbackThread ) {
        delete pFeedbackThread;
        pFeedbackThread = NULL;
    }

    OutputMsg( "" );
}

QUdpSenderThread* QUdpSenderThread::GetInstance(   )
{
    QUdpSenderThread* pThreadInstance = new QUdpSenderThread( );
    pThreadInstance->InitializeThread( );
    pThreadInstance->start( );
    pThreadInstance->moveToThread( pThreadInstance );

    return pThreadInstance;
}

void QUdpSenderThread::run( )
{
    InitializeSubThread( );
    exec( ); // Event Loop
}

void QUdpSenderThread::InitializeSubThread( )
{
    if ( NULL == pUdpClientSocket ) {
        pUdpClientSocket = network.GenerateUdpClientSocket( commonFunction.GetTextCodec( ) );
        OutputMsg( objectName( ) );
    }

    connect( &network, SIGNAL( NotifyMessage( void*, QManipulateIniFile::LogTypes ) ), this, SLOT( HandleMessage( void*, QManipulateIniFile::LogTypes ) ) );
    connect( &network, SIGNAL( GetWholeUdpDatagram( void*, QString,quint16 ) ), this, SLOT( HandleGetWholeUdpDatagram( void*, QString, quint16 ) ) );

    if ( NULL == pFeedbackThread ) {
        pFeedbackThread = QUdpFeedbackThread::GetInstance( this );
    }

    SetFeedbackThreadSocketDescriptor( );
    pFeedbackThread->start( );
    pFeedbackThread->moveToThread( pFeedbackThread );
}

void QUdpSenderThread::HandleGetWholeUdpDatagram( void* pByteArray, QString strSenderIP, quint16 nSenderPort )
{
    OutputMsg( "Sender:" + sender( )->objectName( ) + "GetWholeUdpDatagram( ... )" );
    emit GetWholeUdpDatagram( pByteArray, strSenderIP, nSenderPort, MyEnums::UdpUnicast );
}

void QUdpSenderThread::ProcessBroadcastDatagramEvent( MyDataStructs::PQQueueEventParams pEventParams )
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

    network.UdpBroadcastDatagram( pUdpClientSocket, *pByteArray, nPort );

    delete pByteArray;
}

void QUdpSenderThread::ProcessReceiveDatagramEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    if ( NULL == pEventParams || pEventParams->isEmpty( ) ) {
        return;
    }

    MyDataStructs::QEventMultiHash& hash = pEventParams->head( );
    QVariant varData = hash.value( MyEnums::NetworkParamPort );
    quint16 nSenderPort = ( quint16 ) varData.toUInt( );

    varData = hash.value( MyEnums::NetworkParamIP);
    QString strSenderIP = varData.toString( );

    varData = hash.value( MyEnums::NetworkParamData );
    quint32 nBytePointer = varData.toUInt( );
    QByteArray* pByteArray = ( QByteArray* ) nBytePointer;

    OutputMsg( "emit GetWholeUdpDatagram( ... )" );
    emit GetWholeUdpDatagram( pByteArray, strSenderIP, nSenderPort, MyEnums::UdpUnicast );
}

void QUdpSenderThread::SetFeedbackThreadSocketDescriptor( )
{
    QHostAddress hostAddress( "127.0.0.1" );
    QByteArray byData( "GetDescriptor" );

    network.UdpSendDatagram( pUdpClientSocket, byData, hostAddress, ( quint16 ) 12345 );

    int nSocket = pUdpClientSocket->socketDescriptor( );
    pFeedbackThread->SendSetSocketDescriptorSignal( nSocket );
}

void QUdpSenderThread::ProcessSendDatagramEvent( MyDataStructs::PQQueueEventParams pEventParams )
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

    network.UdpSendDatagram( pUdpClientSocket, *pByteArray, hostAddress, nPort );

    delete pByteArray;
}

void QUdpSenderThread::customEvent( QEvent *event )
{
    QUdpSenderThreadEvent* pEvent = ( QUdpSenderThreadEvent* ) event;
    MyEnums::EventType type = ( MyEnums::EventType ) pEvent->type( );
    MyDataStructs::PQQueueEventParams pEventParams = pEvent->GetEventParams( );

    if ( MyEnums::UdpClientBroadcastDatagram == type ) {
        ProcessBroadcastDatagramEvent( pEventParams );
    } else if ( MyEnums::UdpClientSendDatagram == type ) {
        ProcessSendDatagramEvent( pEventParams );
    } else if ( MyEnums::UdpClientReceiveDatagram == type ) {
        ProcessReceiveDatagramEvent( pEventParams );
    } else if ( MyEnums::ThreadExit == type ) {
       pFeedbackThread->terminate( );
       LaunchThreadExit( );
    }
}
