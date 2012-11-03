#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdlgconfig.h"
#include <QFileDialog>

//
// Command request, Command response
//

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    InitializeSlot( );
    DlgConfig( );
    QControllerCommon::InitApp( );
    controller.ConrollSP( true );
    InitializeUI( );
}

void MainWindow::InitializeUI( )
{
    LedControll::SSysConfig sConfig;
    QControllerCommon::GetSystemConfig( sConfig );
    InitializeUI( sConfig );
}

void MainWindow::InitializeUI( const QString &strFile )
{
    LedControll::SSysConfig sConfig;
    QControllerCommon::GetSystemConfig( sConfig, strFile );
    InitializeUI( sConfig );
}

void MainWindow::InitializeUI( const LedControll::SSysConfig &sConfig )
{
    QRadioButton* pButton = hashMode.value( sConfig.nRunMode );
    if ( NULL != pButton ) {
        pButton->setChecked( true );
    }

    bFlash = ( 1 <= sConfig.nRunMode && 4 >= sConfig.nRunMode );
    SwitchModeUI( !bFlash );

    pButton = hashSync.value( sConfig.nSyncMode );
    if ( NULL != pButton ) {
        pButton->setChecked( true );
    }

    ui->spFlashLight->setValue( sConfig.nFlashRadiance );
    ui->spFlashTime->setValue( sConfig.nFlashTime );
    ui->spFreqLight->setValue( sConfig.nFrequencyRadiance );
    ui->spFreqTime->setValue( sConfig.nFrequencyTime );

    ui->chkBaseLight->setChecked( 0 != sConfig.nBaseRadiance );
    ui->chkLightSensitive->setChecked( 0 != sConfig.nActivatedSwitch );

    QString strLocation = QString::fromWCharArray( sConfig.cLocation );
    ui->edtLocation->setText( strLocation );
}

void MainWindow::InitializeSlot( )
{
    bFlash = false;
    nModeIndex = 0;

    hashMode.insert( 1, ui->rb01 );
    hashMode.insert( 2, ui->rb02 );
    hashMode.insert( 3, ui->rb03 );
    hashMode.insert( 4, ui->rb04 );
    hashMode.insert( 5, ui->rb05 );
    hashMode.insert( 6, ui->rb06 );
    hashMode.insert( 7, ui->rb07 );
    hashMode.insert( 8, ui->rb08 );

    hashSync.insert( 1, ui->rbSync01 );
    hashSync.insert( 2, ui->rbSync02 );
    hashSync.insert( 3, ui->rbSync03 );

    connect( ui->rb01, SIGNAL( clicked( ) ), this, SLOT( OnRbModeXClicked( ) ) );
    connect( ui->rb02, SIGNAL( clicked( ) ), this, SLOT( OnRbModeXClicked( ) ) );
    connect( ui->rb03, SIGNAL( clicked( ) ), this, SLOT( OnRbModeXClicked( ) ) );
    connect( ui->rb04, SIGNAL( clicked( ) ), this, SLOT( OnRbModeXClicked( ) ) );
    connect( ui->rb05, SIGNAL( clicked( ) ), this, SLOT( OnRbModeXClicked( ) ) );
    connect( ui->rb06, SIGNAL( clicked( ) ), this, SLOT( OnRbModeXClicked( ) ) );
    connect( ui->rb07, SIGNAL( clicked( ) ), this, SLOT( OnRbModeXClicked( ) ) );
    connect( ui->rb08, SIGNAL( clicked( ) ), this, SLOT( OnRbModeXClicked( ) ) );

    connect( ui->rbSync01, SIGNAL( clicked( ) ), this, SLOT( OnRbSyncXClicked( ) ) );
    connect( ui->rbSync02, SIGNAL( clicked( ) ), this, SLOT( OnRbSyncXClicked( ) ) );
    connect( ui->rbSync03, SIGNAL( clicked( ) ), this, SLOT( OnRbSyncXClicked( ) ) );

    connect( ui->spFlashLight, SIGNAL( valueChanged( int ) ), this, SLOT( OnSpXValueChanged( int ) ) );
    connect( ui->spFlashTime, SIGNAL( valueChanged( int ) ), this, SLOT( OnSpXValueChanged( int ) ) );
    connect( ui->spFreqLight, SIGNAL( valueChanged( int ) ), this, SLOT( OnSpXValueChanged( int ) ) );
    connect( ui->spFreqTime, SIGNAL( valueChanged( int ) ), this, SLOT( OnSpXValueChanged( int ) ) );
}

