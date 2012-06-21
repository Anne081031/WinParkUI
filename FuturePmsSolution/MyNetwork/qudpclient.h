#ifndef QUDPCLIENT_H
#define QUDPCLIENT_H

#include <QUdpSocket>

class QUdpClient : public QUdpSocket
{
    Q_OBJECT
public:
    explicit QUdpClient(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // QUDPCLIENT_H
