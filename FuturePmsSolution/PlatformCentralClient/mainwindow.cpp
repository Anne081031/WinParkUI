#include "mainwindow.h"
#include "ui_mainwindow.h"

extern QCommonFunction g_commonFunction;
extern QCommonWidgetLibrary g_widgetLibrary;
extern QThreadGenerator* g_pGenerator;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pTcpClientThread = g_pGenerator->GenerateTcpClientThread( );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash1;

    QString strText = "Hello2\nTest";

    hash1.insertMulti( QManipulateIniFile::LogDatabase, "Hello1°¡" );
    hash1.insertMulti( QManipulateIniFile::LogDatabase, strText );
    hash1.insertMulti( QManipulateIniFile::LogDatabase, "Hello3" );

    MyDataStructs::QEventMultiHash hash2;
    hash2.insertMulti( QManipulateIniFile::LogNetwork, "Hello11" );
    hash2.insertMulti( QManipulateIniFile::LogNetwork, "Hello22" );
    hash2.insertMulti( QManipulateIniFile::LogNetwork, "Hello33" );

    pEventParams->enqueue( hash1 );
    pEventParams->enqueue( hash2 );
    g_pGenerator->PostEvent( MyEnums::ThreadLogger, MyEnums::LogWrite, pEventParams );
}

void MainWindow::on_pushButton_2_clicked()
{
    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    g_pGenerator->PostEvent( MyEnums::ThreadLogger, MyEnums::ThreadExit, pEventParams );
}

void MainWindow::on_pushButton_3_clicked()
{
    g_widgetLibrary.BrowseLog( );
}

void MainWindow::on_pushButton_4_clicked()
{
    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash;
    hash.insertMulti( MyEnums::NetworkParamIP, "127.0.0.1" );
    hash.insertMulti( MyEnums::NetworkParamPort, "50000" );

    pEventParams->enqueue( hash );
    g_pGenerator->PostEvent( MyEnums::ThreadTcpClient, MyEnums::TcpClientConnect, pEventParams, pTcpClientThread );
}

void MainWindow::on_pushButton_5_clicked()
{
   g_pGenerator->PostEvent( MyEnums::ThreadTcpClient, MyEnums::TcpClientDisconnect, NULL, pTcpClientThread );
}
