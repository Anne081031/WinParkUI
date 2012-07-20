#include "qdatabasethread.h"
QDatabaseThread* QDatabaseThread::pThreadInstance = NULL;

QDatabaseThread::QDatabaseThread(QObject *parent) :
    QMyBaseThread(parent)
{
    setObjectName( "QDatabaseThread" );
    OutputMsg( QString( " Created" ) );
    bTcpTask = true;
    pDatabaseGenerator = QDatabaseGenerator::GetSingleton( );
}

QDatabaseThread::~QDatabaseThread( )
{
    OutputMsg( "" );
}

QDatabaseThread* QDatabaseThread::GetSingleton( const bool bTcpThread )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = new QDatabaseThread( );
        pThreadInstance->InitializeThread( );
        pThreadInstance->SetTaskType( bTcpThread );
        pThreadInstance->start( );
        pThreadInstance->moveToThread( pThreadInstance );
    }

    return pThreadInstance;
}

void QDatabaseThread::SetTaskType( bool bTcpaskItem )
{
    bTcpTask = bTcpaskItem;
}

void QDatabaseThread::run( )
{
    InitializeSubThread( );
    exec( ); // Event Loop
}

void QDatabaseThread::InitializeSubThread( )
{
    // dbThreadPool init
}

void QDatabaseThread::ProcessCrudEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    if ( NULL == pEventParams || pEventParams->isEmpty( ) ) {
        return;
    }

    MyDataStructs::QEventMultiHash& hash = pEventParams->head( );

    QVariant varData = hash.value( MyEnums::NetworkParamData );
    quint32 nBytePointer = varData.toUInt( );
    QByteArray* pByteData = ( QByteArray* ) nBytePointer;

    varData = hash.value( MyEnums::NetworkParamSenderThread );
    quint32 nThreadPointer = ( quint32 ) varData.toUInt( );
    QThread* pSenderThread = ( QThread* ) nThreadPointer;

    varData = hash.value( MyEnums::NetworkParamSocket );
    quint32 nSocketPointer = ( quint32 ) varData.toUInt( );
    QAbstractSocket* pPeerSocket = ( QAbstractSocket* ) nSocketPointer;

    varData = hash.value( MyEnums::NetworkParamUdpSenderIP );
    QString strSenderIP = varData.toString( );

    varData = hash.value( MyEnums::NetworkParamUdpSenderPort );
    quint16 nSenderPort = ( quint16 ) varData.toUInt( );

    QMyDatabase* pDatabase = pDatabaseGenerator->GeneratorDatabaseInstance( true );
    QThreadPoolTask* pTask = QThreadPoolTask::GetInstance( pByteData, pSenderThread, pPeerSocket,
                                                           pDatabase, bTcpTask, strSenderIP, nSenderPort );

    if ( !bTcpTask ) {
        varData = hash.value( MyEnums::NetworkParamUdpDatagramType );
        pTask->SetUdpDatagramType( ( MyEnums::UdpDatagramType ) varData.toInt( ) );
    }
    dbThreadPool.start( pTask );
}

void QDatabaseThread::customEvent( QEvent *event )
{
    QDatabaseThreadEvent* pEvent = ( QDatabaseThreadEvent* ) event;
    MyEnums::EventType type = ( MyEnums::EventType ) pEvent->type( );
    MyDataStructs::PQQueueEventParams pEventParams = pEvent->GetEventParams( );

    if ( MyEnums::DatabaseCrud == type ) {
        ProcessCrudEvent( pEventParams );
    } else if ( MyEnums::ThreadExit == type ) {
        pThreadInstance = NULL;
        LaunchThreadExit( );
    }
}
