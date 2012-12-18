#include "qdigitalcamerathread.h"

QDigitalCameraThread* QDigitalCameraThread::pThreadInstance = NULL;

QDigitalCameraThread::QDigitalCameraThread(QObject *parent) :
    QThread(parent)
{
}

QDigitalCameraThread* QDigitalCameraThread::GetInstance( )
{
    if ( NULL == pThreadInstance ) {
        pThreadInstance = new QDigitalCameraThread( );
        pThreadInstance->moveToThread( pThreadInstance );
        pThreadInstance->start( );
    }

    return pThreadInstance;
}

void QDigitalCameraThread::run( )
{
    exec( );
}

void QDigitalCameraThread::customEvent( QEvent *e )
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

