#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../Controller/qcontroller.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnSet_clicked();

    void on_btnSaveSet_clicked();

    void on_tbnReadSet_clicked();

private:
    void DlgConfig( );
    
private:
    Ui::MainWindow *ui;
    QController controller;
};

#endif // MAINWINDOW_H
