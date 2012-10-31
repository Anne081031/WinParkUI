#include "qcontrollercommon.h"
#include <QApplication>
#include <QDir>
#include <QDebug>
#include <windows.h>


//
// Common data, function, class
//

QControllerCommon::QControllerCommon()
{
}

void QControllerCommon::GetPath( QString &strPath, const LedControll::EPath eType )
{
    switch ( eType ) {
    case LedControll::PathConfig :
        strPath = qApp->applicationDirPath( ) + QDir::separator( ) + "LedControl";
        break;
    }
}

void QControllerCommon::PrintDebugInfo( QString strInfo )
{
    qDebug( ) << Q_FUNC_INFO << strInfo << endl;
}

QTextCodec* QControllerCommon::GetTextCodec( )
{
    static QTextCodec* pCodec = NULL;

    if ( NULL != pCodec ) {
        return pCodec;
    }

    QList<QByteArray> lstCodec = pCodec->availableCodecs( );
    QString strText;
    bool bFound = false;

    for ( int nIndex = 0; nIndex < lstCodec.count( ); nIndex++ ) {
        QByteArray byData = lstCodec[ nIndex ];
        strText = QString( byData );
        qDebug( ) << strText << endl;

        if ( 0 == strText.toUpper().compare( "GB18030" ) ||
             0 == strText.toUpper().compare( "GBK" ) ||
             0 == strText.toUpper().compare( "GB2312" ) ) {
            bFound = true;
            break;
        }
    }

    if ( !bFound ) {
        strText = QString( "System" );
    }

    pCodec = QTextCodec::codecForName( strText.toAscii( ) );
    return pCodec;
}

void QControllerCommon::InitApp( )
{
    QString strConfigPath;
    bool bRet = false;
    QDir dir;

    GetPath( strConfigPath, LedControll::PathConfig );
    if ( !dir.exists( strConfigPath ) ) {
        bRet = dir.mkpath( strConfigPath );

        if ( !bRet ) {
            PrintDebugInfo( QString( "dir.mkpath( %1 ) failed." ).arg( strConfigPath ) );
        }
    }
}

QSettings& QControllerCommon::GetConfigSettings( )
{
    static QSettings* pSettings = NULL;

    if ( NULL != pSettings ) {
        return *pSettings;
    }

    QString strFile;
    GetPath( strFile, LedControll::PathConfig );
    strFile += QDir::separator( ) + QString( "Led.ini" );

    pSettings = new QSettings( strFile, QSettings::IniFormat );

    pSettings->setIniCodec( GetTextCodec( ) );

    return *pSettings;
}

void QControllerCommon::SaveSPConfig( const LedControll::SComConfig &sConfig )
{
    QSettings &settings = GetConfigSettings( );

    settings.setValue( "SerialPort/Com", sConfig.nComName );
    settings.setValue( "SerialPort/BaudRate", sConfig.nBaudRate );
    settings.setValue( "SerialPort/DataBit", sConfig.nDataBit );
    settings.setValue( "SerialPort/Parity", sConfig.nParity );
    settings.setValue( "SerialPort/StopBit", sConfig.nStopBit );
    settings.setValue( "SerialPort/FlowCtrl", sConfig.nFlowCtrl );
}

void QControllerCommon::GetSPConfig( LedControll::SComConfig &sConfig )
{
    QSettings &settings = GetConfigSettings( );

    sConfig.nComName = settings.value( "SerialPort/Com", 0 ).toUInt( );
    sConfig.nBaudRate = settings.value( "SerialPort/BaudRate", 12 ).toUInt( );
    sConfig.nDataBit = settings.value( "SerialPort/DataBit", 3 ).toUInt( );
    sConfig.nParity = settings.value( "SerialPort/Parity", 0 ).toUInt( );
    sConfig.nStopBit = settings.value( "SerialPort/StopBit", 0 ).toUInt( );
    sConfig.nFlowCtrl = settings.value( "SerialPort/FlowCtrl", 0 ).toUInt( );
}

void QControllerCommon::SaveModemConfig( const quint8 nDataFlowCtrl, const quint8 nAutoReply )
{
    QSettings &settings = GetConfigSettings( );

    settings.setValue( "Modem/DataFlowCtrl", nDataFlowCtrl );
    settings.setValue( "Modem/AutoReply", nAutoReply );
}

