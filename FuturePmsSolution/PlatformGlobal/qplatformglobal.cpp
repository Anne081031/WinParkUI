#include "qplatformglobal.h"

QPlatformGlobal* QPlatformGlobal::pPlatformGlobal = NULL;

QPlatformGlobal::QPlatformGlobal( )
{
    pGenerator = QThreadGenerator::GetSingleton( );
}

QPlatformGlobal* QPlatformGlobal::GetSingleton( )
{
    if ( NULL == pPlatformGlobal ) {
        pPlatformGlobal = new QPlatformGlobal( );
    }

    return pPlatformGlobal;
}

QCommonFunction& QPlatformGlobal::GetCommonFunctionObj( )
{
    return commonFunction;
}

QCommonWidgetLibrary& QPlatformGlobal::GetWidgetLibraryObj( )
{
    return widgetLibrary;
}

QManipulateIniFile& QPlatformGlobal::GetManipulateFileObj( )
{
    return manipulateFile;
}

QThreadGenerator& QPlatformGlobal::GetThreadGenerator( )
{
    return *pGenerator;
}

void QPlatformGlobal::InitializeApplication( const MyEnums::ApplicationType type )
{
    commonFunction.SetDateTimeFormat( );
    commonFunction.InstallTextCodec( );

    switch ( type ) {
    case MyEnums::PlatformCentralClient :
        InitializePlatformClient( );
        break;

    case MyEnums::PlatformCentralServer :
        InitializePlatformServer( );
        break;

    case MyEnums::PlatformCentralDataReceiver :
        InitializePlatformDataReceiver( );
        break;
    }
}

void QPlatformGlobal::SetApplicationName( const QManipulateIniFile::LogFileNames type )
{
    QString strAppName;
    manipulateFile.LogFileDirName( type, strAppName );
    qApp->setApplicationName( strAppName );
}

void QPlatformGlobal::InitializePlatformClient( )
{
    SetApplicationName( QManipulateIniFile::PlatformCentralLogClient );
}

void QPlatformGlobal::InitializePlatformServer( )
{
    SetApplicationName( QManipulateIniFile::PlatformCentralLogServer );
}

void QPlatformGlobal::InitializePlatformDataReceiver( )
{
    SetApplicationName( QManipulateIniFile::PlatformCentralLogDataReceiver );
}

void QPlatformGlobal::BrowseLog( const QManipulateIniFile::LogFileNames type )
{
    widgetLibrary.BrowseLog( type );
}

void QPlatformGlobal::StartupLogWrite( QThread *pReceiver, const MyDataStructs::QEventMultiHash &hash )
{
    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    pEventParams->enqueue( hash );
    pGenerator->PostEvent( MyEnums::ThreadLogger, MyEnums::LogWrite, pEventParams, pReceiver );
}

void QPlatformGlobal::StartupThreadExit( QThread* pReceiver, const MyEnums::ThreadType type )
{
    //MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    pGenerator->PostEvent( type, MyEnums::ThreadExit, NULL, pReceiver );
}

void QPlatformGlobal::TcpClientConnect( QThread* pReceiver, const QString& strIP, const QString& strPort  )
{
    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash;
    hash.insertMulti( MyEnums::NetworkParamIP, strIP );
    hash.insertMulti( MyEnums::NetworkParamPort, strPort );

    pEventParams->enqueue( hash );
    pGenerator->PostEvent( MyEnums::ThreadTcpClient, MyEnums::TcpClientConnect, pEventParams, pReceiver );
}

void QPlatformGlobal::TcpClientDisconnect( QThread* pReceiver )
{
    pGenerator->PostEvent( MyEnums::ThreadTcpClient, MyEnums::TcpClientDisconnect, NULL, pReceiver );
}

void QPlatformGlobal::TcpClientSendData2AllThreads( const QByteArray& byteData )
{
    MyDataStructs::QMyStringList& lstIpPort = GetServerIpPortList( );
    MyDataStructs::QStringThread& thread = GetTcpClientThreadHash( );

    MyDataStructs::QMyStringSet set = lstIpPort.toSet( );

    foreach ( const QString& strIpPort, set ) {
        foreach ( QThread* pReceiver, thread.values( strIpPort ) ) {
            QByteArray* pByteData = new QByteArray( byteData );
            TcpClientSendData( pReceiver, pByteData );
        }
    }
}

