#include "qthreadpooltask.h"

QThreadPoolTask::QThreadPoolTask( QByteArray* pByteArray, QThread* pSender, QMyDatabase* pDatabase ) :
    pByteData( pByteArray ), pSenderThread( pSender ), pMyDatabase( pDatabase )
{
    setAutoDelete( true );
}

QThreadPoolTask* QThreadPoolTask::GetInstance( QByteArray* pByteArray, QThread* pSender, QMyDatabase* pDatabase )
{
    QThreadPoolTask* pTask = new QThreadPoolTask( pByteArray, pSender );

    return pTask;
}

void QThreadPoolTask::ProcessDatabaseTask( )
{

}

void QThreadPoolTask::ProcessOtherTask( )
{

}

void QThreadPoolTask::run( )
{
    if ( NULL == pByteData ) {
        return;
    }

    if ( NULL == pMyDatabase ) {
        ProcessOtherTask( );
    } else {
        ProcessDatabaseTask( );
    }

    delete pByteData;
    pByteData = NULL;
}
