#include "../CommonLibrary/qmyapplication.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QMyApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
