#ifndef QMANIPULATEINIFILE_H
#define QMANIPULATEINIFILE_H

#include "ManipulateIniFile_global.h"
#include <QSettings>
#include <QFile>

class MANIPULATEINIFILESHARED_EXPORT QManipulateIniFile : public QObject
{
    Q_OBJECT

public:
    explicit QManipulateIniFile( QObject* parent = 0 );
    virtual ~QManipulateIniFile( );

public:
    enum CfgFileSection {
        PlatformServer,
        PlatformClient,
        PlatformDataReceiver
    };

    enum CfgFileSectionItem {
        DatabaseHost,
        DatabasePort,
        DatabaseUser,
        DatabasePwd,

        ThreadPool
    };

    Q_DECLARE_FLAGS( CfgFileSections, CfgFileSection )
    Q_FLAGS( CfgFileSection ) // index 0

    Q_DECLARE_FLAGS( CfgFileSectionItems, CfgFileSectionItem )
    Q_FLAGS( CfgFileSectionItem ) // Index 1

public:
    void IniFileValue( const CfgFileSections section, const CfgFileSectionItems item, const bool bWrite, QVariant& varValue );

private:
    QFile objFile;
    QSettings objSettings;

signals:

public slots:

};

#endif // QMANIPULATEINIFILE_H
