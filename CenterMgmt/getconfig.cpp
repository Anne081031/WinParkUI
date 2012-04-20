#include "getconfig.h"

CGetConfig::CGetConfig(QObject *parent) :
    QObject(parent)
{
    pSystemSet = CCommonFunction::GetSettings( CommonDataType::CfgSystem );
    GetAllTableSql( );
}

bool CGetConfig::GetMgmtTcpFlag( )
{
    return pSystemSet->value( "Mgmt/MgmtTCP", false ).toBool( );
}

bool CGetConfig::GetStartupThreadFlag( bool bSender )
{
    bool bRet = false;
    QString strKey = QString( "Mgmt/Startup%1Thread" ).arg( bSender ? "Sender" : "Receiver" );
    bRet = pSystemSet->value( strKey, false ).toBool( );

    return bRet;
}

void CGetConfig::GetMgmtSvrIP( QString &strIP )
{
    QString strKey = QString( "Mgmt/MgmtSvrIP" );
    strIP = pSystemSet->value( strKey, "127.0.0.1" ).toString( );
}

quint16 CGetConfig::GetMgmtSvrPort( )
{
    QString strKey = QString( "Mgmt/MgmtSvrPort" );
    return pSystemSet->value( strKey, 8000 ).toUInt( );
}

int CGetConfig::GetInterval( )
{
    int nInterval = pSystemSet->value( "Mgmt/SendErInterval", 5 ).toInt( );

    return nInterval;
}

void CGetConfig::GetAllTableSql( )
{
    hashSQL.clear( );

    QString strSeperator = "@";
    lstTables = pSystemSet->value( "Mgmt/Tables", "" ).toString( ).split( strSeperator );
    QString strSql = "";

    foreach ( const QString strTable, lstTables ) {
        strSql = pSystemSet->value( QString( "Mgmt/%1Select" ).arg( strTable ), "" ).toString( );

        if ( !strSql.isEmpty( ) ) {
            strSql.replace( strSeperator, "," );
            hashSQL.insert( strTable, strSql );
        }
    }
}

QStringList& CGetConfig::GetAllTables( )
{
    return lstTables;
}

void CGetConfig::GetSQL( QString &strSql, const QString &strKey )
{
    strSql = hashSQL.value( strKey );
}
