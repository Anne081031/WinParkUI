#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../Controller/qcontroller.h"
#include <QRadioButton>
#include "../ControllerCmd/qcontrollercmd.h"

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
    void GetQueryCmd( QByteArray& byData );
    void SendCmd( const bool bNewDevice, const LedControll::ECommand eCmd, qint32 nParam );
    qint32 GetRbIndex( QObject* pSender );
    char GetSelectedRbIndex( QHash< char, QRadioButton* >& hash );
    void SwitchModeUI( const bool bFreqMode );
    void ChangMode( qint32 nMode );
    inline void SetOldMaxSize( );
    inline void SetNewMaxSize( );
    inline void SetSize( qint32 nWidth, qint32 nHeight );

private slots:
    void on_btnSet_clicked();

    void on_btnSaveSet_clicked();

    void on_tbnReadSet_clicked();

    void on_btnTestFlash_clicked();

    void OnRbModeXClicked( );

    void OnRbSyncXClicked( );

    void OnSpXValueChanged( int nValue );

    void on_chkDevType_clicked(bool checked);

    void on_chkLightSensitive_clicked(bool checked);

    void on_chkBaseLight_clicked(bool checked);

    void on_cbMode_currentIndexChanged(int index);

    void on_btnQuery_clicked();

    void HandleCmd( QByteArray data, bool bSend );

private:
    void DlgConfig( );
    void InitializeSlot( );
    void InitializeUI( );
    void InitializeUI( const QString& strFile );
    void InitializeUI( const LedControll::SSysConfig& sConfig );
    QHash< char, QRadioButton* > hashMode;
    QHash< char, QRadioButton* > hashSync;
    
private:
    Ui::MainWindow *ui;
    QController controller;
    QControllerCmd controllerCmd;
    bool bFlash;
    qint32 nModeIndex;
    QString strState;
    QByteArray byQueryCmd;
};

#endif // MAINWINDOW_H
