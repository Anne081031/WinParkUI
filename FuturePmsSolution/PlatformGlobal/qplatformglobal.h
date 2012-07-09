#ifndef QPLATFORMGLOBAL_H
#define QPLATFORMGLOBAL_H

#include "PlatformGlobal_global.h"
#include <QObject>
#include "../ThreadLibrary/qthreadgenerator.h"
#include "../CommonWidgetLibrary/commonwidgetlibrary.h"

class PLATFORMGLOBALSHARED_EXPORT QPlatformGlobal : public QObject {
    Q_OBJECT
public:
    static QPlatformGlobal* GetSingleton( );
    void ParseMainArgs( const MyEnums::ApplicationType type, const int nArgc, char **ppArgv );

    void ControlTimer( const QManipulateIniFile::IniFileName iniFile, const bool bStart );

    QCommonFunction& GetCommonFunctionObj( );
    QCommonWidgetLibrary& GetWidgetLibraryObj( );
    QManipulateIniFile& GetManipulateFileObj( );
    QThreadGenerator& GetThreadGenerator( );

    MyDataStructs::QMyStringList& GetTcpServerIpPortList( );
    MyDataStructs::QStringThread& GetTcpClientThreadHash( );

    MyDataStructs::QMyStringList& GetTcpListenerPortMaxConnectionList( );
    MyDataStructs::QStringThread& GetTcpListenerThreadHash( );

    MyDataStructs::QMyStringList& GetUdpServerIpPortList( );
    MyDataStructs::QStringThread& GetUdpClientThreadHash( );

    MyDataStructs::QMyStringList& GetUdpListenerPortMaxConnectionList( );
    MyDataStructs::QStringThread& GetUdpListenerThreadHash( );

    void BrowseLog( const QManipulateIniFile::LogFileNames type );
    void StartupThreadExit( QThread* pReceiver, const MyEnums::ThreadType type );
    void StartupLogWrite( QThread* pReceiver, const MyDataStructs::QEventMultiHash& hash );
    void GenerateLogHash( MyDataStructs::QEventMultiHash& hash, const QStringList& lstText, const QManipulateIniFile::LogTypes type );

    void InitializeApplication( const MyEnums::ApplicationType type );

    void CreateTcpClientThread( const QManipulateIniFile::IniFileName iniFile, const bool bConnect2Host = false );
    void TcpClientSendData( QThread* pReceiver, const QByteArray* pByteData );
    void TcpClientSendData2AllThreads( const QByteArray& byteData );
    void TcpClientDisconnect( QThread* pReceiver );
    void TcpClientConnect( QThread* pReceiver, const QString& strIP, const QString& strPort );
    void TcpClientAllConnectOrDisconnect( bool bConnect );

    void CreateTcpListenerThread( const QManipulateIniFile::IniFileName iniFile, const bool bStartupListener = true );
    void TcpListenerStartup( QThread* pReceiver, const QString& strPort, const QString& strMaxConnection );
    void TcpListenerAllStartup(  );

    void CreateUdpListenerThread( const QManipulateIniFile::IniFileName iniFile, const bool bStartupListener = true );
    void UdpListenerStartup( QThread* pReceiver, const QString& strPort );
    void UdpListenerAllStartup(  );

    void CreateUdpBroadcastListenerThread( const QManipulateIniFile::IniFileName iniFile, const bool bStartupListener = true );
    void UdpBroadcastListenerStartup( QThread* pReceiver, const QString& strPort );
    void UdpBroadcastListenerAllStartup(  );

    void CreateUdpMulticastListenerThread( const QManipulateIniFile::IniFileName iniFile, const bool bStartupListener = true );
    void UdpMulticastListenerStartup( QThread* pReceiver, const QString& strPort );
    void UdpMulticastListenerAllStartup(  );

protected:
    explicit QPlatformGlobal( );

private:
    void SetApplicationName( const QManipulateIniFile::LogFileNames type );
    void GetNetworkParams(  const QManipulateIniFile::IniFileName iniFile, const QManipulateIniFile::IniFileSectionItems item, QVariant& var );

    void InitializePlatformClient( );
    void InitializePlatformServer( );
    void InitializePlatformDataReceiver( );

    void ParsePlatformClientArgs( const int nArgc, char **ppArgv );
    void ParsePlatformServerArgs( const int nArgc, char **ppArgv );
    void ParsePlatformDataReceiverArgs( const int nArgc, char **ppArgv );

    void ParseNetworkParams( const QVariant& varParam1, const QVariant& varParam2, MyDataStructs::QMyStringList& lstParams );

private:
    static QPlatformGlobal* pPlatformGlobal;
    QCommonFunction commonFunction;
    QCommonWidgetLibrary widgetLibrary;
    QManipulateIniFile manipulateFile;
    QThreadGenerator* pGenerator;

    QString strColonSeperator;
    QString strAtSeperator;

    MyDataStructs::QStringThread hashTcpClientThread;
    MyDataStructs::QMyStringList listTcpServerIpPort;

    MyDataStructs::QStringThread hashTcpListenerThread;
    MyDataStructs::QMyStringList listTcpListenerPortMaxConnection;

    MyDataStructs::QStringThread hashUdpClientThread;
    MyDataStructs::QMyStringList listUdpServerIpPort;

    MyDataStructs::QStringThread hashUdpListenerThread;
    MyDataStructs::QMyStringList listUdpListenerPortMaxConnection;

signals:
    void ParseData( QString strServer, QTcpSocket* pPeerSocket, void* pByteArray );

public slots:

private slots:
    void HandleGetWholeTcpStreamDataFromServer( QTcpSocket* pPeerSocket,void* pByteArray );
};

#endif // QPLATFORMGLOBAL_H
