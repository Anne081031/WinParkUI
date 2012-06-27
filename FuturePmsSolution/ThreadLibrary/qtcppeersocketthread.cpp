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

void QTcpPeerSocketThread::PostDatabaseEvent( MyEnums::EventType event, MyDataStructs::PQQueueEventParams pQueueEventParams, QThread *pReceiver )
{
    bool bEvent = ( ( MyEnums::DatabaseEventStart < event ) && ( MyEnums::DatabaseEventEnd > event ) ) || ( MyEnums::ThreadExit == event );
    if ( !bEvent ) {
        return;
    }

    QDatabaseThreadEvent* pEvent = new QDatabaseThreadEvent( ( QEvent::Type ) event );
    pEvent->SetEventParams( pQueueEventParams );

    qApp->postEvent( pReceiver, pEvent );
}

void QTcpPeerSocketThread::ProcessDatabaseData( QByteArray *pByteArray )
{
    //Post Event to Database thread
    quint32 nBytePointer = ( quint32 ) pByteArray;
    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash;
    hash.insertMulti( MyEnums::NetworkParamData, nBytePointer );
    hash.insertMulti( MyEnums::NetworkParamSenderThread, ( quint32 ) this );

    pEventParams->enqueue( hash );
    PostDatabaseEvent( MyEnums::DatabaseCrud, pEventParams, pDatabaseThread );
}

void QTcpPeerSocketThread::ProcessOtherData( QByteArray *pByteArray )
{
    QThreadPoolTask* pTask = QThreadPoolTask::GetInstance( pByteArray, this );
    peerThreadPool.start( pTask );
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

void QTcpPeerSocketThread::ProcessThreadPoolFeedbackEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    if ( NULL == pEventParams || pEventParams->isEmpty( ) ) {
        return;
    }

    MyDataStructs::QEventMultiHash& hash = pEventParams->head( );
    QVariant varData = hash.value( MyEnums::NetworkParamData );
    quint32 nBytePointer = varData.toUInt( );
    QByteArray* pByteData = ( QByteArray* ) nBytePointer;

    network.TcpSendData( pPeerSocket, * pByteData );

    delete pByteData;
}

void QTcpPeerSocketThread::ProcessCreateSockeEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    if ( NULL == pEventParams || pEventParams->isEmpty( ) ) {
        return;
    }

    bool bRet = false;
    QString strMsg;
    QDateTime dt = QDateTime::currentDateTime( );
    QString strDateTime = commonFunction.GetDateTimeString( dt );
    QManipulateIniFile::LogType log;

    foreach ( const MyDataStructs::QEventMultiHash& hash, *pEventParams ) {
        foreach ( const QVariant& var, hash.values( ) ) {
             bRet = pPeerSocket->setSocketDescriptor( var.toInt( ) );
             if ( !bRet ) {
                 log = QManipulateIniFile::LogThread;
                 strMsg = QString( " %1 Create peer socket to fail" ).arg( strDateTime );
             } else {
                 log = QManipulateIniFile::LogNetwork;
                 QString strKey = QString( "%1:%2" ).arg( pPeerSocket->peerAddress( ).toString( ),
                                                          QString::number( pPeerSocket->peerPort( ) ) );
                 strMsg = QString ( "%1 %2 %3" ).arg( strDateTime, strKey, "Connected to Server." );
             }

             emit NotifyMessage( LogText( strMsg ), log);
        }
    }
}

void QTcpPeerSocketThread::customEvent( QEvent *event )
{
    QTcpPeerThreadEvent* pEvent = ( QTcpPeerThreadEvent* ) event;
    MyEnums::EventType type = ( MyEnums::EventType ) pEvent->type( );
    MyDataStructs::PQQueueEventParams pEventParams = pEvent->GetEventParams( );

    if ( MyEnums::TcpPeerThreadPoolFeedback == type ) {
        ProcessThreadPoolFeedbackEvent( pEventParams );
    } else if ( MyEnums::TcpPeerCreateSocket == type ) {
       ProcessCreateSockeEvent( pEventParams );
   } else if ( MyEnums::ThreadExit == type ) {
       LaunchThreadExit( );
    }
}
