#include "dongle.h"

const quint32 CDongle::dwCustomerID = 0x3660F464;
const quint8 CDongle::bATR[ ] = { 0x3B, 0x09, 0x45, 0x54, 0x31, 0x39, 0x39, 0x56, 0x31, 0x34, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00 };
const QString CDongle::strCustomerSeed = "四川前途高科电子技术有限公司";


CDongle::CDongle( QObject* parent ) : QObject( parent )
{
    nTimerCheckID = 0;
    nTimerOpen = 0; //startTimer( 10000 );
}

CDongle::~CDongle( )
{
    if ( 0 != nTimerCheckID ) {
        killTimer( nTimerCheckID );
    }

    if ( 0 != nTimerOpen ) {
        killTimer( nTimerOpen );
    }
}

void CDongle::MyStartTimer( )
{
    nTimerCheckID = startTimer(  1 * 60 * 1000 );
}

void CDongle::timerEvent( QTimerEvent *event )
{
    if (  nTimerCheckID == event->timerId( ) ) {
        DongleDetection( bVerifyDate );
    } else if ( nTimerOpen == event->timerId( ) ) {
        DongleTimerOpen( );
    }
}

void CDongle::SetDate( QDate &start, QDate &end )
{
    dateStart = start;
    dateEnd = end;
}

void CDongle::SetVerifyDate( bool bVerifyDate )
{
    bVerifyDate = bVerifyDate;
}
