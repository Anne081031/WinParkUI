#include "qmanipulateinifile.h"
#include <QMetaEnum>

QManipulateIniFile::QManipulateIniFile( QObject* parent ) : QObject( parent )
{
    pTextCodec = commonFunction.GetTextCodec( );
    pSettingsLog = NULL;
    pSettingsIni = NULL;

    commonFunction.GetPath( strCfgFile, QCommonFunction::PathConfigs );

    QString strName;
    commonFunction.GetPathTypeName( QCommonFunction::PathConfigs, strName );
    strCfgFile += strName + ".ini";

    pSettingsIni = new QSettings( strCfgFile, QSettings::IniFormat );
    pSettingsIni->setIniCodec( pTextCodec );
}

QManipulateIniFile::~QManipulateIniFile( )
{
    if ( NULL != pSettingsIni ) {
        delete pSettingsIni;
        pSettingsIni = NULL;
    }

    if ( NULL != pSettingsLog ) {
        delete pSettingsLog;
        pSettingsLog = NULL;
    }
}

void QManipulateIniFile::GetSettings( QSettings*& pSettings, const QString &strFile )
{
    if ( NULL == pSettings ) {
        pSettings = new QSettings( strFile, QSettings::IniFormat );
        goto CODEC;
    }

    if ( strFile.toUpper( ) == pSettings->fileName( ).toUpper( ) ) {
        goto CODEC;
    }

    delete pSettings;

    pSettings = new QSettings( strFile, QSettings::IniFormat );

    CODEC:
    if ( NULL == pSettings->iniCodec( ) ) {
        pSettings->setIniCodec( pTextCodec );
    }
}

void QManipulateIniFile::IniFileValue( const IniFileSections section, const IniFileSectionItems item, const bool bWrite, QVariant &varValue )
{
    QString strSection;
    CfgFileSectionName( section, strSection );

    QString strItem;
    CfgFileSectionItemName( item, strItem );

    QString strKey = strSection + "/" + strItem;

    if ( bWrite ) {
        pSettingsIni->setValue( strKey, varValue );
    } else {
        varValue = pSettingsIni->value( strKey );
    }
}

void QManipulateIniFile::WriteLogFile( const LogTypes types, const QString &strFile, const QVariant &var )
{
    GetSettings( pSettingsLog, strFile );

    QString strName;
    LogTypeName( types, strName );

    QString strCount = "Count";
    QString strKey = QString( "%1/" ).arg( strName ) + "%1";
    int nCount = pSettingsLog->value( strKey.arg( strCount ), 0 ).toInt( ) + 1;

    pSettingsLog->setValue( strKey.arg( strCount ), nCount );
    pSettingsLog->setValue( strKey.arg( nCount ), var );
}

void QManipulateIniFile::ReadLogFile( const LogTypes types, const QString &strFile, QStringList &lstLogs )
{
    GetSettings( pSettingsLog, strFile );

    QString strName;
    LogTypeName( types, strName );

    QString strCount = "Count";
    QString strKey = QString( "%1/" ).arg( strName ) + "%1";
    int nCount = pSettingsLog->value( strKey.arg( strCount ), 0 ).toInt( );

    QString strText = "";

    for ( int nIndex = 1; nIndex <= nCount; nIndex++ ) {
        strText = pSettingsLog->value( strKey.arg( nIndex ), "" ).toString( );

        if ( !strText.isEmpty( ) ) {
            lstLogs << strText;
        }
    }
}

void QManipulateIniFile::CfgFileSectionName( const IniFileSections enumType, QString& strName )
{
    QMetaEnum metaEnum = metaObject( )->enumerator( 0 );
    strName = metaEnum.key( enumType );
}

void QManipulateIniFile::CfgFileSectionItemName( const IniFileSectionItems enumType, QString& strName )
{
    QMetaEnum metaEnum = metaObject( )->enumerator( 1 );
    strName = metaEnum.key( enumType );
}

void QManipulateIniFile::LogTypeName( const LogTypes enumType, QString& strName )
{
    QMetaEnum metaEnum = metaObject( )->enumerator( 2 );
    strName = metaEnum.key( enumType );
}
