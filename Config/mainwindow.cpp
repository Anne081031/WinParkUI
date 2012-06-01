#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRegExp>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pSystemCfg = CCommonFunction::GetSettings( CommonDataType::CfgSystem );
    pSysSetCfg = CCommonFunction::GetSettings( CommonDataType::CfgSysSet );

    ReadFile( );
    //QRegExp exp( "\\d+\\.\\d+\\.\\d+\\.\\d+" );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ReadFile( )
{
    ui->edtDbIp->setText( pSystemCfg->value( "Database/Host", "127.0.0.1" ).toString( ) ); // MySql
    ui->edtAgentlIp->setText( pSystemCfg->value( "Database/Agent", "127.0.0.1" ).toString( ) ); // Forward
    ui->edtMsSqlIp->setText( pSystemCfg->value( "Database/MsServer", "127.0.0.1" ).toString( ) ); // MS SQL Server
    ui->edtReceiverIp->setText( pSystemCfg->value( "CenterServer/TcpIP", "127.0.0.1" ).toString( ) ); // Data Receiver
    ui->edtFtpIP->setText( pSystemCfg->value( "CenterServer/FtpIP", "127.0.0.1" ).toString( ) ); // FTP
    ui->edtHostIp->setText( pSystemCfg->value( "CommonCfg/Host", "127.0.0.1" ).toString( ) ); // LocalHost

    ui->chkServer->setChecked( pSystemCfg->value( "Database/Server", false ).toBool( ) );
    ui->spTime->setValue( pSystemCfg->value( "Database/IntervalTime", 1 ).toInt( ) );
    ui->spRemoteTime->setValue( pSystemCfg->value( "CommonCfg/RemoteCardTime", 60 ).toInt( ) );
    //ui->chkPlateReal->setChecked( pSystemCfg->value( "CommonCfg/Succession", false ).toBool( ) );
    ui->chkCarPic->setChecked( pSystemCfg->value( "CommonCfg/Test", false ).toBool( ) );
    ui->chkToInternet->setChecked( pSystemCfg->value( "CommonCfg/ToInternet", false ).toBool( ) );
    ui->chkAlert->setChecked( pSystemCfg->value( "CommonCfg/Alert", false ).toBool( ) );
    ui->edtLedCan->setText( pSystemCfg->value( "CommonCfg/IndependentLedCan").toString( ) );
    ui->chkOpenGate->setChecked( pSystemCfg->value( "CommonCfg/SenseOpenGate", false ).toBool( ) );
    ui->chkCapture->setChecked( pSystemCfg->value( "CommonCfg/SenseGetImg", true ).toBool( ) );
    ui->edtParkID->setText( pSystemCfg->value( "CommonCfg/ParkID", "5101070001" ).toString( ) );

    QString strKey = "CommonCfg/Video%1";
    QString strChannelKey = "CommonCfg/Name%1";
    QString strCbxKey = "CommonCfg/CatpureOpportunity%1";
    QString strPlateKey = "CommonCfg/Succession%1";

    QString strName = "sp%1";
    QString strChannelName = "edt%1";
    QString strPlateName = "chkPlateReal%1";
    QString strCbx = "cbxCapture%1";

    QSpinBox* pSP = NULL;
    QLineEdit* pEdt = NULL;
    QCheckBox* pCHX = NULL;
    QComboBox* pCbx = NULL;

    for ( int nIndex = 1; nIndex <= 4; nIndex++ ) {
        pSP = findChild< QSpinBox* >( strName.arg( nIndex ) );
        pEdt = findChild< QLineEdit* >( strChannelName.arg( nIndex ) );
        pCbx = findChild< QComboBox* >( strCbx.arg( nIndex ) );
        pCHX = findChild< QCheckBox* >( strPlateName.arg( nIndex ) );

        pSP->setValue( pSystemCfg->value( strKey.arg( nIndex ), nIndex ).toInt( ) );
        pEdt->setText( pSystemCfg->value( strChannelKey.arg( nIndex ), pEdt->text( ) ).toString( ) );
        pCbx->setCurrentIndex( pSystemCfg->value( strCbxKey.arg( nIndex ), 0 ).toInt( ) );
        pCHX->setChecked( pSystemCfg->value( strPlateKey.arg( nIndex ), false ).toBool( ) );
    }

    ui->chkVideo->setChecked( pSysSetCfg->value( "VideoMode/AutoVideo", false ).toBool( ) );
    ui->chkPlate->setChecked( pSysSetCfg->value( "CarLicence/AutoRecognize", false ).toBool( ) );
    ui->chkBroadcastData->setChecked( pSystemCfg->value( "CommonCfg/BroadCastData", false ).toBool( ) );

    ui->chkPublish->setChecked( pSystemCfg->value( "ThirdParty/ScuMsgCenter", false ).toBool( ) );
    ui->edtPublishIP->setText( pSystemCfg->value( "ThirdParty/ScuMsgCenterIP", "127.0.0.1" ).toString( ) );
    ui->edtPublishPort->setText( pSystemCfg->value( "ThirdParty/ScuMsgCenterPort", "32009" ).toString( ) );
    ui->edtPublishDevType->setText( pSystemCfg->value( "ThirdParty/DeviceType", "100" ).toString( ) );
    ui->edtPublishDevID->setText( pSystemCfg->value( "ThirdParty/DeviceID", "0000000001" ).toString( ) );
}

