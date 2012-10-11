#include "PlateDilivery\cplatediliverythread.h"
#include <QHostAddress>
#include <QDebug>
#include <windows.h>
#include <QFile>

CPlateDiliveryThread* CPlateDiliveryThread::pThreadInstance = NULL;

// CWriteThread Serialport
CPlateDiliveryThread::CPlateDiliveryThread(QObject *parent) :
    QThread(parent)
{
    pSettings = CCommonFunction::GetSettings( CommonDataType::CfgSystem );
    pTextCodec = CCommonFunction::GetTextCodec( );
    pListener = NULL;

    CCommonFunction::ConnectMySql( lstConnParams );
    CMySqlDatabase& db = logicInterf.GetMysqlDb( );
    db.DbConnect( lstConnParams[ 0 ], lstConnParams[ 1 ],
                  lstConnParams[ 2 ], lstConnParams[ 3 ],
                  lstConnParams[ 4 ].toUInt( ) );

    StartListener( );

    pTcpSocket = new QTcpSocket( this );

    connect( pTcpSocket, SIGNAL( readyRead( ) ), this, SLOT( IncommingData( ) ) );
    //connect( pTcpSocket, SIGNAL( disconnected( ) ), this, SLOT( Reconnect( ) ) );
    connect( &dataParser, SIGNAL( Response( QByteArray ) ),
             this, SLOT( HandleResponse( QByteArray ) ) );
    connect( &dataParser, SIGNAL( Capture( quint8 ) ), this, SLOT( HandleCapture( quint8 ) ) );

    strIP = pSettings->value( "PlateDilivery/ReceiverIP", "127.0.0.1" ).toString( );
    nPort = pSettings->value( "PlateDilivery/ReceiverPort", 60000 ).toUInt( );
    int nInterval = pSettings->value( "PlateDilivery/TimerDetector", 6000 ).toInt( );
    bActiveSend = pSettings->value( "PlateDilivery/ActiveSend", false ).toBool( );
    bActivePlate = pSettings->value( "PlateDilivery/ActivePlate", true ).toBool( );
    bPlateVideo = pSettings->value( "CommonCfg/PlateVideo", true ).toBool( );

    nBytesAvailable = 0;
    nPakageSize= 0;

    if ( bActiveSend ) {
        startTimer( nInterval );
    }
}

CPlateDiliveryThread::~CPlateDiliveryThread( )
{
    if ( NULL != pListener ) {
        pListener->terminate( );
    }

    if ( NULL != pTcpSocket ) {
        delete pTcpSocket;
    }
}

void CPlateDiliveryThread::StartListener( )
{
    pListener = new QListener( );
    pListener->moveToThread( pListener );
    connect( pListener, SIGNAL( Accept( int ) ), this, SLOT( HandleAccept( int ) ) );
    pListener->start( );
}

void CPlateDiliveryThread::HandleAccept( int socketDescriptor )
{
    pTcpSocket->setSocketDescriptor( socketDescriptor );
}

CPlateDiliveryThread* CPlateDiliveryThread::GetSingleton( )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = new CPlateDiliveryThread( );
        pThreadInstance->moveToThread( pThreadInstance );
        pThreadInstance->start( );
    }

    return pThreadInstance;
}

void CPlateDiliveryThread::Reconnect( )
{
    Connect2Host( );
}

bool CPlateDiliveryThread::Connect2Host( )
{
    return QAbstractSocket::ConnectedState == pTcpSocket->state( );
}

void CPlateDiliveryThread::run( )
{
    Connect2Host( );
    exec( );
}

void CPlateDiliveryThread::HandleResponse( QByteArray byResponse )
{
    if ( !Connect2Host( ) ) {
        return;
    }

    pTcpSocket->write( byResponse );
    pTcpSocket->flush( );
    pTcpSocket->waitForBytesWritten( );
}

