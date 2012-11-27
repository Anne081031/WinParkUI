#ifndef PARSEREVENT_H
#define PARSEREVENT_H

#include <QEvent>

class CParserEvent : public QEvent
{
public:
    typedef enum __ParserEvent {
        ParserData = User,
        ParserRelease
    } ParserEvent;

public:
    CParserEvent( QByteArray& data, quint32 nSocket, ParserEvent event );
    CParserEvent( QByteArray& data, ParserEvent event );
    CParserEvent( quint32 nSocket, ParserEvent event );
    QByteArray& GetData( );
    quint32 GetSocket( );

private:
    QByteArray byData;
    quint32 nSocketPointer;
};

#endif // PARSEREVENT_H
