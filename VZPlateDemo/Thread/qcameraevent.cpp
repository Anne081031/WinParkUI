#include "qcameraevent.h"

QCameraEvent::QCameraEvent(Type evtType) : QEvent(evtType)
{
    hVideoWnd = NULL;
    hParentWnd = NULL;
    nChannelNumber = -1;
}

void QCameraEvent::SetChannel( int nChannel )
{
    nChannelNumber = nChannel;
}

int QCameraEvent::GetChannel( )
{
    return nChannelNumber;
}

void QCameraEvent::SetVideoWndHandle( HWND hWnd )
{
    hVideoWnd = hWnd;
}

HWND QCameraEvent::GetVideoWndHandle( )
{
    return hVideoWnd;
}

void QCameraEvent::SetParentWndHandle( HWND hWnd )
{
    hParentWnd = hWnd;
}

HWND QCameraEvent::GetParentWndHandle( )
{
    return hParentWnd;
}

void QCameraEvent::SetImgFile( QString& strFile )
{
    strImgFile = strFile;
}

QString& QCameraEvent::GetImgFile( )
{
    return strImgFile;
}
