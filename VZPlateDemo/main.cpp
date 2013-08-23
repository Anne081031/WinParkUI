#include <QtGui/QApplication>
#include "vzmainwindow.h"
#include "blacklistmainwindow.h"
#include "cconfigurator.h"

int main(int argc, char *argv[])
{
    QTextCodec *pCodec = QCommon::GetTextCodec( );// QTextCodec::codecForName( "GB18030" );    //System//��ȡϵͳ����

    QTextCodec::setCodecForLocale( pCodec );
    QTextCodec::setCodecForCStrings( pCodec );
    QTextCodec::setCodecForTr( pCodec );

    int nRet = -1;
    QApplication a(argc, argv);

    CConfigurator* pConfig = CConfigurator::CreateInstance( );
    QString strType;
    pConfig->ReadAppMainWindow( strType );

    QMainWindow* pMainWindow = NULL;

    if ( "Demo" == strType ) {
        pMainWindow = new VZMainWindow( );
    }else if ( "Blacklist" == strType ) {
        pMainWindow = new BlacklistMainWindow( );
    }

    if ( NULL == pMainWindow ) {
        QString strInfo = QString( "��Config.ini���С�AppMainWindow�����ô���\nTypeֵΪ��Demo��Blacklist��֮һ��" );
        QMessageBox::critical( NULL, "��������", strInfo );
        return nRet;
    }

    pMainWindow->show( );
    
    nRet = a.exec();

    if ( NULL != pMainWindow ) {
        delete pMainWindow;
        pMainWindow = NULL;
    }

    return nRet;
}
