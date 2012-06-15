#ifndef QLOGGERTHREAD_H
#define QLOGGERTHREAD_H

#include "qmybasethread.h"

class QLoggerThread : public QMyBaseThread
{
    Q_OBJECT
public:
    explicit QLoggerThread(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // QLOGGERTHREAD_H
