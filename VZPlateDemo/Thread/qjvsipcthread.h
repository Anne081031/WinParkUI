#ifndef QJVSIPCTHREAD_H
#define QJVSIPCTHREAD_H

#include "QDigitalCameraThread.h"
#include "tmTransDefine.h"
#include "tmControlClient.h"

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

    void ProcessIPCStartupEvent( QCameraEvent* pEvent );
    void ProcessIPCSetConnectTimeoutEvent( QCameraEvent* pEvent );
    void ProcessIPCSetReconnectTimeEvent( QCameraEvent* pEvent );
    void ProcessIPCLoginEvent( QCameraEvent* pEvent );
    void ProcessIPCCaptureJPGEvent( QCameraEvent* pEvent );
    void ProcessIPCStartRealPlayEvent( QCameraEvent* pEvent );
    void ProcessIPCStopRealPlayEvent( QCameraEvent* pEvent );
    void ProcessIPCLogoutEvent( QCameraEvent* pEvent );
    void ProcessIPCCleanupEvent( QCameraEvent* pEvent );

    inline void JwsCleanup( HANDLE hCtrl );
    void JwsConnect( QCameraEvent* pEvent, HANDLE hCtrl );

private:
    static QDigitalCameraThread* pThreadInstance;
    
signals:
    
public slots:
    
};

#endif // QJVSIPCTHREAD_H
