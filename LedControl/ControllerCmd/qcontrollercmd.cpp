#include "qcontrollercmd.h"


QControllerCmd::QControllerCmd()
{
    cmdGenrator = new QCmdGenerator( );
    cmdParser = new QCmdParser( );
}

QControllerCmd::~QControllerCmd( )
{
    if ( NULL != cmdGenrator ) {
        delete cmdGenrator;
        cmdGenrator = NULL;
    }

    if ( NULL != cmdParser ) {
        delete cmdParser;
        cmdParser = NULL;
    }
}

void QControllerCmd::GetOldCmd( const LedControll::ECommand eCmd, QByteArray& oldData, qint32 nParam )
{
    char cHead[ ] = { ( char ) 0xAA, ( char ) 0x55 };
    char cTail[ ] = { ( char ) 0xFF, ( char ) 0xFF};

    oldData.clear( );

    oldData.append( cHead, sizeof ( cHead ) ); // Head
    cmdGenrator->GetOldCmdBody( oldData, eCmd, nParam ); // Body
    oldData.append( cTail, sizeof ( cTail ) ); // Tail
}



void QControllerCmd::GetNewCmd( const LedControll::ECommand eCmd, QByteArray& newData, qint32 nParam, const bool bQuery, const bool bFlash )
{
    const char cFrameStart = ( char ) 0x68;
    const char cFrameEnd = ( char ) 0x16;
    char cHead[ ] = { 0xFE, 0xFE, 0xFE, 0xFE };

    newData.clear( );

    //newData.append( cHead, sizeof ( newData ) );
    newData.append( cFrameStart ); // Frame Start
    cmdGenrator->GetNewCmdBody( newData, eCmd, nParam, bQuery, bFlash );
    newData.append( cFrameEnd ); // Frame End

    newData.insert( 0,cHead, sizeof ( newData ) );
}
