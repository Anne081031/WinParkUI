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
        CameraInit, //��ʼ��
        CameraUninit,
        CameraOpenChannel, //���Ӳɼ���
        CameraCloseChannel,
        CameraStartCapture, //��ʼ¼��
        CameraStopCapture,
        CameraStartPreview, //��ʼԤ��
        CameraStopPreview,
        CameraCaptureImage //ץͼ
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
