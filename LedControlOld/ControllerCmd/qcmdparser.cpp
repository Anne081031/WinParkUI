#include "qcmdparser.h"
#include <QDebug>

//
// Parse serial port command
//

QCmdParser::QCmdParser(QObject *parent) :
    QObject(parent)
{
}

QCmdParser::~QCmdParser( )
{

}

void QCmdParser::GetThreshold( QByteArray &data, QString &strInfo )
{
    QByteArray byHex = data.toHex(  );
    if ( 2 > byHex.count( ) ) {
        return;
    }

    qint8 cHigh = byHex.at( 0 );
    qint8 nLow = byHex.at( 1 );

    data.clear( );
    data.append( ( qint8 ) byHex.toShort( ) );

    strInfo.sprintf( "%c.%c", cHigh, nLow );
}

void QCmdParser::GetFloatValue( QByteArray &data, QString& strInfo )
{
    float fValue = 0.0F;

    char cValue = data.at( 0 );
    fValue = cValue * 0.01F;
    // fValue = ( cValue & 0x0F ) / 4.0F;
    // fValue += ( cValue >> 4 ) / 2.0F;

    qint32 nLen = data.length( );
    qint32 nValue = 0;

    for ( qint32 nIndex = 1; nIndex < nLen; nIndex++ ) {
        nValue |= ( data.at( nIndex ) << ( ( nIndex - 1 ) * 8 ) );
    }

    fValue += ( nValue * 1.0F );
    strInfo.sprintf( "%5.2f", fValue );
}

void QCmdParser::GetIntegerValue( QByteArray &data, QString &strInfo )
{
    qint32 nValue = data.at( 0 );

    strInfo.sprintf( "%d", nValue );
}

void QCmdParser::GeLedtIlluminance( QByteArray& data, QString& strInfo )
{
    if ( 1 > data.length( ) ) {
        return;
    }

    strInfo = data.at( 0 ) ? "����" : "������";
    qDebug( ) << Q_FUNC_INFO << endl;
}

void QCmdParser::GetFrameFreqControl( QByteArray &data, QString &strInfo )
{
    if ( 1 > data.length( ) ) {
        return;
    }

    switch ( data.at( 0 ) ) {
    case 1 :
       strInfo = "����Ƶ";
       break;

    case 2 :
       strInfo = "�뱶Ƶ";
       break;

    case 3 :
       strInfo = "14.5֡";
       break;
    }
}

void QCmdParser::GetLedTemperature( QByteArray& data, QString& strInfo )
{
    if ( 3 > data.length( ) ) {
        return;
    }

    GetFloatValue( data, strInfo );
    qDebug( ) << Q_FUNC_INFO << endl;
}

void QCmdParser::GetLedWorkState( QByteArray& data, QString& strInfo )
{
    if ( 1 > data.length( ) ) {
        return;
    }

    strInfo = data.at( 0 ) ? "����" : "Ƶ��";
    qDebug( ) << Q_FUNC_INFO << endl;
}

void QCmdParser::GetTriggerMode( QByteArray &data, QString &strInfo )
{
    switch ( data.at( 0 ) ) {
    case 0 :
        strInfo = "�½��ش���";
        break;

    case 1:
        strInfo = "�����ش���";
        break;

    case 2 :
        strInfo = "�½��ظ���ģʽ";
        break;

    case 3 :
        strInfo = "�����ظ���ģʽ";
        break;
    }
}

void QCmdParser::GetLedFreqTriggerMode( QByteArray& data, QString& strInfo )
{
    if ( 1 > data.length( ) ) {
        return;
    }

    GetTriggerMode( data, strInfo );
    qDebug( ) << Q_FUNC_INFO << endl;
}

void QCmdParser::GetLedFreqTime( QByteArray& data, QString& strInfo )
{
    if ( 1 > data.length( ) ) {
        return;
    }

    GetIntegerValue( data, strInfo );
    qDebug( ) << Q_FUNC_INFO << endl;
}

void QCmdParser::GetLedFlashTime( QByteArray& data, QString& strInfo )
{
    if ( 1 > data.length( ) ) {
        return;
    }

    GetIntegerValue( data, strInfo );
    qDebug( ) << Q_FUNC_INFO << endl;
}

void QCmdParser::GetLedFreqBrightness( QByteArray& data, QString& strInfo )
{
    if ( 1 > data.length( ) ) {
        return;
    }

    GetIntegerValue( data, strInfo );
    qDebug( ) << Q_FUNC_INFO << endl;
}

void QCmdParser::GetLedFlashBrightness( QByteArray& data, QString& strInfo )
{
    if ( 1 > data.length( ) ) {
        return;
    }

    GetIntegerValue( data, strInfo );
    qDebug( ) << Q_FUNC_INFO << endl;
}

