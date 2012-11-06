#include "qcontroller.h"
#include "../ControllerSP/qthreadsp.h"
#include "../ControllerSP/qthreadspwriter.h"
#include "../ControllerSP/qthreadspparser.h"


QController::QController( QObject* parent ) : QObject( parent )
{
    pController = new QControllerSP( );
    connect( pController, SIGNAL( Cmd( QByteArray, bool ) ), this, SLOT( HandleCmd( QByteArray, bool ) ) );
    connect( &QThreadSPParser::GetSingleton( ), SIGNAL( Cmd( QByteArray, bool ) ),
             this, SLOT( HandleCmd( QByteArray,bool ) ) );
}

QController::~QController( )
{
    if ( NULL != pController ) {
        delete pController;
        pController = NULL;
    }
}

void QController::HandleCmd( QByteArray data, bool bSend )
{
    emit Cmd( data, bSend );
}

qint64 QController::WriteData( QByteArray &data, const bool bThread )
{
    return pController->WriteData( data, bThread );
}

bool QController::ConrollSP( const bool bOpen )
{
    bool bRet = true;

    if ( bOpen ) {
        bRet = pController->OpenPort( );

        QThreadSP::GetSingleton( ).SetController( pController );
        QThreadSP::GetSingleton( ).SetDataReceiver( &QThreadSPParser::GetSingleton( ) );
        QThreadSPWriter::GetSingleton( ).SetController( pController );
    } else {
        pController->ClosePort( );
    }

    return bRet;
}