void MainWindow::WriteFile( )
{
    pSystemCfg->setValue( "Database/Host", ui->edtDbIp->text( ) );
    pSystemCfg->setValue( "Database/Agent", ui->edtAgentlIp->text( ) );
    pSystemCfg->setValue( "Database/MsServer", ui->edtMsSqlIp->text( ) );
    pSystemCfg->setValue( "CenterServer/TcpIP", ui->edtReceiverIp->text( ) );
    pSystemCfg->setValue( "CenterServer/UdpIP", ui->edtReceiverIp->text( ) );
    pSystemCfg->setValue( "CenterServer/FtpIP", ui->edtFtpIP->text( ) );
    pSystemCfg->setValue( "CommonCfg/Host", ui->edtHostIp->text( ) );
    pSystemCfg->setValue( "Database/Server", ui->chkServer->isChecked( ) );
    pSystemCfg->setValue( "Database/IntervalTime", ui->spTime->value( ) );
    pSystemCfg->setValue( "CommonCfg/RemoteCardTime", ui->spRemoteTime->value( ) );
    pSystemCfg->setValue( "CommonCfg/Test", ui->chkCarPic->isChecked( ) );
    pSystemCfg->setValue( "CommonCfg/ToInternet", ui->chkToInternet->isChecked( ) );
    pSystemCfg->setValue( "CommonCfg/Alert", ui->chkAlert->isChecked( ) );
    pSystemCfg->setValue( "CommonCfg/IndependentLedCan", ui->edtLedCan->text( ) );
    pSystemCfg->setValue( "CommonCfg/SenseOpenGate", ui->chkOpenGate->isChecked( ) );
    pSystemCfg->setValue( "CommonCfg/SenseGetImg", ui->chkCapture->isChecked( ) );
    pSystemCfg->setValue( "CommonCfg/ParkID", ui->edtParkID->text( ) );
    pSystemCfg->setValue( "CommonCfg/BroadCastData", ui->chkBroadcastData->isChecked( ) );

    QString strKey = "CommonCfg/Video%1";
    QString strChannelKey = "CommonCfg/Name%1";
    QString strCbxKey = "CommonCfg/CatpureOpportunity%1";
    QString strPlateKey = "CommonCfg/Succession%1";

    QString strName = "sp%1";
    QString strChannelName = "edt%1";
    QString strPlateName = "chkPlateReal%1";
    QString strCbx = "cbxCapture%1";

    QSpinBox* pSP = NULL;
    QLineEdit* pEdt = NULL;
    QCheckBox* pCHX = NULL;
    QComboBox* pCbx = NULL;

    for ( int nIndex = 1; nIndex <= 4; nIndex++ ) {
        pSP = findChild< QSpinBox* >( strName.arg( nIndex ) );
        pEdt = findChild< QLineEdit* >( strChannelName.arg( nIndex ) );
        pCbx = findChild< QComboBox* >( strCbx.arg( nIndex ) );
        pCHX = findChild< QCheckBox* >( strPlateName.arg( nIndex ) );

        pSystemCfg->setValue( strKey.arg( nIndex ), pSP->value( ) );
        pSystemCfg->setValue( strChannelKey.arg( nIndex ), pEdt->text( ) );
        pSystemCfg->setValue( strCbxKey.arg( nIndex ), pCbx->currentIndex( ) );

        bool bReal = pCHX->isChecked( );
        pSystemCfg->setValue( QString( "CommonCfg/PlateFilter%1" ).arg( nIndex ), bReal );
        pSystemCfg->setValue( strPlateKey.arg( nIndex ), bReal );
    }

    pSysSetCfg->setValue( "VideoMode/AutoVideo", ui->chkVideo->isChecked( ) );
    pSysSetCfg->setValue( "CarLicence/AutoRecognize", ui->chkPlate->isChecked( ) );

    pSystemCfg->setValue( "ThirdParty/ScuMsgCenter", ui->chkPublish->isChecked( ) );
    pSystemCfg->setValue( "ThirdParty/ScuMsgCenterIP", ui->edtPublishIP->text( ) );
    pSystemCfg->setValue( "ThirdParty/ScuMsgCenterPort", ui->edtPublishPort->text( ) );
    pSystemCfg->setValue( "ThirdParty/DeviceType", ui->edtPublishDevType->text( ) );
    pSystemCfg->setValue( "ThirdParty/DeviceID", ui->edtPublishDevID->text( ) );
}

void MainWindow::on_btnOk_clicked()
{
    WriteFile( );
}

void MainWindow::on_btnCancel_clicked()
{
    close( );
}
