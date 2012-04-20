#ifndef GETCONFIG_H
#define GETCONFIG_H

#include <QObject>
#include "Common/commonfunction.h"

class CGetConfig : public QObject
{
    Q_OBJECT
public:
    explicit CGetConfig(QObject *parent = 0);

    bool GetStartupThreadFlag( bool bSender );
    bool GetMgmtTcpFlag( );
    void GetMgmtSvrIP( QString& strIP );
    quint16 GetMgmtSvrPort( );
    int GetInterval( );
    void GetSQL( QString& strSql, const QString& strKey );
    QStringList& GetAllTables( );

private:
    void GetAllTableSql( );

private:
    QSettings* pSystemSet;
    QHash< QString, QString > hashSQL;
    QStringList lstTables;
    
signals:
    
public slots:
    
};

#endif // GETCONFIG_H
