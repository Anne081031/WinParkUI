#include "../CommonLibrary/qmyapplication.h"
#include "mainwindow.h"

QPlatformGlobal* g_pPlatformGlobal = NULL;

int main(int argc, char *argv[])
{
    QMyApplication a(argc, argv);

    g_pPlatformGlobal = QPlatformGlobal::GetSingleton( );
    g_pPlatformGlobal->ParseMainArgs( MyEnums::PlatformCentralClient, argc, argv );
    g_pPlatformGlobal->InitializeApplication( MyEnums::PlatformCentralClient );

    MainWindow w;
    w.DisplayMainArgs( g_pPlatformGlobal->GetServerIpPortList( ) );
    w.show();

    return a.exec();
}
