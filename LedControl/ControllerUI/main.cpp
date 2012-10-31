#include <QtGui/QApplication>
#include "mainwindow.h"
#include "../ControllerCommon/qcontrollercommon.h"

int main(int argc, char *argv[])
{
    QTextCodec *pCodec = QControllerCommon::GetTextCodec( );

    QTextCodec::setCodecForLocale( pCodec );
    QTextCodec::setCodecForCStrings( pCodec );
    QTextCodec::setCodecForTr( pCodec );

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
