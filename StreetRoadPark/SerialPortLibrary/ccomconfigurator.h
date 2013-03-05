#ifndef CCOMCONFIGURATOR_H
#define CCOMCONFIGURATOR_H

#include <QObject>
#include <QTextCodec>
#include <QSettings>

class CComConfigurator : public QObject
{
    Q_OBJECT
public:
    static CComConfigurator* GetConfigurator( );
    ~CComConfigurator( );

    QTextCodec* GetTextCodec( );

private:
    CComConfigurator(QObject *parent = 0);

private:
    QSettings* pSettings;
    
signals:
    
public slots:
    
};

#endif // CCOMCONFIGURATOR_H
