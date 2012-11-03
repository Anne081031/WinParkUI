#include "qcontroller.h"
#include "../ControllerSP/qthreadsp.h"
#include "../ControllerSP/qthreadspwriter.h"
#include "../ControllerSP/qthreadspparser.h"


QController::QController( QObject* parent ) : QObject( parent )
{
    pController = new QControllerSP( );
}

QController::~QController( )
{
    if ( NULL != pController ) {
        delete pController;
        pController = NULL;
    }
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
