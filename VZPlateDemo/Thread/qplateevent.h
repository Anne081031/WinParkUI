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
        PlateFileRecognize
    } PlateEventType;

public:
    QPlateEvent( Type evtType );

    void SetFilePath( QString& strFile );
    QString& GetFilePath( );

    void SetVideoFrame( QByteArray& byVideo );
    QByteArray& GetVideoFrame( );

private:
    QString strPicFile;
    QByteArray byVideoFrame;
};

#endif // QPLATEEVENT_H
