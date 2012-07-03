#ifndef QTHREADPOOLTASK_H
#define QTHREADPOOLTASK_H

#include <QtCore>
#include <QApplication>
#include <QRunnable>
#include <QThread>
#include "../MyDatabase/qmydatabase.h"
#include "../CommonLibrary/CommonEnum.h"
#include "../CommonLibrary/CommonMacro.h"
#include "../CommonLibrary/CommonDataStruct.h"

class QThreadPoolTask : public QRunnable
{
public:
    QThreadPoolTask( QByteArray* pByteArray, QThread* pSender,
                     QAbstractSocket* pPeerSocket, QMyDatabase* pDatabase = NULL,
                     const bool bTcpTaskItem = true,
                     const QString& strSenderIP = QString( ), const quint16 nSenderPort = 0 );
    void run( );

    static QThreadPoolTask* GetInstance( QByteArray* pByteArray, QThread* pSender,
                                         QAbstractSocket* pPeerSocket, QMyDatabase* pDatabase = NULL,
                                         const bool bTcpTaskItem = true,
                                         const QString& strSenderIP = QString( ), const quint16 nSenderPort = 0 );

private:
    void PostThreadPoolFeedbackEvent( bool bFeedback );
    bool ProcessDatabaseTask( );
    bool ProcessOtherTask( );
    inline void FreeByteArray( bool bFeedback );

private:
    QByteArray* pByteData;
    QThread* pSenderThread;
    QAbstractSocket* pFeedbackSocket;
    QMyDatabase* pMyDatabase;
    bool bTcpTask;
    QString strTargetIP;
    quint16 nTargetPort;
};

#endif // QTHREADPOOLTASK_H
