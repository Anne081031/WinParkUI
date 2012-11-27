#include "parserevent.h"

CParserEvent::CParserEvent( QByteArray& data, quint32 nSocket, ParserEvent event  ) : QEvent( ( Type ) event )
{
    nSocketPointer = nSocket;
    byData.append( data );
}

CParserEvent::CParserEvent( QByteArray& data, ParserEvent event  ) : QEvent( ( Type ) event )
{
    nSocketPointer = 0;
    byData.append( data );
}

CParserEvent::CParserEvent( quint32 nSocket, ParserEvent event  ) : QEvent( ( Type ) event )
{
    nSocketPointer = nSocket;
}

QByteArray& CParserEvent::GetData( )
{
    return byData;
}

quint32 CParserEvent::GetSocket( )
{
    return nSocketPointer;
}
