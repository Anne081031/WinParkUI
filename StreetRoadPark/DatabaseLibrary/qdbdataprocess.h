#ifndef QDBDATAPROCESS_H
#define QDBDATAPROCESS_H

#include <QObject>
#include "Database/mysqldatabase.h"
#include <QTcpSocket>

class QDbDataProcess : public QObject
{
    Q_OBJECT
public:
    explicit QDbDataProcess(QObject *parent = 0);
    void SetDatabase( CMySqlDatabase* pDb );
    void SetPeerSocket( QTcpSocket* pSocket );

    void ProcessData( qint32 nPackageType, QByteArray& byData );

private:
    inline void SendLog( QString& stLog, bool bStatic );

private:
    CMySqlDatabase* pDatabase;
    QTcpSocket* pPeerSocket;
    
signals:
    void Log( QString strLog, bool bStatic );
    
public slots:
    
};

#endif // QDBDATAPROCESS_H
