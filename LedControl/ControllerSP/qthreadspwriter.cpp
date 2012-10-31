#include "qthreadspwriter.h"
#include <QApplication>
#include "../ControllerCommon/qctrlevent.h"

QThreadSPWriter* QThreadSPWriter::pSingleton = NULL;

QThreadSPWriter::QThreadSPWriter(QObject *parent) :
    QThread(parent)
{
}

void QThreadSPWriter::SetController( QControllerSP *pCtrlr )
{
    pController = pCtrlr;
}

QThreadSPWriter& QThreadSPWriter::GetSingleton( )
{
    if ( NULL == pSingleton )   {
        pSingleton = new QThreadSPWriter( );
        pSingleton->start( );
        pSingleton->moveToThread( pSingleton ) ;
    }

    return *pSingleton;
}

void QThreadSPWriter::SendData( QByteArray &data )
{
    QCtrlEvent* pEvent = new QCtrlEvent( ( QCtrlEvent::Type ) QCtrlEvent::SPWrite );
    pEvent->SetData( data );
    qApp->postEvent( this, pEvent );
}

void QThreadSPWriter::run( )
{
    exec( );
}

void QThreadSPWriter::customEvent( QEvent *e )
{
    QCtrlEvent* pEvent = (  QCtrlEvent* ) e;

    if ( QCtrlEvent::SPWrite == ( QCtrlEvent::CtrlEvent ) pEvent->type( ) && NULL != pController ) {
        pController->WriteData( pEvent->GetData( ) );
    }
}
