#ifndef CPLATEDILIVERYTHREAD_H
#define CPLATEDILIVERYTHREAD_H

#include <QThread>
#include <QEvent>
#include <QStringList>
#include <QTcpSocket>
#include <QFile>
#include "Common/commonfunction.h"
#include "cdataparser.h"
#include "qlistener.h"

class CPlateDiliveryThread : public QThread
{
    Q_OBJECT
public:

    static CPlateDiliveryThread* GetSingleton( );
    ~CPlateDiliveryThread( );

protected:
    explicit CPlateDiliveryThread(QObject *parent = 0);

    void run( );
    void timerEvent(  QTimerEvent * event );

private:
    bool Connect2Host( );
    void CreateSendData( quint8 nAddress, QByteArray& byteData, QStringList& lstData );
    void CheckSum( QByteArray& byteData, char& nCheckSum );

    void ParseRequestData( QByteArray& byRequest );

    void SendPlate( quint8 nAddress, QStringList& lstData );
    void StartListener( );

private:
    static CPlateDiliveryThread* pThreadInstance;
    QTcpSocket* pTcpSocket;
    QListener* pListener;
    QSettings* pSettings;
    QString strIP;
    quint16 nPort;
    QTextCodec* pTextCodec;
    QFile picFile;
    quint64 nBytesAvailable;
    QByteArray byData;
    quint32 nPakageSize;
    bool bActiveSend;
    bool bActivePlate;
    CDataParser dataParser;
    QHash< int, QStringList > hashPlate;
    QString strPlates[ 2 ];
    
signals:
    void WeighingRequest( QStringList lstData );
    
public slots:
    void HandlePlateDilivery( int nChannel, QStringList lstData, QString strPlate );
    void IncommingData( );
    void Reconnect( );
    void HandleResponse( QByteArray byResponse );
    void HandleAccept( int socketDescriptor );
    
};

#endif // CPLATEDILIVERYTHREAD_H
