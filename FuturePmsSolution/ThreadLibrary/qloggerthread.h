#ifndef QLOGGERTHREAD_H
#define QLOGGERTHREAD_H

#include <QThread>

class QLoggerThread : public QThread
{
    Q_OBJECT
public:
    explicit QLoggerThread(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // QLOGGERTHREAD_H