void QCmdParser::GetLedFrequency( QByteArray& data, QString& strInfo )
{
    if ( 1 > data.length( ) ) {
        return;
    }

    GetIntegerValue( data, strInfo );
    qDebug( ) << Q_FUNC_INFO << endl;
}

void QCmdParser::GetLedWorkVoltage( QByteArray& data, QString& strInfo )
{
    if ( 1 > data.length( ) ) {
        return;
    }

    GetFloatValue( data, strInfo );
    qDebug( ) << Q_FUNC_INFO << endl;
}

void QCmdParser::GetLedExternalTriggerSignalState( QByteArray& data, QString& strInfo )
{
    if ( 1 > data.length( ) ) {
        return;
    }

    strInfo = data.at( 0 ) ? "�쳣" : "����";
    qDebug( ) << Q_FUNC_INFO << endl;
}

void QCmdParser::GetLedFlashRadiance( QByteArray& data, QString& strInfo )
{
    if ( 1 > data.length( ) ) {
        return;
    }

    GetIntegerValue( data, strInfo );
    qDebug( ) << Q_FUNC_INFO << endl;
}

void QCmdParser::GetLedFrenquencyRadiance( QByteArray& data, QString& strInfo )
{
    if ( 1 > data.length( ) ) {
        return;
    }

    GetIntegerValue( data, strInfo );
    qDebug( ) << Q_FUNC_INFO << endl;
}

void QCmdParser::GetLedFlashTriggerMode( QByteArray& data, QString& strInfo )
{
    if ( 1 > data.length( ) ) {
        return;
    }

    GetTriggerMode( data, strInfo );
    qDebug( ) << Q_FUNC_INFO << endl;
}

void QCmdParser::ParseDataDomain( QByteArray &data, QString& strInfo, qint8& nIndex )
{
    // data.length( ) >= 4

    qint32 nDomainLen = 4;

    if ( nDomainLen > data.length( ) ) {
        return;
    }

    qint32 nDI = data[ 0 ];
    nDI |= ( data[ 1 ] << 8 );
    nDI |= ( data[ 2 ] << 16 );
    nDI |= ( data[ 3 ] << 24 );

    data.remove( 0, nDomainLen );
    nDomainLen = data.length( );

    strInfo = "";

    switch ( nDI ) {
    case 0x04000300 :
        nIndex = 0;
        break;

    case 0x0400030C : // Ƶ����������
        GeLedtIlluminance( data, strInfo );
        nIndex = 1;
        break;

    case 0x04000301 : // �¶�
        GetLedTemperature( data, strInfo );
        nIndex = 3;
        break;

    case 0x04000302 : // �ƹ���״̬��00 =Ƶ����01=���⣩ģʽ
        GetLedWorkState( data, strInfo );
        nIndex = 4;
        break;

    case 0x04000303 : // Ƶ��������ʽ��00=�����ش�����01=�½��ش�����02=����ģʽ��ͬ��
        GetLedFreqTriggerMode( data, strInfo );
        nIndex = 5;
        break;

    case 0x04000304 : // �������0���ٷֱ���ʾ��Ƶ��ʱ��
        GetLedFreqTime( data, strInfo );
        nIndex = 7;
        break;

    case 0x04000305 : // �������1���ٷֱ���ʾ������ʱ��
        GetLedFlashTime( data, strInfo );
        nIndex = 8;
        break;

    case 0x04000306 : // �������2���ٷֱ���ʾ��Ƶ������
        GetLedFreqBrightness( data, strInfo );
        nIndex = 9;
        break;

    case 0x04000307 : // �������3���ٷֱ���ʾ����������
        GetLedFlashBrightness( data, strInfo );
        nIndex = 10;
        break;

    case 0x04000308 : // Ƶ��Ƶ��
        GetLedFrequency( data, strInfo );
        nIndex = 13;
        break;

    case 0x04000309 : // LED�ƹ�����ѹ
        GetLedWorkVoltage( data, strInfo );
        nIndex = 14;
        break;

    case 0x0400030A : // �ⲿ�����ź�״̬��00= ������01 = �쳣��
        GetLedExternalTriggerSignalState( data, strInfo );
        nIndex = 15;
        break;

    case 0x0400030B : // ���ⴥ����ʽ��00=�����ش�����01=�½��ش�����02=����ģʽ��ͬ��
        GetLedFlashTriggerMode( data, strInfo );
        nIndex = 6;
        break;

    case 0x0400030E : // Ƶ��������ֵ
        GetThreshold( data, strInfo );
        nIndex = 11;
        break;

    case 0x0400030F : // ���������ֵ
        GetThreshold( data, strInfo );
        nIndex = 12;
        break;

    case 0x0400030D : // �����������
        GeLedtIlluminance( data, strInfo );
        nIndex = 2;
        break;

    case 0x04000310 : // ֡Ƶ����
        GetFrameFreqControl( data, strInfo );
        nIndex = 16;
        break;
    }
}
