#ifndef QTCPCLIENTTHREADEVENT_H
#define QTCPCLIENTTHREADEVENT_H

#include "QMyThreadEvent.h"

class QTcpClientThreadEvent : public QMyThreadEvent
{
public:
    explicit QTcpClientThreadEvent( Type type );
};

#endif // QTCPCLIENTTHREADEVENT_H