void CPlateDiliveryThread::timerEvent( QTimerEvent *event )
{
    //Connect2Host( );
    dataParser.TimerActiveSend( 1 );
    //msleep( 10000 );
    dataParser.TimerActiveSend( 2 );
}

void CPlateDiliveryThread::ParseRequestData( QByteArray &byRequest )
{
    QByteArray byToken = dataParser.GetToken( byRequest );
    if ( byToken != Protocol::byToken ) {
        return;
    }

    dataParser.Parse( byRequest );

    if ( Protocol::RequestQueryPlateData == dataParser.GetMessageType( byRequest ) ) {
        QByteArray byBody = dataParser.GetBody( byRequest );
        quint8 nAddress = byBody.at( 0 );

        if ( !hashPlate.contains( nAddress ) ) {
            return;
        }

        QStringList lstData = hashPlate.value( nAddress );
        //lstData << "´¨A123456" << "20120814093002" << "80" << "D:\\WinParkUI\\debug\\MainBG.jpg";
        SendPlate( nAddress, lstData );
    } else if ( Protocol::RequestSavePlate == dataParser.GetMessageType( byRequest ) ) {
        QByteArray byBody = dataParser.GetBody( byRequest );
        SavePlate( byBody );
    }
}

void CPlateDiliveryThread::IncommingData( )
{
    qint64 nBytes = pTcpSocket->bytesAvailable( );
    QByteArray byteData = pTcpSocket->read( nBytes );

    if ( 0 == nBytesAvailable ) { // Start
        if ( nBytes < Protocol::nHeadLength ) {
            return;
        }

        nPakageSize = dataParser.GetStreamLength( byteData );
    }


    byData.append( byteData );

    nBytesAvailable += nBytes;

    if ( nPakageSize == nBytesAvailable ) { // End
        ParseRequestData( byData );
    }

    if ( nPakageSize <= nBytesAvailable ) {
        nBytesAvailable = 0;
        nPakageSize = 0;
        byData.clear( );
    }

    qDebug( ) << Q_FUNC_INFO << byteData.length( );

    //QString strContent( byteData );
    //QStringList lstData = strContent.split( "," );

    //emit WeighingRequest( lstData );
}

void CPlateDiliveryThread::CheckSum( QByteArray &byteData, char &nCheckSum )
{
    nCheckSum = byteData.at( 0 );

    for ( int nIndex = 1; nIndex < byteData.length( ); nIndex++ ) {
        nCheckSum ^= byteData.at( nIndex );
    }
}

void CPlateDiliveryThread::ConnectDb( )
{
    CMySqlDatabase& db = logicInterf.GetMysqlDb( );

    if ( !db.PingMysql( ) ) {
        //CCommonFunction::ConnectMySql( lstConnParams );
        db.DbConnect( lstConnParams[ 0 ], lstConnParams[ 1 ],
                      lstConnParams[ 2 ], lstConnParams[ 3 ],
                      lstConnParams[ 4 ].toUInt( ) );
    }
}

void CPlateDiliveryThread::SavePlate( QByteArray &byStream )
{
    if ( 1 > byStream.length( ) ) {
        return;
    }

    QString strPlate( byStream.right( byStream.length( ) - 1 ) );
    SavePlate( strPlate );
}

void CPlateDiliveryThread::SavePlate( QString &strPlate )
{
    ConnectDb( );
    QString strSql = QString( "Insert IGNORE RawPlateTable Values( '%1' )" ).arg( strPlate );
    logicInterf.ExecuteSql( strSql );
}

