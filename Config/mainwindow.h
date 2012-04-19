#ifndef MAINWINDOW_CFG_H
#define MAINWINDOW_CFG_H

#include <QMainWindow>
#include "../Common/commonfunction.h"

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
    void ReadFile( );
    void WriteFile( );

private:
    Ui::MainWindow *ui;
    QSettings* pSystemCfg;
    QSettings* pSysSetCfg;

private slots:
    void on_btnCancel_clicked();
    void on_btnOk_clicked();
};

#endif // MAINWINDOW_CFG_H
