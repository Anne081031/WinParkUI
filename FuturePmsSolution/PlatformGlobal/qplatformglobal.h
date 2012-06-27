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
    QCommonFunction& GetCommonFunctionObj( );
    QCommonWidgetLibrary& GetWidgetLibraryObj( );
    QManipulateIniFile& GetManipulateFileObj( );
    QThreadGenerator& GetThreadGenerator( );

    MyDataStructs::QMyStringList& GetServerIpPortList( );
    MyDataStructs::QStringThread& GetTcpClientThreadHash( );

    MyDataStructs::QMyStringList& GetListenerPortMaxConnectionList( );
    MyDataStructs::QStringThread& GetTcpListenerThreadHash( );

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

    void CreateTcpListenerhread( const QManipulateIniFile::IniFileName iniFile, const bool bStartupListener = true );
    void TcpListenerStartup( QThread* pReceiver, const QString& strPort, const QString& strMaxConnection );
    void TcpListenerAllStartup(  );

protected:
    explicit QPlatformGlobal( );

private:
    void SetApplicationName( const QManipulateIniFile::LogFileNames type );
    void InitializePlatformClient( );
    void InitializePlatformServer( );
    void InitializePlatformDataReceiver( );

private:
    static QPlatformGlobal* pPlatformGlobal;
    QCommonFunction commonFunction;
    QCommonWidgetLibrary widgetLibrary;
    QManipulateIniFile manipulateFile;
    QThreadGenerator* pGenerator;

    MyDataStructs::QStringThread hashTcpClientThread;
    MyDataStructs::QMyStringList listServerIpPort;

    MyDataStructs::QStringThread hashTcpListenerThread;
    MyDataStructs::QMyStringList listListenerPortMaxConnection;

signals:
    void ParseData( QString strServer, void* pByteArray );

public slots:

private slots:
    void HandleGetWholeTcpStreamDataFromServer( void* pByteArray );
};

#endif // QPLATFORMGLOBAL_H
