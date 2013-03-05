// Java HttpServer API / Client API com.sun.net.httpserver org.apache.http
// Windows HttpServer API / Client API
// NodeJS OPA
// c Client / curl libUrl libWWW
// pdfFactory setupFactory InstallShield
// PECL PHP-GTK bcompiler-->php...bytecode
// PHP-Qt, PHP bindings to the Qt toolkit
// PHP-GTK, PHP bindings to GTK+
// wxPHP, PHP bindings for wxWidgets
// WinBinder, native window bindings for PHP
// 脚本语言与跨平台GUI绑定都可实现GUI应用开发 eg. LUA Python etc.

#include "networkcontroller.h"

NetworkController* NetworkController::pController = NULL;

NetworkController::NetworkController( QObject *parent ) : QObject( parent )
{
    qRegisterMetaType< qintptr >( "qintptr" );
    pListenerThread = QListenerThread::CreateThread( );

    connect( pListenerThread, SIGNAL( Log( QString, bool ) ),
             this, SLOT( HandleLog( QString, bool ) ) );
}

NetworkController::~NetworkController( )
{
    pListenerThread->deleteLater( );
}

NetworkController* NetworkController::GetController( QObject *parent )
{
    if ( NULL == pController ) {
        pController = new NetworkController( parent );
    }

    return pController;
}

void NetworkController::ReleaseController( )
{
    if ( NULL != pController ) {
        delete pController;
        pController = NULL;
    }
}

void NetworkController::StartListen( quint16 nPort, qint32 nMaxConn )
{
    pListenerThread->PostStartListenEvent( nPort, nMaxConn );
}

void NetworkController::StopListen( )
{
    pListenerThread->PostStopListenEvent( );
}

void NetworkController::HandleLog( QString strLog, bool bStatic )
{
    emit Log( strLog, bStatic );
}
