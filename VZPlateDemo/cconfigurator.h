#ifndef CCONFIGURATOR_H
#define CCONFIGURATOR_H

#include <QObject>
#include <QSettings>
#include "qcommon.h"
#include <QApplication>
#include <QStringList>

class CConfigurator : public QObject
{
    Q_OBJECT
public:
    static CConfigurator* CreateInstance( );

    void ReadAppMainWindow( QString& strType );
    void WriteAppMainWindow( QString& strType );

    void ReadBlacklistPlate( QStringList& lstPlates );
    void WriteBlacklistPlate( QStringList& lstPlates );

private:
    explicit CConfigurator(QObject *parent = 0);

    QSettings* pSettings;
    QTextCodec* pCodec;
    static CConfigurator* pConfigurator;
    
signals:
    
public slots:
    
};

#endif // CCONFIGURATOR_H
