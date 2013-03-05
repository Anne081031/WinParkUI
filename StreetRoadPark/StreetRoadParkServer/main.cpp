#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    qsrand( 1 );
    QTextCodec* pCodec = CMainConfigurator::GetConfigurator( )->GetTextCodec( );
    QTextCodec::setCodecForLocale( pCodec );

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
