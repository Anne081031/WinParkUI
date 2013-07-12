#ifndef QCOMMON_H
#define QCOMMON_H

#include <QObject>
#include <QTextCodec>
#include <QDebug>

#define CHANNEL_WAY ( int ) 4
#define VIDEO_WIDTH   ( int ) ( 720 )
#define VIDEO_HEIGHT  ( int ) ( 576 )

class QCommon : public QObject
{
    Q_OBJECT
public:
    static QTextCodec* GetTextCodec( );
    static void GetPlatePicPath( QString& strPath );

private:
    QCommon(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // QCOMMON_H
