#include "dbwritethread.h"

CDbWriteThread::CDbWriteThread(QObject *parent) :
    QThread(parent)
{
    pHistoryThread = NULL;
}

bool CDbWriteThread::ConnectDb( )
{
    QStringList lstParams;
    CCommonFunction::ConnectMySql( lstParams, false );
    bool bRet = interfaceNormal.GetMysqlDb( ).DbConnect( lstParams[ 0 ], lstParams[ 1 ], lstParams[ 2 ],
                                                     lstParams[ 3 ], lstParams[ 4 ].toUInt( ) );

    return bRet;
}

void CDbWriteThread::run( )
{
    ConnectDb( );
    exec( );
}

void CDbWriteThread::ExcuteSQL( CLogicInterface& intf, bool bSQL, CDbEvent::WriteParameter &paramter )
{
    if ( bSQL ) {
        intf.ExecuteSql( paramter.strSql );
    } else {
        intf.OperateBlob( paramter.byData, true, paramter.blob, paramter.strSql );
    }
}

void CDbWriteThread::WriteData( CDbEvent::WriteParameter &paramter, bool bSQL )
{
    if ( !paramter.bDbHistory || paramter.bTimeCard ) {
        ExcuteSQL( interfaceNormal, bSQL, paramter );
    }

    if ( paramter.bDbHistory ) {
        if ( NULL == pHistoryThread ) {
            pHistoryThread = new CDbHistoryThread( );
        }

        paramter.bDbHistory = bSQL;
        if ( pHistoryThread->AddParameters( paramter ) ) {
            pHistoryThread->start( );
            pHistoryThread= NULL;
        }
    }
}

void CDbWriteThread::customEvent( QEvent *e )
{
    CDbEvent* pEvent = ( CDbEvent* ) e;
    CDbEvent::WriteParameter& parameter = pEvent->GetParameter( );
    CDbEvent::UserEvent evtType = ( CDbEvent::UserEvent ) e->type( );

    switch ( evtType ) {
    case CDbEvent::SQLExternal :
        WriteData( parameter, true );
        break;

    case CDbEvent::SQLInternal :
        WriteData( parameter, true );
        break;

    case CDbEvent::ImgExternal :
        WriteData( parameter, false );
        break;

    case CDbEvent::ImgInternal :
        WriteData( parameter, false );
        break;
    }
}
