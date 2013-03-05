#include "databasecontroller.h"

DatabaseController* DatabaseController::pController = NULL;

DatabaseController::DatabaseController( QObject* parent ) : QObject( parent )
{

}

DatabaseController::~DatabaseController( )
{

}

DatabaseController* DatabaseController::GetController( QObject *parent )
{
    if ( NULL == pController ) {
        pController = new DatabaseController( parent );
    }

    return pController;
}

void DatabaseController::ReleaseController( )
{
    if ( NULL == pController ) {
        delete pController;
        pController = NULL;
    }
}

void DatabaseController::HandleLog( QString strLog, bool bStatic )
{
    emit Log( strLog, bStatic );
}

QDataDispactherThread* DatabaseController::CreateDispactherThread( QObject* parent )
{
    QDataDispactherThread* pThread = QDataDispactherThread::CreateThread( parent );

    connect( pThread, SIGNAL( Log( QString, bool ) ),
             this, SLOT( HandleLog( QString, bool ) ) );


    return pThread;
}

void DatabaseController::PostDispactherData( QDataDispactherThread* pDispatcher, QTcpSocket* pSocket, qint32 nPackageType, QByteArray &byData )
{
    if ( NULL == pDispatcher ) {
        return;
    }

    pDispatcher->PostDispatchDataEvent( pSocket, nPackageType, byData );
}
