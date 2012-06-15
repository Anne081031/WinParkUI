#ifndef QTCPPEERSOCKETTHREAD_H
#define QTCPPEERSOCKETTHREAD_H

#include "qmybasethread.h"

class QTcpPeerSocketThread : public QMyBaseThread
{
    Q_OBJECT
public:
    explicit QTcpPeerSocketThread(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // QTCPPEERSOCKETTHREAD_H
