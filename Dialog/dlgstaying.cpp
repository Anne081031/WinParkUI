#include "dlgstaying.h"
#include "ui_dlgstaying.h"
#include "Common/logicinterface.h"

CDlgStaying::CDlgStaying(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CDlgStaying)
{
    ui->setupUi(this);
    CCommonFunction::SetWindowIcon( this );

    GetData( );
}

CDlgStaying::~CDlgStaying()
{
    delete ui;
}

void CDlgStaying::GetData( )
{
    QString strSql = "SELECT d.cardno,d.cardselfno, b.username, b.userphone, c.carcp, a.inshebeiname, a.intime \
            FROM stoprd a, userinfo b, carinfo c, monthcard d \
            where d.Inside = 1 and a.cardno = d.cardno and d.cardno = b.cardindex and d.cardno = c.cardindex and a.outtime is null";

    QStringList lstRows;
    int nRows = CLogicInterface::GetInterface( )->ExecuteSql( strSql, lstRows );
    if ( 0 < nRows ) {
       FillTable( lstRows, ui->tableWidgetMonth, nRows );
    }

    strSql = "SELECT d.cardno,d.cardselfno, a.carcp, a.inshebeiname, a.intime \
            FROM stoprd a, tmpcard d \
            where d.Inside = 1 and a.cardno = d.cardno and a.outtime is null";

    lstRows.clear( );
    nRows = CLogicInterface::GetInterface( )->ExecuteSql( strSql, lstRows );
    if ( 0 < nRows ) {
      FillTable( lstRows, ui->tableWidgetTime, nRows );
    }
}

void CDlgStaying::FillTable( QStringList &lstData, QTableWidget *pTable, int nRows )
{
    int nIndex = pTable->columnCount( ) - 1;
    QHeaderView* pView = pTable->horizontalHeader( );
    pView->resizeSection( nIndex, pView->sectionSize( nIndex ) * 2 );

    CCommonFunction::FillTable( pTable, nRows, lstData );
}
