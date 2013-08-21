#include "cconfigurator.h"

CConfigurator* CConfigurator::pConfigurator = NULL;

CConfigurator::CConfigurator(QObject *parent) :
    QObject(parent)
{
    pCodec = QCommon::GetTextCodec( );
    QString strConfig = qApp->applicationDirPath( ) + "/" + "config.ini";
    pSettings = new QSettings( strConfig, QSettings::IniFormat );
    pSettings->setIniCodec( pCodec );
}

CConfigurator* CConfigurator::CreateInstance( )
{
    if ( NULL == pConfigurator ) {
        pConfigurator = new CConfigurator( );
    }

    return pConfigurator;
}

void CConfigurator::ReadAppMainWindow( QString& strType )
{   // Blacklist Demo
    strType = pSettings->value( "AppMainWindow/Type", "Demo" ).toString( ).toUpper( );
}

void CConfigurator::WriteAppMainWindow( QString& strType )
{   // Blacklist Demo
    pSettings->setValue( "AppMainWindow/Type", strType );
}

void CConfigurator::ReadBlacklistPlate( QStringList& lstPlates )
{
    int nCount = pSettings->value( "Blacklist/PlateCount", 0 ).toInt( );
    QString strPlate = "";

    for ( int nIndex = 0; nIndex < nCount; nIndex++ ) {
        strPlate = pSettings->value( QString( "Blacklist/Plate%1" ).arg( nIndex ), "" ).toString( );
        if ( strPlate.isEmpty( ) ) {
            continue;
        }

        lstPlates << strPlate;
    }
}

void CConfigurator::WriteBlacklistPlate( QStringList& lstPlates )
{
    int nCount = lstPlates.count( );
    if ( 0 == nCount ) {
        return;
    }

    QString strKey = "Blacklist/PlateCount";
    int nRawCount = pSettings->value( strKey, 0 ).toInt( );
    pSettings->setValue( strKey, nCount );
    nCount = 0;

    strKey = "Blacklist/Plate%1";
    foreach ( const QString& strPlate, lstPlates ) {
       pSettings->setValue( strKey.arg( nCount++ ), strPlate );
    }

    for ( int nIndex = nCount; nIndex < nRawCount; nIndex++ ) {
        pSettings->remove( strKey.arg( nIndex ) );
    }

    pSettings->sync( );
}
