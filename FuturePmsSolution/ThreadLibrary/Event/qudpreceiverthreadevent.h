#ifndef QUDPRECEIVERTHREADEVENT_H
#define QUDPRECEIVERTHREADEVENT_H

#include "qmythreadevent.h"

class QUdpReceiverThreadEvent : public QMyThreadEvent
{
public:
    QUdpReceiverThreadEvent( Type type );
};

#endif // QUDPRECEIVERTHREADEVENT_H
