#ifndef QMYTCPSOCKET_H
#define QMYTCPSOCKET_H

#include <QTcpSocket>
#include <QHostAddress>
#include "../ManipulateIniFile/qmanipulateinifile.h"
#include "../CommonLibrary/CommonMacro.h"
#include "../CommonLibrary/qmanipulatemessage.h"

class QMyTcpSocket : public QTcpSocket
{
    Q_OBJECT
public:
    explicit QMyTcpSocket(QObject *parent = 0);

protected:
    bool GetTcpStreamData( );

private:
    void SetMaxDataSize( quint64 nSize );
    quint64 GetMaxDataSize( );
    void Clear( );
    void SetCurrentDataSize( quint64 nSize );
    quint64 GetCurrentDataSize( );

protected:
    QTextCodec* pTextCodec;
    QManipulateMessage processMsg;
    QByteArray* pByteArray;

private:
    quint64 nDataLen;
    quint64 nCurrentLen;
    
signals:
    void NotifyMessage( QString strMsg, QManipulateIniFile::LogTypes type );
    
public slots:
    
};

#endif // QMYTCPSOCKET_H
