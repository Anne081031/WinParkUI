#ifndef COMMONMACRO_H
#define COMMONMACRO_H

#include <QDebug>

namespace MyMacros {
    #define OutputMsg( strMsg ) qDebug( ) << Q_FUNC_INFO << ":" << strMsg << endl
    #define LogText( strText ) ( Q_FUNC_INFO + QString( ": " ) + strText )
    #define HANDSHAKE "Success"
}

#endif // COMMONMACRO_H
