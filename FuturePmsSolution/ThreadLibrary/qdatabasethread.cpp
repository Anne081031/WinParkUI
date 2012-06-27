#include "qdatabasethread.h"
QDatabaseThread* QDatabaseThread::pThreadInstance = NULL;

QDatabaseThread::QDatabaseThread(QObject *parent) :
    QMyBaseThread(parent)
{
    pDatabaseGenerator = QDatabaseGenerator::GetSingleton( );
}

QDatabaseThread* QDatabaseThread::GetSingleton( )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = new QDatabaseThread( );
        pThreadInstance->InitializeThread( );
        pThreadInstance->moveToThread( pThreadInstance );
        pThreadInstance->start( );
    }

    return pThreadInstance;
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

    QMyDatabase* pDatabase = pDatabaseGenerator->GeneratorDatabaseInstance( true );
    QThreadPoolTask* pTask = QThreadPoolTask::GetInstance( pByteData, pSenderThread, pDatabase );
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
