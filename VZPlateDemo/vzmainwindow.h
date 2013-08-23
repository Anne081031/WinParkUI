#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QFileInfoList>

#include "Thread/qdirectorythread.h"
#include "Thread/qhkcapturecardthread.h"
#include "Thread/qtmcapturecardthread.h"
#include "Thread/qplatethread.h"

#include "Thread/qdhkipcthread.h"
#include "Thread/qjvsipcthread.h"
#include "Thread/qonvifthread.h"

#include "Thread/qfilecamerathread.h"

#include "CDlgConfig.h"

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
    void LoadLogoTitle( );
    inline QString GetSelectedFile( );
    inline void ButtonEnable( bool bPreEnable, bool bNextEnable );
    void SingleFileRecognize( bool bPreFile );

    void Initialize( );
    void StartVideo( );
    void CaptureImage( );
    void EnableButton( QString& strVideoType );
    void FileButton( bool bEnable );
    void VideoButton( bool bEnable );

private:
    QAnalogCameraThread* pAnalogCamera;
    QDigitalCameraThread* pDigitalCamera;
    QFileCameraThread* pFileCamera;
    QPlateThread* pPlateThread;

private slots:
    void HandlePlateResult( QStringList lstResult, int nChannel, bool bSuccess, bool bVideo );
    void HandleCaptureImage( QString strFile, int nChannel );
    void HandleCaptureImage( QString strFile, QString strIP );
    void HandleNotifyMessage( QString strMsg, bool bSuccess );
    void HandleDetectInfo( int nChannel, bool bMotion );
    
private slots:
    void on_btnFile_clicked();

    void on_btnSingleFile_clicked();

    void on_btnPreFile_clicked();

    void on_btnNextFile_clicked();

    void on_tabResult_cellClicked(int row, int column);

    void on_btnClear_clicked();

    void on_btnCamera_clicked();

    void on_btnVideoFile_clicked();

    void on_btnCaptureFile_clicked();

    void on_btnStopVideoRecognize_clicked();

    void on_actParameter_triggered();

private:
    Ui::VZMainWindow *ui;
    QString strPlateDir;
    QLabel* aLables[ CHANNEL_WAY ];
    int nFileIndex;
    QFileInfoList lstFiles;
    QString strIpcIP;
    int nPlateWay;
    CConfigurator* pConfig;
};

#endif // MAINWINDOW_H
