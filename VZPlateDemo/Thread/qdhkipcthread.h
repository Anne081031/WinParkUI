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

    static void CALLBACK ExceptionCallback( DWORD dwType, LONG lUserID, LONG lHandle, void* pUser );
    void SendNotify( DWORD dwType, LONG lUserID, LONG lHandle );

    static void CALLBACK RealDataStreamCallback( LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, DWORD dwUser );
    void RealStream( LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize );

    static void CALLBACK RealStandardDataStreamCallback( LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, DWORD dwUser );
    void RealStandardStream( LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize );

private:
    static QDigitalCameraThread* pThreadInstance;
    
signals:
    
public slots:
    
};

#endif // QHKIPCTHREAD_H
