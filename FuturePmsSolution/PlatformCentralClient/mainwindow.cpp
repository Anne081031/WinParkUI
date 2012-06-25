#include "mainwindow.h"
#include "ui_mainwindow.h"

extern QCommonFunction* g_pCommonFunction;
extern QCommonWidgetLibrary* g_pWidgetLibrary;
extern QManipulateIniFile* g_pManipulateIniFile;
extern QThreadGenerator* g_pGenerator;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    CreateTcpClientThread( );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::CreateTcpClientThread( )
{
    pTcpClientThreadServerX = g_pGenerator->GenerateTcpClientThread( );
    connect( pTcpClientThreadServerX, SIGNAL( GetWholeTcpStreamData( void* ) ), this, SLOT( HandleGetWholeTcpStreamDataServerX( void* ) ) );

    // IP : Port Distinguish
    pTcpClientThreadServerY = g_pGenerator->GenerateTcpClientThread( );
    connect( pTcpClientThreadServerY, SIGNAL( GetWholeTcpStreamData( void* ) ), this, SLOT( HandleGetWholeTcpStreamDataServerY( void* ) ) );
}

void MainWindow::HandleGetWholeTcpStreamDataServerX( void *pByteArray )
{
    if ( NULL == pByteArray ) {
        return;
    }

    QByteArray* pByteData = ( QByteArray* ) pByteArray;
    QString strText( *pByteData );
    OutputMsg( strText );

    strText += "\n";
    ui->textEdit->append( strText );

    delete pByteData;
}

void MainWindow::HandleGetWholeTcpStreamDataServerY( void *pByteArray )
{
    if ( NULL == pByteArray ) {
        return;
    }

    QByteArray* pByteData = ( QByteArray* ) pByteArray;
    QString strText( *pByteData );
    OutputMsg( strText );
    strText += "\n";
    ui->textEdit->append( strText );

    delete pByteData;
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
    g_pWidgetLibrary->BrowseLog( );
}

void MainWindow::on_pushButton_4_clicked()
{
    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash;
    hash.insertMulti( MyEnums::NetworkParamIP, "192.168.1.20" );
    hash.insertMulti( MyEnums::NetworkParamPort, "50000" );

    pEventParams->enqueue( hash );
    g_pGenerator->PostEvent( MyEnums::ThreadTcpClient, MyEnums::TcpClientConnect, pEventParams, pTcpClientThreadServerX );

    hash.clear( );
    hash.insertMulti( MyEnums::NetworkParamIP, "192.168.1.20" );//"127.0.0.1"
    hash.insertMulti( MyEnums::NetworkParamPort, "50001" );

    pEventParams = new MyDataStructs::QQueueEventParams;
    pEventParams->enqueue( hash );
    g_pGenerator->PostEvent( MyEnums::ThreadTcpClient, MyEnums::TcpClientConnect, pEventParams, pTcpClientThreadServerY );
}

void MainWindow::on_pushButton_5_clicked()
{
   g_pGenerator->PostEvent( MyEnums::ThreadTcpClient, MyEnums::TcpClientDisconnect, NULL, pTcpClientThreadServerX );
   g_pGenerator->PostEvent( MyEnums::ThreadTcpClient, MyEnums::TcpClientDisconnect, NULL, pTcpClientThreadServerY );
}

void MainWindow::on_pushButton_6_clicked()
{
    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    MyDataStructs::QEventMultiHash hash;

    QString strText = "Hello2\nTestÄãºÃÂð£¿";
    QByteArray* pByteData = new QByteArray( );
    QByteArray byteTmpData = g_pCommonFunction->GetTextCodec( )->fromUnicode( strText );
    pByteData->append( byteTmpData );
    quint32 nBytePointer = ( quint32 ) pByteData;
    hash.insertMulti( MyEnums::NetworkParamData, nBytePointer );
    pEventParams->enqueue( hash );
    g_pGenerator->PostEvent( MyEnums::ThreadTcpClient, MyEnums::TcpClientSendData, pEventParams , pTcpClientThreadServerX );


    hash.clear( );
    pByteData = new QByteArray( );
    pEventParams = new MyDataStructs::QQueueEventParams;

    pByteData->append( byteTmpData );
    nBytePointer = ( quint32 ) pByteData;
    hash.insertMulti( MyEnums::NetworkParamData, nBytePointer );
    pEventParams->enqueue( hash );
    g_pGenerator->PostEvent( MyEnums::ThreadTcpClient, MyEnums::TcpClientSendData, pEventParams , pTcpClientThreadServerY );
}
