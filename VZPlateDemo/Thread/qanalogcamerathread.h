#ifndef QANALOGCAMERATHREAD_H
#define QANALOGCAMERATHREAD_H

#include <QThread>
#include "qcameraevent.h"

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

private:
    static QAnalogCameraThread* pThreadInstance;
    
signals:
    
public slots:
    
};

#endif // QANALOGCAMERATHREAD_H
