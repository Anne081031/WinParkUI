#include "ThirdParty\scu.h"

CScu::CScu(QObject *parent) :
    QObject(parent)
{
    txtCodec = CCommonFunction::GetTextCodec( );
    pSystemSet = CCommonFunction::GetSettings( CommonDataType::CfgSystem );
    byBuffer.setBuffer( &bySendData );
}

void CScu::InteractWithScu( QStringList &lstData )
{
    ContructDatagram( lstData );
    SendDatagram( );
}

void CScu::ContructDatagram( QStringList &lstData )
{
    bySendData.clear( );

    if ( 0 == lstData.count( ) || !byBuffer.open( QIODevice::WriteOnly ) ) {
        return;
    }

    QByteArray byContent = txtCodec->fromUnicode( lstData.join( "##" ) );

    QDataStream stream( &byBuffer );
    //数据	长度(字节)	数据类型	偏移量
    //校验起始符	1	char	0
    //保留字段	1	byte	1
    //所属系统	1	byte	2
    //设备类型	1	byte	3
    //设备编号	10	string	4
    //数据类型(来源)	1	byte	14
    //级别	1	byte	15
    //内容长度	2	short	16
    //内容数目	1	byte	18
    //内容	N	string	19
    //校验结束符	2	string	19+N
    //校验和	2	string	21+N

    stream << '$' << 1 << 25 << 100;
    stream << 0 << 0 << 0 << 0 << 0 << 0 << 0 << 0 << 0 << 1;
    stream << 2 << 1;
    stream << ( qint16 ) byContent.count( );
    stream << 2;
    stream << byContent;
    stream << '*' << '*';

    qint16 nCheckSum = bySendData.at( 1 );
    for ( int nIndex = 2; nIndex < bySendData.count( ) - 2; nIndex++ ) {
        nCheckSum ^= bySendData.at( nIndex );
    }

    QChar fillChar( '0' );
    QString strCheckSum = QString( "%1" ).arg( nCheckSum, 2, 16, fillChar );
    byContent.append( txtCodec->fromUnicode( strCheckSum ) );

    byBuffer.close( );
}

void CScu::SendDatagram( )
{
    if ( QAbstractSocket::ConnectedState != udpClient.state( ) ) {
        QString strIP = pSystemSet->value( "ThirdParty/ScuMsgCenterIP", "127.0.0.1" ).toString( );
        QString strPort = pSystemSet->value( "ThirdParty/ScuMsgCenterPort", "32009" ).toString( );
        QHostAddress address( strIP );
        quint16 nPort = strPort.toUShort( );

        udpClient.Connect2Server( address, nPort );
    }

    udpClient.SendData( bySendData );
}
