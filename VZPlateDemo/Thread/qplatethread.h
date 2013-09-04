#ifndef QPLATETHREAD_H
#define QPLATETHREAD_H

#include <QThread>
#include "qplateevent.h"
#include <windows.h>
#include "../qcommon.h"
#include <QStringList>
#include "LPKernelEx.h"
#include <QMutex>
#include <QMutexLocker>

class QPlateThread : public QThread
{
    Q_OBJECT
public:
    static QPlateThread* GetInstance( );

    void PostPlateFileRecognize( QString& strFile, int nChannel, bool bMultiThread = false );
    void PostPlateFileRecognize( QString& strFile, QString& strIP, bool bMultiThread = false );
    void PostPlateFileRecognize( QByteArray& byData, QString& strFile, int nChannel, bool bMultiThread = false );

    void PostPlateVideoRecognize( QByteArray& byVideo, int nWidth, int nHeight, int nChannel, bool bMultiThread = false );
    void PostPlateVideoRecognize( QByteArray& byVideo, int nWidth, int nHeight, QString& strIP, bool bMultiThread = false );

    void PostPlateInitEvent( int nFormat, int nChannel );
    void PostPlateUninitEvent( int nChannel );
    bool SetRecognizeFlag( );
    void SetPlateWay( int nWay );

    ~QPlateThread( );

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
    void SendUIResult( int nChannel, bool bSuccess, qint32 nNum, TH_PlateResult* pResult, bool bVideo, QByteArray& byData );

    QPlateThread* CreateSubThread( QString& strThreadKey );
    static QPlateThread* NewThread( );

private:
    static QPlateThread* pThreadInstance;
    QTextCodec* pCodec;
    QString strPlatePath;
    bool bStopRecognize;
    int nPlateWay;
    QHash< QString, QPlateThread* > pSubThreadHash;
    
signals:
    void PlateResult( QStringList lstPlateParam, int nChannel, bool bSuccess, bool bVideo );
    void UIPlateResult( QString strPlate, int nChannel, bool bSuccess,
                        bool bVideo, int nWidth, int nHeight, int nConfidence,
                        QString strDirection, QByteArray byData );
    
private slots:
    void HandlePlateResult( QStringList lstPlateParam, int nChannel, bool bSuccess, bool bVideo );
    void HandleUIPlateResult( QString strPlate, int nChannel, bool bSuccess,
                        bool bVideo, int nWidth, int nHeight, int nConfidence,
                        QString strDirection, QByteArray byData );
};

#endif // QPLATETHREAD_H
