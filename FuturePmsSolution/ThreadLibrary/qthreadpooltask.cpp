#include "qthreadpooltask.h"
#include "../ThreadLibrary/Event/qtcppeerthreadevent.h"
#include "../ThreadLibrary/Event/qudpreceiverthreadevent.h"

QThreadPoolTask::QThreadPoolTask( QByteArray* pByteArray, QThread* pSender,
                                  QAbstractSocket* pPeerSocket, QMyDatabase* pDatabase,
                                  const bool bTcpTaskItem,
                                  const QString& strSenderIP, const quint16 nSenderPort ) :
    pByteData( pByteArray ), pSenderThread( pSender ),
    pFeedbackSocket( pPeerSocket ), pMyDatabase( pDatabase ), bTcpTask( bTcpTaskItem ),
    strTargetIP( strSenderIP ), nTargetPort( nSenderPort )
{
    setAutoDelete( true );
    OutputMsg( QString( " Created" ) );
}

QThreadPoolTask* QThreadPoolTask::GetInstance( QByteArray* pByteArray, QThread* pSender, QAbstractSocket* pPeerSocket,
                                               QMyDatabase* pDatabase, const bool bTcpTaskItem, const QString& strSenderIP, const quint16 nSenderPort )
{
    QThreadPoolTask* pTask = new QThreadPoolTask( pByteArray, pSender, pPeerSocket, pDatabase, bTcpTaskItem, strSenderIP, nSenderPort );

    return pTask;
}

void QThreadPoolTask::SetUdpDatagramType( const MyEnums::UdpDatagramType dgType )
{
    udpDatagramType = dgType;
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
    quint32 nSocketPointer = ( quint32 ) pFeedbackSocket;

    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash;

    hash.insertMulti( MyEnums::NetworkParamSocket, nSocketPointer );
    hash.insertMulti( MyEnums::NetworkParamData, nBytePointer );

    if ( !bTcpTask ) { // Udp Task
        hash.insertMulti( MyEnums::NetworkParamUdpSenderIP, strTargetIP );
        hash.insertMulti( MyEnums::NetworkParamUdpSenderPort, nTargetPort );
        hash.insertMulti( MyEnums::NetworkParamUdpDatagramType, udpDatagramType );
    }

    pEventParams->enqueue( hash );

    QEvent::Type type =  ( QEvent::Type ) ( bTcpTask ? MyEnums::TcpPeerThreadPoolFeedback : MyEnums::UdpServerThreadPoolFeedback );
    QMyThreadEvent* pEvent = NULL;

    if ( bTcpTask ) {
        pEvent = new QTcpPeerThreadEvent( type );
    } else {
        pEvent = new QUdpReceiverThreadEvent( type );
    }

    pEvent->SetEventParams( pEventParams );

    qApp->postEvent( pSenderThread, pEvent );
}

bool QThreadPoolTask::ProcessDatabaseTask( )
{
    bool bFeedback = true;

    return bFeedback;
}

bool QThreadPoolTask::ProcessOtherTask( )
{
    bool bFeedback = true;

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
