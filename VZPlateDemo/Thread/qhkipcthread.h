#ifndef QHKIPCTHREAD_H
#define QHKIPCTHREAD_H

#include "QDigitalCameraThread.h"

class QHkIPCThread : public QDigitalCameraThread
{
    Q_OBJECT
public:
    explicit QHkIPCThread(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // QHKIPCTHREAD_H
