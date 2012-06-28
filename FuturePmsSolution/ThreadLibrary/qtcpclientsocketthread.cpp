#include "qtcpclientsocketthread.h"

QTcpClientSocketThread::QTcpClientSocketThread(QObject *parent) :
    QMyBaseThread(parent)
{
    pClientSocket = NULL;
}

QTcpClientSocketThread::~QTcpClientSocketThread( )
{
    if ( NULL != pClientSocket ) {
        pClientSocket->close( );
        delete pClientSocket;
        pClientSocket = NULL;
    }
}

QTcpClientSocketThread* QTcpClientSocketThread::GetInstance( )
{
    QTcpClientSocketThread* pThreadInstance = new QTcpClientSocketThread( );
    pThreadInstance->InitializeThread( );
    pThreadInstance->start( );
    pThreadInstance->moveToThread( pThreadInstance );

    return pThreadInstance;
}

void QTcpClientSocketThread::run( )
{
    InitializeSubThread( );
    exec( ); // Event Loop
}

void QTcpClientSocketThread::InitializeSubThread( )
{
    if ( NULL == pClientSocket ) {
        pClientSocket = network.GenerateTcpClientSocket( commonFunction.GetTextCodec( ) );
        qDebug( ) << pClientSocket->thread( )->metaObject( )->className( ) << endl;
    }

    connect( &network, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ), this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );
    connect( &network, SIGNAL( GetWholeTcpStreamData( void* ) ), this, SLOT( HandleGetWholeTcpStreamData( void* ) ) );
}

void QTcpClientSocketThread::HandleGetWholeTcpStreamData( void *pByteArray )
{
    emit GetWholeTcpStreamData( pByteArray );
}

void QTcpClientSocketThread::ProcessSendDataEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    if ( NULL == pEventParams || pEventParams->isEmpty( ) ) {
        return;
    }

    MyDataStructs::QEventMultiHash& hash = pEventParams->head( );
    QVariant varData = hash.value( MyEnums::NetworkParamData );
    quint32 nBytePointer = varData.toUInt( );

    QByteArray* pByteData = ( QByteArray* ) nBytePointer;
    network.TcpSendData( pClientSocket, *pByteData );

    delete pByteData;
}

void QTcpClientSocketThread::ProcessConnectEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    if ( NULL == pEventParams || pEventParams->isEmpty( ) ||
         QAbstractSocket::ConnectedState == pClientSocket->state( ) ) {
        return;
    }

    MyDataStructs::QEventMultiHash& hash = pEventParams->head( );

    QVariant varIP = hash.value( MyEnums::NetworkParamIP );
    QVariant varPort = hash.value( MyEnums::NetworkParamPort );
    QString strIP = varIP.toString( );
    quint16 nPort = varPort.toString( ).toUShort( );
    QHostAddress addr( strIP );

    bool bRet = network.TcpConnect2Server( pClientSocket, addr, nPort );
    if ( !bRet ) {
        QString strMsg = QString( "Connect [ %1 : %2 ] to fail" ).arg( strIP, QString::number( nPort ) );
        emit NotifyMessage( LogText( strMsg ), QManipulateIniFile::LogThread );
    }
}

void QTcpClientSocketThread::ProcessDisconnectEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    // ¶ÏÁ´ÖØÁ¬
    pClientSocket->disconnectFromHost( );
}

void QTcpClientSocketThread::customEvent( QEvent *event )
{
    QTcpClientThreadEvent* pEvent = ( QTcpClientThreadEvent* ) event;
    MyEnums::EventType type = ( MyEnums::EventType ) pEvent->type( );
    MyDataStructs::PQQueueEventParams pEventParams = pEvent->GetEventParams( );

   if ( MyEnums::TcpClientSendData == type ) {
       ProcessSendDataEvent( pEventParams );
   } else if ( MyEnums::TcpClientConnect == type ) {
       ProcessConnectEvent( pEventParams );
   } else if ( MyEnums::TcpClientDisconnect == type ) {
       ProcessDisconnectEvent( pEventParams );
   } else if ( MyEnums::ThreadExit == type ) {
       LaunchThreadExit( );
    }
}