void MainWindow::SendCmd( const bool bNewDevice, const LedControll::ECommand eCmd, qint32 nParam )
{
    QByteArray byData;

    if ( bNewDevice ) {
        controllerCmd.GetNewCmd( eCmd, byData, nParam, ui->chkQuery->isChecked( ) );
    } else {
        controllerCmd.GetOldCmd( eCmd, byData, nParam );
    }

    controller.WriteData( byData, true );
}

qint32 MainWindow::GetRbIndex( QObject *pSender )
{
    QString strName = pSender->objectName( );
    int nLen = 2;

    if ( nLen > strName.length( ) ) {
        return 0;
    }

    qint32 nIndex = strName.right( 2 ).toInt( );
    if ( 8 < nIndex || 0 >= nIndex ) { // 1-- 8
        return 0;
    }

    return nIndex;
}

void MainWindow::OnRbModeXClicked( )
{
    qint32 nIndex = GetRbIndex( sender( ) );

    if ( 0 >= nIndex || 8 < nIndex ) {
        return;
    }

    nModeIndex = nIndex;

    bFlash = ( 5 > nIndex );
    SwitchModeUI( !bFlash );
    SendCmd( ui->chkDevType->isChecked( ), bFlash ? LedControll::CmdFlashGearSet : LedControll::CmdFrenquencyGearSet, nIndex );

    QString strTxt = QString( "目前处于:%1" ).arg( bFlash ? ui->lblFlash->text( ) : ui->lblFreq->text( ) );
    ui->lblMode->setText( strTxt );
}

void MainWindow::OnRbSyncXClicked( )
{
    qint32 nIndex = GetRbIndex( sender( ) );

    if ( 0 >= nIndex || 3 < nIndex ) {
        return;
    }

    LedControll::ECommand eCmd;

    switch ( nIndex ) {
    case 1 :
        eCmd = LedControll::CmdSyncModeDownTrigger;
        break;

    case 2 :
        eCmd = LedControll::CmdSyncModeUpTrigger;
        break;

    case 3 :
        eCmd = LedControll::CmdSyncModeFollowTrigger;
        break;
    }

    SendCmd( ui->chkDevType->isChecked( ), eCmd, nIndex );
}

void MainWindow::OnSpXValueChanged( int nValue )
{
    QSpinBox* pSB = ( QSpinBox* ) sender( );
    LedControll::ECommand eCmd;
    bool bNewDevice = ui->chkDevType->isChecked( );

    if ( pSB == ui->spFlashTime ) { // 闪光灯
        eCmd = LedControll::CmdFlashFrenquencyGearWorkTimeSet;

        int iTrack = 1;
        float fValue = nValue / 25.0f;
        if ( fValue > 0 && fValue <= 1 ) {
            iTrack = 1;
        } else if ( fValue > 1 && fValue <= 2 )  {
            iTrack = 2;
        } else if ( fValue > 2 && fValue <= 3 ) {
            iTrack = 3;
        } else if ( fValue > 3 && fValue <= 4 ) {
            iTrack = 4;
        }

        iTrack *= 8;
        iTrack <<= 8;
        iTrack |= 0xffff0000;

        if ( bFlash ) {
            SendCmd( bNewDevice, eCmd, iTrack );
        }
    } else if ( pSB == ui->spFlashLight ) {
        eCmd = LedControll::CmdFlashFrenquencyIntensityTune;

        float fValue = nValue / 25.0f;
        nValue = ( fValue * 0.25 ) * 1023;
        nValue &= 0x0000ffff;

        if ( bFlash ) {
            SendCmd( bNewDevice, eCmd, nValue );
        }
    } else if ( pSB == ui->spFreqTime ) { // 频闪
        eCmd = LedControll::CmdFlashFrenquencyGearWorkTimeSet;
        nValue <<= 16;
        nValue |= 0xff000000;

        if ( !bFlash ) {
            SendCmd( bNewDevice, eCmd, nValue );
        }
    } else if ( pSB == ui->spFreqLight ) {
        eCmd = LedControll::CmdFlashFrenquencyIntensityTune;

        nValue = ( nValue / 32.0f ) * 1023;
        nValue &= 0x0000ffff;

        if ( !bFlash ) {
            SendCmd( bNewDevice, eCmd, nValue );
        }
    }
}

