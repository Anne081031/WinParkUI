#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pVideoThread = QJwsIPCThread::GetInstance( );

    pFrame[ 0 ] = ui->frame0;
    pFrame[ 1 ] = ui->frame1;
    pFrame[ 2 ] = ui->frame2;
    pFrame[ 3 ] = ui->frame3;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QJwsIPCEvent::EventParam uParam;

    pVideoThread->PostIPCStartupEvent( );

    uParam.EventConnectTimeout.dwWaitTime = 2000;
    uParam.EventConnectTimeout.dwTryTimes = 1;
    pVideoThread->PostIPCSetConnectTimeoutEvent( uParam );

    uParam.EventReconnectTimeout.dwInterval = 10000;
    uParam.EventReconnectTimeout.bEnableRecon = TRUE;
    pVideoThread->PostIPCSetReconnectTimeEvent( uParam );

    strcpy( uParam.EventLogin.cIP, "192.168.1.8" );
    uParam.EventLogin.wPort = 6002;
    strcpy( uParam.EventLogin.cUser, "system" );
    strcpy( uParam.EventLogin.cPwd, "system" );
    pVideoThread->PostIPCLoginEvent( uParam );

    for ( int nIndex = 0; nIndex< 1; nIndex++ ) {
        strcpy( uParam.EventStartRealPlay.cIP, "192.168.1.8" );
        uParam.EventStartRealPlay.hPlayWnd = pFrame[ nIndex ]->winId( );
        pVideoThread->PostIPCStartRealPlayEvent( uParam );
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QJwsIPCEvent::EventParam uParam;
    char* pIP = "192.168.1.8";

    for ( int nIndex =0; nIndex < 4; nIndex++ ) {
        uParam.EventStopRealPlay.hPlayWnd = pFrame[ nIndex ]->winId( );
        pVideoThread->PostIPCStopRealPlayEvent( uParam );
    }

    strcpy( uParam.EventLogout.cIP, pIP );
    pVideoThread->PostIPCLogoutEvent( uParam );
    pVideoThread->PostIPCCleanupEvent( );
}

void MainWindow::on_pushButton_4_clicked()
{
    HANDLE hPreview = TMCC_Init( TMCC_INITTYPE_REALSTREAM );
    int nRet = TMCC_SetAutoReConnect( hPreview, TRUE );
    tmPlayRealStreamCfg_t tCfg = { 0 };

    tCfg.dwSize = sizeof ( tCfg );
    tCfg.iPort = 6002;
    strcpy( tCfg.szAddress, "192.168.1.8" );
    strcpy( tCfg.szUser, "system" );
    strcpy( tCfg.szPass, "system" );

    nRet = TMCC_ConnectStream( hPreview, &tCfg, ui->frame->winId( ) );
    nRet = 0;
}