char CPlateDiliveryThread::GetConfidence( char nConfidence, const QString& strPlate )
{
    char nConfid = nConfidence;

    ConnectDb( );
    QString strSql = QString( "Select RawPlate From RawPlateTable Where RawPlate = '%1'" ).arg( strPlate );
    QStringList lstRows;
    logicInterf.ExecuteSql( strSql, lstRows );
    if ( 0 < lstRows.count( ) ) {
        nConfid = char ( 100 );
        static QFile file( "c:\\Plate.txt" );
        if ( file.exists( ) && !file.isOpen( ) ) {
             file.open( QIODevice::Append );
        }

        QString strDateTime = QDateTime::currentDateTime( ).toString( "yyyyMMddHHmmss.zzz " );
        QString tmp = strDateTime + strPlate + "\r\n";
        QByteArray byPlate = CCommonFunction::GetTextCodec( )->fromUnicode( tmp );
        file.write( byPlate );
        file.flush( );
    }

    return nConfid;
}

void CPlateDiliveryThread::CreateSendData( quint8 nAddress, QByteArray &byteData, QStringList &lstData )
{
    //  lstData << strPlate << strDateTime << QString::number( nConfidence ) << strFileName;

    byteData.clear( );

    QByteArray bytePlate = pTextCodec->fromUnicode( lstData.at( 0 ) );
    QByteArray byteDateTime = pTextCodec->fromUnicode( lstData.at( 1 ) );
    char nConfidence = GetConfidence( ( char ) lstData.at( 2 ).toShort( ), lstData.at( 0 ) );

    char nPlateLength = ( char ) bytePlate.length( );
    const QString& strFileName = lstData.at( 3 );

    QByteArray fileData;
    picFile.setFileName( strFileName );
    if ( picFile.open( QIODevice::ReadOnly ) ) {
        fileData = picFile.readAll( );
        picFile.close( );
    }

    //picFile.remove(  );
    quint32 nFileLength = fileData.length( );

    quint32 nStreamLength = Protocol::nHeadLength + sizeof ( quint8 ) +
            Protocol::nDateTimeLength + sizeof ( quint8 ) * 2 +
            sizeof ( quint32 ) + bytePlate.length( ) + nFileLength;

    nStreamLength = htonl( nStreamLength );
    nFileLength = htonl( nFileLength );

    byteData.append( Protocol::byToken );
    byteData.append( ( char ) Protocol::ResponsePlateData );
    byteData.append( ( const char* ) &nStreamLength, sizeof ( quint32 ) );
    byteData.append( nAddress );
    byteData.append( byteDateTime );
    byteData.append( nConfidence );
    byteData.append( nPlateLength );
    byteData.append( ( const char* ) &nFileLength, sizeof ( quint32 ) );
    byteData.append( bytePlate );
    byteData.append( fileData );
}

void CPlateDiliveryThread::SendPlate( quint8 nAddress, QStringList &lstData )
{
    if ( 4 != lstData.count( ) || !Connect2Host( ) ) {
        return;
    }

    QByteArray byteData;

    CreateSendData( nAddress, byteData, lstData );
    pTcpSocket->write( byteData );
    pTcpSocket->flush( );
    pTcpSocket->waitForBytesWritten( );
}

void CPlateDiliveryThread::HandleCapture( quint8 nChannel )
{
    if ( bPlateVideo ) {
        return;
    }

    emit Capture( nChannel );
}

void CPlateDiliveryThread::HandlePlateDilivery( int nChannel, QStringList lstData, QString strPlate )
{
    if ( 2 < nChannel || 0 > nChannel || strPlates[ nChannel ] == strPlate ) {
        return;
    }

    strPlates[ nChannel ] = strPlate;

    if ( hashPlate.contains( nChannel ) ) {
        QStringList lstTmp = hashPlate.value( nChannel );
        if ( 0 == lstTmp.length( ) ) {
            return;
        }

        QString strFile = lstTmp.at( lstTmp.length( ) - 1 );
        QFile::remove( strFile );
        hashPlate.remove( nChannel );
    }

    hashPlate.insert( nChannel, lstData );
    ///////////////////////////////////////////////////////////////////////////////////
    if ( bActivePlate ) {
        SendPlate( nChannel, lstData );
    }
}
