#include "qcommonfunction.h"
#include <QMetaEnum>
#include <QApplication>
#include <QDir>
#include "CommonMacro.h"

QCommonFunction::QCommonFunction(QObject *parent) :
    QObject(parent)
{
}

QCommonFunction::~QCommonFunction( )
{

}

void QCommonFunction::GetPath( QString &strPath, const PathTypes type )
{
    QString strSeperator = "/";
    QMetaEnum metaEnum = metaObject( )->enumerator( 0 );
    strPath = qApp->applicationDirPath( ) + strSeperator + metaEnum.key( type ) + strSeperator;

    MakePath( strPath );
}

void QCommonFunction::MakePath( const QString& strPath )
{
    QDir dir;

    if ( dir.exists( strPath ) ) {
        return;
    }

    if ( !dir.mkpath( strPath ) ) {
        OutputMsg( QString( "dir.mkpath( %1 )" ).arg( strPath ) );
    }
}

