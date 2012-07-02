#include "qtcppeersocketthread.h"

QQueue< QTcpPeerSocketThread* > QTcpPeerSocketThread::peerThreadQueue;

QTcpPeerSocketThread::QTcpPeerSocketThread(QObject *parent) :
    QMyBaseThread(parent)
{
    pDatabaseThread = NULL;
    setObjectName( "QTcpPeerSocketThread" );
    quint32 nStackSize = GetIniValue( QManipulateIniFile::ThreadPeerStackSize );
    setStackSize( nStackSize );

    OutputMsg( QString( " Created" ) );
}

QTcpPeerSocketThread::~QTcpPeerSocketThread( )
{
    DestroyPeerSocket( );
}

void QTcpPeerSocketThread::DestroyPeerSocket( )
{
    foreach ( QTcpSocket* pSocket, socketHash.values() ) {
        pSocket->close( );
        delete pSocket;
    }
}

bool QTcpPeerSocketThread::SignalConnected( )
{
    int nSignal = receivers( SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ) );

    return ( 0 < nSignal );
}

QTcpPeerSocketThread* QTcpPeerSocketThread::GetInstance( bool& bSignalConnected )
{
    bool bEmpty = peerThreadQueue.isEmpty( );
    QTcpPeerSocketThread* pThreadInstance = bEmpty ? new QTcpPeerSocketThread( ) : peerThreadQueue.dequeue( );

    if ( bEmpty ) {
        pThreadInstance->InitializeThread( );
        pThreadInstance->start( );
        pThreadInstance->moveToThread( pThreadInstance );
    }

    bSignalConnected = pThreadInstance->SignalConnected( );

    return pThreadInstance;
}

void QTcpPeerSocketThread::run( )
{
    InitializeSubThread( );
    exec( ); // Event Loop
}

quint32 QTcpPeerSocketThread::GetIniValue( const QManipulateIniFile::IniFileSectionItems item )
{
    QManipulateIniFile::IniFileNames file = manipulateFile.GetIniFileNameType( );
    QVariant var;

    manipulateFile.IniFileValue( file, QManipulateIniFile::IniThread, item, false, var );

    return var.toUInt( );
}

void QTcpPeerSocketThread::GetThreadPeerSocketCount( )
{
    nThreadPeerSocketCount = ( quint8 ) GetIniValue( QManipulateIniFile::ThreadPeerSocketCount );
}

QTcpPeerClient* QTcpPeerSocketThread::CreatePeerSocket( char nMaxSocket )
{
    QTcpPeerClient* pPeerSocket= NULL;

    for ( char cCount = 0; cCount < nMaxSocket; cCount++ ) {
        pPeerSocket = network.GenerateTcpPeerSocket( commonFunction.GetTextCodec( ) );
        socketHash.insertMulti( true, pPeerSocket );
    }

    return pPeerSocket;
}

void QTcpPeerSocketThread::InitializeSubThread( )
{
    GetThreadPeerSocketCount( );
    CreatePeerSocket( nThreadPeerSocketCount );

    if ( NULL == pDatabaseThread ) {
        pDatabaseThread = QDatabaseThread::GetSingleton( );
    }

    connect( &network, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ), this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );
    connect( &network, SIGNAL( EnqueueThread( QTcpSocket*  ) ), this, SLOT( HandleThreadEnqueue( QTcpSocket*  ) ) );
    connect( &network, SIGNAL( GetWholeTcpStreamData( QTcpSocket*, void* ) ), this, SLOT( HandleGetWholeTcpStreamData( QTcpSocket*, void* ) ) );
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

void QTcpPeerSocketThread::ProcessDatabaseData( QTcpSocket* pPeerSocket, QByteArray *pByteArray )
{
    //Post Event to Database thread
    quint32 nBytePointer = ( quint32 ) pByteArray;
    quint32 nSocketPointer = ( quint32 ) pPeerSocket;

    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash;

    hash.insertMulti( MyEnums::NetworkParamData, nBytePointer );
    hash.insertMulti( MyEnums::NetworkParamSenderThread, ( quint32 ) this );
    hash.insertMulti( MyEnums::NetworkParamSocket, nSocketPointer );

    pEventParams->enqueue( hash );
    PostDatabaseEvent( MyEnums::DatabaseCrud, pEventParams, pDatabaseThread );
}

