#ifndef QLOGGERTHREAD_H
#define QLOGGERTHREAD_H

#include "qmybasethread.h"
#include "Event/qloggerevent.h"

class QLoggerThread : public QMyBaseThread
{
    Q_OBJECT
public:
    static QLoggerThread* GetSingleton( );

protected:
    explicit QLoggerThread(QObject *parent = 0);

    void run( );
    void InitializeSubThread( );
    virtual void customEvent( QEvent* event );

private:
    void ProcessWriteLogEvent( MyDataStructs::PQQueueEventParams pEventParams );

private:
    inline QString GetFileName( );
    void GetLogPath( );

private:
    static QLoggerThread* pThreadInstance;
    QString strLogPath;
    
signals:
    
public slots:
    
};

#endif // QLOGGERTHREAD_H
