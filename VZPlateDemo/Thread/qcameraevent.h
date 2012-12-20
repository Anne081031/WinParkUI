#ifndef QCAMERAEVENT_H
#define QCAMERAEVENT_H

#include <QEvent>
#include <windows.h>

class QCameraEvent : public QEvent
{
public:
    typedef enum __CameraEventType {
        CameraVideoRecognize = User,
        CameraFileRecognize,
        CameraStartPreview,
        CaeramStopPreview
    } CameraEventType;

public:
    explicit QCameraEvent( Type evtType );

    void SetChannel( int nChannel );
    int GetChannel( );

    void SetWndHandle( HWND hWnd );
    HWND GetWndHandle( );

private:
    int nChannelNumber;
    HWND hVideoWnd;
};

#endif // QCAMERAEVENT_H
