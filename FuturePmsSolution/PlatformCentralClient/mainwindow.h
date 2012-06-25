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
    void CreateTcpClientThread( );

private:
    QTcpClientSocketThread *pTcpClientThreadServerX;
    QTcpClientSocketThread *pTcpClientThreadServerY;

private slots:
    void HandleGetWholeTcpStreamDataServerX( void* pByteArray );
    void HandleGetWholeTcpStreamDataServerY( void* pByteArray );
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
