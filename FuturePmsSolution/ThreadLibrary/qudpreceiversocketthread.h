#ifndef QUDPRECEIVERSOCKETTHREAD_H
#define QUDPRECEIVERSOCKETTHREAD_H

#include <QThread>

class QUdpReceiverSocketThread : public QThread
{
    Q_OBJECT
public:
    explicit QUdpReceiverSocketThread(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // QUDPRECEIVERSOCKETTHREAD_H
