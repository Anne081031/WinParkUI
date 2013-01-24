#ifndef QINICONFIGFILE_H
#define QINICONFIGFILE_H

#include "IniConfigFile_global.h"
#include "../CommonLibrary/qcommonlibrary.h"

class INICONFIGFILESHARED_EXPORT QIniConfigFile : public QObject
{
    Q_OBJECT
public:
    static quint16 GetServerListenPort( );
    static qint32 GetMaxPendingConnections( );
    static qint32 GetSocketCountEachServerThread( );
    static qint32 GetDataParserCountEachServerThread( );
    static qint32 GetDbThreadPoolThreadCount( );
    static qint32 GetDbMaxDbConnections( );
    static QString GetServerIP( );
    static qint32 GetTaskCount4DbConnection( );
    static quint8 GetLogCount( );
    static qint32 GetSocketThreadServerSleepTime( );

private:
    QIniConfigFile();

signals:

public slots:

};

#endif // QINICONFIGFILE_H
