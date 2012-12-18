#include "qanalogcamerathread.h"

QAnalogCameraThread* QAnalogCameraThread::pThreadInstance = NULL;

QAnalogCameraThread::QAnalogCameraThread(QObject *parent) :
    QThread(parent)
{
}

QAnalogCameraThread* QAnalogCameraThread::GetInstance( )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = new QAnalogCameraThread( );
        pThreadInstance->moveToThread( pThreadInstance );
        pThreadInstance->start( );
    }

    return pThreadInstance;
}

void QAnalogCameraThread::run( )
{
    exec( );
}

void QAnalogCameraThread::customEvent( QEvent *e )
{
    QCameraEvent* pEvent = ( QCameraEvent* ) e;
    QCameraEvent::CameraEventType evtType = ( QCameraEvent::CameraEventType ) pEvent->type( );

    switch ( evtType ) {
    case QCameraEvent::CameraFileRecognize :
        break;

    case QCameraEvent::CameraVideoRecognize :
        break;
    }
}