void QTcpPeerSocketThread::ProcessOtherData( QTcpSocket* pPeerSocket, QByteArray *pByteArray )
{
    QThreadPoolTask* pTask = QThreadPoolTask::GetInstance( pByteArray, this, pPeerSocket );
    peerThreadPool.start( pTask );
}

void QTcpPeerSocketThread::HandleGetWholeTcpStreamData( QTcpSocket* pPeerSocket, void *pByteArray )
{
    if ( NULL == pByteArray ) {
        return;
    }

    QByteArray* pByteData = ( QByteArray* ) pByteArray;
    //if ( Database ) {
        ProcessDatabaseData(pPeerSocket,  pByteData );
    //} else if ( ... ) {
        //ProcessOtherData( pPeerSocket, pByteData );
    //}
}

void QTcpPeerSocketThread::ThreadEnqueue( )
{
    if ( 0 == socketHash.values( true ).count( ) ) { // Unused
        if ( peerThreadQueue.contains( this ) ) {
            peerThreadQueue.removeOne( this );
        }
    } else if ( !peerThreadQueue.contains( this )  ) {
        peerThreadQueue.enqueue( this );
    }

    OutputMsg( QString( "peerThreadQueue.count( ) = %1" ).arg( QString::number( peerThreadQueue.count( ) ) ) );
}

void QTcpPeerSocketThread::ManagePeerSocketHash( QTcpSocket*& pPeerSocket, bool bInserted )
{
    if ( !bInserted ) {
        QList < QTcpSocket* > lstSocket =  socketHash.values( true );
        if ( 0 == lstSocket.count( ) ) {
            pPeerSocket = CreatePeerSocket( char( 1 ) );
        } else{
            pPeerSocket = lstSocket.at( 0 );
        }
    }

    socketHash.remove( !bInserted, pPeerSocket ); // Used
    socketHash.insertMulti( bInserted, pPeerSocket ); // Unused

    ThreadEnqueue( );
}

void QTcpPeerSocketThread::HandleThreadEnqueue( QTcpSocket* pPeerSocket  )
{
    ManagePeerSocketHash( pPeerSocket, true );
}

void QTcpPeerSocketThread::ProcessThreadPoolFeedbackEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    if ( NULL == pEventParams || pEventParams->isEmpty( ) ) {
        return;
    }

    MyDataStructs::QEventMultiHash& hash = pEventParams->head( );

    QVariant varData = hash.value( MyEnums::NetworkParamSocket );
    quint32 nSocketPointer = varData.toUInt( );
    QMyTcpSocket* pPeerSocket = ( QMyTcpSocket* ) nSocketPointer;

    varData = hash.value( MyEnums::NetworkParamData );
    quint32 nBytePointer = varData.toUInt( );
    QByteArray* pByteData = ( QByteArray* ) nBytePointer;

    network.TcpSendData( pPeerSocket, *pByteData ); // Feedback data to client endpoint

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
    QManipulateIniFile::LogType log = QManipulateIniFile::LogThread;
    QTcpSocket* pPeerSocket = NULL;

    foreach ( const MyDataStructs::QEventMultiHash& hash, *pEventParams ) {
        foreach ( const QVariant& var, hash.values( ) ) {
            ManagePeerSocketHash( pPeerSocket, false );
            if ( NULL == pPeerSocket ) {
                strMsg = QString( " %1 pPeerSocket == NULL" ).arg( strDateTime );
            } else {
                 bRet = pPeerSocket->setSocketDescriptor( var.toInt( ) );
                 if ( !bRet ) {
                     strMsg = QString( " %1 Create peer socket to fail" ).arg( strDateTime );
                 } else {
                     log = QManipulateIniFile::LogNetwork;
                     QString strKey = QString( "%1:%2" ).arg( pPeerSocket->peerAddress( ).toString( ),
                                                              QString::number( pPeerSocket->peerPort( ) ) );
                     strMsg = QString ( "%1 %2 %3" ).arg( strDateTime, strKey, "Connected to Server." );
                 }
            }

            OutputMsg( QString( "emit NotifyMessage( %1, LogType= %2 )" ).arg( LogText( strMsg ) , QString::number( log ) ) );
            emit NotifyMessage( LogText( strMsg ), log );
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
