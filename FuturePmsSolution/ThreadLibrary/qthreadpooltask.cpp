#include "qthreadpooltask.h"
#include "../ThreadLibrary/Event/qtcppeerthreadevent.h"

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

void QThreadPoolTask::FreeByteArray( bool bFeedback )
{
    if ( NULL != pByteData && !bFeedback ) {
        delete pByteData;
        pByteData = NULL;
    }
}

void QThreadPoolTask::PostThreadPoolFeedbackEvent( bool bFeedback )
{
    if ( !bFeedback ) {
        return;
    }

    quint32 nBytePointer = ( quint32 ) pByteData;
    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash;
    hash.insertMulti( MyEnums::NetworkParamData, nBytePointer );

    pEventParams->enqueue( hash );

    QTcpPeerThreadEvent* pEvent = new QTcpPeerThreadEvent( ( QEvent::Type ) MyEnums::TcpPeerThreadPoolFeedback );
    pEvent->SetEventParams( pEventParams );

    qApp->postEvent( pSenderThread, pEvent );
}

bool QThreadPoolTask::ProcessDatabaseTask( )
{
    bool bFeedback = false;

    return bFeedback;
}

bool QThreadPoolTask::ProcessOtherTask( )
{
    bool bFeedback = false;

    return bFeedback;
}

void QThreadPoolTask::run( )
{
    if ( NULL == pByteData ) {
        return;
    }

    bool bFeedback = false;

    if ( NULL == pMyDatabase ) {
        bFeedback = ProcessOtherTask( );
    } else {
        bFeedback = ProcessDatabaseTask( );
    }

    PostThreadPoolFeedbackEvent( bFeedback );
    FreeByteArray( bFeedback );
}
