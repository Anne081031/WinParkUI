#ifndef QUDPRECEIVERSOCKETTHREAD_H
#define QUDPRECEIVERSOCKETTHREAD_H

#include "qmybasethread.h"

class QUdpReceiverSocketThread : public QMyBaseThread
{
    Q_OBJECT
public:
    explicit QUdpReceiverSocketThread(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // QUDPRECEIVERSOCKETTHREAD_H
