#include "mainwindow.h"
#include "ui_mainwindow.h"

extern QCommonFunction g_commonFunction;
extern QCommonWidgetLibrary g_widgetLibrary;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QThreadGenerator* pGenerator = QThreadGenerator::GetSingleton( );
    MyDataStructs::PQQueueEventParams pEventParams = new MyDataStructs::QQueueEventParams;
    pGenerator->PostEvent( MyEnums::ThreadListener, MyEnums::ListenerStartup, pEventParams );
}

MainWindow::~MainWindow()
{
    delete ui;
}
