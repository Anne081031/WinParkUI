#include "qcommon.h"
#include <QApplication>
#include <QDir>
#include <QDebug>

QCommon::QCommon(QObject *parent) :
    QObject(parent)
{
}

QTextCodec* QCommon::GetTextCodec( )
{
    static QTextCodec* pCodec = NULL;

    if ( NULL != pCodec ) {
        return pCodec;
    }

    QList<QByteArray> lstCodec = pCodec->availableCodecs( );
    QString strText;
    bool bFound = false;

    for ( int nIndex = 0; nIndex < lstCodec.count( ); nIndex++ ) {
        QByteArray byData = lstCodec[ nIndex ];
        strText = QString( byData );
        qDebug( ) << strText << endl;

        if ( 0 == strText.toUpper().compare( "GB18030" ) ||
             0 == strText.toUpper().compare( "GBK" ) ||
             0 == strText.toUpper().compare( "GB2312" ) ) {
            bFound = true;
            break;
        }
    }

    if ( !bFound ) {
        strText = QString( "System" );
    }

    pCodec = QTextCodec::codecForName( strText.toAscii( ) );
    return pCodec;
}

void QCommon::GetPlatePicPath( QString &strPath )
{
    strPath = QApplication::applicationDirPath( ) + "/PlatePic/";
    QDir dir( strPath );

    if ( !dir.exists( ) ) {
        dir.mkpath( strPath );
    }
}
