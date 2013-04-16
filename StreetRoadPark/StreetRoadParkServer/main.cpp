#include "mainwindow.h"
#include <QApplication>

// Open Platform--->Open API---> HTTP API--->(Like) Restful API -->XML JSON etc.

int main(int argc, char *argv[])
{
    qsrand( 1 );
    QTextCodec* pCodec = CMainConfigurator::GetConfigurator( )->GetTextCodec( );
    QTextCodec::setCodecForLocale( pCodec );

    DatabaseController::MySQLLibraryInit( 0, NULL );

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    DatabaseController::MySQLLibraryEnd( );
    
    return a.exec();
}
