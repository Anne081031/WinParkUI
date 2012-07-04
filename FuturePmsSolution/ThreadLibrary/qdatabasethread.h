#ifndef QDATABASETHREAD_H
#define QDATABASETHREAD_H

#include "qmybasethread.h"
#include "Event/qdatabasethreadevent.h"
#include <QThreadPool>
#include "qthreadpooltask.h"
#include "../MyDatabase/qdatabasegenerator.h"

class QDatabaseThread : public QMyBaseThread
{
    Q_OBJECT
public:
    static QDatabaseThread* GetSingleton( const bool bTcpThread );
    void SetTaskType( bool bTcpaskItem );
    ~QDatabaseThread( );

protected:
    explicit QDatabaseThread(QObject *parent = 0);

    void run( );
    void InitializeSubThread( );
    virtual void customEvent( QEvent* event );

private:
    void ProcessCrudEvent( MyDataStructs::PQQueueEventParams pEventParams );

private:

private:
    static QDatabaseThread* pThreadInstance;
    QThreadPool dbThreadPool;
    QDatabaseGenerator* pDatabaseGenerator;
    bool bTcpTask;

signals:

public slots:

private slots:
    
};

#endif // QDATABASETHREAD_H
