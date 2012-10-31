#include "qctrlevent.h"

QCtrlEvent::QCtrlEvent( Type evtType ) : QEvent( evtType )
{
}

void QCtrlEvent::SetData( QByteArray &data )
{
    byData.append( data );
}

QByteArray& QCtrlEvent::GetData( )
{
    return byData;
}
