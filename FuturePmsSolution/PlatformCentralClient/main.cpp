#include "../CommonLibrary/qmyapplication.h"
#include "mainwindow.h"

QCommonFunction* g_pCommonFunction;
QCommonWidgetLibrary* g_pWidgetLibrary;
QManipulateIniFile* g_pManipulateIniFile;
QThreadGenerator* g_pGenerator = NULL;

int main(int argc, char *argv[])
{
    QMyApplication a(argc, argv);

    g_pCommonFunction = new QCommonFunction( );
    g_pWidgetLibrary = new QCommonWidgetLibrary( );
    g_pManipulateIniFile = new QManipulateIniFile( );

    g_pCommonFunction->SetDateTimeFormat( );
    g_pCommonFunction->InstallTextCodec( );

    g_pGenerator = QThreadGenerator::GetSingleton( );

    MainWindow w;
    w.show();

    return a.exec();
}
