#ifndef QMANIPULATEINIFILE_H
#define QMANIPULATEINIFILE_H

#include "ManipulateIniFile_global.h"
#include <QSettings>
#include <QFile>
#include "../CommonLibrary/qcommonfunction.h"
#include <QDir>

class MANIPULATEINIFILESHARED_EXPORT QManipulateIniFile : public QObject
{
    Q_OBJECT

public:
    explicit QManipulateIniFile( QObject* parent = 0 );
    virtual ~QManipulateIniFile( );

public:

    enum IniFileSection {
        IniDatabase,
        IniNetwork,
        IniThreadPool
    }; // Index 0

    Q_DECLARE_FLAGS( IniFileSections, IniFileSection )
    Q_FLAGS( IniFileSection )

    enum IniFileSectionItem {
        DatabaseHost,
        DatabasePort,
        DatabaseUser,
        DatabasePwd,
        //////////////////////////////////////////
        NetworkTcpServerPort,
        NetworkTcpMaxConnection,
        /////////////////////////////////////////
        ThreadPool
    }; // Index 1

    Q_DECLARE_FLAGS( IniFileSectionItems, IniFileSectionItem )
    Q_FLAGS( IniFileSectionItem )

    enum LogType {
        LogDatabase,
        LogNetwork,
        LogThread,
        LogOther,
        LogItems
    }; // Index 2

    Q_DECLARE_FLAGS( LogTypes, LogType )
    Q_FLAGS( LogType )

public:
    void IniFileValue( const IniFileSections section, const IniFileSectionItems item, const bool bWrite, QVariant& varValue );
    void WriteLogFile( const LogTypes types, const QString& strFile, const QVariant& var );
    void ReadLogFile( const LogTypes types, const QString& strFile, QStringList& lstLogs );
    void CfgFileSectionName( const IniFileSections enumType, QString& strName );
    void CfgFileSectionItemName( const IniFileSectionItems enumType, QString& strName );
    void LogTypeName( const LogTypes enumType, QString& strName );

private:
    void GetSettings( QSettings*& pSettings, const QString& strFile );

private:
    QFile objFile;
    QCommonFunction commonFunction;
    QTextCodec* pTextCodec;
    QSettings* pSettingsLog;
    QSettings* pSettingsIni;
    QString strCfgFile;

signals:

public slots:

};

#endif // QMANIPULATEINIFILE_H
