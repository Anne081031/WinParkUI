#include <QtGui/QApplication>
#include <QTextCodec>
#include <QtPlugin>
#include "mainwindow.h"
#include "Common/commonfunction.h"

//Q_IMPORT_PLUGIN(qjpeg)
//Q_IMPORT_PLUGIN(qgif)
//Q_IMPORT_PLUGIN(qkrcodecs)


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // MBCS(DBCS) UCS
    // ASCI ANSI ISO14060 GB2313 GBK GB18030 GB13000 BIG5 CJK
    //GBK、GB2312 GB18030－－Unicode－－UTF8
    //UTF8－－Unicode－－GBK、GB2312 GB18030
    QTextCodec *pCodec = CCommonFunction::GetTextCodec( );// QTextCodec::codecForName( "GB18030" );    //System//获取系统编码

    QTextCodec::setCodecForLocale( pCodec );
    QTextCodec::setCodecForCStrings( pCodec );
    QTextCodec::setCodecForTr( pCodec );

    //CCommonFunction::GetSyncPass( ).lock( );

   CCommonFunction::StartupSplash( );
    MainWindow w;
    w.show();
    CCommonFunction::CleanupSplash( &w );
    return a.exec( );
}
