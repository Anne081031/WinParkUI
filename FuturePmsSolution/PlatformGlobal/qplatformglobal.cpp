#include "qplatformglobal.h"

QPlatformGlobal* QPlatformGlobal::pPlatformGlobal = NULL;

QPlatformGlobal::QPlatformGlobal( )
{
    strColonSeperator = ":";
    strAtSeperator = "@";

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

void QPlatformGlobal::ParseMainArgs( const MyEnums::ApplicationType type, const int nArgc, char **ppArgv )
{
    //
    // nIndex = 0 Application Execute Path
    //

    switch ( type ) {
    case MyEnums::PlatformCentralClient :
        ParsePlatformClientArgs( nArgc, ppArgv );
        break;

    case MyEnums::PlatformCentralServer :
        ParsePlatformServerArgs( nArgc, ppArgv );
        break;

    case MyEnums::PlatformCentralDataReceiver :
        ParsePlatformDataReceiverArgs( nArgc, ppArgv );
        break;
    }
}

void QPlatformGlobal::ParsePlatformClientArgs( const int nArgc, char **ppArgv )
{
    //
    // NetworkTcpServerIP=192.168.1.24@192.168.1.24@192.168.1.24@192.168.1.24
    // NetworkTcpServerPort=50000@50001@50000@50001
    // Exe 192.168.1.24@192.168.1.24@192.168.1.24@192.168.1.24 50000@50001@50000@50001
    //

    if ( 3 != nArgc ) {
        return;
    }

    listTcpServerIpPort.clear( );

    QVariant varIPs = ppArgv[ 1 ];
    QVariant varPorts = ppArgv[ 2 ];

    ParseNetworkParams( varIPs, varPorts, listTcpServerIpPort );
}

void QPlatformGlobal::ParsePlatformServerArgs( const int nArgc, char **ppArgv )
{
    //
    // NetworkTcpServerPort=50000@50001
    // NetworkTcpMaxConnection=100@50
    // Exe 50000@50001 100@50
    //

    if ( 3 != nArgc ) {
        return;
    }

    listTcpListenerPortMaxConnection.clear( );

    QVariant varPorts = ppArgv[ 1 ];
    QVariant varMaxConenctions = ppArgv[ 2 ];

    ParseNetworkParams( varPorts, varMaxConenctions, listTcpListenerPortMaxConnection);
}

void QPlatformGlobal::ParsePlatformDataReceiverArgs( const int nArgc, char **ppArgv )
{
    //
    // NetworkTcpServerPort=50000@50001
    // NetworkTcpMaxConnection=100@50
    // Exe 50000@50001 100@50
    //

    if ( 3 != nArgc ) {
        return;
    }

    listTcpListenerPortMaxConnection.clear( );

    QVariant varPorts = ppArgv[ 1 ];
    QVariant varMaxConenctions = ppArgv[ 2 ];

    ParseNetworkParams( varPorts, varMaxConenctions, listTcpListenerPortMaxConnection);
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
    MyDataStructs::QMyStringList& lstIpPort = GetTcpServerIpPortList( );
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
    MyDataStructs::QMyStringList& list = GetTcpServerIpPortList( );
    MyDataStructs::QStringThread& thread = GetTcpClientThreadHash( );

    QStringList lstIpPort;
    MyDataStructs::QMyStringSet set = list.toSet( );

    foreach (const QString& strIpPort,  set ) {
        lstIpPort = strIpPort.split( strColonSeperator );

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
    OutputMsg( QStringList( lstKeys ).join( strAtSeperator ) );

    QByteArray* pByteData = ( QByteArray* ) pByteArray;
    OutputMsg( QString( *pByteData ) );

    MyDataStructs::QMyStringSet set = lstKeys.toSet( );

    OutputMsg( sender( )->objectName( ) );
    foreach ( const QString& strSerevr, set ) {
        emit ParseData( strSerevr, pPeerSocket, pByteArray);
    }
}

MyDataStructs::QMyStringList& QPlatformGlobal::GetTcpServerIpPortList( )
{
    // IP:Port
    return listTcpServerIpPort;
}

MyDataStructs::QStringThread& QPlatformGlobal::GetTcpClientThreadHash( )
{
    return hashTcpClientThread;
}

MyDataStructs::QMyStringList& QPlatformGlobal::GetTcpListenerPortMaxConnectionList( )
{
    return listTcpListenerPortMaxConnection;
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

    if ( listTcpServerIpPort.isEmpty( ) ) {
        QVariant varIPs;
        QVariant varPorts;

        GetNetworkParams( iniFile, QManipulateIniFile::NetworkTcpServerIP, varIPs );
        GetNetworkParams( iniFile, QManipulateIniFile::NetworkTcpServerPort, varPorts );
        ParseNetworkParams( varIPs, varPorts, listTcpServerIpPort );
    }

    foreach( const QString& strParam, listTcpServerIpPort ) {
        QStringList lstParam = strParam.split( strColonSeperator );

        const QString& strIP = lstParam.at( 0 );
        const QString& strPort = lstParam.at( 1 );

        QTcpClientSocketThread* pThreadInstance = pGenerator->GenerateTcpClientThread( );
        connect( pThreadInstance, SIGNAL( GetWholeTcpStreamData( QTcpSocket*, void* ) ),
                 this, SLOT( HandleGetWholeTcpStreamDataFromServer( QTcpSocket*, void* ) ) );
        hashTcpClientThread.insertMulti( strParam, pThreadInstance );

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
    MyDataStructs::QMyStringList& list = GetTcpListenerPortMaxConnectionList( );
    MyDataStructs::QStringThread& thread = GetTcpListenerThreadHash( );

    QStringList lstPortConnection;

    foreach (const QString& strPortConn,  list ) {
        lstPortConnection = strPortConn.split( strColonSeperator );

        foreach ( QThread* pReceiver, thread.values( strPortConn ) ) {
            TcpListenerStartup( pReceiver, lstPortConnection.at( 0 ), lstPortConnection.at( 1) );
        }
    }
}

void QPlatformGlobal::CreateUdpListenerThread( const QManipulateIniFile::IniFileName iniFile, const bool bStartupListener )
{

}

void QPlatformGlobal::UdpListenerStartup( QThread* pReceiver, const QString& strPort )
{

}

void QPlatformGlobal::UdpListenerAllStartup(  )
{

}

void QPlatformGlobal::CreateUdpBroadcastListenerThread( const QManipulateIniFile::IniFileName iniFile, const bool bStartupListener )
{

}

void QPlatformGlobal::UdpBroadcastListenerStartup( QThread* pReceiver, const QString& strPort )
{

}

void QPlatformGlobal::UdpBroadcastListenerAllStartup(  )
{

}

void QPlatformGlobal::CreateUdpMulticastListenerThread( const QManipulateIniFile::IniFileName iniFile, const bool bStartupListener )
{

}

void QPlatformGlobal::UdpMulticastListenerStartup( QThread* pReceiver, const QString& strPort )
{

}

void QPlatformGlobal::UdpMulticastListenerAllStartup(  )
{

}

void QPlatformGlobal::ParseNetworkParams( const QVariant& varParam1, const QVariant& varParam2, MyDataStructs::QMyStringList& lstParams  )
{
    // NetworkTcpServerPort=50000@50001
    // NetworkTcpMaxConnection=100@50

    QString strParam1;
    QString strParam2;

    strParam1 = varParam1.toString( );
    QStringList lstParam1 = strParam1.split( strAtSeperator );
    int nParam1 = lstParam1.count( );

    strParam2 = varParam2.toString( );
    QStringList lstParam2 = strParam2.split( strAtSeperator );
    int nParam2 = lstParam2.count( );

    if ( 0 == nParam1 * nParam2 || nParam1 != nParam2 ) {
        QStringList lstTexts;
        lstTexts << Q_FUNC_INFO;
        lstTexts << "Parammeter Error";
        lstTexts << strParam1 << strParam2;
        MyDataStructs::QEventMultiHash hash;
        GenerateLogHash( hash, lstTexts, QManipulateIniFile::LogCfgParam );
        StartupLogWrite( pGenerator->GenerateLogThread( ), hash );
        return;
    }

    QString strKey = "%1:%2";
    QString strTmpKey;

    for ( int nIndex = 0; nIndex < nParam1; nIndex++ ) {
        const QString& str1 = lstParam1.at( nIndex );
        const QString& str2 = lstParam2.at( nIndex );

        strTmpKey = strKey.arg( str1, str2 );
        lstParams.append( strTmpKey );
    }
}

void QPlatformGlobal::CreateTcpListenerThread( const QManipulateIniFile::IniFileName iniFile, const bool bStartupListener )
{
    // NetworkTcpServerPort=50000@50001
    // NetworkTcpMaxConnection=100@50

    if ( listTcpListenerPortMaxConnection.isEmpty( ) ) {
        QVariant varPorts;
        QVariant varMaxConnections;

        GetNetworkParams( iniFile, QManipulateIniFile::NetworkTcpServerPort, varPorts );
        GetNetworkParams( iniFile, QManipulateIniFile::NetworkTcpMaxConnection, varMaxConnections );
        ParseNetworkParams( varPorts, varMaxConnections, listTcpListenerPortMaxConnection );
    }

    foreach ( const QString& strParam, listTcpListenerPortMaxConnection ) {
        if ( hashTcpListenerThread.keys( ).contains( strParam ) ) {
            continue;
        }

        QStringList lstParam = strParam.split( strColonSeperator );
        const QString& strPort = lstParam.at( 0 );
        const QString& strMaxConn = lstParam.at( 1 );

        QListenerThread* pThreadInstance = pGenerator->GenerateTcpListenerThread( );
        hashTcpListenerThread.insertMulti( strParam, pThreadInstance );

        if ( bStartupListener ) {
            TcpListenerStartup( pThreadInstance, strPort, strMaxConn );
        }
    }
}
