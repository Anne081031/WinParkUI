#include "../CommonLibrary/qmyapplication.h"
#include "mainwindow.h"

QPlatformGlobal* g_pPlatformGlobal = NULL;

int main(int argc, char *argv[])
{
    QMyApplication a(argc, argv);

    g_pPlatformGlobal = QPlatformGlobal::GetSingleton( );
    g_pPlatformGlobal->InitializeApplication( MyEnums::PlatformCentralServer );
    g_pPlatformGlobal->ControlTimer( QManipulateIniFile::PlatformCentralServer, true );

    MainWindow w;
    w.show();
    
    return a.exec();
}
