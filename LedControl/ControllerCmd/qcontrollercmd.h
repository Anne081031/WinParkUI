#ifndef QCONTROLLERCMD_H
#define QCONTROLLERCMD_H

#include "ControllerCmd_global.h"
#include "qcmdgenerator.h"
#include "qcmdparser.h"
#include "../ControllerCommon/CommonHead.h"

class CONTROLLERCMDSHARED_EXPORT QControllerCmd {
public:
    QControllerCmd();

    void GetCmd( const LedControll::ECommand eCmd, QByteArray& oldData, QByteArray& newData, qint32 nParam );

private:
    void GetOldCmd( const LedControll::ECommand eCmd, QByteArray& oldData, qint32 nParam );
    void GetNewCmd( const LedControll::ECommand eCmd, QByteArray& newData, qint32 nParam );

private:
    QCmdGenerator cmdGenrator;
    QCmdParser cmdParser;
};

#endif // QCONTROLLERCMD_H
