#ifndef QHKIPCTHREAD_H
#define QHKIPCTHREAD_H

#include "QDigitalCameraThread.h"
#include "HCNetSDK.h"

class QDHkIPCThread : public QDigitalCameraThread
{
    Q_OBJECT
public:
    static QDigitalCameraThread* GetInstance( );
    void CaptureStaticImage( QString &strIP, QString &strFileName, HWND hPlayWnd = NULL );

    void SendNotify( DWORD dwType,
                     LONG lUserID,
                     LONG lHandle );

protected:
    void run( );
    void customEvent( QEvent *e );

private:
    explicit QDHkIPCThread(QObject *parent = 0);

    void ProcessIPCStartupEvent( QCameraEvent* pEvent );
    void ProcessIPCSetConnectTimeoutEvent( QCameraEvent* pEvent );
    void ProcessIPCSetReconnectTimeEvent( QCameraEvent* pEvent );
    void ProcessIPCLoginEvent( QCameraEvent* pEvent );
    void ProcessIPCCaptureJPGEvent( QCameraEvent* pEvent );
    void ProcessIPCStartRealPlayEvent( QCameraEvent* pEvent );
    void ProcessIPCStopRealPlayEvent( QCameraEvent* pEvent );
    void ProcessIPCLogoutEvent( QCameraEvent* pEvent );
    void ProcessIPCCleanupEvent( QCameraEvent* pEvent );
    void ProcessIPCCaptureImage( QCameraEvent* pEvent );

    void CapturePicture( QString& strIP, QString& strFile );

private:
    static QDigitalCameraThread* pThreadInstance;
    
signals:
    
public slots:
    
};

#endif // QHKIPCTHREAD_H
