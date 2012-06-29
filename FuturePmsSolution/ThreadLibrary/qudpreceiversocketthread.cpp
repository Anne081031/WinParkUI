#include "qudpreceiversocketthread.h"

QUdpReceiverSocketThread::QUdpReceiverSocketThread(QObject *parent) :
    QMyBaseThread(parent)
{
    OutputMsg( QString( " Created" ) );
}
