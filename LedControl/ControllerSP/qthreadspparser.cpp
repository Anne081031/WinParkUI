#include "qthreadspparser.h"
#include <QApplication>
#include "../ControllerCommon/qctrlevent.h"

QThreadSPParser* QThreadSPParser::pSingleton = NULL;

QThreadSPParser::QThreadSPParser(QObject *parent) :
    QThread(parent)
{
}

QThreadSPParser& QThreadSPParser::GetSingleton( )
{
    if ( NULL == pSingleton )   {
        pSingleton = new QThreadSPParser( );
        pSingleton->start( );
        pSingleton->moveToThread( pSingleton ) ;
    }

    return *pSingleton;
}

void QThreadSPParser::SendData( QByteArray &data )
{
    QCtrlEvent* pEvent = new QCtrlEvent( ( QCtrlEvent::Type ) QCtrlEvent::SPWrite );
    pEvent->SetData( data );
    qApp->postEvent( this, pEvent );
}

void QThreadSPParser::run( )
{
    exec( );
}

void QThreadSPParser::ParseData( QByteArray &data )
{
    byData.append( data );
    //
    // GetFrame ( YiBin )
    //
}

void QThreadSPParser::customEvent( QEvent *e )
{
    QCtrlEvent* pEvent = (  QCtrlEvent* ) e;

    if ( QCtrlEvent::SPParse == ( QCtrlEvent::CtrlEvent ) pEvent->type( ) ) {
        ParseData( pEvent->GetData( ) );
    }
}
