#include "qiniconfigfile.h"


QIniConfigFile::QIniConfigFile()
{
}

quint16 QIniConfigFile::GetServerListenPort( )
{
    quint16 nPort = 6000;

    return nPort;
}

qint32 QIniConfigFile::GetMaxPendingConnections( )
{
    qint32 nMaxConn = 100;

    return nMaxConn;
}

qint32 QIniConfigFile::GetSocketCountEachServerThread( )
{
    qint32 nSocketCount = 3;

    return nSocketCount;
}

qint32 QIniConfigFile::GetDataParserCountEachServerThread( )
{
    qint32 nParserCount = 2;

    return nParserCount;
}

qint32 QIniConfigFile::GetDbThreadPoolThreadCount( )
{
    qint32 nThreadCount = 10;

    return nThreadCount;
}

qint32 QIniConfigFile::GetDbMaxDbConnections( )
{
    qint32 nConnCount = 10;

    return nConnCount;
}

QString QIniConfigFile::GetServerIP( )
{
    QString strIP = "127.0.0.1";

    return strIP;
}

qint32 QIniConfigFile::GetTaskCount4DbConnection( )
{
    qint32 nTaskCount = 10;

    return nTaskCount;
}

quint8 QIniConfigFile::GetLogCount( )
{
    quint8 nCount = 100;

    return nCount;
}

qint32 QIniConfigFile::GetSocketThreadServerSleepTime( )
{
    qint32 nTime = 10; // Minute

    return nTime;
}
