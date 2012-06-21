#include "qtcppeersocketthread.h"

QTcpPeerSocketThread::QTcpPeerSocketThread(QObject *parent) :
    QMyBaseThread(parent)
{
    pPeerSocket = NULL;
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

    connect( &network, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ), this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );
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
