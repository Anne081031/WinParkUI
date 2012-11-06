#ifndef QTHREADSPPARSER_H
#define QTHREADSPPARSER_H

#include <QThread>
#include "ControllerSP_global.h"

class CONTROLLERSPSHARED_EXPORT QThreadSPParser : public QThread
{
    Q_OBJECT
public:
    void SendData( QByteArray& data );
    static QThreadSPParser& GetSingleton(  );

protected:
    explicit QThreadSPParser(QObject *parent = 0);
    void run( );
    void customEvent( QEvent *e );

private:
    bool ParseData( );
    void ProcessError( const char cErrorCode, const bool bWrite  );
    void ProcessSuccess( );
    void ProcessData( const bool bSubsequence, QByteArray& data );

private:
    static QThreadSPParser* pSingleton;
    QByteArray byData;
    
signals:
    void Cmd( QByteArray data, bool bSend );
    
public slots:
    
};

#endif // QTHREADSPPARSER_H
