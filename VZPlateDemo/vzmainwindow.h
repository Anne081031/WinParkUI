#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

#include "Thread/qdirectorythread.h"
#include "Thread/qhkcapturecardthread.h"
#include "Thread/qtmcapturecardthread.h"
#include "Thread/qplatethread.h"

namespace Ui {
class VZMainWindow;
}

class VZMainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit VZMainWindow(QWidget *parent = 0);
    ~VZMainWindow();

private:
    void LoadImg( QLabel* lblCtrlLeft, QLabel* lblCtrlRight, QLabel* lblCtrlDown, int nRow );

private:
    QAnalogCameraThread* pAnalogCamera;

private slots:
    void HandlePlateResult( QStringList lstResult, int nChannel, bool bSuccess, bool bVideo );
    void HandleCaptureImage( QString strFile, int nChannel );
    void HandleNotifyMessage( QString strMsg, bool bSuccess );
    void HandleDetectInfo( int nChannel, bool bMotion );
    
private slots:
    void on_btnFile_clicked();

    void on_tabResult_cellClicked(int row, int column);

    void on_btnClear_clicked();

    void on_btnAnalogCamera_clicked();

    void on_btnDigitalCamera_clicked();

    void on_btnVideoFile_clicked();

    void on_btnAnalogCaptureFile_clicked();

    void on_btnIPCCaptureFile_clicked();

    void on_btnStopVideoRecognize_clicked();

private:
    Ui::VZMainWindow *ui;
    QString strPlateDir;
    QLabel* aLables[ CHANNEL_WAY ];
};

#endif // MAINWINDOW_H