void MainWindow::DlgConfig( )
{
    QDlgConfig dlg;
    dlg.exec( );

    QString strTitle = QString( "智能补光灯系统-串口:COM%1" ).arg( ( qint32 ) dlg.GetComName( ) );
    setWindowTitle( strTitle );
}

MainWindow::~MainWindow()
{
    controller.ConrollSP( false );
    delete ui;
}

void MainWindow::on_btnSet_clicked()
{
    DlgConfig( );
}

void MainWindow::SwitchModeUI( const bool bFreqMode )
{
    int nIndex = bFreqMode ? 1 : 5;
    int nEnd = bFreqMode ? 4 : 8;
    QRadioButton* pButton = NULL;

    for ( ; nIndex <= nEnd; nIndex++ ) {
        pButton = hashMode.value( nIndex );

        if ( NULL != pButton && pButton->isChecked( ) ) {
            pButton->setCheckable( false );
            pButton->setChecked( false );
            pButton->setCheckable( true );
            pButton->setFocus( );
        }
    }
}

char MainWindow::GetSelectedRbIndex( QHash<char, QRadioButton *> &hash )
{
    char cRet = ( char ) 1;

    char cCounter = hash.size( );
    for ( char c = 1; c <= cCounter; c++ ) {
        if ( hash.value( c )->isChecked( ) ) {
            cRet = c;
            break;
        }
    }

    return cRet;
}

void MainWindow::on_btnSaveSet_clicked()
{
    LedControll::SSysConfig sConfig;

    sConfig.nRunMode = GetSelectedRbIndex( hashMode );
    sConfig.nSyncMode = GetSelectedRbIndex( hashSync );
    sConfig.nFlashRadiance = ui->spFlashLight->value( );
    sConfig.nFlashTime = ui->spFlashTime->value( );
    sConfig.nFrequencyRadiance = ui->spFreqLight->value( );
    sConfig.nFrequencyTime = ui->spFreqTime->value( );
    sConfig.nActivatedSwitch = ui->chkLightSensitive->isChecked( ) ? 1 : 0;
    sConfig.nBaseRadiance = ui->chkBaseLight->isChecked( ) ? 1 : 0;

    QString strLocation = ui->edtLocation->text( );
    if ( strLocation.isEmpty( ) ) {
        strLocation = "未设置";
    }
    const wchar_t* pData = ( wchar_t* ) strLocation.utf16( );
    qint32 nLen = strLocation.length( );
    qint32 nRealLen = LedControll::nLOCATION_SIZE - 1;
    if ( nRealLen < nLen ) {
        strLocation.remove( nRealLen, nLen - nRealLen );
    }

    wcscpy( sConfig.cLocation, pData );

    QControllerCommon::SaveSystemConfig( sConfig );

    QString strPath;
    QControllerCommon::GetPath( strPath, LedControll::PathConfig );
    strPath += QDir::separator( ) + strLocation + ".ini";
    QControllerCommon::SaveSystemConfig( sConfig, strPath );

    QControllerCommon::MsgBox( NULL, "提示" , QString( "配置成功保存到\r\n【%1】" ).arg( strPath ), QMessageBox::Information );
}

void MainWindow::on_tbnReadSet_clicked()
{
    QFileDialog dlg( 0 );

    dlg.setNameFilter( tr( "Ini File (*.ini)" ) );
    dlg.setViewMode( QFileDialog::Detail );

    if ( QDialog::Rejected == dlg.exec( ) ) {
        return;
    }

   QStringList lstFiles = dlg.selectedFiles( );
   if ( 0 == lstFiles.length( ) ) {
       return;
   }

    InitializeUI( lstFiles.at( 0 ) );
}

void MainWindow::on_btnTestFlash_clicked()
{
    // AA 55 0A 03 D8 01 FF FF FF Open
    // AA 55 0A 03 D8 03 FF FF FF Close
}

void MainWindow::on_chkDevType_clicked(bool checked)
{
    ui->chkQuery->setChecked( false );
    ui->chkQuery->setEnabled( checked );
}

void MainWindow::on_chkLightSensitive_clicked(bool checked)
{
    qint32 nParam = checked ? 0x00000001 : 0x00000002;
    SendCmd( ui->chkDevType->isChecked( ), LedControll::CmdFlashFrenquencyLightSensitiveIfWork, nParam );
}

void MainWindow::on_chkBaseLight_clicked(bool checked)
{
    qint32 nParam = checked ? 0x00000001 : 0x00000000;
    SendCmd( ui->chkDevType->isChecked( ), LedControll::CmdFlashGearAlwaysRadianceClose, nParam );
}
