#ifndef QJWSIPCTHREAD_H
#define QJWSIPCTHREAD_H

#include <QHash>
#include <QThread>
#include "qjwsipcevent.h"
#include <QTextCodec>
#include <QDebug>
//#include "../Common/commonfunction.h"

class QJwsIPCThread : public QThread
{
    Q_OBJECT
public:
    static QJwsIPCThread* GetInstance( );
    void InitializeThread( );
    void SendNotify( HANDLE hTmCC, BOOL bConnect, unsigned int dwResult );

    void PostIPCStartupEvent( );
    void PostIPCSetConnectTimeoutEvent( QJwsIPCEvent::EventParam& uParam );
    void PostIPCSetReconnectTimeEvent( QJwsIPCEvent::EventParam& uParam  );
    void PostIPCLoginEvent( QJwsIPCEvent::EventParam& uParam  );
    void PostIPCCaptureJPGEvent( QJwsIPCEvent::EventParam& uParam  );
    void PostIPCStartRealPlayEvent( QJwsIPCEvent::EventParam& uParam  );
    void PostIPCStopRealPlayEvent( QJwsIPCEvent::EventParam& uParam );
    void PostIPCLogoutEvent( QJwsIPCEvent::EventParam& uParam );
    void PostIPCCleanupEvent( );

    void CapturePreviewImage( HWND hPlayWnd, QString& strFileName );
    void CaptureDeviceImage( QString& strIP, QString& strFileName );

private:
    typedef QHash< QString, LONG > QIPCUserIDHash;
    typedef QHash< HWND, LONG > QIPCWndPlayHandleHash;

    explicit QJwsIPCThread(QObject *parent = 0);
    inline void PostIPCEvent( QJwsIPCEvent::IPCEventType evtType );
    inline void PostIPCEvent( QJwsIPCEvent::IPCEventType evtType,
                              QJwsIPCEvent::EventParam& uParam );
    inline void GetErrorMessage( );
    inline void EmitMsg( QString strMsg, QString strFunName );

protected:
    void run( );
    void customEvent( QEvent* event );

private:
    void ProcessIPCStartupEvent( QJwsIPCEvent* pEvent );
    void ProcessIPCSetConnectTimeoutEvent( QJwsIPCEvent* pEvent );
    void ProcessIPCSetReconnectTimeEvent( QJwsIPCEvent* pEvent );
    void ProcessIPCLoginEvent( QJwsIPCEvent* pEvent );
    void ProcessIPCCaptureJPGEvent( QJwsIPCEvent* pEvent );
    void ProcessIPCStartRealPlayEvent( QJwsIPCEvent* pEvent );
    void ProcessIPCStopRealPlayEvent( QJwsIPCEvent* pEvent );
    void ProcessIPCLogoutEvent( QJwsIPCEvent* pEvent );
    void ProcessIPCCleanupEvent( QJwsIPCEvent* pEvent );

    inline void SetUserID( char* pIP, LONG lUserID );
    inline LONG GetUserID( char* pIP );
    inline void RemoveUserID( char* pIP );

    inline void SetPlayHandle( HWND hPlayWnd, LONG lPlayHandle );
    inline LONG GetPlayHandle( HWND hPlayWnd );
    inline void RemovePlayHandle( HWND hPlayWnd );
    inline void ClearHash( );

    inline void JwsCleanup( HANDLE hCtrl );
    void JwsConnect( QJwsIPCEvent* pEvent, HANDLE hCtrl );

private:
    QIPCUserIDHash hashIP_UserHandle;
    QIPCWndPlayHandleHash hashWnd_PlayHandle;
    bool bStarted;
    static QJwsIPCThread* pThreadInstance;
    QTextCodec* pCodec;

    //HANDLE hTmccCtrl;
    HANDLE hTmccPreview;

signals:
    void NotifyMessage( QString strMsg );
    void CapturedJPGImage( quint32 nChannel, QString strFileName );


protected slots:
    void HandleStarted( );
    void HandleFinished( );
};

#endif // QJWSIPCTHREAD_H
