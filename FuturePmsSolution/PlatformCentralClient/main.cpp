#include "../CommonLibrary/qmyapplication.h"
#include "mainwindow.h"

QCommonFunction g_commonFunction;
QCommonWidgetLibrary g_widgetLibrary;
QThreadGenerator* g_pGenerator = NULL;
int main(int argc, char *argv[])
{
    QMyApplication a(argc, argv);

    g_pGenerator = QThreadGenerator::GetSingleton( );
    g_commonFunction.SetDateTimeFormat( );
    g_commonFunction.InstallTextCodec( );

    MainWindow w;
    w.show();

    return a.exec();
}
