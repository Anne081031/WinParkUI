#ifndef IPCVIDEOFRAME_H
#define IPCVIDEOFRAME_H

#include <QFrame>
#include <QResizeEvent>
#include <QCloseEvent>
#include "./HKIPC/qipcthread.h"

namespace Ui {
class CIPCVideoFrame;
}

class CIPCVideoFrame : public QFrame
{
    Q_OBJECT
    
public:
    explicit CIPCVideoFrame( bool bIPC, QWidget *parent = 0);
    ~CIPCVideoFrame();
    void LocalIPCStartVideo( QString& strIP, HWND hPlayWnd );
    void LocalIPCStopVideo( HWND hPlayWnd );
    void LocalIPCLogout( );

protected:
    void resizeEvent( QResizeEvent * event );
    void closeEvent( QCloseEvent * event );
    void showEvent( QShowEvent * event );

private:
    typedef QMultiHash< QString, QString > QHostIPCHash;

    void InitializeIPC( );
    void UninitializeIPC( );

    void LoginIPC( const QString& strIP );
    void LogoutIPC( const QString& strIP );

   void StartPlayIPC( const QString& strIP, HWND hPlayWnd );
    void StopPlayIPC( HWND hPlayWnd );

    void GetHostIPC( );
    void LogIPC( bool bLocal, bool bLogin );
    void VideoIPC( bool bPlay );
    
private:
    Ui::CIPCVideoFrame *ui;
    QIPCThread* pVideoThread;
    QHostIPCHash hashHostIPC;
    QHostIPCHash hashIPCName;
    bool bNetworkCamera;
};

#endif // IPCVIDEOFRAME_H
