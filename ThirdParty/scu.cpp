#include "ThirdParty\scu.h"

CScu::CScu(QObject *parent) :
    QObject(parent)
{
    pTxtCodec = CCommonFunction::GetTextCodec( );
    pSystemSet = CCommonFunction::GetSettings( CommonDataType::CfgSystem );
    byBuffer.setBuffer( &bySendData );
}

void CScu::InteractWithScu( QStringList &lstData )
{
    pSystemSet->sync( );
    bool bScuMsgCenter = pSystemSet->value( "ThirdParty/ScuMsgCenter", false ).toBool( );
    if ( !bScuMsgCenter ) {
        return;
    }

    ContructDatagram( lstData );
    SendDatagram( );
}

void CScu::ContructDatagram( QStringList &lstData )
{
    bySendData.clear( );

    if ( 0 == lstData.count( ) || !byBuffer.open( QIODevice::WriteOnly ) ) {
        return;
    }

    int nItems = lstData.count( );
    QByteArray byContent = pTxtCodec->fromUnicode( lstData.join( "##" ) );

    QDataStream stream( &byBuffer );
    //����	����(�ֽ�)	��������	ƫ����
    //У����ʼ��	1	char	0
    //�����ֶ�	1	byte	1
    //����ϵͳ	1	byte	2
    //�豸����	1	byte	3
    //�豸���	10	string	4
    //��������(��Դ)	1	byte	14
    //����	1	byte	15
    //���ݳ���	2	short	16
    //������Ŀ	1	byte	18
    //����	N	string	19
    //У�������	2	string	19+N
    //У���	2	string	21+N
    quint8 nDeviceType = ( quint8 ) pSystemSet->value( "ThirdParty/DeviceType", 100 ).toUInt( );
    QString strDeviceID = pSystemSet->value( "ThirdParty/DeviceID", "0000000001" ).toString( );
    quint32 nSystemType = pSystemSet->value( "ThirdParty/SystemType", 12 ).toUInt( );
    QByteArray byDeviceID = pTxtCodec->fromUnicode( strDeviceID );

    stream << ( quint8 ) '$' << ( quint8 ) 1 << ( quint8 ) nSystemType << nDeviceType;
    byBuffer.write( byDeviceID );
    stream << ( quint8 ) 2 << ( quint8 ) 1 << ( qint16 ) byContent.count( ) <<( quint8 ) nItems;
    byBuffer.write( byContent );
    stream << ( quint8 ) '*' << ( quint8 ) '*';

    qint16 nCheckSum = bySendData.at( 1 );
    for ( int nIndex = 2; nIndex < bySendData.count( ) - 2; nIndex++ ) {
        nCheckSum ^= bySendData.at( nIndex );
    }

    QChar fillChar( '0' );
    QString strCheckSum = QString( "%1" ).arg( nCheckSum, 2, 16, fillChar );
    byBuffer.write( pTxtCodec->fromUnicode( strCheckSum ) );

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

    quint64 nRet = udpClient.SendData( bySendData );
    qDebug( ) << "Scu:" << nRet << endl;
}
