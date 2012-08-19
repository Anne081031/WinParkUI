#ifndef NetProcessData_H
#define NetProcessData_H

#include <QtCore>
#include <QRunnable>
#include "CommonData.h"
#include "manipulatemessage.h"
#include "../common/commonfunction.h"
#include "../Database/mysqldatabase.h"

class CNetProcessData : public QRunnable

{
public:
    static CNetProcessData* GetInstance( const char* pData, quint64 nLen );
    static void GetCommonParams( );
    static void ReleaseResource( );
    void run( );

private:
    CNetProcessData( const char* pData, quint64 nLen );
    void ProcessData( const char* pData, quint64 nLen );
    void ProcessTableData( const char* pData );
    void ProcessImageData( const char* pData );
    void ProcessHeartbeatData( const char* pData );
    void ProcessSvrMsgData( const char* pData );
    void ProcessCltMsgData( const char* pData );
    void ProcessMgmtData( const char* pData );
    static void GetSettings( );
    void GetInOutImage( QStringList& lstData );

    void WriteData2Db( const char* pData, const char* pName, quint32 nDataLen );
    bool WriteFile( const char* pData, const QString& strPath, quint32 nDataLen );
    void WriteDb( QString& strPath, const char* pName );
    void GetAllMgmtSql( bool bRequest );
    inline void GetTableSql( QString& strSql, QString& strPath, const char* pName );

private:
    const char* pDatagram;
    quint64 nDataLen;
    CManipulateMessage processMsg;
    static QVector< QString > vecSql;
    static QVector< QString > vecHBCmd;
    static QSettings* pSettings;

    //
    // Mgmt
    //
    static QFile* pFile;
    static CMySqlDatabase* pMySQL;
    static QHash< QString, QString > hashMgmtSql;
};

#endif // NetProcessData_H
