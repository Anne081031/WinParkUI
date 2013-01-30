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
    explicit CIPCVideoFrame(QWidget *parent = 0);
    ~CIPCVideoFrame();
    void LocalIPCVideo( HWND hPlayWnd, bool bPlay );

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
};

#endif // IPCVIDEOFRAME_H
