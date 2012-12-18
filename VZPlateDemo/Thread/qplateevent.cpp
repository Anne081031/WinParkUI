#include "qplateevent.h"

QPlateEvent::QPlateEvent( Type evtType ) : QEvent( evtType )
{
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
