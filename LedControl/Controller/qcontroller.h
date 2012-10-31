#ifndef QCONTROLLER_H
#define QCONTROLLER_H

#include <QObject>
#include "Controller_global.h"
#include "../ControllerSP/qcontrollersp.h"
#include "../ControllerCommon/qcontrollercommon.h"

class CONTROLLERSHARED_EXPORT QController : public QObject {
    Q_OBJECT

public:
    explicit QController( QObject* parent = 0 );
    ~QController( );

    bool ConrollSP( const bool bOpen );
    qint64 WriteData( QByteArray& data, const bool bThread = false );

private:
    QControllerSP* pController;
};

#endif // QCONTROLLER_H
