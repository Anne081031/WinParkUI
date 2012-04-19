#include "serialevent.h"

CSerialEvent::CSerialEvent( Type event ) : QEvent(  event )
{
}

void CSerialEvent::SetSerialData( const QByteArray &byData )
{
    bySerialData.append( byData );
}

QByteArray& CSerialEvent::GetSerialData( )
{
    return bySerialData;
}
