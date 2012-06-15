#include "qmybasethread.h"

QMyBaseThread::QMyBaseThread(QObject *parent) :
    QThread(parent)
{
}

void QMyBaseThread::ExitThread( )
{
    delete this;
}

void QMyBaseThread::InitializeThread( )
{
    //  myObject->moveToThread(QApplication::instance()->thread());
    moveToThread( this );
    connect( this, SIGNAL( finished( ) ), this, SLOT( ExitThread( ) ) );
}
