#ifndef QLISTENERTHREAD_H
#define QLISTENERTHREAD_H

#include "qmybasethread.h"

class QListenerThread : public QMyBaseThread
{
    Q_OBJECT
public:
    explicit QListenerThread(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // QLISTENERTHREAD_H
