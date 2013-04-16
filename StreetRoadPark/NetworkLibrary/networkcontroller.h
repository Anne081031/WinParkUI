#ifndef NETWORKCONTROLLER_H
#define NETWORKCONTROLLER_H

#include "NetworkLibrary_global.h"
#include <QObject>
#include "qlistenerthread.h"
#include "qmulticastthread.h"

class NetworkController : public QObject
{
    Q_OBJECT
public:
    static NetworkController* GetController( QObject* parent = NULL );
    static void ReleaseController( );

    void StartListen( quint16 nPort, qint32 nMaxConn );
    void StopListen( );

    void MulticastData( QByteArray& byJson, qint32 nMulticastType );

private:
    NetworkController( QObject* parent );
    ~NetworkController( );

    QListenerThread* pListenerThread;
    QMulticastThread* pMulticastThread;
    static NetworkController* pController;

signals:
    void Log( QString strLog, bool bStatic );

public slots:

private slots:
    void HandleLog( QString strLog, bool bStatic );
};

#endif // NETWORKCONTROLLER_H
