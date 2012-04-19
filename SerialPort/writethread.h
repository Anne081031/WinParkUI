#ifndef WRITETHREAD_H
#define WRITETHREAD_H

#include <QThread>
#include "winserialport.h"
#include "serialevent.h"

class CWriteThread : public QThread
{
    Q_OBJECT
public:
    explicit CWriteThread(QObject *parent = 0);
    void SetSerialPort( CWinSerialPort* pPort );

protected:
    void run( );
    void customEvent( QEvent * e );

private:
    bool WriteData( QByteArray &byData );

private:
    CWinSerialPort* pWinPort;
    
signals:
    
public slots:
    
};

#endif // WRITETHREAD_H
