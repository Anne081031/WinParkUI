#ifndef PICTURECONTRASTDLG_H
#define PICTURECONTRASTDLG_H

#include <QDialog>
#include <QCloseEvent>
#include <QDateTime>
#include <QRadioButton>
#include <QShowEvent>
#include <QResizeEvent>
#include "Common/CommonType.h"

namespace Ui {
    class CPictureContrastDlg;
}

class CPictureContrastDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CPictureContrastDlg( QWidget *parent = 0);
    ~CPictureContrastDlg();

    void SetParams( QByteArray &byData, QByteArray &vData, int nMin, int nHour, int nAmount, bool bEnter );
    QString GetFeeRateType( );
    QString GetDiscountType( );

public:
    void InitDlg( QStringList& lstRows, QPixmap& bmpEnter, QPixmap& bmpLeave, QByteArray& byData, bool bBuffer);
    void InitDlg( QStringList& lstData, QString& strWhere, QString& strCardNo, int nType, bool bEnter  );
    int GetAmount( );
    int GetDisAmount( );
    void LoadMyImage( CommonDataType::BlobType blob, QString& strCardNo, bool bHistory );
    void SetParkID( QString& strID );

    void DefaultClicked(  );

protected:
    void closeEvent( QCloseEvent *e );
    void showEvent(QShowEvent *  );
    void resizeEvent( QResizeEvent *event );
    void keyPressEvent ( QKeyEvent * event );

signals:
    void SendTimeCardInfo( QByteArray &byData, QByteArray &vData, int nMin, int nHour, int nAmount, bool bEnter );

private:
    void ConnectRadioBtn( );
    void Calculate( QRadioButton& rbtn );
    void SwitchImage( QPushButton *pBtn, bool bDown );
    void Write2UI( QStringList& lstRows, bool bEnter , bool bAuto = true, bool bBuffer = false );
    void FillDiscount(  );
    void CaculateAndPlay( QRadioButton& rbtn );
    int GetDiscount( int nPrevValue );
    QRadioButton& SetCarType( QString& strType );
    void SetCurrentRadioBox( QRadioButton* pRbx );
    void AnalogClicked( QRadioButton* pBtn );

private slots:
    void on_btnPass_clicked();
    void RbtnClicked( );
    void BtnPressed( );
    void BtnReleased( );
    void OnClickedDlgPopup( );
    void CbxIndexChanged( int nIndex );
    void onLinkActivated( QString link );
    void PlateCheck( QString strChar, int nChannel, int nIndex );

private:
    Ui::CPictureContrastDlg *ui;
    int nAmount;
    int nFeeNum;
    QString strTabName;
    QString strParkName;
    QDateTime dtStart;
    QDateTime dtEnd;
    int nHour;
    int nMin;
    QByteArray byData;
    QString strButtonStyle;
    QString strImagePath;
    QString strVideoWhere;
    int nCardType;
    QString strParkID;
    CPictureContrastDlg* pFeeDlg;

    QByteArray byData1;
    QByteArray vData1;
    int nMin1;
    int nHour1;
    int nAmount1;
    bool bEnter1;

    QString strFeeRateType;
};

#endif // PICTURECONTRASTDLG_H
