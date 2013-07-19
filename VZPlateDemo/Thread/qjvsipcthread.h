#ifndef QJVSIPCTHREAD_H
#define QJVSIPCTHREAD_H

#include "QDigitalCameraThread.h"

class QJvsIPCThread : public QDigitalCameraThread
{
    Q_OBJECT
public:
    static QDigitalCameraThread* GetInstance( );

protected:
    void run( );
    void customEvent( QEvent *e );

private:
    explicit QJvsIPCThread(QObject *parent = 0);

private:
    static QDigitalCameraThread* pThreadInstance;
    
signals:
    
public slots:
    
};

#endif // QJVSIPCTHREAD_H
