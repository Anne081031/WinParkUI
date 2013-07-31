#ifndef QPLATEEVENT_H
#define QPLATEEVENT_H

#include <QEvent>
#include <QString>
#include <QByteArray>

class QPlateEvent : public QEvent
{
public:
    typedef enum __PlateEventType {
        PlateVideoRecognize = User,
        PlateFileRecognize,
        PlateInit,
        PlateUninit
    } PlateEventType;

public:
    QPlateEvent( Type evtType );

    void SetFilePath( QString& strFile );
    QString& GetFilePath( );

    void SetVideoFrame( QByteArray& byVideo );
    QByteArray& GetVideoFrame( );

    void SetImageFormat( int nFormat );
    int GetImageFormat( );

    void SetChannel( int nChannel );
    int GetChannel( );

    void SetVideoWidth( int nWidth );
    int GetVideoWidth( );

    void SetVideoHeight( int nHeight );
    int GetVideoHeight( );

    void SetByData( QByteArray& byData );
    QByteArray& GetByData( );

private:
    QString strPicFile;
    QByteArray byVideoFrame;
    int nImageFormat;
    int nInOutChannel;
    int nVideoWidth;
    int nVideoHeight;
    QByteArray bySerialData;
};

#endif // QPLATEEVENT_H
