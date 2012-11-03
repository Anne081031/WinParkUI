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
    void ParseData( QByteArray& data );

private:
    static QThreadSPParser* pSingleton;
    QByteArray byData;
    
signals:
    
public slots:
    
};

#endif // QTHREADSPPARSER_H