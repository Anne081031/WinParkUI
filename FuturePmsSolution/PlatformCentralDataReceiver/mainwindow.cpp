#include "mainwindow.h"
#include "ui_mainwindow.h"

extern QCommonFunction g_commonFunction;
extern QCommonWidgetLibrary g_widgetLibrary;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
