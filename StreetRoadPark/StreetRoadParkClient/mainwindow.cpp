#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QtEndian>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::HandleConnected( )
{
    QTcpSocket* pSocket = ( QTcpSocket* ) sender( );
    qDebug( ) << pSocket->objectName( ) << " connected." << endl;
}

void MainWindow::HandleDisconnected( )
{
    QTcpSocket* pSocket = ( QTcpSocket* ) sender( );
    qDebug( ) << pSocket->objectName( ) << " disconnected." << endl;
}

void MainWindow::on_btnConnect_clicked()
{
    QTcpSocket* pSocket = NULL;

    for ( qint32 nIndex = 0; nIndex < ui->sbConnCount->value( ); nIndex++ ) {
        pSocket = hashSocket.value( nIndex, NULL );

        if ( NULL == pSocket ) {
            pSocket = new QTcpSocket( );
            pSocket->setObjectName( QString( "Client【%1】" ).arg( nIndex ) );

            connect( pSocket, SIGNAL( connected( ) ),
                     this, SLOT( HandleConnected( ) ) );

            connect( pSocket, SIGNAL( disconnected( ) ),
                     this, SLOT( HandleDisconnected( ) ) );
        }

        hashSocket.insert( nIndex, pSocket );

        if ( QTcpSocket::UnconnectedState == pSocket->state( ) ) {
            pSocket->connectToHost( ui->edtServerIP->text( ), ui->sbPort->value( ) );
        }
    }
}

void MainWindow::on_btnDisconnect_clicked()
{
    QTcpSocket* pSocket = NULL;

    for ( qint32 nIndex = 0; nIndex < hashSocket.count( ); nIndex++ ) {
        pSocket = hashSocket.value( nIndex, NULL );

        if ( NULL == pSocket ) {
            continue;
        }

        if ( QTcpSocket::ConnectedState == pSocket->state( ) ) {
            pSocket->disconnectFromHost( );
        }
    }
}

void MainWindow::on_btnSendData_clicked()
{
    QString strData = ui->txtData->toPlainText( );
    QByteArray byData = GetTextCodec( )->fromUnicode( strData );

    QTcpSocket* pSocket = NULL;
    QByteArray byTokenData = "StreetRoadPark";
    quint32 nDataSize = sizeof ( quint32 );
    quint32 nDataLen = byTokenData.length( ) +
            nDataSize * 3 +
            byData.length( );

    nDataLen = qToBigEndian< quint32 >( nDataLen );

    byData.insert( 0, ( const char* ) &nDataLen, nDataSize );
    byData.insert( 0, ( const char* ) &nDataLen, nDataSize );
    byData.insert( 0, ( const char* ) &nDataLen, nDataSize );
    byData.insert( 0, byTokenData );

    for ( qint32 nIndex = 0; nIndex < hashSocket.count( ); nIndex++ ) {
        pSocket = hashSocket.value( nIndex, NULL );

        if ( NULL == pSocket ) {
            continue;
        }

        if ( QTcpSocket::ConnectedState == pSocket->state( ) ) {
            nDataLen = pSocket->write( byData );
            pSocket->flush( );
            pSocket->waitForBytesWritten( );
            qDebug( ) << Q_FUNC_INFO << pSocket->errorString( ) << endl;
        }
    }
}

QTextCodec* MainWindow::GetTextCodec( )
{
    static QTextCodec* pCodec = NULL;

    if ( NULL != pCodec ) {
        return pCodec;
    }

    QList<QByteArray> lstCodec = pCodec->availableCodecs( );
    QString strText;
    bool bFound = false;

    for ( int nIndex = 0; nIndex < lstCodec.count( ); nIndex++ ) {
        QByteArray byData = lstCodec[ nIndex ];
        strText = QString( byData );

        if ( 0 == strText.toUpper().compare( "GB18030" ) ||
             0 == strText.toUpper().compare( "GBK" ) ||
             0 == strText.toUpper().compare( "GB2312" ) ) {
            bFound = true;
            break;
        }
    }

    if ( !bFound ) {
        strText = QString( "System" );
    }

    pCodec = QTextCodec::codecForName( strText.toLatin1( ) );
    return pCodec;
}
