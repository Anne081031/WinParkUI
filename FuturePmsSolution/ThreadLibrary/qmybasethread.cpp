#include "qmybasethread.h"

QMyBaseThread::QMyBaseThread(QObject *parent) :
    QThread(parent)
{
    //OutputMsg( QString( " Created" ) );
}

QMyBaseThread::~QMyBaseThread( )
{
    OutputMsg( currentThread( )->metaObject( )->className( ) );
}

void QMyBaseThread::ExitThread( )
{
    deleteLater( );
}

void QMyBaseThread::InitializeThread( )
{
    connect( this, SIGNAL( finished( ) ), this, SLOT( ExitThread( ) ) );
}

void QMyBaseThread::LaunchThreadExit( )
{
    moveToThread( qApp->thread( ) );
    exit( );
}

void QMyBaseThread::HandleMessage( QString strMsg, QManipulateIniFile::LogTypes type )
{
    emit NotifyMessage( strMsg, type );
}
