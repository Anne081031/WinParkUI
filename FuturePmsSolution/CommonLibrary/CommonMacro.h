#ifndef COMMONMACRO_H
#define COMMONMACRO_H

#include <QDebug>

#define OutputMsg( strMsg ) qDebug( ) << Q_FUNC_INFO << ":" << strMsg << endl

#endif // COMMONMACRO_H
