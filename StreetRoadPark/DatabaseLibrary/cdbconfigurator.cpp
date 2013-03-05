#include "cdbconfigurator.h"

#define CONFIG_NAME_DATABASE     "Config.ini"

CDbConfigurator::CDbConfigurator(QObject *parent) :
    QObject(parent)
{
    pSettings = new QSettings( CONFIG_NAME_DATABASE, QSettings::IniFormat );
}

CDbConfigurator::~CDbConfigurator( )
{
    if ( NULL != pSettings ) {
        delete pSettings;
        pSettings = NULL;
    }
}

CDbConfigurator* CDbConfigurator::GetConfigurator( )
{
    static CDbConfigurator* pConfig = NULL;

    if ( NULL == pConfig ) {
        pConfig = new CDbConfigurator( );
    }

    return pConfig;
}

void CDbConfigurator::WriteDbInfo( QString& strIP, quint16 nPort )
{
    pSettings->setValue( "Database/ServerIP", strIP );
    pSettings->setValue( "Database/Port", nPort );
}

void CDbConfigurator::ReadDbInfo( QStringList &lstDbInfo )
{
    //QString& strHost, QString& strUser, QString& strPwd, QString& strDB, quint32 nPort

    lstDbInfo << pSettings->value( "Database/ServerIP", "127.0.01" ).toString( )
              << pSettings->value( "Database/User", "test" ).toString( )
              << pSettings->value( "Database/Pwd", "test" ).toString( )
              << pSettings->value( "Database/Schema", "ParkAdmin" ).toString( )
              << pSettings->value( "Database/Port", "3306" ).toString( );
}

qint32 CDbConfigurator::GetDbThreadInvalidWaitTime( )
{
    return pSettings->value( "Database/DbThreadInvalidWaitTime", 1 ).toInt( );
}

qint32 CDbConfigurator::GetDbThreadCount( )
{
    return pSettings->value( "Database/DbThreadCount", 20 ).toInt( );
}

qint32 CDbConfigurator::GetDbThreadOperationCount( )
{
    return pSettings->value( "Database/DbThreadOperationCount", 10 ).toInt( );
}

QTextCodec* CDbConfigurator::GetTextCodec( )
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
