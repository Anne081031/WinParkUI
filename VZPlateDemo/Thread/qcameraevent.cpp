#include "qcameraevent.h"

QCameraEvent::QCameraEvent(Type evtType) : QEvent(evtType)
{
    hVideoWnd = INVALID_HANDLE_VALUE;
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

void QCameraEvent::SetWndHandle( HWND hWnd )
{
    hVideoWnd = hWnd;
}

HWND QCameraEvent::GetWndHandle( )
{
    return hVideoWnd;
}
