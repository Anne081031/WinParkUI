#include "qthreadspparser.h"
#include <QApplication>
#include "../ControllerCommon/qctrlevent.h"
#include <QDebug>

QThreadSPParser* QThreadSPParser::pSingleton = NULL;

QThreadSPParser::QThreadSPParser(QObject *parent) :
    QThread(parent)
{
}

QThreadSPParser& QThreadSPParser::GetSingleton( )
{
    if ( NULL == pSingleton )   {
        pSingleton = new QThreadSPParser( );
        pSingleton->start( );
        pSingleton->moveToThread( pSingleton ) ;
    }

    return *pSingleton;
}

void QThreadSPParser::SendData( QByteArray &data )
{
    QCtrlEvent* pEvent = new QCtrlEvent( ( QCtrlEvent::Type ) QCtrlEvent::SPWrite );
    pEvent->SetData( data );
    qApp->postEvent( this, pEvent );
}

void QThreadSPParser::run( )
{
    exec( );
}

bool QThreadSPParser::ParseData( QByteArray &data )
{
    bool bRet = false;
    byData.append( data );
    //
    // GetFrame ( YiBin )
    //

    const char cAddrValue = ( char ) 0xAA;
    const char cStartFrame = 0x68;
    const char cEndFrame = 0x16;

    char cHead[ ] = { cStartFrame, cAddrValue, cAddrValue,
                      cAddrValue, cAddrValue, cAddrValue, cAddrValue, cStartFrame };
    QByteArray byHead( cHead, sizeof ( cHead ) );

    int nHead = sizeof ( cHead );
    int nLen = nHead + 2;
    int nTotal = byData.length( );

    if ( nLen >= nTotal ) {
        return bRet;
    }

    qint32 nIndex = data.indexOf( byHead );
    if ( -1 == nIndex ) {
        byData.clear( );
        return bRet;
    } else if ( 0 < nIndex ) {
        byData.remove( 0, nIndex );
    }

    nTotal = byData.length( );
    quint8 cCtrlCode = data.at( nHead );

    switch ( cCtrlCode ) {
    case 0x91 : // Query 无后续数据帧
        break;

    case 0xB1 : // Query 有后续数据帧
        break;

    case 0x94 : // Write 成功

    case 0xD1 : // Query 错误信息
    case 0xD4 : // Write
        nLen += 4;
        if ( nLen > nTotal ) {
            return bRet;
        }

        if ( cEndFrame == byData[ nLen - 1 ] ) {
            ProcessError( byData.at( nLen - 3 ), 0xD4 == cCtrlCode );
        }

        byData.remove( 0, nLen );
        nTotal = byData.length( );
        bRet = ( nLen <= nTotal );
        break;
    }

    return bRet;
}

void QThreadSPParser::ProcessError( const char cErrorCode, const bool bWrite )
{
    qDebug( ) << ( bWrite ? "Write Error " : "Query Error " ) << cErrorCode << endl;
}

void QThreadSPParser::customEvent( QEvent *e )
{
    QCtrlEvent* pEvent = (  QCtrlEvent* ) e;
    bool bRet = false;

    if ( QCtrlEvent::SPParse == ( QCtrlEvent::CtrlEvent ) pEvent->type( ) ) {
        do {
            bRet = ParseData( pEvent->GetData( ) );
        } while ( bRet );
    }
}
