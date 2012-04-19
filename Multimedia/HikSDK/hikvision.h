#ifndef HIKVISION_H
#define HIKVISION_H
#ifdef _WIN32
#include <windows.h>
#endif
#include "HikVisionSdk.h"
#include <QRect>
#include "../multimedia.h"
#include <QFrame>
class CHikVision : public CMultimedia
{
    //Q_OBJECT
public:
    CHikVision();
    virtual ~CHikVision( );

public:
    int SystemStartup( HWND hOverlayWnd = NULL );
    int SystemShutdown( );
    HANDLE OpenChannel( int nChannelNum );
    int CloseChannel( HANDLE hChannel );
    int PlayVideo( HANDLE hChannel, HWND hWnd, QRect &rect, int nIndex );
    int StopVideo( HANDLE hChannel );
    int CaptureBMP( HANDLE hChannel, QString& strFile );
    int CaptureJpeg( HANDLE hChannel, QString& strFile );
    int GetYuv422Data( HANDLE hChannel, quint8* pData, ULONG& lSize );
    int RegisterStreamCB( HK_STREAM_CB pCBF, PVOID pContext );
    int GetStreamData( HANDLE hChannel, BOOL bStart, quint8 *pData, int nIndex );
    int MotionDetection( HANDLE hChannel, bool bStart );
    int SetupDetection( HANDLE hChannel, HK_MOTION_CB pCBF, int Index = 0, LPVOID pContext = NULL );

protected:
    void GetParameters( );
};

#endif // HIKVISION_H
