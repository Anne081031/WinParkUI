#include "qdirectorythread.h"
#include "qplatethread.h"
#include <QApplication>
#include <QDir>

QDirectoryThread* QDirectoryThread::pThreadInstance = NULL;

QDirectoryThread::QDirectoryThread(QObject *parent) :
    QThread(parent)
{
}

QDirectoryThread* QDirectoryThread::GetInstance( )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = new QDirectoryThread( );
        pThreadInstance->moveToThread( pThreadInstance );
        pThreadInstance->start( );
    }

    return pThreadInstance;
}

void QDirectoryThread::run( )
{
    exec( );
}

void QDirectoryThread::PostDirectoryTraverse( QString &strDir )
{
    if ( strDir.isEmpty( ) ) {
        return;
    }

    QDirectoryEvent* pEvent = new QDirectoryEvent( ( QDirectoryEvent::Type ) QDirectoryEvent::DirectoryTraverse );
    pEvent->SetDirectory( strDir );

    PostEvent( pEvent );
}

void QDirectoryThread::PostEvent( QDirectoryEvent *pEvent )
{
    qApp->postEvent( this, pEvent );
}

void QDirectoryThread::TraverseEvent( QDirectoryEvent *pEvent )
{
    QString& strDir = pEvent->GetDirectory( );

    Traverse( strDir );
}

void QDirectoryThread::Traverse( QString &strDir )
{
    QDir dir( strDir );
    QFileInfoList lstFiles = dir.entryInfoList( QDir::Files | QDir::NoDotAndDotDot | QDir::Dirs );
    QString strFile;

    foreach ( const QFileInfo& item, lstFiles ) {
        strFile = item.absoluteFilePath( );

        if ( item.isFile( ) ) {
            QPlateThread::GetInstance( )->PostPlateFileRecognize( strFile );
        } else if ( item.isDir( ) ) {
            Traverse( strFile );
        }
    }
}

void QDirectoryThread::customEvent( QEvent *e )
{
    QDirectoryEvent* pEvent = ( QDirectoryEvent* ) e;

    QDirectoryEvent::DirectoryEventType evtType = ( QDirectoryEvent::DirectoryEventType ) pEvent->type( );

    switch ( evtType ) {
    case QDirectoryEvent::DirectoryTraverse :
        TraverseEvent( pEvent );
        break;
    }
}
