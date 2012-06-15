#include "qloggerthread.h"

QLoggerThread::QLoggerThread(QObject *parent) :
    QMyBaseThread(parent)
{
    InitializeThread( );
}
