#ifndef CPARSERTHREAD_H
#define CPARSERTHREAD_H

#include <QThread>
#include "ccomthreadevent.h"

class CParserThread : public QThread
{
    Q_OBJECT
public:
    static CParserThread* CreateThread( QObject* parent = 0 );
    void PostData( QByteArray& byData );

protected:
    void run( );
    void customEvent( QEvent * pEvent );

private:
    explicit CParserThread( QObject *parent = 0);
    void Initialize( );

    bool ParseData( QByteArray& byData );

    inline void PostEvent( CComThreadEvent* pEvent );

    inline void SendLog( QByteArray& byCmd, bool bStatic );
    inline void SendLog( QString& strLog, bool bStatic );

private:
    QByteArray byPortData;
    char cStart;
    QByteArray byEnd;
    
signals:
    void Log( QString strLog, bool bStatic );

public slots:
    
};

#endif // CPARSERTHREAD_H
