#ifndef QHKIPCTHREAD_H
#define QHKIPCTHREAD_H

#include "QDigitalCameraThread.h"

class QDHkIPCThread : public QDigitalCameraThread
{
    Q_OBJECT
public:
    static QDigitalCameraThread* GetInstance( );

protected:
    void run( );
    void customEvent( QEvent *e );

private:
    explicit QDHkIPCThread(QObject *parent = 0);

private:
    static QDigitalCameraThread* pThreadInstance;
    
signals:
    
public slots:
    
};

#endif // QHKIPCTHREAD_H