void QControllerCommon::GetModemConfig( quint8& nDataFlowCtrl, quint8& nAutoReply )
{
    QSettings &settings = GetConfigSettings( );

    nDataFlowCtrl = settings.value( "Modem/DataFlowCtrl", 0 ).toUInt( );
    nAutoReply = settings.value( "Modem/AutoReply", 0 ).toUInt( );
}

void QControllerCommon::SaveBufferConfig( const qint32 nInBuffer, const qint32 nOutBuffer )
{
    QSettings &settings = GetConfigSettings( );

    settings.setValue( "Buffer/InSize", nInBuffer );
    settings.setValue( "Buffer/OutSize", nOutBuffer );
}

void QControllerCommon::GetBufferConfig( qint32& nInBuffer, qint32& nOutBuffer )
{
    QSettings &settings = GetConfigSettings( );

    nInBuffer = settings.value( "Buffer/InSize", 8192 ).toInt( );
    nOutBuffer = settings.value( "Buffer/OutSize", 8192 ).toInt( );
}

void QControllerCommon::SaveSystemConfig( LedControll::SSysConfig &sConfig )
{
    QSettings &settings = GetConfigSettings( );

    settings.setValue( "System/RunMode", sConfig.nRunMode );
    settings.setValue( "System/SysncMode", sConfig.nSyncMode );
    settings.setValue( "System/BaseRadiance", sConfig.nBaseRadiance );
    settings.setValue( "System/ActivatedSwitch", sConfig.nActivatedSwitch );
    settings.setValue( "System/FrequencyTime", sConfig.nFlashTime );
    settings.setValue( "System/FrequencyRadiance", sConfig.nFrequencyRadiance );
    settings.setValue( "System/FlashTime", sConfig.nFlashTime );
    settings.setValue( "System/FlashRadiance", sConfig.nFlashRadiance );

    sConfig.cLocation[ LedControll::nLOCATION_SIZE - 1 ] = 0;
    QString strLocation = QString::fromWCharArray( sConfig.cLocation );
    settings.setValue( "System/Location", strLocation );
}

void QControllerCommon::GetSystemConfig( LedControll::SSysConfig &sConfig )
{
    QSettings &settings = GetConfigSettings( );

    sConfig.nRunMode = settings.value( "System/RunMode", 1 ).toUInt( );
    sConfig.nSyncMode = settings.value( "System/SyncMode", 1 ).toUInt( );
    sConfig.nBaseRadiance = settings.value( "System/BaseRadiance", 0 ).toUInt( );
    sConfig.nActivatedSwitch = settings.value( "System/ActivatedSwitch", 0 ).toUInt( );
    sConfig.nFrequencyTime = settings.value( "System/FrequencyTime", 0 ).toUInt( );
    sConfig.nFrequencyRadiance = settings.value( "System/FrequencyRadiance", 0 ).toUInt( );
    sConfig.nFlashTime = settings.value( "System/FlashTime", 0 ).toUInt( );
    sConfig.nFlashRadiance = settings.value( "System/FlashRadiance", 0 ).toUInt( );

    QString strLocation = settings.value( "System/Location", "Œ¥…Ë÷√" ).toString( );
    const wchar_t* pData = ( wchar_t* ) strLocation.utf16( );
    qint32 nLen = strLocation.length( );
    qint32 nRealLen = LedControll::nLOCATION_SIZE - 1;
    if ( nRealLen < nLen ) {
        strLocation.remove( nRealLen, nLen - nRealLen );
    }

    wcscpy( sConfig.cLocation, pData );
}

void QControllerCommon::ControlSysMenu( QWidget &wg )
{
    Qt::WindowFlags flags = wg.windowFlags( );
    flags &= ( ~Qt::WindowContextHelpButtonHint );
    wg.setWindowFlags( flags ); // Help

    wg.setMinimumSize( wg.width( ), wg.height( ) );
    wg.setMaximumSize( wg.width( ), wg.height( ) );

    HMENU hSysMenu = GetSystemMenu( wg.winId( ), FALSE );

    if ( NULL != hSysMenu ) {
        EnableMenuItem( hSysMenu, SC_CLOSE, MF_BYCOMMAND | MF_GRAYED ); // Close
    }
}
