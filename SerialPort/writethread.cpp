#include "writethread.h"
#include <QDebug>

CWriteThread::CWriteThread(QObject *parent) :
    QThread(parent)
{
}

void CWriteThread::SetSerialPort( CWinSerialPort *pPort )
{
    pWinPort = pPort;
}

void CWriteThread::run( )
{
    exec( );
}

void CWriteThread::customEvent( QEvent *e )
{
    // OLTP OLAP / ACID
    // Parameters analyse
    if ( NULL == e || NULL == pWinPort ) {
        return;
    }

    CSerialEvent* pEvent = ( CSerialEvent* ) e;

    switch ( pEvent->type( ) ) {
    case QEvent::User :
        WriteData( pEvent->GetSerialData( ) );
        break;
    }
}

bool CWriteThread::WriteData( QByteArray &byData )
{
    bool bRet = false;
    if ( NULL == pWinPort  ) {
        return bRet;
    }

    int nCount = byData.count( );
    Win_QextSerialPort& rawSerial = pWinPort->GetRawSerialPort( );

    if ( rawSerial.isWritable( ) ) {
        bRet = ( nCount == rawSerial.write( byData ) );
        rawSerial.flush( );
#ifndef QT_NO_DEBUG
        QString strData( byData.toHex( ) );
        qDebug( ) << "Write Serial Port Cmd : " << strData << endl;
#endif
#if false
        int nDelay = 700;
        if ( 8 >= nCount ) {
            nDelay = 100;
        } else if ( 8 < nCount && 16 >= nCount ) {
            nDelay = 200;
        } else {
            nDelay = 300;
        }
#endif

       Sleep( 300 );
    }

    return bRet;
}
