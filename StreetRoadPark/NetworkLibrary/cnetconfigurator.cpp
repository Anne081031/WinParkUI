#include "cnetconfigurator.h"

#define CONFIG_NAME_NETWORK     "Config.ini"

CNetConfigurator::CNetConfigurator(QObject *parent) :
    QObject(parent)
{
    pSettings = new QSettings( CONFIG_NAME_NETWORK, QSettings::IniFormat );
}

CNetConfigurator::~CNetConfigurator( )
{
    delete pSettings;
}

CNetConfigurator* CNetConfigurator::GetConfigurator( )
{
    static CNetConfigurator* pConfig = NULL;

    if ( NULL == pConfig ) {
        pConfig = new CNetConfigurator( );
    }

    return pConfig;
}

qint32 CNetConfigurator::GetThreadSocketCount( )
{
    QString strKey = "Network/ThreadSocketCount";

    return pSettings->value( strKey, 10 ).toInt( );
}

qint32 CNetConfigurator::GetPaserPeerCount( )
{
    QString strKey = "Network/PaserPeerCount";

    return pSettings->value( strKey, 2 ).toInt( );
}

qint32 CNetConfigurator::GetPeerThreadSleep( )
{
    QString strKey = "Network/PeerThreadSleep";

    return pSettings->value( strKey, 10 ).toInt( );
}

qint32 CNetConfigurator::GetDataDispatcherParserCount( )
{
    QString strKey = "Network/DataDispatcherParserCount";

    return pSettings->value( strKey, 2 ).toInt( );
}

QTextCodec* CNetConfigurator::GetTextCodec( )
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

    pCodec = QTextCodec::codecForName( strText.toLatin1( ) );
    return pCodec;
}
