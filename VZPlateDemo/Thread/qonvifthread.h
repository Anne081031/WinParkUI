#ifndef QONVIFTHREAD_H
#define QONVIFTHREAD_H

#include "QDigitalCameraThread.h"

class QOnvifThread : public QDigitalCameraThread
{
    Q_OBJECT
public:
    explicit QOnvifThread(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // QONVIFTHREAD_H
