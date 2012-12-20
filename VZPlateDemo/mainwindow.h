#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

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
    void LoadImg( QLabel* lblCtrlLeft, QLabel* lblCtrlRight, QLabel* lblCtrlDown, int nRow );

private slots:
    void HandlePlateResult( QStringList lstResult );
    
private slots:
    void on_btnFile_clicked();

    void on_tabResult_cellClicked(int row, int column);

    void on_btnClear_clicked();

    void on_btnAnalogCamera_clicked();

    void on_btnDigitalCamera_clicked();

    void on_btnVideoFile_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
