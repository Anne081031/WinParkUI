#ifndef QDIGITALCAMERATHREAD_H
#define QDIGITALCAMERATHREAD_H

#include <QThread>
#include "qcameraevent.h"

class QDigitalCameraThread : public QThread
{
    Q_OBJECT

public:
    static QDigitalCameraThread* GetInstance( );

protected:
    explicit QDigitalCameraThread(QObject *parent = 0);

    void run( );
    void customEvent( QEvent *e );

private:

private:
    static QDigitalCameraThread* pThreadInstance;
    
signals:
    
public slots:
    
};

#endif // QDIGITALCAMERATHREAD_H
