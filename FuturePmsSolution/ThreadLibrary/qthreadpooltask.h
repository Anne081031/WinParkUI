#ifndef QTHREADPOOLTASK_H
#define QTHREADPOOLTASK_H

#include <QtCore>
#include <QApplication>
#include <QRunnable>
#include <QThread>
#include "../MyDatabase/qmydatabase.h"

class QThreadPoolTask : public QRunnable
{
public:
    QThreadPoolTask( QByteArray* pByteArray, QThread* pSender, QMyDatabase* pDatabase = NULL );
    void run( );

    static QThreadPoolTask* GetInstance( QByteArray* pByteArray, QThread* pSender, QMyDatabase* pDatabase = NULL );

private:
    void ProcessDatabaseTask( );
    void ProcessOtherTask( );

private:
    QByteArray* pByteData;
    QThread* pSenderThread;
    QMyDatabase* pMyDatabase;
};

#endif // QTHREADPOOLTASK_H
