#include "qmanipulateinifile.h"
#include <QMetaEnum>

QManipulateIniFile::QManipulateIniFile( QObject* parent ) : QObject( parent )
{
}

QManipulateIniFile::~QManipulateIniFile( )
{

}

void QManipulateIniFile::IniFileValue( const CfgFileSections section, const CfgFileSectionItems item, const bool bWrite, QVariant &varValue )
{
    QMetaEnum metaEnum = metaObject( )->enumerator( 0 );
    QString strSection = metaEnum.key( section );

    metaEnum = metaObject( )->enumerator( 1 );
    QString strItem = metaEnum.key( item );

    QString strKey = strSection + "/" + strItem;

    if ( bWrite ) {
        objSettings.setValue( strKey, varValue );
    } else {
        varValue = objSettings.value( strKey );
    }
}
