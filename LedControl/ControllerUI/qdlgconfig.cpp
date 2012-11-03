#include "qdlgconfig.h"
#include "ui_qdlgconfig.h"

#include "../ControllerCommon/qcontrollercommon.h"

QDlgConfig::QDlgConfig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QDlgConfig)
{
    ui->setupUi(this);

    QControllerCommon::ControlSysMenu( *this );
    ReadConfig( );
}

QDlgConfig::~QDlgConfig()
{
    delete ui;
}

void QDlgConfig::on_btnOK_clicked()
{
    WriteConfig( );

    close( );
    setResult( QDialog::Accepted );
}

void QDlgConfig::ReadConfig( )
{
    LedControll::SComConfig sConfig;
    QControllerCommon::GetSPConfig( sConfig );

    ui->cbPort->setCurrentIndex( sConfig.nComName );
    cCom = sConfig.nComName;
    ui->cbParity->setCurrentIndex( sConfig.nParity );
    ui->cbBaudRate->setCurrentIndex( sConfig.nBaudRate );
    ui->cbDataBit->setCurrentIndex( sConfig.nDataBit );
    ui->cbStopBit->setCurrentIndex( sConfig.nStopBit );
    ui->cbFlowCtrl->setCurrentIndex( sConfig.nFlowCtrl );

    quint8 nModemFlow = 0;
    quint8 nModemAuto = 0;
    QControllerCommon::GetModemConfig( nModemFlow, nModemAuto );

    ui->cbDataFlowCtrl->setCurrentIndex( nModemFlow );
    ui->cbAutoReply->setCurrentIndex( nModemAuto );

    qint32 nIn = 0;
    qint32 nOut = 0;
    QControllerCommon::GetBufferConfig( nIn, nOut );

    ui->sbInBuffer->setValue( nIn );
    ui->sbOutBuffer->setValue( nOut );
}

char QDlgConfig::GetComName( )
{
    return 1 + cCom;
}

void QDlgConfig::WriteConfig( )
{
    LedControll::SComConfig sConfig;

    sConfig.nComName = ui->cbPort->currentIndex( );
    cCom = sConfig.nComName;
    sConfig.nParity = ui->cbParity->currentIndex( );
    sConfig.nBaudRate = ui->cbBaudRate->currentIndex( );
    sConfig.nDataBit = ui->cbDataBit->currentIndex( );
    sConfig.nStopBit = ui->cbStopBit->currentIndex( );
    sConfig.nFlowCtrl = ui->cbFlowCtrl->currentIndex( );
    QControllerCommon::SaveSPConfig( sConfig );

    quint8 nModemFlow = ui->cbDataFlowCtrl->currentIndex( );
    quint8 nModemAuto = ui->cbAutoReply->currentIndex( );
    QControllerCommon::SaveModemConfig( nModemFlow, nModemAuto );


    qint32 nIn = ui->sbInBuffer->value( );
    qint32 nOut = ui->sbOutBuffer->value( );
    QControllerCommon::SaveBufferConfig( nIn, nOut );
}

void QDlgConfig::on_btnCancel_clicked()
{
    close( );
    setResult( QDialog::Rejected );
}
