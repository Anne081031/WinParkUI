#ifndef QANALOGCAMERATHREAD_H
#define QANALOGCAMERATHREAD_H

#include <QThread>
#include "qcameraevent.h"
#include <windows.h>
#include <QApplication>
#include <QFile>
#include "qcommon.h"
#include "qplatethread.h"

class QAnalogCameraThread : public QThread
{
    Q_OBJECT

public:
    virtual void PostInitCaptureSDKEvent( HWND hParentVideo = NULL );
    virtual void PostUninitCaptureSDKEvent( );

    virtual void PostOpenChannelEvent( int nChannel );
    virtual void PostCloseChannelEvent( int nChannel );

    virtual void PostStartCaptureEvent( int nChannel );
    virtual void PostStopCaptureEvent( int nChannel );

    virtual void PostPlayVideoEvent( int nChannel, HWND hVideo );
    virtual void PostStopVideoEvent( int nChannel );

    virtual void PostCaptrueImageEvent( int nChannel, QString& strFile );

protected:
    explicit QAnalogCameraThread(QObject *parent = 0);

private:
    inline void PostEvent( QCameraEvent* pEvent );

private:

signals:
    
public slots:
    
};

#endif // QANALOGCAMERATHREAD_H
