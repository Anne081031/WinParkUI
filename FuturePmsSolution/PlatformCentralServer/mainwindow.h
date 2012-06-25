#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../ThreadLibrary/qthreadgenerator.h"
#include "../CommonLibrary/qcommonfunction.h"
#include "../CommonWidgetLibrary/commonwidgetlibrary.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void CreateTcpListenerhread( );

private:
    QList< QListenerThread* > lstTcpListenerThread;
    QThreadGenerator* pGenerator;
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
