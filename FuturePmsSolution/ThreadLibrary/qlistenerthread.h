#ifndef QLISTENERTHREAD_H
#define QLISTENERTHREAD_H

#include <QThread>

class QListenerThread : public QThread
{
    Q_OBJECT
public:
    explicit QListenerThread(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // QLISTENERTHREAD_H
