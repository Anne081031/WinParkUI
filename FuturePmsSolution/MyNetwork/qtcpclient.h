#ifndef QTCPCLIENT_H
#define QTCPCLIENT_H

#include <QTcpSocket>
#include <QHostAddress>
#include "../ManipulateIniFile/qmanipulateinifile.h"
#include "../CommonLibrary/CommonMacro.h"

class QTcpClient : public QTcpSocket
{
    Q_OBJECT
public:
    explicit QTcpClient( QTextCodec* pCodec, QObject *parent = 0);
    ~QTcpClient( );

    bool Connect2Server( const QHostAddress &hostAddr, quint16 nPort );
    quint64 SendData( const char * data, qint64 maxSize );
    quint64 SendData( const QByteArray & byteArray );
    quint64 ReceiveData( char* data, qint64 maxSize );
    QByteArray ReceiveData( qint64 maxSize );
    QByteArray ReceiveData(  );

private:
    QTextCodec* pTextCodec;
    QHostAddress serverAddress;
    quint16 nServerPort;
    
signals:
    void NotifyMessage( QString strMsg, QManipulateIniFile::LogTypes type );

protected:
    void timerEvent( QTimerEvent * event );
    
public slots:
    
private slots:
    void HandleDisconnected( );
    void HandleConnected( );
    void HandleError ( QAbstractSocket::SocketError socketError );

    void IncomingData( );
};

#endif // QTCPCLIENT_H
