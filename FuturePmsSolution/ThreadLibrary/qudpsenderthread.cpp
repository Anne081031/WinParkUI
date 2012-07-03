#include "qudpsenderthread.h"

QUdpSenderThread::QUdpSenderThread(QObject *parent) :
    QMyBaseThread(parent)
{
    setObjectName( "QUdpSenderThread" );
    OutputMsg( QString( " Created" ) );
}
