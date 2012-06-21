#ifndef QTCPPEERCLIENT_H
#define QTCPPEERCLIENT_H

#include <QTcpSocket>
#include "../ManipulateIniFile/qmanipulateinifile.h"
#include "../CommonLibrary/CommonMacro.h"

class QTcpPeerClient : public QTcpSocket
{
    Q_OBJECT
public:
    explicit QTcpPeerClient( QTextCodec* pCodec, QObject *parent = 0);
    
private:
    void GetKeyMsg( QString &strKey, QString &strMsg, bool bConnected );
    void GenerateLogText( bool bConnected );

private:
    QTextCodec* pTextCodec;

signals:
    void NotifyMessage( QString strMsg, QManipulateIniFile::LogTypes type );
    
public slots:
    
private slots:
    void HandleDisconnected( );
    void HandleConnected( );
    void HandleError ( QAbstractSocket::SocketError socketError );

    void IncomingData( );
};

#endif // QTCPPEERCLIENT_H
