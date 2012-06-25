#include "mainwindow.h"
#include "ui_mainwindow.h"

extern QCommonFunction* g_pCommonFunction;
extern QCommonWidgetLibrary* g_pWidgetLibrary;
extern QManipulateIniFile* g_pManipulateIniFile;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pGenerator = QThreadGenerator::GetSingleton( );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::CreateTcpListenerhread( )
{
        QVariant varPorts;
        QVariant varMaxConnections;
        bool bWrite = false;

        g_pManipulateIniFile->IniFileValue( QManipulateIniFile::IniNetwork, QManipulateIniFile::NetworkTcpServerPort, bWrite, varPorts );
        g_pManipulateIniFile->IniFileValue( QManipulateIniFile::IniNetwork, QManipulateIniFile::NetworkTcpMaxConnection, bWrite, varMaxConnections );

        QString strSeperator = "@";

        QStringList lstPorts = varPorts.toString( ).split( strSeperator );
        int nPorts = lstPorts.count( );

        QStringList lstConnections = varMaxConnections.toString( ).split( strSeperator );
        int nConnections = lstConnections.count( );

        if ( 0 == nPorts * nConnections || nPorts != nConnections ) {
            return;
        }

        MyDataStructs::PQQueueEventParams pEventParams = NULL;
        MyDataStructs::QEventMultiHash hash;

        for ( int nIndex = 0; nIndex < nPorts; nIndex++ ) {
            hash.clear( );
            pEventParams = new MyDataStructs::QQueueEventParams;

            QListenerThread* pThreadInstance = pGenerator->GenerateTcpListenerThread( );
            lstTcpListenerThread.append( pThreadInstance );

            hash.insertMulti( MyEnums::NetworkParamListenerPort, lstPorts.at( nIndex ) );
            hash.insertMulti( MyEnums::NetworkParamListenerMaxConnections, lstConnections.at( nIndex ) );

            pEventParams->enqueue( hash );
            pGenerator->PostEvent( MyEnums::ThreadListener, MyEnums::TcpListenerStartup, pEventParams, pThreadInstance );
        }
}

void MainWindow::on_pushButton_clicked()
{
    g_pWidgetLibrary->BrowseLog( );
}

void MainWindow::on_pushButton_2_clicked()
{
    CreateTcpListenerhread( );
}
