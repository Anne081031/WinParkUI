#include <QtGui/QApplication>
#include "vzmainwindow.h"
#include "qcommon.h"

int main(int argc, char *argv[])
{
    QTextCodec *pCodec = QCommon::GetTextCodec( );// QTextCodec::codecForName( "GB18030" );    //System//��ȡϵͳ����

    QTextCodec::setCodecForLocale( pCodec );
    QTextCodec::setCodecForCStrings( pCodec );
    QTextCodec::setCodecForTr( pCodec );

    QApplication a(argc, argv);
    VZMainWindow w;
    w.show();
    
    return a.exec();
}
