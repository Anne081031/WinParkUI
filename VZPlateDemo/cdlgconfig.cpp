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

void CDlgConfig::FillComboBox( QComboBox *pCbx, QString strInfo[ ][ 2 ], int nRow, const QString& strCurItem )
{
    for ( int nIndex = 0; nIndex < nRow; nIndex++ ) {
        QString& strUSerData = strInfo[ nIndex ][ 1 ];
        pCbx->insertItem( nIndex, strInfo[ nIndex ][ 0 ], strUSerData );

        if ( strUSerData == strCurItem ) {
            pCbx->setCurrentIndex( nIndex );
        }
    }
}

void CDlgConfig::ReadConfig( )
{
    CConfigurator* pCOnfig = CConfigurator::CreateInstance( );
    QString strType;

    pCOnfig->ReadAppMainWindow( strType );
    QString strUIInfo[ 2 ][ 2 ] = { { "Demo����", "Demo" }, { "��������������", "Blacklist" } };
    FillComboBox( ui->cbxUIType, strUIInfo, 2, strType );

    pCOnfig->ReadVideoType( strType );
    QString strVideoInfo[ 7 ][ 2 ] = { { "ͼƬ�ļ�", "PictureFile" },
                                       { "�����ɼ���", "HkAnalog" },
                                       { "�����ɼ���", "TmAnalog" },
                                       { "�����������", "HkIPC" },
                                       { "����˼�������", "JwsIPC" },
                                       { "ONVIF�������", "OnvifIPC" },
                                       { "��Ƶ�ļ�", "VideoFile" } };
    FillComboBox( ui->cbxVideoType, strVideoInfo, 7, strType );

    ui->spPlateWay->setValue( pCOnfig->ReadPlateWay( ) );

    pCOnfig->ReadIpcIP( strType );
    ui->edtIpcIP->setText( strType );

    ui->chxMainStream->setChecked( pCOnfig->ReadMainStream( ) );
}

void CDlgConfig::Saveconfig( )
{
    CConfigurator* pCOnfig = CConfigurator::CreateInstance( );

    QString strType = ui->cbxUIType->itemData( ui->cbxUIType->currentIndex( ) ).toString( );
    pCOnfig->WriteAppMainWindow( strType );

    strType = ui->cbxVideoType->itemData( ui->cbxVideoType->currentIndex( ) ).toString( );
    pCOnfig->WriteVideoType( strType );

    pCOnfig->WritePlateWay( ui->spPlateWay->value( ) );

    strType = ui->edtIpcIP->text( );
    pCOnfig->WriteIpcIP( strType );
    pCOnfig->WriteMainStream( ui->chxMainStream->isChecked( ) );
}

void CDlgConfig::on_btnOk_clicked()
{
    Saveconfig( );

    QMessageBox::information( this, "��ʾ", "Ҫʹ������Ч������������" );
}

void CDlgConfig::on_btnClose_clicked()
{
    close( );
}
