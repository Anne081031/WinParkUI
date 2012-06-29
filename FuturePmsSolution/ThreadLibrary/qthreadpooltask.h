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
    QThreadPoolTask( QByteArray* pByteArray, QThread* pSender, QTcpSocket* pPeerSocket, QMyDatabase* pDatabase = NULL );
    void run( );

    static QThreadPoolTask* GetInstance( QByteArray* pByteArray, QThread* pSender, QTcpSocket* pPeerSocket, QMyDatabase* pDatabase = NULL );

private:
    void PostThreadPoolFeedbackEvent( bool bFeedback );
    bool ProcessDatabaseTask( );
    bool ProcessOtherTask( );
    inline void FreeByteArray( bool bFeedback );

private:
    QByteArray* pByteData;
    QThread* pSenderThread;
    QTcpSocket* pFeedbackSocket;
    QMyDatabase* pMyDatabase;
};

#endif // QTHREADPOOLTASK_H
