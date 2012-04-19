#include "dbevent.h"

CDbEvent::CDbEvent( Type event ) : QEvent(  event )
{
}

void CDbEvent::SetParameter( QString &strSql, bool bHistory, bool bTimeCard )
{
    evtParamter.strSql = strSql;
    evtParamter.bDbHistory = bHistory;
    evtParamter.bTimeCard = bTimeCard;
}

void CDbEvent::SetParameter( QString &strSql, bool bHistory, bool bTimeCard, CommonDataType::BlobType blob, QByteArray &byData )
{
    evtParamter.strSql = strSql;
    evtParamter.bDbHistory = bHistory;
    evtParamter.bTimeCard = bTimeCard;
    evtParamter.blob = blob;
    evtParamter.byData = byData;
}

CDbEvent::WriteParameter& CDbEvent::GetParameter( )
{
    return evtParamter;
}

