#include "qloggerthread.h"

QLoggerThread* QLoggerThread::pThreadInstance = NULL;

QLoggerThread::QLoggerThread(QObject *parent) :
    QMyBaseThread(parent)
{

}

QLoggerThread* QLoggerThread::GetSingleton( )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = new QLoggerThread( );
        pThreadInstance->InitializeThread( );
        pThreadInstance->moveToThread( pThreadInstance );
        pThreadInstance->start( );
    }

    return pThreadInstance;
}

void QLoggerThread::run( )
{
    InitializeSubThread( );
    exec( ); // Event Loop
}

void QLoggerThread::InitializeSubThread( )
{
    commonFunction.GetPath( strLogPath, QCommonFunction::PathLogs );
}

QString QLoggerThread::GetFileName( )
{
    QDate date = QDate::currentDate( );
    return commonFunction.GetDateString( date );
}

void QLoggerThread::ProcessWriteLogEvent( MyDataStructs::PQQueueEventParams pEventParams )
{
    QManipulateIniFile::LogTypes types;
    QString strFile;

    foreach ( const MyDataStructs::QEventMultiHash& hash, *pEventParams ) {
        foreach ( const QVariant& var, hash.values( ) ) {
            qDebug( ) << QLoggerThread::currentThread( )->metaObject( )->className( ) << ":" << var.toString( ) << endl;
            types = ( QManipulateIniFile::LogTypes ) hash.keys( ).at( 0 );
            strFile = strLogPath + GetFileName( );
            manipulateFile.WriteLogFile( types, strFile, var );
        }
     }
}

void QLoggerThread::customEvent( QEvent *event )
{
    QLoggerEvent* pEvent = ( QLoggerEvent* ) event;
    MyEnums::EventType type = ( MyEnums::EventType ) pEvent->type( );
    MyDataStructs::PQQueueEventParams pEventParams = pEvent->GetEventParams( );

    if ( MyEnums::LogWrite == type ) {
        ProcessWriteLogEvent( pEventParams );
    } else if ( MyEnums::ThreadExit == type ) {
        pThreadInstance = NULL;
        LaunchThreadExit( );
    }
}
