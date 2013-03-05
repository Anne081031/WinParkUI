#include "cparserthread.h"

CParserThread::CParserThread(QObject *parent) :
    QThread(parent)
{
    setObjectName( QString( "[Data Parser Thread ID = %1]" ).arg( qrand( ) ) );
    cStart = '$';
    char cEnd[ ] = { 0x0D, 0x0A, 0x00 };
    byEnd.append( cEnd, sizeof ( cEnd ) / sizeof ( char ) );
}

CParserThread* CParserThread::CreateThread( QObject* parent )
{
    CParserThread* pThread = new CParserThread( parent );

    pThread->start( );
    pThread->moveToThread( pThread );

    return pThread;
}

void CParserThread::run( )
{
    QString strLog = objectName( ) + " Started.";
    SendLog( strLog, true );
    Initialize( );
    exec( );
}

void CParserThread::PostData( QByteArray &byData )
{

    CComThreadEvent* pEvent = CComThreadEvent::CreateThreadEvent( CComThreadEvent::ThreadParser, CComThreadEvent::EventParseData );
    pEvent->SetByteArrayData( byData );

    PostEvent( pEvent );
}

void CParserThread::customEvent( QEvent * pEvent )
{
    CComThreadEvent* pThreadEvent = ( CComThreadEvent* ) pEvent;
    CComThreadEvent::EventType evtType = ( CComThreadEvent::EventType ) pEvent->type( );

    bool bRet = false;

    if ( CComThreadEvent::EventParseData == evtType ) {
        byPortData.append( pThreadEvent->GetByteArrayData( ) );

        do {
            bRet = ParseData( byPortData );
        } while ( bRet );
    }
}

void CParserThread::Initialize( )
{

}

void CParserThread::PostEvent( CComThreadEvent *pEvent )
{
    qApp->postEvent( this, pEvent );
}

void CParserThread::SendLog( QByteArray& byCmd, bool bStatic )
{
    QString strLog( byCmd );
    emit Log( strLog, bStatic );
}

void CParserThread::SendLog(QString &strLog, bool bStatic )
{
    emit Log( strLog, bStatic );
}

bool CParserThread::ParseData( QByteArray &byData )
{
    bool bRet = false;
    qint32 nEndLen = byEnd.length( );
    qint32 nTotal = byData.length( );

    if ( nTotal <= nEndLen ) {
        return bRet;
    }

    qint32 nStartIndex = byData.indexOf( cStart );
    if ( -1 == nStartIndex ) {
        byData.clear( );
        return bRet;
    } else if ( 0 < nStartIndex ) {
        byData.remove( 0, nStartIndex );
    }

    qint32 nEndIndex = byData.indexOf( byEnd );
    if ( -1 == nEndIndex ) {
        return bRet;
    }

    QByteArray byCmd = byData.left( nEndIndex );
    SendLog( byCmd, false );

    return bRet;
}
