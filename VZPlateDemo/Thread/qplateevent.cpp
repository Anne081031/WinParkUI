#include "qplateevent.h"

QPlateEvent::QPlateEvent( Type evtType ) : QEvent( evtType )
{
    nImageFormat = 0;
    nInOutChannel = 0;
    nVideoWidth = 0;
    nVideoHeight = 0;
}

void QPlateEvent::SetFilePath( QString &strFile )
{
    strPicFile = strFile;
}

QString& QPlateEvent::GetFilePath( )
{
    return strPicFile;
}

void QPlateEvent::SetVideoFrame( QByteArray &byVideo )
{
    byVideoFrame.append( byVideo );
}

QByteArray& QPlateEvent::GetVideoFrame( )
{
    return byVideoFrame;
}

void QPlateEvent::SetImageFormat( int nFormat )
{
   nImageFormat = nFormat;
}

int QPlateEvent::GetImageFormat( )
{
    return nImageFormat;
}

void QPlateEvent::SetChannel( int nChannel )
{
    nInOutChannel = nChannel;
}

int QPlateEvent::GetChannel( )
{
    return nInOutChannel;
}

void QPlateEvent::SetVideoWidth( int nWidth )
{
    nVideoWidth = nWidth;
}

int QPlateEvent::GetVideoWidth( )
{
    return nVideoWidth;
}

void QPlateEvent::SetVideoHeight( int nHeight )
{
    nVideoWidth = nHeight;
}

int QPlateEvent::GetVideoHeight( )
{
    return nVideoHeight;
}
