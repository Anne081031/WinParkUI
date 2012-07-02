#include "qudpclient.h"

QUdpClient::QUdpClient(QObject *parent) :
    QUdpSocket(parent)
{
     setObjectName( "QUdpClient" );
}
