#ifndef QPLATETHREAD_H
#define QPLATETHREAD_H

#include <QThread>
#include "qplateevent.h"
#include <windows.h>
#include "../qcommon.h"
#include <QStringList>
#include "LPKernelEx.h"

class QPlateThread : public QThread
{
    Q_OBJECT
public:
    static QPlateThread* GetInstance( );
    void PostPlateFileRecognize( QString& strFile, int nChannel );
    void PostPlateVideoRecognize( QByteArray& byVideo, int nWidth, int nHeight, int nChannel );
    void PostPlateInitEvent( int nFormat, int nChannel );
    void PostPlateUninitEvent( int nChannel );
    bool SetRecognizeFlag( );

protected:
    void run( );
    void customEvent( QEvent *e );

private:
    explicit QPlateThread(QObject *parent = 0);
    inline void PostEvent( QPlateEvent* pEvent );

    void FileRecognize( QPlateEvent* pEvent );
    void VideoRecognize( QPlateEvent* pEvent );
    void InitSDK( QPlateEvent* pEvent );
    void UninitSDK( QPlateEvent* pEvent );

    BOOL InitVZSDK( int nFormat, qint32 nChannel  );
    void UninitVZSDK( qint32 nChannel  );

    QString GetPlateMoveDirection( int nDirection );
    QString GetWidthHeight( TH_PlateResult* pResult );
    QString GetPlateColor( qint32 nColor );
    void GetResultInfo( QStringList& lstResult, QString& strFile, bool bSuccess, qint32 nNum, TH_PlateResult* pResult );

private:
    static QPlateThread* pThreadInstance;
    QTextCodec* pCodec;
    QString strPlatePath;
    bool bStopRecognize;
    
signals:
    void PlateResult( QStringList lstPlateParam, int nChannel, bool bSuccess, bool bVideo );
    
public slots:
    
};

#endif // QPLATETHREAD_H
