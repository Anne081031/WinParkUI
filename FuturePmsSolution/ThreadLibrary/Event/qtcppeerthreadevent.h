#ifndef QTCPPEERTHREADEVENT_H
#define QTCPPEERTHREADEVENT_H

#include "QMyThreadEvent.h"

class QTcpPeerThreadEvent : public QMyThreadEvent
{
public:
    explicit QTcpPeerThreadEvent( Type type );
    
};

#endif // QTCPPEERTHREADEVENT_H
