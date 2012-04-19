#ifndef DBWRITETHREAD_H
#define DBWRITETHREAD_H

#include <QThread>
#include "dbevent.h"
#include "dbhistorythread.h"

class CDbWriteThread : public QThread
{
    Q_OBJECT
public:
    explicit CDbWriteThread(QObject *parent = 0);

protected:
    void run( );
    void customEvent( QEvent * e );

private:
    void WriteData( CDbEvent::WriteParameter& paramter, bool bSQL );
    bool ConnectDb( );
    inline void ExcuteSQL( CLogicInterface& intf, bool bSQL, CDbEvent::WriteParameter& paramter );

private:
    CLogicInterface interfaceNormal;
    CDbHistoryThread* pHistoryThread;
    
signals:
    
public slots:
    
};

#endif // DBWRITETHREAD_H
