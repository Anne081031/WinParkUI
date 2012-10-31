#include "qthreadsp.h"
#include "QApplication"
#include "../ControllerCommon/qctrlevent.h"

QThreadSP* QThreadSP::pSingleton = NULL;

QThreadSP::QThreadSP(QObject *parent) :
    QThread(parent)
{
    pDataReceiver = NULL;
    pController = NULL;
}

void QThreadSP::SetController( QControllerSP *pCtrlr )
{
    pController = pCtrlr;

    connect( pController, SIGNAL( Data( QByteArray ) ), this, SLOT( HandleData( QByteArray ) ) );
}

void QThreadSP::SetDataReceiver( QThread *pThread )
{
    pDataReceiver = pThread;
}

QThreadSP& QThreadSP::GetSingleton( )
{
    if ( NULL == pSingleton )   {
        pSingleton = new QThreadSP( );
        pSingleton->start( );
        pSingleton->moveToThread( pSingleton ) ;
    }

    return *pSingleton;
}

void QThreadSP::HandleData( QByteArray data )
{
    SendData( data );
}

void QThreadSP::SendData( QByteArray &data )
{
    if ( NULL != pDataReceiver ) {
        return;
    }

    QCtrlEvent* pEvent = new QCtrlEvent( ( QCtrlEvent::Type ) QCtrlEvent::SPParse );
    pEvent->SetData( data );
    qApp->postEvent( pDataReceiver, pEvent );
}

void QThreadSP::run( )
{
    exec( );
}

void QThreadSP::customEvent( QEvent *e )
{
    //QCtrlEvent* pEvent = (  QCtrlEvent* ) e;

    //if ( QCtrlEvent::SPWrite == ( QCtrlEvent::CtrlEvent ) pEvent->type( ) && NULL != pController ) {
    //    pController->WriteData( pEvent->GetData( ) );
    //}
}
