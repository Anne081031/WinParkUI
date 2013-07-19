#ifndef QDIGITALCAMERATHREAD_H
#define QDIGITALCAMERATHREAD_H

#include <QThread>
#include "qcameraevent.h"

class QDigitalCameraThread : public QThread
{
    Q_OBJECT

public:

protected:
    explicit QDigitalCameraThread(QObject *parent = 0);

private:

signals:
    
public slots:
    
};

#endif // QDIGITALCAMERATHREAD_H
