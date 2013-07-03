#ifndef QJVSIPCTHREAD_H
#define QJVSIPCTHREAD_H

#include "QDigitalCameraThread.h"

class QJvsIPCThread : public QDigitalCameraThread
{
    Q_OBJECT
public:
    explicit QJvsIPCThread(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // QJVSIPCTHREAD_H