void QPlatformGlobal::TcpClientSendData( QThread* pReceiver, const QByteArray *pByteData )
{
    if ( NULL == pByteData ) {
        return;
    }

    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash;
    quint32 nBytePointer = ( quint32 ) pByteData;
    hash.insertMulti( MyEnums::NetworkParamData, nBytePointer );
    pEventParams->enqueue( hash );
    pGenerator->PostEvent( MyEnums::ThreadTcpClient, MyEnums::TcpClientSendData, pEventParams , pReceiver );
}

void QPlatformGlobal::GenerateLogHash( MyDataStructs::QEventMultiHash &hash, const QStringList &lstText, const QManipulateIniFile::LogTypes type )
{
    QString strSeperator = "\n";
    QString strText = lstText.join( strSeperator );
    hash.insertMulti( type, strText );
}

void QPlatformGlobal::TcpClientAllConnectOrDisconnect( bool bConnect )
{
    MyDataStructs::QMyStringList& list = GetServerIpPortList( );
    MyDataStructs::QStringThread& thread = GetTcpClientThreadHash( );

    QStringList lstIpPort;
    MyDataStructs::QMyStringSet set = list.toSet( );

    foreach (const QString& strIpPort,  set ) {
        lstIpPort = strIpPort.split( ":" );

        foreach ( QThread* pReceiver, thread.values( strIpPort ) ) {
            bConnect ? TcpClientConnect( pReceiver, lstIpPort.at( 0 ), lstIpPort.at( 1 ) ) :
                                TcpClientDisconnect( pReceiver );
        }
    }
}

void QPlatformGlobal::HandleGetWholeTcpStreamDataFromServer( QTcpSocket* pPeerSocket, void *pByteArray )
{
    QTcpClientSocketThread* pSenderThread = ( QTcpClientSocketThread* ) sender( );
    MyDataStructs::QMyStringList lstKeys = hashTcpClientThread.keys( pSenderThread );
    OutputMsg( QStringList( lstKeys ).join( "@" ) );

    QByteArray* pByteData = ( QByteArray* ) pByteArray;
    OutputMsg( QString( *pByteData ) );

    MyDataStructs::QMyStringSet set = lstKeys.toSet( );

    OutputMsg( sender( )->objectName( ) );
    foreach ( const QString& strSerevr, set ) {
        emit ParseData( strSerevr, pPeerSocket, pByteArray);
    }
}

MyDataStructs::QMyStringList& QPlatformGlobal::GetServerIpPortList( )
{
    // IP:Port
    return listServerIpPort;
}

MyDataStructs::QStringThread& QPlatformGlobal::GetTcpClientThreadHash( )
{
    return hashTcpClientThread;
}

MyDataStructs::QMyStringList& QPlatformGlobal::GetListenerPortMaxConnectionList( )
{
    return listListenerPortMaxConnection;
}

MyDataStructs::QStringThread& QPlatformGlobal::GetTcpListenerThreadHash( )
{
    return hashTcpListenerThread;
}

void QPlatformGlobal::GetNetworkParams(  const QManipulateIniFile::IniFileName iniFile, const QManipulateIniFile::IniFileSectionItems item, QVariant& var )
{
    manipulateFile.IniFileValue( iniFile, QManipulateIniFile::IniNetwork, item, false, var );
}

void QPlatformGlobal::ControlTimer( const QManipulateIniFile::IniFileName iniFile, const bool bStart )
{
    int nInterval = 0;

    if ( bStart ) {
        QVariant var;
        manipulateFile.IniFileValue( iniFile, QManipulateIniFile::IniThread, QManipulateIniFile::ThreadPeerReleaseInterval, false, var );
        nInterval = var.toInt( ) * 60 * 1000;
    }

    pGenerator->ControlTimer( bStart, nInterval );
}

