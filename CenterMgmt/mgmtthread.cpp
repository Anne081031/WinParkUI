#include "mgmtthread.h"
#include  "Network/netprocessdata.h"

CMgmtThread* CMgmtThread::pReceiverThread = NULL;
CMgmtThread* CMgmtThread::pSenderThread = NULL;

CMgmtThread::CMgmtThread( bool bSender, QObject *parent) :
    QThread(parent), bClient( bSender )
{
    pTcpClient = NULL;
    pTcpServer = NULL;
    pMySQL = NULL;
    nInterval = config.GetInterval( );
    nTimer = 0;

    if ( bClient ) {
        pTcpClient = new CTcpClient( this );
        connect( pTcpClient, SIGNAL( readyRead( ) ), this, SLOT( PeerData( ) ) );
        pMySQL = new CMySqlDatabase( );
        connect( pTcpClient, SIGNAL( NotifyMessage( QString ) ), this, SLOT( NotifyMsg( QString ) ) );
        CCommonFunction::GetPath( strPath, CommonDataType::PathSnapshot );
        nTimer = startTimer( nInterval * 60 * 1000 );
    } else {
        pTcpServer = new CTcpDispatcher( this );
        connect( pTcpServer, SIGNAL( NotifyMessage( QString ) ), this, SLOT( NotifyMsg( QString ) ) );
    }

    connect( this, SIGNAL( finished( ) ), this, SLOT( ThreadExit( ) ) );
}

void CMgmtThread::ThreadExit( )
{
    if ( 0 != nTimer ) {
        killTimer( nTimer );
    }

    if ( NULL != pMySQL ) {
        delete pMySQL;
    }

    if ( NULL != pTcpClient ) {
        delete pTcpClient;
    }

    if ( NULL != pTcpServer ) {
        delete pTcpServer;
    }

    CNetProcessData::ReleaseResource( );

    delete this;
}

CMgmtThread* CMgmtThread::GetThread( bool bSender )
{
    if ( bSender && NULL == pSenderThread ) {
        pSenderThread = new CMgmtThread( bSender );
        pSenderThread->moveToThread( pSenderThread );
        pSenderThread->start( );
    } else if ( !bSender && NULL == pReceiverThread )  {
        pReceiverThread = new CMgmtThread( bSender  );
        pReceiverThread->moveToThread( pReceiverThread );
        pReceiverThread->start( );
    }

    return bSender ? pSenderThread : pReceiverThread;
}

void CMgmtThread::NotifyMsg( QString strMsg )
{
    qDebug( ) << strMsg << endl;
}

void CMgmtThread::PeerData( ) // Server --> Client
{
 // Test
}

void CMgmtThread::ClientRun( )
{
    QString strIP;

    config.GetMgmtSvrIP( strIP );
    QHostAddress hostAddr( strIP );
    pTcpClient->Connect2Server( hostAddr, config.GetMgmtSvrPort( ) );
    exec( ); // Message Loop / Event Loop
}

void CMgmtThread::ServerRun( )
{
    if ( pTcpServer->InitServer( config.GetMgmtSvrPort( ), 100, 1 ) ) {
        exec( );
    }
}

void CMgmtThread::run( )
{
    bClient ? ClientRun( ) : ServerRun( );
}

void CMgmtThread::PeerRequest( )
{

}

void CMgmtThread::timerEvent( QTimerEvent *event )
{
    if ( nTimer != event->timerId( ) ) {
        return;
    }

    QStringList& lstTables = config.GetAllTables( );
    QString strSql = "";
    QString strError;
    bool bRet = true;
    QString strFile = "";
    static bool bFirst = true;

    foreach ( const QString strTable, lstTables ) {
        config.GetSQL( strSql, strTable );

        if ( strSql.isEmpty( ) ) {
            continue;
        }

        strFile = strPath + strTable;
        strSql = strSql.arg( strTable, strFile );

        if ( bFirst || !pMySQL->PingMysql( ) ) {
            QStringList lstParams;
            CCommonFunction::ConnectMySql( lstParams );
            int nCounter = 0;

            while ( 6 > nCounter ) {
                nCounter++;
                bRet = pMySQL->DbConnect( lstParams[ 0 ], lstParams[ 1 ], lstParams[ 2 ], lstParams[ 3 ], lstParams[ 4 ].toUInt( ) );
                bFirst = false;

                if ( bRet ) {
                    break;
                } else {
                    Sleep(10000 );
                    continue;
                }
            }
        }

        if ( !bRet ) {
            continue;
        }

        if ( pMySQL->DbCrud( strSql, strError ) ) {
            SendTableData( strFile, strTable );
            Sleep( 10000 );
            QFile::remove( strFile );
        }

#ifdef QT_NO_DBUS
        if ( !strError.isEmpty( ) ) {
            qDebug( ) << strError << endl;
        }
#endif
    }

    qDebug( ) << "Mgmt Timer" << endl;
}

bool CMgmtThread::SendTableData( QString& strFile, const QString& strTable  )
{
    bool bRet = false;
    static QFile* pFile = NULL;
    if ( NULL == pFile ) {
        pFile = new QFile( );
    }

    pFile->setFileName( strFile );
    if ( !pFile->open( QIODevice::ReadWrite ) ) {
        return bRet;
    }

    QByteArray byData = pFile->readAll( );
    int nDataLen = byData.count( );
    pFile->close( );

    if ( 0 == nDataLen ) {
        return bRet;
    }

    NetTransport::DispatcherData data;
    memset( &data, 0, sizeof ( data ) );

    data.CommHeader.dgType.PacketMgmtData = 1;
    strcpy( data.auxHeader.mgmtHeader.cName, strTable.toAscii( ).data( ) );
    data.auxHeader.mgmtHeader.nDataLen = nDataLen;

    quint16* pType = ( quint16* ) &data.auxHeader.mgmtHeader.mgmtType;
    *pType = ( quint16 ) ( 1 << ( quint16 ) NetTransport::MgmtTable );

    int nCommHeader = sizeof ( data.CommHeader );
    int nAuxHeader = sizeof ( data.auxHeader.mgmtHeader );
    data.CommHeader.nDataLen = nDataLen + nCommHeader + nAuxHeader;

    byData.insert( 0, ( char* ) &data.auxHeader.tabHeader, nAuxHeader );
    byData.insert( 0, ( char* ) &data.CommHeader, nCommHeader );

    bRet =(  ( quint64 ) nDataLen == pTcpClient->SendData( byData ) );

    return bRet;
}
