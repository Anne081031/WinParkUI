#include "qdatabaseprocessor.h"

QDatabaseProcessor::QDatabaseProcessor(QObject *parent) :
    QThread(parent)
{
    setObjectName( QString( "[Database Processor Thread ID = %1]" ).arg( qrand( ) ) );
    pResSemaphore = NULL;
    pDataDispatcher = NULL;
    pDatabase = NULL;
    pConfig = CDbConfigurator::GetConfigurator( );
    nDbOperationCount = pConfig->GetDbThreadOperationCount( );
}

QDatabaseProcessor::~QDatabaseProcessor( )
{
    if ( NULL != pResSemaphore ) {
        delete pResSemaphore;
        pResSemaphore = NULL;
    }

    if ( NULL != pDatabase ) {
        delete pDatabase;
        pDatabase = NULL;
    }
}

void QDatabaseProcessor::SetDataDispatcher(QThread *pDispatcher)
{
    pDataDispatcher = pDispatcher;
}

QDatabaseProcessor* QDatabaseProcessor::CreateThread( QObject *parent )
{
    QDatabaseProcessor* pThread = new QDatabaseProcessor( parent );

    pThread->start( );
    pThread->moveToThread( pThread );

    return pThread;
}

qint32 QDatabaseProcessor::GetFreeOperationCount( )
{
    qint32 nCount = pResSemaphore->available( );
    qDebug( ) << Q_FUNC_INFO << objectName( )
              << ":" << QString::number( nCount ) << endl;
    return nCount;
}

void QDatabaseProcessor::AcquireProcessor( qint32 nResCount )
{
    pResSemaphore->acquire( nResCount );
}

bool QDatabaseProcessor::TryAcquireProcessor( )
{
    qDebug( ) <<  Q_FUNC_INFO << ":"
               << objectName( ) << endl;
    return pResSemaphore->tryAcquire( 1 );
}

bool QDatabaseProcessor::TryAcquireProcessor( qint32 nTimeout )
{
    qDebug( ) <<  Q_FUNC_INFO << ":"
               << objectName( ) << endl;
    return pResSemaphore->tryAcquire( 1, nTimeout * 1000 );
}

void QDatabaseProcessor::HandleLog( QString strLog, bool bStatic )
{
    SendLog( strLog, bStatic );
}

void QDatabaseProcessor::SendLog( QString &strLog, bool bStatic )
{
    emit Log( strLog, bStatic );
}

void QDatabaseProcessor::InitializeSubThread( )
{
    pConfig->ReadDbInfo( lstDbInfo );
    pResSemaphore = new QSemaphore( nDbOperationCount );
    pDatabase = new CMySqlDatabase( );
    pDatabase->setObjectName( objectName( ) );

    connect( pDatabase, SIGNAL( NotifyError( QString, bool ) ),
             this, SLOT( HandleLog( QString, bool ) ) );

    dataProcessor.SetDatabase( pDatabase );

    ProcessDatabaseConnectEvent( NULL );
}

void QDatabaseProcessor::run( )
{
    QString strLog = objectName() + " Started.";
    SendLog( strLog, true );
    InitializeSubThread( );
    exec() ;
}

void QDatabaseProcessor::customEvent( QEvent *event )
{
    QDbThreadEvent* pEvent = ( QDbThreadEvent* ) event;
    QDbThreadEvent::EventType evtType = ( QDbThreadEvent::EventType ) pEvent->type( );

    if ( QDbThreadEvent::EventProcessDbData == evtType ) {
        ProcessDatabaseDataEvent( pEvent );
    } else if ( QDbThreadEvent::EventConnectDb == evtType ) {
        ProcessDatabaseConnectEvent( pEvent );
    }
}

void QDatabaseProcessor::ProcessDatabaseDataEvent( QDbThreadEvent *pEvent )
{
    // Consumer
    QTcpSocket* pSocket = pEvent->GetPeerSocket( );
    qint32 nPackageType = pEvent->GetDataPackageType( );
    QByteArray& byData = pEvent->GetByteArray( );

    QString strLog = pDataDispatcher->objectName( ) + ":"
            + objectName( ) + ":" + QString( byData );
    SendLog( strLog, false );

    ProcessDatabaseConnectEvent( NULL );
    dataProcessor.SetPeerSocket( pSocket );
    dataProcessor.ProcessData( nPackageType, byData );
    pResSemaphore->release( 1 );
}

void QDatabaseProcessor::ProcessDatabaseConnectEvent( QDbThreadEvent *pEvent )
{
    Q_UNUSED( pEvent )
    QStringList lstInfo;
    pConfig->ReadDbInfo( lstInfo );

    if ( 5 != lstDbInfo.count( ) || 5 != lstInfo.length( ) ) {
        QString strLog = "Database argument error.";
        SendLog( strLog, true );
        return;
    }

    bool bRet = ( lstDbInfo.at( 0 ) != lstInfo.at( 0 ) );

    if ( !pDatabase->GetFirstConnect( ) && bRet ) {
        pDatabase->SetFirstConnect( bRet );
    }

    if ( pDatabase->GetFirstConnect( ) ) {
        bRet = pDatabase->DbConnect( lstDbInfo.at( 0 ),
                                     lstDbInfo.at( 1 ),
                                     lstDbInfo.at( 2 ),
                                     lstDbInfo.at( 3 ),
                                     lstDbInfo.at( 4 ).toUInt( ) );
    } else {
        do {
            bRet = pDatabase->PingMysql( );

            if ( !bRet ) {
                sleep( 1 );
            }
        } while ( !bRet );
    }
}

void QDatabaseProcessor::PostDbConnectEvent( )
{
    QDbThreadEvent* pEvent = QDbThreadEvent::CreateThreadEvent( QDbThreadEvent::ThreadDbProcessor, QDbThreadEvent::EventConnectDb );

    PostEvent( pEvent );
}

void QDatabaseProcessor::PostDbDataProcessEvent( QTcpSocket *pSocket, qint32 nPackageType, QByteArray &byData )
{
    QDbThreadEvent* pEvent = QDbThreadEvent::CreateThreadEvent( QDbThreadEvent::ThreadDbProcessor, QDbThreadEvent::EventProcessDbData );

    pEvent->SetDataPackageType( nPackageType );
    pEvent->SetByteArray( byData );
    pEvent->SetPeerSocket( pSocket );

    PostEvent( pEvent );
}

void QDatabaseProcessor::PostEvent( QDbThreadEvent *pEvent )
{
    qApp->postEvent( this, pEvent );
}
