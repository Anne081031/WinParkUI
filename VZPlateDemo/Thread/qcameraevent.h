#ifndef QCAMERAEVENT_H
#define QCAMERAEVENT_H

#include <QEvent>
#include <windows.h>
#include <QString>

class QCameraEvent : public QEvent
{
public:
    typedef enum __CameraEventType {
        CameraVideoRecognize = User,
        CameraFileRecognize,
        CameraInit, //初始化
        CameraUninit,
        CameraOpenChannel, //连接采集卡
        CameraCloseChannel,
        CameraStartCapture, //开始录像
        CameraStopCapture,
        CameraStartPreview, //开始预览
        CameraStopPreview,
        CameraCaptureImage //抓图
    } CameraEventType;

public:
    explicit QCameraEvent( Type evtType );

    void SetChannel( int nChannel );
    int GetChannel( );

    void SetVideoWndHandle( HWND hWnd );
    HWND GetVideoWndHandle( );

    void SetParentWndHandle( HWND hWnd );
    HWND GetParentWndHandle( );

    void SetImgFile( QString& strFile );
    QString& GetImgFile( );

private:
    int nChannelNumber;
    HWND hVideoWnd;
    HWND hParentWnd;
    QString strImgFile;
};

#endif // QCAMERAEVENT_H
