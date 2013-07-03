#ifndef QHKCAPTURECARDTHREAD_H
#define QHKCAPTURECARDTHREAD_H

#include "QAnalogCameraThread.h"
#include "HikVisionSdk.h"

class QHkCaptureCardThread : public QAnalogCameraThread
{
    Q_OBJECT
public:
   static QAnalogCameraThread* GetInstance( );

private:
   explicit QHkCaptureCardThread(QObject *parent = 0);

protected:
    void run( );
    void customEvent( QEvent *e );

private:
    void ProcessInitEvent( QCameraEvent* pEvent );
    void ProcessUninitEvent( QCameraEvent* pEvent );

    void ProcessOpenChannelEvent( QCameraEvent* pEvent );
    void ProcessCloseChannelEvent( QCameraEvent* pEvent );

    void ProcessStartCaptureEvent( QCameraEvent* pEvent );
    void ProcessStopCaptureEvent( QCameraEvent* pEvent );

    void ProcessStartPreviewEvent( QCameraEvent* pEvent );
    void ProcessStopPreviewEvent( QCameraEvent* pEvent );

    void ProcessCaptureImageEvent( QCameraEvent* pEvent );

    static QAnalogCameraThread* pThreadInstance;
    HANDLE hChannels[ 4 ];
    
signals:
    
public slots:
    
};

#endif // QHKCAPTURECARDTHREAD_H
