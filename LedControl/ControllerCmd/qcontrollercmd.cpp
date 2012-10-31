#include "qcontrollercmd.h"


QControllerCmd::QControllerCmd()
{
}

void QControllerCmd::GetCmd( const LedControll::ECommand eCmd, QByteArray &oldData, QByteArray& newData, qint32 nParam )
{
    GetOldCmd( eCmd, oldData, nParam );
    GetNewCmd( eCmd, newData, nParam );
}

void QControllerCmd::GetOldCmd( const LedControll::ECommand eCmd, QByteArray& oldData, qint32 nParam )
{
    oldData.clear( );

    oldData.append( ( char ) 0xAA ); // Head
    oldData.append( ( char ) 0x55 );

    cmdGenrator.GetCmdBody( oldData, eCmd, nParam ); // Body

    oldData.append( ( char ) 0xFF ); // Tail
    oldData.append( ( char ) 0xFF );
}

void QControllerCmd::GetNewCmd( const LedControll::ECommand eCmd, QByteArray& newData, qint32 nParam )
{

}
