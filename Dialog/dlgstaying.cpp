#include "dlgstaying.h"
#include "ui_dlgstaying.h"
#include "Common/logicinterface.h"

CDlgStaying::CDlgStaying(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CDlgStaying)
{
    ui->setupUi(this);
    CCommonFunction::SetWindowIcon( this );
    bHistory = CCommonFunction::GetSettings( CommonDataType::CfgSystem )->value( "CommonCfg/HistoryDb", false ).toBool( );
    GetData( );
    pFrmDisplayPic =  new CPrintYearlyReport( NULL, this );
    SetFrameVisble( false );

    pFrmDisplayPic->move( geometry( ).width( ) - pFrmDisplayPic->width( ),
                          geometry( ).height( ) - pFrmDisplayPic->height( ) );
}

void CDlgStaying::SetFrameVisble( bool bVisible )
{
    pFrmDisplayPic->setVisible(  bVisible );
}

CDlgStaying::~CDlgStaying()
{
    delete pFrmDisplayPic;
    delete ui;
}

void CDlgStaying::GetData( )
{
    QString strSql = "SELECT d.cardno,d.cardselfno, b.username, b.userphone, c.carcp, a.inshebeiname, a.intime \
            FROM stoprd a, userinfo b, carinfo c, monthcard d \
            where d.Inside = 1 and a.cardno = d.cardno and d.cardno = b.cardindex and d.cardno = c.cardindex and a.outtime is null";

    QStringList lstRows;
    int nRows = CLogicInterface::GetInterface( )->ExecuteSql( strSql, lstRows, bHistory );
    if ( 0 < nRows ) {
       FillTable( lstRows, ui->tableWidgetMonth, nRows );
    }

    strSql = "SELECT d.cardno,d.cardselfno, a.carcp, a.inshebeiname, a.intime \
            FROM stoprd a, tmpcard d \
            where d.Inside = 1 and a.cardno = d.cardno and a.outtime is null";

    lstRows.clear( );
    nRows = CLogicInterface::GetInterface( )->ExecuteSql( strSql, lstRows, bHistory );
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

void CDlgStaying::on_tableWidgetMonth_cellClicked(int row, int column)
{
    DisplayPic( ( QTableWidget* ) sender( ), row, column );
}

void CDlgStaying::on_tableWidgetTime_cellClicked(int row, int column)
{
    DisplayPic( ( QTableWidget* ) sender( ), row, column );
}

void CDlgStaying::DisplayPic( QTableWidget* pWidget, int nRow, int nCol )
{
    bool bZeroCol = ( 0 == nCol );
    bool bExist = false;

    if ( bZeroCol ) {
        QString strFile;
        QString strWhere = QString( " Where cardno ='%1' and intime = '%2' " ).arg(
                    pWidget->item( nRow, nCol )->text( ), pWidget->item( nRow, pWidget->columnCount( ) - 1 )->text( ) );
        CCommonFunction::GetPath( strFile, CommonDataType::PathSnapshot );
        strFile += "Staying.jpg";
        CLogicInterface::GetInterface( )->OperateBlob( strFile, false, CommonDataType::BlobVehicleIn1, strWhere, bHistory );

        bExist = QFile::exists( strFile );
        if ( bExist ) {
            pFrmDisplayPic->DisplayPicture( strFile );
            QFile::remove( strFile );
        }
    }

    bExist = bExist &&  bZeroCol;
    SetFrameVisble( bExist );
}

void CDlgStaying::on_tabWidget_currentChanged(int index)
{
    SetFrameVisble( false );
}
