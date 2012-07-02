#include "qudpreceiversocketthread.h"

QUdpReceiverSocketThread::QUdpReceiverSocketThread(QObject *parent) :
    QMyBaseThread(parent)
{
    setObjectName( "QUdpReceiverSocketThread" );
    OutputMsg( QString( " Created" ) );
}
