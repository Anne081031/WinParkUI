#ifndef QCOMMON_H
#define QCOMMON_H

#include <QObject>
#include <QTextCodec>

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
