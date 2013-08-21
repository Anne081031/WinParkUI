#ifndef QDIGITALCAMERATHREAD_H
#define QDIGITALCAMERATHREAD_H

#include <QThread>
#include "qcameraevent.h"
#include <QApplication>

class QDigitalCameraThread : public QThread
{
    Q_OBJECT

public:
    virtual void PostIPCStartupEvent( );
    virtual void PostIPCSetConnectTimeoutEvent( );
    virtual void PostIPCSetReconnectTimeEvent( );
    virtual void PostIPCLoginEvent( );
    virtual void PostIPCCaptureJPGEvent( );
    virtual void PostIPCStartRealPlayEvent( );
    virtual void PostIPCStopRealPlayEvent( );
    virtual void PostIPCLogoutEvent( );
    virtual void PostIPCCleanupEvent( );

    virtual void CaptureStaticImage( QString& strFile, int nChannel );

protected:
    explicit QDigitalCameraThread(QObject *parent = 0);

private:
    inline void PostEvent( QCameraEvent* pEvent );

private:

signals:
    
public slots:
    
};

#endif // QDIGITALCAMERATHREAD_H
