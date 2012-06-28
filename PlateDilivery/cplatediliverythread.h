#ifndef CPLATEDILIVERYTHREAD_H
#define CPLATEDILIVERYTHREAD_H

#include <QThread>
#include <QEvent>
#include <QStringList>
#include <QTcpSocket>
#include <QFile>
#include "Common/commonfunction.h"

class CPlateDiliveryThread : public QThread
{
    Q_OBJECT
public:

    static CPlateDiliveryThread* GetSingleton( );

protected:
    explicit CPlateDiliveryThread(QObject *parent = 0);

    void run( );
    void timerEvent(  QTimerEvent * event );

private:
    void Connect2Host( );
    void CreateSendData( QByteArray& byteData, QStringList& lstData );
    void CheckSum( QByteArray& byteData, char& nCheckSum );

private:
    static CPlateDiliveryThread* pThreadInstance;
    QTcpSocket tcpSocket;
    QSettings* pSettings;
    QString strIP;
    quint16 nPort;
    QTextCodec* pTextCodec;
    QString strToken;
    QFile picFile;
    
signals:
    void WeighingRequest( QStringList lstData );
    
public slots:
    void HandlePlateDilivery( QStringList lstData );
    void IncommingData( );
    
};

#endif // CPLATEDILIVERYTHREAD_H
