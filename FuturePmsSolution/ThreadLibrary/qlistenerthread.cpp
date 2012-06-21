#include "qlistenerthread.h"

QListenerThread* QListenerThread::pThreadInstance = NULL;

QListenerThread::QListenerThread(QObject *parent) :
    QMyBaseThread(parent)
{
}

QListenerThread* QListenerThread::GetSingleton( )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = new QListenerThread( );
        pThreadInstance->InitializeThread( );
        pThreadInstance->moveToThread( pThreadInstance );
        pThreadInstance->start( );
    }

    return pThreadInstance;
}

void QListenerThread::run( )
{
    InitializeSubThread( );
    exec( ); // Event Loop
}

void QListenerThread::InitializeSubThread( )
{
    QVariant varPort;
    QVariant varMaxConnection;
    bool bWrite = false;

    manipulateFile.IniFileValue( QManipulateIniFile::IniNetwork, QManipulateIniFile::NetworkTcpServerPort, bWrite, varPort );
    manipulateFile.IniFileValue( QManipulateIniFile::IniNetwork, QManipulateIniFile::NetworkTcpMaxConnection, bWrite, varMaxConnection );

    network.StartupTcpServer( ( quint16 ) varPort.toUInt( ), varMaxConnection.toInt( ) );

    connect( &network, SIGNAL( NotifyMessage( QString, QManipulateIniFile::LogTypes ) ), this, SLOT( HandleMessage( QString, QManipulateIniFile::LogTypes ) ) );
    connect( &network, SIGNAL( Accept( int ) ), this, SLOT( HandleAccept( int ) ) );
}

void QListenerThread::HandleAccept( int socketDescriptor ) // IOC IPC
{
    emit Accept( socketDescriptor );
}

void QListenerThread::customEvent( QEvent *event )
{
    QListenerThreadEvent* pEvent = ( QListenerThreadEvent* ) event;
    MyEnums::EventType type = ( MyEnums::EventType ) pEvent->type( );

   if ( MyEnums::ThreadExit == type ) {
        pThreadInstance = NULL;
        LaunchThreadExit( );
    }
}
