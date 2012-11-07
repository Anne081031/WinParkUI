#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdlgconfig.h"
#include <QFileDialog>
#include <QDebug>

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
    GetQueryCmd( byQueryCmd );
    ui->chkQuery->setVisible( false );
    strState = ui->edtState->toPlainText( );
    SetOldMaxSize( );
    LedControll::SSysConfig sConfig;
    QControllerCommon::GetSystemConfig( sConfig );
    InitializeUI( sConfig );

    connect( &controller, SIGNAL( Cmd( QByteArray, bool ) ), this, SLOT( HandleCmd( QByteArray, bool ) ) );
}

void MainWindow::HandleCmd( QByteArray data, bool bSend )
{
    QString strText( data.toHex( ).toUpper( ) );
    strText += "\n";
    bSend ? ui->edtSendCmd->appendPlainText( strText ) :
            ui->edtReceiveCmd->appendPlainText( strText );
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

void MainWindow::GetQueryCmd( QByteArray &byData )
{
    QByteArray data;
    bool bQuery = true;
    bool bMode = true; // true Flash
    qint32 nParam = 0;

    //LedControll::CmdFlashFrenquencyGearWorkTimeSet
    //LedControll::CmdFlashFrenquencyGearWorkTimeSet bFlash true
    //LedControll::CmdFlashFrenquencyIntensityTune
    //LedControll::CmdFlashFrenquencyIntensityTune bFlash true


    controllerCmd.GetNewCmd( LedControll::CmdFlashFrenquencyLightSensitiveIfWork, data, nParam, bQuery, bMode );
    byData.append( data );

    controllerCmd.GetNewCmd( LedControll::CmdLedTemperature, data, nParam, bQuery, bMode );
    byData.append( data );

    controllerCmd.GetNewCmd( LedControll::CmdFlashGearSet, data, nParam, bQuery, bMode );
    byData.append( data );

    controllerCmd.GetNewCmd( LedControll::CmdSyncModeDownTrigger, data, nParam, bQuery, bMode );
    byData.append( data );

    controllerCmd.GetNewCmd( LedControll::CmdFlashFrenquencyGearWorkTimeSet, data, nParam, bQuery, false );
    byData.append( data );

    controllerCmd.GetNewCmd( LedControll::CmdFlashFrenquencyGearWorkTimeSet, data, nParam, bQuery, bMode );
    byData.append( data );

    controllerCmd.GetNewCmd( LedControll::CmdFlashFrenquencyIntensityTune, data, nParam, bQuery, false );
    byData.append( data );

    controllerCmd.GetNewCmd( LedControll::CmdFlashFrenquencyIntensityTune, data, nParam, bQuery, bMode );
    byData.append( data );

    controllerCmd.GetNewCmd( LedControll::CmdLedFrequency, data, nParam, bQuery, bMode );
    byData.append( data );

    controllerCmd.GetNewCmd( LedControll::CmdLedWorkVoltage, data, nParam, bQuery, bMode );
    byData.append( data );

    controllerCmd.GetNewCmd( LedControll::CmdLedExternalTriggerSignalState, data, nParam, bQuery, bMode );
    byData.append( data );

    controllerCmd.GetNewCmd( LedControll::CmdSyncModeForFlash, data, nParam, bQuery, bMode );
    byData.append( data );

    qDebug( ) << byData.toHex( ).toUpper( ) << endl;
}

void MainWindow::SendCmd( const bool bNewDevice, const LedControll::ECommand eCmd, qint32 nParam )
{
    QByteArray byData;

    if ( bNewDevice ) {
        controllerCmd.GetNewCmd( eCmd, byData, nParam, ui->chkQuery->isChecked( ), bFlash );
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

void MainWindow::ChangMode( qint32 nMode, const bool bNeedChange )
{
    bool bNewDevice = ui->chkDevType->isChecked( );

    if ( bNewDevice ) {
        nMode = ( bFlash ? 0x00000001 : 0x00000000 );
    } else if ( bNeedChange ) {
        nMode |= 0xFF03D800;
    }

    SendCmd( bNewDevice, bFlash ? LedControll::CmdFlashGearSet : LedControll::CmdFrenquencyGearSet, nMode );

    QString strTxt = QString( "目前处于:%1" ).arg( bFlash ? ui->lblFlash->text( ) : ui->lblFreq->text( ) );
    ui->lblMode->setText( strTxt );
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
    ChangMode( nIndex, true );
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

    bool bNewDevice = ui->chkDevType->isChecked( );

    if ( bNewDevice && 1 == ui->cbMode->currentIndex( ) ) {
        eCmd = LedControll::CmdSyncModeForFlash;
    } else {
        nIndex |= 0xFF03D800;
    }

    SendCmd( bNewDevice, eCmd, nIndex );
}

void MainWindow::OnSpXValueChanged( int nValue )
{
    QSpinBox* pSB = ( QSpinBox* ) sender( );
    LedControll::ECommand eCmd;
    bool bNewDevice = ui->chkDevType->isChecked( );

    if ( pSB == ui->spFlashTime ) { // 闪光灯
        eCmd = LedControll::CmdFlashFrenquencyGearWorkTimeSet;
        int iTrack = nValue;

        if ( bNewDevice ) {

        } else {
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
            nValue = iTrack;
        }

        if ( bFlash ) {
            SendCmd( bNewDevice, eCmd, iTrack );

            if ( !bNewDevice ) {
                nValue &= 0xFFFFFF00;
                nValue |= nModeIndex;
                ChangMode( nValue, false );
            }
        }
    } else if ( pSB == ui->spFlashLight ) {
        eCmd = LedControll::CmdFlashFrenquencyIntensityTune;

        if( bNewDevice ) {
            ;
        } else {
            float fValue = nValue / 25.0f;
            nValue = ( fValue * 0.25 ) * 1023;
            nValue &= 0x0000ffff;
        }

        if ( bFlash ) {
            SendCmd( bNewDevice, eCmd, nValue );

            if ( !bNewDevice ) {
                qint32 nLow = ( nValue >> 8 );
                qint32 nHigh = ( ( nValue & 0x000000FF ) << 8 );
                nValue = ( nLow | nHigh );
                nValue <<= 16;
                nValue |= 0x0000D800;
                nValue |= nModeIndex;
                //nValue |= 0x
                ChangMode( nValue, false );
            }
        }
    } else if ( pSB == ui->spFreqTime ) { // 频闪
        eCmd = LedControll::CmdFlashFrenquencyGearWorkTimeSet;

        if ( bNewDevice ) {
            ;
        } else {
            nValue &= 0x000000FF;
            nValue <<= 16;
            nValue |= 0xff000000;
        }

        if ( !bFlash ) {
            SendCmd( bNewDevice, eCmd, nValue );
        }

        if ( !bNewDevice ) {
            nValue &= 0xFFFFFF00;
            nValue |= nModeIndex;
            ChangMode( nValue, false );
        }
    } else if ( pSB == ui->spFreqLight ) {
        eCmd = LedControll::CmdFlashFrenquencyIntensityTune;

        if( bNewDevice ) {
            ;
        } else {
            nValue = ( nValue / 32.0f ) * 1023;
            nValue &= 0x0000ffff;
        }

        if ( !bFlash ) {
            SendCmd( bNewDevice, eCmd, nValue );
        }

        if ( !bNewDevice ) {
            qint32 nLow = ( nValue >> 8 );
            qint32 nHigh = ( ( nValue & 0x000000FF ) << 8 );
            nValue = ( nLow | nHigh );
            nValue <<= 16;
            nValue |= 0x0000D800;
            nValue |= nModeIndex;
            //nValue |= 0x
            ChangMode( nValue, false );
        }
    }
}

void MainWindow::DlgConfig( )
{
    QDlgConfig dlg;
    if ( QDialog::Accepted == dlg.exec( ) ) {
        controller.ConrollSP( false );
        controller.ConrollSP( true );
    }

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
    static bool bOpen = false;

    qint32 nParam = bOpen ? 0x00000003 : 0x00000001;
    SendCmd( ui->chkDevType->isChecked( ),
             bOpen ? LedControll::CmdTestFlashOpen : LedControll::CmdTestFlashClose, nParam );
    bOpen = !bOpen;

    QString strTxt = bOpen ? "试闪开" : "试闪关";
    ui->btnTestFlash->setText( strTxt );


}

void MainWindow::on_chkDevType_clicked(bool checked)
{
    ui->spFreqTime->setMaximum( checked ? 100 : 32 );
    ui->spFreqLight->setMaximum( checked ? 100 : 32 );

    ui->chkQuery->setChecked( false );
    ui->chkQuery->setEnabled( checked );
    ui->cbMode->setEnabled( checked );
    ui->btnQuery->setEnabled( checked );

    foreach ( QRadioButton* pButton, hashMode.values( ) ) {
        pButton->setEnabled( !checked );
    }

    ui->chkBaseLight->setEnabled( !checked );
    qint32 nIndex = ui->cbMode->currentIndex( );
    on_cbMode_currentIndexChanged( nIndex );

    checked ? SetNewMaxSize( ) : SetOldMaxSize( );
}

void MainWindow::SetOldMaxSize( )
{
    SetSize( 551, 415 );
}

void MainWindow::SetSize( qint32 nWidth, qint32 nHeight )
{
    setMaximumSize( nWidth, nHeight );
    QSize size( nWidth, nHeight );
    resize( size );
}

void MainWindow::SetNewMaxSize( )
{
    SetSize( 551, 643 );
}

void MainWindow::on_chkLightSensitive_clicked(bool checked)
{
    bool bNewDevice = ui->chkDevType->isChecked( );
    qint32 nParam = 0;
    if ( bNewDevice ) {
        nParam = checked ? 0x00000000 : 0x00000001;
    } else {
        nParam = checked ? 0xFF03D801 : 0xFF03D802;
    }

    SendCmd( bNewDevice, LedControll::CmdFlashFrenquencyLightSensitiveIfWork, nParam );
}

void MainWindow::on_chkBaseLight_clicked(bool checked)
{
    qint32 nParam = checked ? 0xFF03D801 : 0xFF03D800;
    SendCmd( ui->chkDevType->isChecked( ), LedControll::CmdFlashGearAlwaysRadianceClose, nParam );
}

void MainWindow::on_cbMode_currentIndexChanged(int index)
{
    bFlash = ( 0 != index );
    ChangMode( index, false );
}

void MainWindow::on_btnQuery_clicked()
{
    controller.WriteData( byQueryCmd, true );
}
