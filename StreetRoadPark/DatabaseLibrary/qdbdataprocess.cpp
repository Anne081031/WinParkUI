#include "qdbdataprocess.h"

QDbDataProcess::QDbDataProcess( QObject *parent ) :
    QObject( parent )
{
    pDatabase = NULL;
    pPeerSocket = NULL;
}

void QDbDataProcess::SetPeerSocket( QTcpSocket *pSocket )
{
    pPeerSocket = pSocket;
}

void QDbDataProcess::SetDatabase( CMySqlDatabase *pDb )
{
    pDatabase = pDb;
}

void QDbDataProcess::ProcessData( qint32 nPackageType, QByteArray &byData )
{
    //switch

    static QString strSQL = "Insert into test( Testcol, testcol1,testcol2 ) Values( 'Hello', '日本人', '美国人' )";

    QString strError = "";
    pDatabase->DbCrud( strSQL, strError );
}
