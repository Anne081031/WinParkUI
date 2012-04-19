#include "dlggarageingarage.h"
#include "ui_dlggarageingarage.h"
#include "Common/logicinterface.h"

CDlgGarageInGarage::CDlgGarageInGarage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CDlgGarageInGarage)
{
    ui->setupUi(this);
    CCommonFunction::ConnectCloseButton( ui->lblClose );
    ui->lblTitle->setText( windowTitle( ) );
    setWindowFlags( Qt::FramelessWindowHint );

    QHeaderView* pHeader = ui->tabRecord->horizontalHeader( );
    int nIndex = 2;
    pHeader->resizeSection( nIndex, pHeader->sectionSize( nIndex ) * 2 );
}

CDlgGarageInGarage::~CDlgGarageInGarage()
{
    delete ui;
}

bool CDlgGarageInGarage::FillTable( QString &strWhere )
{
    QStringList lstRows;
    QString strSql = QString( "Select CardID, ChannelName, DateTime, InOutFlag, Level  From GarageInGarage %1" ).arg( strWhere );
    int nRows = CLogicInterface::GetInterface( )->ExecuteSql( strSql, lstRows, CCommonFunction::GetHistoryDb( ) );
    int nCols = ui->tabRecord->columnCount( );
    QTableWidgetItem* pItem = NULL;
    bool bRet ( 0 < nRows );

    for ( int nIndex = 0; nIndex < nRows; nIndex++ ) {
        ui->tabRecord->insertRow( nIndex );
        for ( int nCol = 0; nCol < nCols; nCol++ ) {
            QString& strText = lstRows[ nIndex * nCols + nCol ];
            if ( 3 == nCol ) {
                strText = (  "1" == strText  )  ? "Èë¿â" : "³ö¿â";
            }

            pItem = new QTableWidgetItem( strText );
            pItem->setFlags( Qt::ItemIsEnabled | Qt::ItemIsSelectable );
            ui->tabRecord->setItem( nIndex, nCol, pItem );
        }
    }

    return bRet;
}

void CDlgGarageInGarage::resizeEvent( QResizeEvent *event )
{
    QWidget::resizeEvent( event );

    QString strFile = statusTip( );
    QPixmap bgimage( strFile );
    QPalette pal( palette( ) );
    pal.setBrush( QPalette::Window, QBrush( bgimage.scaled( event->size( ),
                                                            Qt::IgnoreAspectRatio,
                                                            Qt::SmoothTransformation ) ) );
    setPalette(pal);
}

void CDlgGarageInGarage::on_lblClose_linkActivated(QString )
{
    close( );
}
