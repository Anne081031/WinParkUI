#include "cdlgconfig.h"
#include "ui_cdlgconfig.h"

CDlgConfig::CDlgConfig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CDlgConfig)
{
    ui->setupUi(this);
    ReadConfig( );
}

CDlgConfig::~CDlgConfig()
{
    delete ui;
}

void CDlgConfig::ReadConfig( )
{
    CConfigurator* pCOnfig = CConfigurator::CreateInstance( );
    QString strUIType;
    pCOnfig->ReadAppMainWindow( strUIType );

    QString strCbxInfo[ 2 ][ 2 ] = { { "Demo界面", "Demo" }, { "黑名单报警界面", "Blacklist" } };

    for ( int nIndex = 0; nIndex < 2; nIndex++ ) {
        QString& strUSerData = strCbxInfo[ nIndex ][ 1 ];
        ui->cbxUIType->insertItem( nIndex, strCbxInfo[ nIndex ][ 0 ], strUSerData );

        if ( strUSerData.toUpper( ) == strUIType ) {
            ui->cbxUIType->setCurrentIndex( nIndex );
        }
    }
}

void CDlgConfig::Saveconfig( )
{
    CConfigurator* pCOnfig = CConfigurator::CreateInstance( );
    QString strUIType = ui->cbxUIType->itemData( ui->cbxUIType->currentIndex( ) ).toString( );

    pCOnfig->WriteAppMainWindow( strUIType );
}

void CDlgConfig::on_btnOk_clicked()
{
    Saveconfig( );
}

void CDlgConfig::on_btnClose_clicked()
{
    close( );
}
