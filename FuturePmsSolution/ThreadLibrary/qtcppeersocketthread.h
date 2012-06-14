#ifndef QTCPPEERSOCKETTHREAD_H
#define QTCPPEERSOCKETTHREAD_H

#include <QThread>

class QTcpPeerSocketThread : public QThread
{
    Q_OBJECT
public:
    explicit QTcpPeerSocketThread(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // QTCPPEERSOCKETTHREAD_H
