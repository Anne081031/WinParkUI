#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTextCodec>

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
    QTextCodec* GetTextCodec( );

private:
    typedef QHash< qint32, QTcpSocket* > QIntSocketHash;

    QIntSocketHash hashSocket;
    
private slots:
    void HandleConnected( );
    void HandleDisconnected( );

    void on_btnConnect_clicked();

    void on_btnDisconnect_clicked();

    void on_btnSendData_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
