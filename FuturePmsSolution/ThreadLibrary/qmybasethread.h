#ifndef QMYBASETHREAD_H
#define QMYBASETHREAD_H

#include <QThread>

// run( )
// The starting point for the thread.
// After calling start(), the newly created thread calls this function.
// The default implementation simply calls exec(). // event loop
// You can reimplemented this function to do other useful work.
// Returning from this method will end the execution of the thread.
class QMyBaseThread : public QThread
{
    Q_OBJECT
public:
    explicit QMyBaseThread(QObject *parent = 0);

protected:
    void InitializeThread( );
    
signals:
    
protected slots:
    void ExitThread( );
};

#endif // QMYBASETHREAD_H
