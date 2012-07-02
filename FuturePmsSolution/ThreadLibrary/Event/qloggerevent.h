#ifndef QLOGGEREVENT_H
#define QLOGGEREVENT_H

#include "qmythreadevent.h"

class QLoggerEvent : public QMyThreadEvent
{
public:
    explicit QLoggerEvent( Type type );
    ~QLoggerEvent( );

};

#endif // QLOGGEREVENT_H
