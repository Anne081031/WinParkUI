#include "qcmdgenerator.h"

//
// Generate serial port command
//

QCmdGenerator::QCmdGenerator(QObject *parent) :
    QObject(parent)
{
}

QCmdGenerator::~QCmdGenerator( )
{

}

void QCmdGenerator::GetFlashStateAlwaysRadianceChane( QByteArray &body )
{

}

void QCmdGenerator::GetFlashFrenquencyIntensityTune( const qint16 nTune, QByteArray &body )
{
    char* pValue = ( char* ) &nTune;

    char cCmd[ ] = { 0x02, 0x03, 0xd8,  pValue[ 1 ], pValue[ 0 ] };
    body.append( cCmd, sizeof ( cCmd ) );
}

void QCmdGenerator::GetFlashFrenquencyGearClose( const qint32 nClose, QByteArray &body )
{
    char* pValue = ( char* ) &nClose;

    char cCmd[ ] = { 0x04, pValue[ 0 ], pValue[ 1 ],  pValue[ 2 ], pValue[ 3 ] };
    body.append( cCmd, sizeof ( cCmd ) );
}

void QCmdGenerator::GetFlashGearAlwaysRadianceClose( const qint32 nClose, QByteArray &body )
{
    char* pValue = ( char* ) &nClose;

    char cCmd[ ] = { 0x05, pValue[ 0 ], pValue[ 1 ],  pValue[ 2 ], pValue[ 3 ] };
    body.append( cCmd, sizeof ( cCmd ) );
}

void QCmdGenerator::GetFlashGearAlwaysRadianceOpen( const qint32 nOpen, QByteArray &body )
{
    char* pValue = ( char* ) &nOpen;

    char cCmd[ ] = { 0x06, pValue[ 0 ], pValue[ 1 ],  pValue[ 2 ], pValue[ 3 ] };
    body.append( cCmd, sizeof ( cCmd ) );
}

void QCmdGenerator::GetFlashFrenquencyGearWorkTimeSet( const qint32 nTime, QByteArray &body )
{
    char* pValue = ( char* ) &nTime;

    char cCmd[ ] = { 0x07, pValue[ 0 ], pValue[ 1 ],  pValue[ 2 ], pValue[ 3 ] };
    body.append( cCmd, sizeof ( cCmd ) );
}

void QCmdGenerator::GetFlashFrenquencyLightSensitiveIfWork( const qint32 nWork, QByteArray &body )
{
    char* pValue = ( char* ) &nWork;

    char cCmd[ ] = { 0x07, pValue[ 0 ], pValue[ 1 ],  pValue[ 2 ], pValue[ 3 ] };
    body.append( cCmd, sizeof ( cCmd ) );
}

void QCmdGenerator::GetSyncModeCmd( const qint8 nMode, QByteArray &body )
{
    char cCmd[ ] = { 0x09, nMode, 0x00, 0x00, 0x00 };
    body.append( cCmd, sizeof ( cCmd ) );
}

void QCmdGenerator::GetFlashGearSet( const qint8 nGear, QByteArray &body )
{
    char cCmd[ ] = { 0x03, nGear, 0x00, 0x00, 0x00 };
    body.append( cCmd, sizeof ( cCmd ) );
}

void QCmdGenerator::GetFrenquencyGearSet( const qint8 nGear, QByteArray &body )
{
    char cCmd[ ] = { 0x03, nGear, 0x00, 0x00, 0x00 };
    body.append( cCmd, sizeof ( cCmd ) );
}

void QCmdGenerator::GetOldCmdBody( QByteArray &body, LedControll::ECommand eCmd, qint32 nParam )
{
    switch ( eCmd ) {
    case LedControll::CmdFlashStateAlwaysRadianceChane : // 0x01
        GetFlashStateAlwaysRadianceChane( body );
        break;

    case LedControll::CmdFlashFrenquencyIntensityTune : // 0x02
        GetFlashFrenquencyIntensityTune( nParam, body );
        break;

    case LedControll::CmdFlashGearSet : // 0x03
        GetFlashGearSet( nParam, body );
        break;

    case LedControll::CmdFrenquencyGearSet :
        GetFrenquencyGearSet( nParam, body );
        break;

    case LedControll::CmdFlashFrenquencyGearClose : // 0x04
        GetFlashFrenquencyGearClose( nParam, body );
        break;

    case LedControll::CmdFlashGearAlwaysRadianceClose : // 0x05
        GetFlashGearAlwaysRadianceClose( nParam, body );
        break;

    case LedControll::CmdFlashGearAlwaysRadianceOpen : // 0x06
        GetFlashGearAlwaysRadianceOpen( nParam, body );
        break;

    case LedControll::CmdFlashFrenquencyGearWorkTimeSet : // 0x07
        GetFlashFrenquencyGearWorkTimeSet( nParam, body );
        break;

    case LedControll::CmdFlashFrenquencyLightSensitiveIfWork : // 0x08
        GetFlashFrenquencyLightSensitiveIfWork( nParam, body );
        break;

    case LedControll::CmdSyncModeDownTrigger : // 0x09
        GetSyncModeCmd( ( char ) 0x01, body );
        break;

    case LedControll::CmdSyncModeUpTrigger :
        GetSyncModeCmd( ( char ) 0x02, body );
        break;

    case LedControll::CmdSyncModeFollowTrigger :
        GetSyncModeCmd( ( char ) 0x03, body );
        break;
    }
}

void QCmdGenerator::GetNewCmdAddr( QByteArray &body )
{
    const char cAddrValue = ( char ) 0xAA;
    char cAddress[ ] = { cAddrValue, cAddrValue, cAddrValue, cAddrValue, cAddrValue };

    body.append( cAddress );
}

void QCmdGenerator::GetControlCode4NewCmd( QByteArray &body, const bool bQuery )
{
    // D7......D0
    // 00010001B Query / Read from Led
    // 00010100B Not Query / Write to Led
    char cCtrlCode = 0;

    if ( bQuery ) {
        cCtrlCode = ( char ) 17; // 0x11
    } else {
        cCtrlCode = ( char  ) 20; // 0x14
    }

    body.append( cCtrlCode );
}

void QCmdGenerator::GetData4NewCmd( QByteArray &body, const LedControll::ECommand eCmd, qint32 nParam, const bool bQuery )
{
    // BCD
    // 十进制为96的码制，用压缩BCD码为1001 0110

    char cDataLen = 0;

    body.append( cDataLen );
}

void QCmdGenerator::GetCheckSum4NewCmd( QByteArray &body )
{
    char cCheckSum = ( char ) 0;

    foreach ( char c, body ) {
        cCheckSum += ( c % 256 );
    }

    body.append( cCheckSum );
}

void QCmdGenerator::GetNewCmdBody( QByteArray &body, const LedControll::ECommand eCmd, qint32 nParam, const bool bQuery )
{
    const char cFrameStart = ( char ) 0x68;

    GetNewCmdAddr( body ); // Address
    body.append( cFrameStart ); // Frame Start
    GetControlCode4NewCmd( body, bQuery ); // Control code
    GetData4NewCmd( body, eCmd, nParam, bQuery ); // Data length / Data
    GetCheckSum4NewCmd( body ); // CheckSum
}
