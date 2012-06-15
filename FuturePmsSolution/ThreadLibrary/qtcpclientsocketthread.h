#ifndef QTCPCLIENTSOCKETTHREAD_H
#define QTCPCLIENTSOCKETTHREAD_H

#include "qmybasethread.h"

class QTcpClientSocketThread : public QMyBaseThread
{
    Q_OBJECT
public:
    explicit QTcpClientSocketThread(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // QTCPCLIENTSOCKETTHREAD_H
