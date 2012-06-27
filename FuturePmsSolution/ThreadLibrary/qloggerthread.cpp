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
    GetLogFileName( );
}

QString QLoggerThread::GetFileName( )
{
    QDate date = QDate::currentDate( );
    return commonFunction.GetDateString( date );
}

void QLoggerThread::GetLogFileName( )
{
    QString strAppName = qApp->applicationName( );
    QString strName;
    QManipulateIniFile::LogFileNames logTmp;
    logFileName = QManipulateIniFile::PlatformLogCount;

    for ( int nIndex = 0; nIndex < QManipulateIniFile::PlatformLogCount; nIndex++ ) {
        logTmp = ( QManipulateIniFile::LogFileNames ) nIndex;
        manipulateFile.LogFileDirName(  logTmp, strName );

        if ( strAppName == strName ) {
            logFileName = logTmp;
            break;
        }
    }
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
            manipulateFile.WriteLogFile( logFileName, types, var );
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
