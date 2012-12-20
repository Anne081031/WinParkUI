#ifndef QANALOGCAMERATHREAD_H
#define QANALOGCAMERATHREAD_H

#include <QThread>
#include "qcameraevent.h"
#include <windows.h>
#include "HikVisionSdk.h"

class QAnalogCameraThread : public QThread
{
    Q_OBJECT

public:
    static QAnalogCameraThread* GetInstance( );

protected:
    void run( );
    void customEvent( QEvent *e );

private:
    explicit QAnalogCameraThread(QObject *parent = 0);

    void InitHikSDK( int nChannel, HWND hVideo );
    void UninitHikSDK( );

private:
    static QAnalogCameraThread* pThreadInstance;
    HANDLE hChannel;
    
signals:
    
public slots:
    
};

#endif // QANALOGCAMERATHREAD_H
