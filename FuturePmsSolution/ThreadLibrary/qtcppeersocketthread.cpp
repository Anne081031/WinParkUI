#include "qtcppeersocketthread.h"

extern QQueue< QTcpPeerSocketThread* > g_pPeerThreadQueue;

QTcpPeerSocketThread::QTcpPeerSocketThread(QObject *parent) :
    QMyBaseThread(parent)
{
    pPeerSocket = NULL;
    pDatabaseThread = NULL;
}

QTcpPeerSocketThread::~QTcpPeerSocketThread( )
{
    if ( NULL != pPeerSocket ) {
        pPeerSocket->close( );
        delete pPeerSocket;
        pPeerSocket = NULL;
    }
}

QTcpPeerSocketThread* QTcpPeerSocketThread::GetInstance( )
{
    QTcpPeerSocketThread* pThreadInstance = new QTcpPeerSocketThread( );
    pThreadInstance->InitializeThread( );
    pThreadInstance->start( );

    return pThreadInstance;
}

void QTcpPeerSocketThread::run( )
{
    InitializeSubThread( );
    exec( ); // Event Loop
}

void QTcpPeerSocketThread::InitializeSubThread( )
{
    if ( NULL == pPeerSocket ) {
        pPeerSocket = network.GenerateTcpPeerSocket( commonFunction.GetTextCodec( ) );
    }

    if ( NULL == pDatabaseThread ) {
        pDatabaseThread = QDatabaseThread::GetSingleton( );
    }

    connect( &network, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ), this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );
    connect( &network, SIGNAL( EnqueueThread( ) ), this, SLOT( HandleThreadEnqueue( ) ) );
    connect( &network, SIGNAL( GetWholeTcpStreamData( void* ) ), this, SLOT( HandleGetWholeTcpStreamData( void* ) ) );
}

void QTcpPeerSocketThread::ProcessDatabaseData( QByteArray *pByteArray )
{

}

void QTcpPeerSocketThread::ProcessOtherData( QByteArray *pByteArray )
{

}

void QTcpPeerSocketThread::HandleGetWholeTcpStreamData( void *pByteArray )
{
    if ( NULL == pByteArray ) {
        return;
    }

    QByteArray* pByteData = ( QByteArray* ) pByteArray;
    //if ( Database ) {
        ProcessDatabaseData( pByteData );
    //} else if ( ... ) {
        ProcessOtherData( pByteData );
    //}
}

void QTcpPeerSocketThread::HandleThreadEnqueue( )
{
    if ( !g_pPeerThreadQueue.contains( this ) ) {
        g_pPeerThreadQueue.enqueue( this );
    }
}

void QTcpPeerSocketThread::ProcessCreateSockeEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    bool bRet = false;
    QString strMsg;

    foreach ( const MyDataStructs::QEventMultiHash& hash, *pEventParams ) {
        foreach ( const QVariant& var, hash.values( ) ) {
             bRet = pPeerSocket->setSocketDescriptor( var.toInt( ) );
             if ( !bRet ) {
                 strMsg = " Create peer socket to fail";
                emit NotifyMessage( LogText( strMsg ), QManipulateIniFile::LogThread );
             }
        }
    }
}

void QTcpPeerSocketThread::customEvent( QEvent *event )
{
    QTcpPeerThreadEvent* pEvent = ( QTcpPeerThreadEvent* ) event;
    MyEnums::EventType type = ( MyEnums::EventType ) pEvent->type( );
    MyDataStructs::PQQueueEventParams pEventParams = pEvent->GetEventParams( );

   if ( MyEnums::TcpPeerCreateSocket == type ) {
       ProcessCreateSockeEvent( pEventParams );
   } else if ( MyEnums::ThreadExit == type ) {
       LaunchThreadExit( );
    }
}