void QPlatformGlobal::CreateTcpClientThread( const QManipulateIniFile::IniFileName iniFile, const bool bConnect2Host )
{
    // NetworkTcpServerIP=192.168.1.20@192.168.1.24
    // NetworkTcpServerPort=50000@50001

    QVariant varPorts;
    QString strPorts;
    QVariant varIPs;
    QString strIPs;
    QString strSeperator = "@";

    GetNetworkParams( iniFile, QManipulateIniFile::NetworkTcpServerIP, varIPs );
    GetNetworkParams( iniFile, QManipulateIniFile::NetworkTcpServerPort, varPorts );

    strPorts = varPorts.toString( );
    QStringList lstPorts = strPorts.split( strSeperator );
    int nPorts = lstPorts.count( );

    strIPs = varIPs.toString( );
    QStringList lstIPs = strIPs.split( strSeperator );
    int nIPs = lstIPs.count( );

    if ( 0 == nPorts * nIPs || nPorts != nIPs ) {
        QStringList lstTexts;
        lstTexts << Q_FUNC_INFO;
        lstTexts << "Parammeter Error";
        lstTexts << strIPs << strPorts;
        MyDataStructs::QEventMultiHash hash;
        GenerateLogHash( hash, lstTexts, QManipulateIniFile::LogCfgParam );
        StartupLogWrite( pGenerator->GenerateLogThread( ), hash );
        return;
    }

    QString strKey = "%1:%2";
    QString strTmpKey;

    for ( int nIndex = 0; nIndex < nPorts; nIndex++ ) {
        const QString& strIP = lstIPs.at( nIndex );
        const QString& strPort = lstPorts.at( nIndex );

        strTmpKey = strKey.arg( strIP, strPort );
        listServerIpPort.append( strTmpKey );

        QTcpClientSocketThread* pThreadInstance = pGenerator->GenerateTcpClientThread( );
        connect( pThreadInstance, SIGNAL( GetWholeTcpStreamData( QTcpSocket*, void* ) ),
                 this, SLOT( HandleGetWholeTcpStreamDataFromServer( QTcpSocket*, void* ) ) );
        hashTcpClientThread.insertMulti( strTmpKey, pThreadInstance );

        if ( bConnect2Host ) {
            TcpClientConnect( pThreadInstance, strIP, strPort );
        }
    }
}

void QPlatformGlobal::TcpListenerStartup( QThread *pReceiver, const QString& strPort, const QString& strMaxConnection )
{
    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash;

    hash.insertMulti( MyEnums::NetworkParamListenerPort, strPort );
    hash.insertMulti( MyEnums::NetworkParamListenerMaxConnections, strMaxConnection );

    pEventParams->enqueue( hash );
    pGenerator->PostEvent( MyEnums::ThreadListener, MyEnums::TcpListenerStartup, pEventParams, pReceiver );
}

void QPlatformGlobal::TcpListenerAllStartup( )
{
    MyDataStructs::QMyStringList& list = GetListenerPortMaxConnectionList( );
    MyDataStructs::QStringThread& thread = GetTcpListenerThreadHash( );

    QStringList lstPortConnection;

    foreach (const QString& strPortConn,  list ) {
        lstPortConnection = strPortConn.split( ":" );

        foreach ( QThread* pReceiver, thread.values( strPortConn ) ) {
            TcpListenerStartup( pReceiver, lstPortConnection.at( 0 ), lstPortConnection.at( 1) );
        }
    }
}

void QPlatformGlobal::CreateTcpListenerhread( const QManipulateIniFile::IniFileName iniFile, const bool bStartupListener )
{
    // NetworkTcpServerPort=50000@50001
    // NetworkTcpMaxConnection=100@50

    QVariant varPorts;
    QString strPorts;
    QVariant varMaxConnections;
    QString strMaxConnections;

    GetNetworkParams( iniFile, QManipulateIniFile::NetworkTcpServerPort, varPorts );
    GetNetworkParams( iniFile, QManipulateIniFile::NetworkTcpMaxConnection, varMaxConnections );

    QString strSeperator = "@";

    strPorts = varPorts.toString( );
    QStringList lstPorts = strPorts.split( strSeperator );
    int nPorts = lstPorts.count( );

    strMaxConnections = varMaxConnections.toString( );
    QStringList lstConnections = strMaxConnections.split( strSeperator );
    int nConnections = lstConnections.count( );

    if ( 0 == nPorts * nConnections || nPorts != nConnections ) {
        QStringList lstTexts;
        lstTexts << Q_FUNC_INFO;
        lstTexts << "Parammeter Error";
        lstTexts << strPorts << strMaxConnections;
        MyDataStructs::QEventMultiHash hash;
        GenerateLogHash( hash, lstTexts, QManipulateIniFile::LogCfgParam );
        StartupLogWrite( pGenerator->GenerateLogThread( ), hash );
        return;
    }

    QString strKey = "%1:%2";
    QString strTmpKey;

    for ( int nIndex = 0; nIndex < nPorts; nIndex++ ) {
        const QString& strMaxConn = lstConnections.at( nIndex );
        const QString& strPort = lstPorts.at( nIndex );

        strTmpKey = strKey.arg( strPort, strMaxConn );
        listListenerPortMaxConnection.append( strTmpKey );

        QListenerThread* pThreadInstance = pGenerator->GenerateTcpListenerThread( );
        hashTcpListenerThread.insertMulti( strTmpKey, pThreadInstance );

        if ( bStartupListener ) {
            TcpListenerStartup( pThreadInstance, strPort, strMaxConn );
        }
    }
}
