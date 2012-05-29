#include "Header/monitor.h"
#include "ui_monitor.h"
#include "Dialog/parkspacelotdialog.h"
#include "Dialog/parkspacelotdialog.h"
#include "SerialPort/processdata.h"
#include <QDebug>
#include "SerialPort/processdata.h"
#include "Common/CommonType.h"
#include <QMetaType>

#include "Dialog/dlgccstatus.h"
#include "Dialog/ledinfodialog.h"
#include "Dialog/dlgperipheralstatus.h"
#include "Dialog/dlgsmsnotification.h"
#include "Dialog/dlgpassdetail.h"
#include "Dialog/dlgqueryowner.h"
#include "Dialog/picturecontrastdlg.h"
#include "Common/commonfunction.h"
#include "Header/publishledinfo.h"
#include "Header/printmonthlyreport.h"
#include "windows.h"
#include "PmsLog/pmslog.h"

quint8 CMonitor::imgData[ VIDEO_USEDWAY ][ VIDEO_BUF ] = { { 0 } };
TH_PlateIDResult CMonitor::recogResult[ VIDEO_USEDWAY ][ RECOG_RES ] = { { 0 } };
bool CMonitor::bStartRecognization[ VIDEO_USEDWAY ] = { false, false };
//bool CMonitor::bPlateFilter = false;
//bool CMonitor::bSuccession = false;
TH_PlateIDResult CMonitor::structPlates[ VIDEO_USEDWAY ] = { { 0 } };
CMonitor* pMainWnd = NULL;
QString CMonitor::strPlates[ VIDEO_USEDWAY ] = { "" };

void CMonitor::keyPressEvent( QKeyEvent *event )
{
    qDebug( ) << Q_FUNC_INFO << endl;
    QString str1 = "���";
    QString str2 = "��";

    Q_UNUSED( str1 );
    Q_UNUSED( str2 );
    QFrame::keyPressEvent( event );

    bool bRet = pSystem->value( "CommonCfg/HotKeyGate", false ).toBool( );
    if ( !bRet ) {
        return;
    }

    switch ( event->key( ) ) {
    case Qt::Key_F9 :
        ControlGate( true, true, ui->btnEnterGateOpen );
        break;

    case Qt::Key_F10 :
        ControlGate( false, true, ui->btnEnterGateOpen );
        break;

    case Qt::Key_F11 :
        ControlGate( true, false, ui->btnLeaveGateOpen );
        break;

    case Qt::Key_F12 :
        ControlGate( false, false, ui->btnLeaveGateClose );
        break;
    }
}

void CMonitor::GetCanParkIndexNum( )
{
    int nCols = 4;
    int nField = 0;
    QString strCan;
    char cCan;

    CLogicInterface::GetInterface( )->GetCurrentPark( lstPark );
    if ( nCols <= lstPark.count( ) ) {
        strParkName = lstPark[ 1 ];
        nTotalParkSpace = lstPark[ 2 ].toInt( );
    }

    int nRows = lstPark.count( ) / nCols;

    // CAN / PARKINDEX / PARKNUM / PARKNAME

    for ( int nIndex = 0; nIndex < nRows; nIndex++ ) {
        nField = nIndex * nCols;
        strCan = lstPark[ nField ];
        short sCan = strCan.toShort( );
        cCan = ( char ) sCan;

        CCommonFunction::GetCanParkIndexNum( 0 ).insert( cCan, lstPark[ nField + 1 ] );
        CCommonFunction::GetCanParkIndexNum( 1 ).insert( cCan, lstPark[ nField + 2 ] );
        CCommonFunction::GetCanParkIndexNum( 2 ).insert( cCan, lstPark[ nField + 3 ] );
    }
}

CMonitor::CMonitor(QWidget* mainWnd, QWidget *parent) :
    QFrame(parent),
    ui(new Ui::CMonitor)
{
    ui->setupUi(this);

    ui->pushButton->setVisible( false );
    ui->spinBox->setVisible( false );
    ui->label_3->setVisible( false );
    pMainWnd = this;
    GetCanParkIndexNum( );
    nRefreshParkspaceTime = 1000 * 60;

    pParent = dynamic_cast< MainWindow* > ( mainWnd );
    //qobject_cast()
    pSysSet = CCommonFunction::GetSettings( CommonDataType::CfgSysSet );
    pSystem= CCommonFunction::GetSettings( CommonDataType::CfgSystem );

    InitChannelHandle( );

    //QString strLink = "<a href=\"/\" style = \"text-decoration:none;color: rgb(244, 244, 0);\">У��</a>";
    //ui->lblLicence19->setText( strLink );
    //ui->lblLicence29->setText( strLink );
    CCommonFunction::ControlSysMenu( *this );
    pVehicle = NULL;
    ControlDataGrid( *ui->tabRecord );
    bool bRet = connect( pParent, SIGNAL( OnUserChanged( QString&, QString& ) ), this, SLOT( ChangeUser( QString&, QString& ) ) );
    bRet = connect( this, SIGNAL( OnRecognizePlate( QString, int )), pParent, SLOT( RecognizePlate( QString, int ) ) );
    bRet = connect( this, SIGNAL( OnDirectionIndicator( int, bool ) ), this, SLOT( DirectionIndicator( int, bool ) ) );

    CCommonFunction::GetPath( strImagePath, CommonDataType::PathUIImage );
    strButtonStyle = "background-image:url(%1NewIcon/%2-%3.JPG);\nborder-style: outset; ";

    SpaceInfo( );
    InitVideoPlateUI( );
    StartSpaceTimer( );
    InitStatistics( );

    pDlgAlert = new CDlgAlert( );
    pDlgAlert->setStatusTip( strImagePath + "NewIcon/CommonMiddleBG-normal.jpg" );

    connect( &CLogicInterface::GetInterface( )->GetMysqlDb( ), SIGNAL( NotifyError( QString ) ), this, SLOT( DisplayDbError( QString ) ) );
}

void CMonitor::DisplayDbError( QString strMsg )
{
    CCommonFunction::MsgBox( NULL, "��ʾ", strMsg, QMessageBox::Information );
}

void CMonitor::HideAlert( )
{
    ui->lblAlert->setVisible( false );
}

void CMonitor::SetAlertMsg( const QString &strText )
{
    ui->lblAlert->setText( strText );
}

void CMonitor::InitVideoPlateUI( )
{
    nUsedWay = pSysSet->value( "VideoMode/Way", 2 ).toInt( );
    if ( VIDEO_USEDWAY < nUsedWay ) {
        nUsedWay = VIDEO_USEDWAY;
    }

    bool bAuto = pSysSet->value( "VideoMode/AutoVideo", false ).toBool( );

    QSettings* pSet = CCommonFunction::GetSettings( CommonDataType::CfgPlate );
    //QSettings* pSystem= CCommonFunction::GetSettings( CommonDataType::CfgSystem );
    bDisplayAlert = pSystem->value( "CommonCfg/DisplayAlert", false ).toBool( );
    nRefreshParkspaceTime = pSystem->value( "CommonCfg/RefreshParkspaceTime", 5 * 1000 * 60 ).toInt( );

    /////////////////////////////////////////////////////////////////////////////
    QString strVideo = "video%1";
    QString strDirection = "lblDir%1";
    QString strTitle = "lblTitle%1";
    QString strPlate = "WintonePlate/WintonePlate%1/PlateStart";
    QLabel* pTitle = NULL;
    QString strKey = "CommonCfg/Name%1";
    int nRealIndex = 0;

    //bPlateFilter = pSystem->value( "CommonCfg/PlateFilter", false ).toBool( );
    //bSuccession = pSystem->value( "CommonCfg/Succession", false ).toBool( );
    QRect rect;
    int nMode =  0;

    ui->video1->setVisible( false );
    ui->video2->setVisible( false );
    ui->video3->setVisible( false );
    ui->video4->setVisible( false );
    ui->video5->setVisible( false );

    for ( int nIndex = 0; nIndex < VIDEO_USEDWAY; nIndex ++ ) {
        nRealIndex = nIndex + 1;
        if ( bAuto ) {
            nMode = nIndex % 2;
            rect.setX( nMode ? 509 : 48 );
            rect.setY( nIndex - nMode ? 546 : 203 );
            rect.setWidth( 410 );
            rect.setHeight( 275 );
            lblVideoWnd[ nIndex ] = new CMyLabel( nIndex, rect, this );
        } else {
             lblVideoWnd[ nIndex ] = findChild< QLabel* >( strVideo.arg( nRealIndex ) );
        }

        connect( lblVideoWnd[ nIndex ], SIGNAL( HideCtrl( int, bool ) ), this, SLOT( HideCtrl( int, bool ) ) );
        bPlateStart[ nIndex ] = ( 1 == pSet->value( strPlate.arg( nIndex ), 0 ).toInt( ) );
        lblDirection[ nIndex ] = findChild< QLabel* >( strDirection.arg( nRealIndex ) );
        pTitle = findChild< QLabel* >( strTitle.arg( nRealIndex ) );
        pTitle->setText( pSystem->value( strKey.arg( nRealIndex ), nRealIndex ).toString( ) );

        bBallotSense[ nIndex ] = false;
    }

    QString strName = "lblNumber%1";
    for ( int nIndex = 0; nIndex < ( int ) ( sizeof ( lblStatistics ) / sizeof ( QLabel* ) ); nIndex++ ) {
        lblStatistics[ nIndex ] = findChild< QLabel* >( strName.arg( nIndex ) );
        nCurrentTotal[ nIndex ] = 0;
    }

    strName = "lblLicence%1%2";
    QLabel* pLabel = NULL;
    for ( int nChannel = 1; nChannel <= 4; nChannel++ ) {
        for ( int nIndex = 1; nIndex <= 8; nIndex++ ) {
            pLabel = findChild< QLabel* >( strName.arg( nChannel ).arg( nIndex ) );

            if ( NULL != pLabel ) {
                QObject::connect( pLabel, SIGNAL( linkActivated( QString ) ), this, SLOT( onLinkActivated( QString ) ) );
            }
        }
    }
}

void CMonitor::HideCtrl( int nIndex, bool bVisible )
{
    QString strMoving = "lblMoving%1";
    QLabel* pLbl = NULL;

    for ( int nItem = 0; nItem < 4; nItem++ ) {
        pLbl = findChild< QLabel* >( strMoving.arg( nItem + 1 ) );
        pLbl->setVisible( bVisible );

        if ( nIndex == nItem ) {
            continue;
        }

        lblVideoWnd[ nItem ]->setVisible( bVisible );
    }

    //ui->lblDateTime->setVisible( bVisible );
}

void CMonitor::UpdateStatistics( int nNumber, int nIndex, bool bInit )
{
    static QString strInfo[ ] = { "��%1��", "��%1��", "�����շѣ�%1Ԫ", "��%1��", "��%1��", "������ѣ�%1Ԫ" };
    if ( bInit ) {
       nCurrentTotal[ nIndex ] = nNumber;
    } else {
       nCurrentTotal[ nIndex ] += nNumber;
    }

    lblStatistics[ nIndex ]->setText( strInfo[ nIndex ].arg( nCurrentTotal[ nIndex ] ) );
}

void CMonitor::ClearStatistics( )
{
    UpdateStatistics( 0, 0, true );
    UpdateStatistics( 0, 1, true );
    UpdateStatistics( 0, 3, true );
    UpdateStatistics( 0, 4, true );
}

void CMonitor::InitStatistics(  )
{
    // intime outtime  and ( %4 not is null )
    QString strTime1 = " 00:00:00";
    QString strTime2 = " 23:59:59";
    QString strField[ ] = { "in", "out", "", "in", "out" };
    QString strSql = QString( "Select count( * ) from stoprd where ( %1time between '%2' and '%3' ) \
                     and %4shebeiname in ( select shebeiname  from roadconerinfo where \
                     video1ip = '%5' and ( shebeiadr between 1 and 30 ) \
                     and shebeiadr % 2 %6= 0 ) %7" );
    QString strDate;
    QDate date = QDate::currentDate( );
    CCommonFunction::Date2String( date, strDate );
    QStringList lstData;
    QString strTmp;
    int nRows;

    for ( int nIndex = 0; nIndex < 6; nIndex++ ) {
        if ( 2 == nIndex || 5 == nIndex ) { // 0 1 2 3 4 5
            continue;
        }

        lstData.clear( );
        strTmp = strSql.arg( strField[ nIndex ], strDate + strTime1, strDate + strTime2, strField[ nIndex ],
                             CCommonFunction::GetHostIP( ),
                             ( ( ( 0 == nIndex ) || ( 3 == nIndex ) ) ? "!" : "" ),
                             ( ( 1 >= nIndex ) ? "" : "and cardkind = '��ʱ��'" ) );
        nRows = CLogicInterface::GetInterface( )->ExecuteSql( strTmp, lstData );
        if ( 0 < nRows ) {
            UpdateStatistics( lstData[ 0 ].toInt( ), nIndex, true );
        }
    }
}

void CMonitor::LoadDigital( int nGroup, int nDigital, char cColor )
{
    QString strTemplate = QString( "lbl%1" ).arg( nGroup ) + "%1";
    QString strDigital = QString::number( nDigital );
    int nCount = strDigital.count( );
    QChar color = cColor;
    QChar digital;

    for ( int nIndex = 1; nIndex <= 4; nIndex++ ) {
        QString strName = strTemplate.arg( nIndex );
        QLabel* pLbl = findChild< QLabel* >( strName );

        if ( nIndex > nCount ) {
            color = 'b';
            digital = '0';
        } else {
            digital = strDigital[ nIndex - 1 ];
        }

        QString strStyle = strButtonStyle.arg( strImagePath, digital, color );
        pLbl->setStyleSheet( strStyle );
    }
}

void CMonitor::DisplayAlert( QStringList &lstData )
{
    if ( 7 > lstData.count( ) ) {
        return;
    }

    lstData.removeAt( 0 );
    pDlgAlert->DisplayAlert( lstData );

    if ( !pDlgAlert->isVisible( ) && bDisplayAlert ) {
        pDlgAlert->show();
    }
}

void CMonitor::FillDataGrid( QStringList &lstData )
{
    int nField = 1;
    int nCols = 11;
    int nRows = lstData.count( ) / nCols;
    if ( 0 >= nRows ) {
        return;
    }

    if ( 100 < ui->tabRecord->rowCount( ) ) {
        for ( int nIndex = ui->tabRecord->rowCount( ) - 1; nIndex > 99; nIndex-- ) {
            ui->tabRecord->removeRow( nIndex );
        }
    }

    for ( int nRow = 0; nRow < nRows; nRow++ ) {
        ui->tabRecord->insertRow( 0 );
        nField = nRow * nCols + 1;

        for ( int nCol = 0; nCol < nCols - 1; nCol++ ) {
            QString& strText = lstData[ nField + nCol ];
            QTableWidgetItem* pItem = new QTableWidgetItem( strText );
            pItem->setFlags( Qt::ItemIsEnabled | Qt::ItemIsEnabled );

            ui->tabRecord->setItem( 0, nCol, pItem );
        }
    }
}

void CMonitor::ChangeUser( QString &strUser, QString& strID )
{
   QString struser = "��ǰ�û���" + strUser;
   ui->lblCurrentUser->setText( struser );

   if ( strID != strUserID ) {
       strUserID = strID;
       UpdateStatistics( 0, 2, true );
       UpdateStatistics( 0, 5, true );
   }
}

void CMonitor::SetMenu( QList<QMenu *> &lstMenu )
{
    if ( 5 > lstMenu.count( ) ) {
        return;
    }
    // Menu
    ui->btnSysMan->setMenu( lstMenu[ 0 ] );
    //connect( ui->btnSysMan, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    //connect( ui->btnSysMan, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    ui->btnCardMan->setMenu( lstMenu[ 1 ] );
    //connect( ui->btnCardMan, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    //connect( ui->btnCardMan, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    ui->btnAdvSet->setMenu( lstMenu[ 2 ] );
    //connect( ui->btnAdvSet, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    //connect( ui->btnAdvSet, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    ui->btnReport->setMenu( lstMenu[ 3 ] );
    //connect( ui->btnReport, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    //connect( ui->btnReport, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    ui->btnHelp->setMenu( lstMenu[ 4 ] );
    //connect( ui->btnHelp, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    //connect( ui->btnHelp, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    // Toolbar
    bool bRet = connect( ui->btnShift, SIGNAL( clicked( ) ), pParent, SLOT( on_actShiftLogout_triggered( ) ) );
    connect( ui->btnShift, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnShift, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    bRet = connect( ui->btnMonthCard, SIGNAL( clicked( ) ), pParent, SLOT( on_actMonthlyCard_triggered( ) ) );
    connect( ui->btnMonthCard, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnMonthCard, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    bRet = connect( ui->btnValueCard, SIGNAL( clicked( ) ), pParent, SLOT( on_actValueCard_triggered( ) ) );
    connect( ui->btnValueCard, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnValueCard, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    bRet = connect( ui->btnTimeCard, SIGNAL( clicked( ) ), pParent, SLOT( on_actTimeCard_triggered( ) ) );
    connect( ui->btnTimeCard, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnTimeCard, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    bRet = connect( ui->btnPassRecord, SIGNAL( clicked( ) ), pParent, SLOT( on_actAccess2Records_triggered( ) ) );
    connect( ui->btnPassRecord, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnPassRecord, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    // Gate
    bRet = connect( ui->btnEnterGateOpen, SIGNAL( clicked( ) ), this, SLOT( GateOpen1( ) ) );
    connect( ui->btnEnterGateOpen, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnEnterGateOpen, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    bRet = connect( ui->btnEnterGateClose, SIGNAL( clicked( ) ), this, SLOT( GateClose1( ) ) );
    connect( ui->btnEnterGateClose, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnEnterGateClose, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    bRet = connect( ui->btnLeaveGateOpen, SIGNAL( clicked( ) ), this, SLOT( GateOpen2( ) ) );
    connect( ui->btnLeaveGateOpen, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnLeaveGateOpen, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    bRet = connect( ui->btnLeaveGateClose, SIGNAL( clicked( ) ), this, SLOT( GateClose2( ) ) );
    connect( ui->btnLeaveGateClose, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnLeaveGateClose, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    // Verify
    connect( ui->btnVerifyIn0, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnVerifyIn1, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnVerifyOut0, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnVerifyOut1, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );

    connect( ui->btnVerifyIn0, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );
    connect( ui->btnVerifyIn1, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );
    connect( ui->btnVerifyOut0, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );
    connect( ui->btnVerifyOut1, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    connect( ui->btnVerifyIn0, SIGNAL( clicked( ) ), this, SLOT( onBtnVerifyInClicked( ) ) );
    connect( ui->btnVerifyIn1, SIGNAL( clicked( ) ), this, SLOT( onBtnVerifyInClicked( ) ) );
    connect( ui->btnVerifyOut0, SIGNAL( clicked( ) ), this, SLOT( onBtnVerifyOutClicked( ) ) );
    connect( ui->btnVerifyOut1, SIGNAL( clicked( ) ), this, SLOT( onBtnVerifyOutClicked( ) ) );

    // Status
    connect( ui->btnCenterControlerStatus, SIGNAL( clicked( ) ), this, SLOT( OnClickedDlgPopup( ) ) );
    connect( ui->btnCenterControlerStatus, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnCenterControlerStatus, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    connect( ui->btnPublishLedInfo, SIGNAL( clicked( ) ), this, SLOT( OnClickedDlgPopup( ) ) );
    connect( ui->btnPublishLedInfo, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnPublishLedInfo, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    connect( ui->btnEnterPeripheralStatus, SIGNAL( clicked( ) ), this, SLOT( OnClickedDlgPopup( ) ) );
    connect( ui->btnEnterPeripheralStatus, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnEnterPeripheralStatus, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    connect( ui->btnSmsNotification, SIGNAL( clicked( ) ), this, SLOT( OnClickedDlgPopup( ) ) );
    connect( ui->btnSmsNotification, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnSmsNotification, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    connect( ui->btnLeavePeripheralStatus, SIGNAL( clicked( ) ), this, SLOT( OnClickedDlgPopup( ) ) );
    connect( ui->btnLeavePeripheralStatus, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnLeavePeripheralStatus, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    connect( ui->btnCandinate, SIGNAL( clicked( ) ), this, SLOT( OnClickedDlgPopup( ) ) );
    connect( ui->btnCandinate, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnCandinate, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );
}

void CMonitor::OnClickedDlgPopup(  )
{
    QPushButton* pBtn = qobject_cast< QPushButton* >( sender( ) );
    QString strObjName = pBtn->objectName( );
    //static QString strStyle = strButtonStyle.arg( strImagePath, "CommonBG", "normal" );
    QDialog* pDlg = NULL;

    if ( strObjName == ui->btnCenterControlerStatus->objectName( ) ) {
        pDlg = new CDlgCCStatus( this );
    } else if ( strObjName == ui->btnPublishLedInfo->objectName( ) ) {
        //pDlg = new CLedInfoDialog( this );
        static CPublishLEDInfo dlg( true, pParent, this );
        QString strStyle = QString( "background-image:url(%1NewIcon/CommonMiddleBG-normal.jpg)" ).arg( strImagePath );
        dlg.setStyleSheet( strStyle );
        HWND hChildWnd = dlg.winId( );
        ::BringWindowToTop( hChildWnd );
        dlg.show( );
        return;
    } else if ( strObjName == ui->btnEnterPeripheralStatus->objectName( ) ) {
        pDlg = new CDlgPeripheralStatus( true, this );
        connect( ( CProcessData::GetProcessor( ) ), SIGNAL( OnResponseUserRequest( QByteArray& , int ) ),
                 pDlg, SLOT( ResponseUserRequest( QByteArray&, int ) ) );
    } if ( strObjName == ui->btnLeavePeripheralStatus->objectName( ) ) {
        pDlg = new CDlgPeripheralStatus( false, this );
        connect( ( CProcessData::GetProcessor( ) ), SIGNAL( OnResponseUserRequest( QByteArray& , int ) ),
                 pDlg, SLOT( ResponseUserRequest( QByteArray&, int ) ) );
    } else if ( strObjName == ui->btnSmsNotification->objectName( ) ) {
        pDlg = new CDlgSMSNotification( this );
    } else if ( strObjName == ui->btnCandinate->objectName( ) ) {
        pDlg = new CDlgQueryOwner( this );
    }

    //CCommonFunction::ControlSysMenu( *pDlg );
    SetDlgBackground( *pDlg );

    pDlg->exec( );

    delete pDlg;
    pDlg = NULL;
}

void CMonitor::SetDlgBackground( QDialog &dlg )
{
    QString strStyle = "background-image: url( );";
    dlg.setStyleSheet( strStyle );
    dlg.setWindowFlags( Qt::FramelessWindowHint );
    strStyle = strImagePath + "NewIcon/CommonBG-normal.jpg";
    dlg.setStatusTip( strStyle );
    dlg.setParent( NULL );
    return;

    QPalette pal;
    QPixmap map( strImagePath + "NewIcon/CommonBG-normal.jpg" );
    QPixmap tmp = map.scaled( dlg.size( ) );
    QBrush br( tmp );
    pal.setBrush( dlg.backgroundRole( ), br );
    dlg.setPalette( pal );
    dlg.setAutoFillBackground( true );
    dlg.setWindowFlags( Qt::FramelessWindowHint );
}

void CMonitor::BtnPermission( bool bNormal, int nIndex )
{
    QPushButton* pBtn = NULL;
    switch ( nIndex )
    {
    case 0 :
        pBtn = ui->btnMonthCard;
        break;

    case 1 :
        pBtn = ui->btnValueCard;
        break;

    case 2 :
        pBtn = ui->btnTimeCard;
        break;

    case 3 :
        pBtn = ui->btnPassRecord;
        break;
    }

    if ( NULL == pBtn ) {
        return;
    }

    pBtn->setEnabled( bNormal );
    qDebug( ) << "BtnPermission : " << pBtn->objectName( ) << " " << bNormal << endl;
    SwitchImage( pBtn, false, bNormal );
}

void CMonitor::BtnPressed( )
{
    QPushButton* pBtn = qobject_cast< QPushButton* >( sender( ) );
    SwitchImage( pBtn, true );
}

void CMonitor::BtnReleased( )
{
    QPushButton* pBnt = qobject_cast< QPushButton* >( sender( ) );
    SwitchImage( pBnt, false );
}

void CMonitor::SwitchImage( QPushButton *pBtn, bool bDown, bool bPermission )
{
    QString strStyle = strButtonStyle.arg( strImagePath, pBtn->objectName( ).remove( "2"), bPermission ? ( bDown ? "clicked" : "normal" ) : "disabled" );
    //qDebug( ) << strStyle << endl << "Down" << bDown << endl;
    pBtn->setStyleSheet( strStyle );
}

QLabel* CMonitor::GetDateTimeCtrl( )
{
    return ui->lblDateTime;
}

void CMonitor::ControlDataGrid( QTableWidget& tw )
{
    QHeaderView* pHeader = tw.verticalHeader( );
    pHeader->setMinimumSize( 10, 4 );
    pHeader->setResizeMode( QHeaderView::Fixed );
    //QString strStyle = "color: rgb(73, 63, 107);";
    //pHeader->>setStyleSheet( strStyle );

    pHeader = tw.horizontalHeader( );
    pHeader->setResizeMode( QHeaderView::Fixed );

    pHeader->resizeSection( 0, 80 );
    pHeader->resizeSection( 1, 80 );
    pHeader->resizeSection( 2, 80 );
    pHeader->resizeSection( 3, tw.width( ) - 250 - tw.autoScrollMargin( ) );

    pHeader->hideSection( 4 );
    pHeader->hideSection( 5 );
    pHeader->hideSection( 6 );
    pHeader->hideSection( 7 );
    pHeader->hideSection( 8 );
    pHeader->hideSection( 9 );
}

void CALLBACK PrcPicMessage( long lnCardID, long pBuf, long lnWidth, long lnHeight )
{

}

void CMonitor::PrcCapSourceStream( long lnCardID, long pBuf, long lnWidth, long lnHeight, long lnBiCount )
{
    lnCardID -= 1;
    bool bMoving = pMainWnd->bStartRecognization[ lnCardID ];
    emit pMainWnd->OnDirectionIndicator( lnCardID, bMoving );

    if ( false == bMoving ) {
        return;
    }

    int nResult = 0;
    CVehicleLicense* pVehicle = pMainWnd->GetPlateRecognization( );
    if ( NULL == pVehicle ) {
        return;
    }

    //memcpy( imgData[ lnCardID ], ( void* ) pBuf, lnWidth * lnHeight * lnBiCount );

    qDebug( ) << "CardID : " << QString::number( lnCardID ) << endl;
    nResult = RECOG_RES;
    bool bRet = pVehicle->RecognizeVideo( ( quint8* ) pBuf, lnWidth,
                                          lnHeight, recogResult[ lnCardID ], nResult, lnCardID );

    if ( bRet ) { // Display Plate
        pMainWnd->DisplayPlate( lnCardID );
    }
}

void CALLBACK MyPrcCbMotionDetect( long lnCardID, BOOL bMove, LPVOID lpContext )
{
    lnCardID -= 1;
    CMonitor::bStartRecognization[ lnCardID ] = bMove;
    qDebug( ) << "MyPrcCbMotionDetect " << endl;
}

void CMonitor::MotionDetection( ULONG nChannel, BOOL bMotionDetected, void *context )
{
    bStartRecognization[ nChannel ] = bMotionDetected;
    //qDebug( ) << "MotionDetection : " << bMotionDetected << endl;
}

void CMonitor::DirectionIndicator( int nChannel, bool bMoving )
{
    static QString strStyle = "background-image: url( );background-color: rgb(255, 0, 0);";
    static QString strBackImage = "background-image: url( );";
    QString strName = QString( "lblMoving%1" ).arg( nChannel + 1 );
    QLabel* pLbl = findChild< QLabel* >( strName );
    if ( NULL == pLbl ) {
        return;
    }

    pLbl->setStyleSheet(  bMoving ? strStyle : strBackImage );
}

void CMonitor::ImageStreamCallback( UINT nChannel, PVOID pContent )
{
    bool bMoving = bStartRecognization[ nChannel ];
    CMonitor* pMainWnd = ( CMonitor* ) pContent;
    emit pMainWnd->OnDirectionIndicator( nChannel, bMoving );

    if ( false == bMoving ) {
        return;
    }

    int nResult = 0;

    CVehicleLicense* pVehicle = pMainWnd->GetPlateRecognization( );
    if ( NULL == pVehicle ) {
        return;
    }

    //qDebug( ) << "Time1 " << QDateTime::currentDateTime( ).toMSecsSinceEpoch( ) << endl;
    nResult = RECOG_RES;
    bool bRet = pVehicle->RecognizeVideo( imgData[ nChannel ], 704, 576, recogResult[ nChannel ], nResult, nChannel );

    //qDebug( ) << "Time2 " << QDateTime::currentDateTime( ).toMSecsSinceEpoch( ) << endl;
    if ( bRet ) { // Display Plate
        bool bPlateFilter = GetPlateSuccession( true, nChannel + 1 );
        bPlateFilter ? pMainWnd->DisplayPlate( nChannel ) : pMainWnd->PlateFilter2( nChannel );
    }
    //qDebug( ) << "Time3 " << QDateTime::currentDateTime( ).toMSecsSinceEpoch( ) << endl;
}

void CMonitor::SetBallotSense( bool bSense, int nChannel )
{
    bBallotSense[ nChannel ] = bSense;
    bool bPlateFilter = GetPlateSuccession( true, nChannel + 1 );

    if ( !bSense ) {
        ZeroMemory( &structPlates[ nChannel ], sizeof ( TH_PlateIDResult ) );
        ClearPlate( nChannel );
    } else if ( !bPlateFilter ){ // PlateFilter2
        DisplayPlate( nChannel );
    }
}

bool CMonitor::GetPlateSuccession( bool bFilter, int nIndex  )
{
    QSettings* pSys= CCommonFunction::GetSettings( CommonDataType::CfgSystem );
    pSys->sync( );
    QString strKey = QString( "CommonCfg/%1%2").arg( bFilter ? "PlateFilter" : "Succession", QString::number( nIndex ) );
    bool bRet = pSys->value( strKey, false ).toBool( );

    return bRet;
}

bool CMonitor::PlateFilter( int nChannel, TH_PlateIDResult*& pResult )
{
    bool bRet = false;
    bool bSuccession = GetPlateSuccession( false, nChannel + 1 );

    int nCmp = strcmp( recogResult[ nChannel ] [ 0 ].license, structPlates[ nChannel ].license );
    if ( 0 == nCmp && !bSuccession ) { // The Same Plate
        return bRet;
    }

    bool bConfidence = ( recogResult[ nChannel ] [ 0 ].nConfidence > structPlates[ nChannel ].nConfidence );
    if ( !bConfidence && !bSuccession ) { // Lower Confidence
        return bRet;
    }

    structPlates[ nChannel ] = recogResult[ nChannel ] [ 0 ]; // Copy data
    pResult = &structPlates[ nChannel ];

    if ( !bBallotSense[ nChannel ] && !bSuccession ) {
        return bRet;
    }

    return true;
}

void CMonitor::PlateFilter2( int nChannel )
{
    bool bConfidence = ( recogResult[ nChannel ] [ 0 ].nConfidence > structPlates[ nChannel ].nConfidence );
    if ( !bConfidence ) { // Lower Confidence
        return;
    }
    structPlates[ nChannel ] = recogResult[ nChannel ] [ 0 ]; // Copy data
}

void CMonitor::DisplayPlate( int nChannel )
{
    bool bPlateFilter = GetPlateSuccession( true, nChannel + 1 );
    TH_PlateIDResult* pResult = bPlateFilter ? NULL : &structPlates[ nChannel ];
    if ( bPlateFilter && ( !PlateFilter( nChannel, pResult ) || ( NULL == pResult ) ) ) {
        return;
    }

    QString strPlate( pResult->license );
    if ( strPlate.isEmpty( ) ) {
        return;
    }

    bool bSuccession = GetPlateSuccession( false, nChannel + 1 );
    if ( bSuccession ) {
        if ( strPlates[ nChannel ] == strPlate ) {
            return;
        } else {
            strPlates[ nChannel ] = strPlate;
        }
    }
    //ui->lblTmp->setText( strPlate );
    //QString strDirection;
    //pVehicle->GetPlateMoveDirection( strDirection, pResult->nDirection );

    int nWidth  = pResult->rcLocation.right - pResult->rcLocation.left;
    int nHeight  = pResult->rcLocation.bottom - pResult->rcLocation.top;

    SetBallotSense( false, nChannel );

    QString strWindth = QString( "%1/%2" ).arg( QString::number( nWidth ),
                                                QString::number( nHeight ) );
    lblDirection[ nChannel ]->setText( strWindth );

    CCommonFunction::DisplayPlateChar( *this, nChannel, strPlate );
    //Sleep( 500 );
    emit OnRecognizePlate( strPlate, nChannel );
}

CVehicleLicense* CMonitor::GetPlateRecognization( )
{
    return pVehicle;
}

void CMonitor::GetFileName( QString& strFileName, QString strExt )
{
    strFileName.clear( );
    QDateTime dtCurrent = QDateTime::currentDateTime();
    QString strDateTime = dtCurrent.toString( "yyyy-MM-dd HHmmss " );
    strDateTime += QString::number( dtCurrent.toMSecsSinceEpoch( ) );
    strFileName = QString( "%1/Data/%2.%3" ).arg( QApplication::applicationDirPath( ) ).arg( strDateTime ).arg( strExt );
}

void CMonitor::InitChannelHandle( )
{
    for ( int nIndex = 0; nIndex < ENCODECHANNEL; nIndex++ ) {
        hChannelHandle[ nIndex ] = INVALID_HANDLE;
    }

    pMultimedia = NULL;
    nEncode = 0;
}

CMonitor::~CMonitor()
{
    delete pDlgAlert;
    StopAvSdk( );
    delete ui;
}

void CMonitor::CaptureImage( QString& strFile, int nChannel, CommonDataType::CaptureImageType capType )
{
    HANDLE hChan = hChannelHandle[ nChannel ];
    if ( NULL != pMultimedia && INVALID_HANDLE != hChan ) {
        if ( CommonDataType::CaptureBMP == capType ) {
            pMultimedia->CaptureBMP( hChan, strFile );
        } else if ( CommonDataType::CaptureJPG == capType || CommonDataType::CaptureJPEG == capType ) {
            pMultimedia->CaptureJpeg( hChan, strFile );
        }
    }
}

void CMonitor::ControlDetection( int nChannel, bool bStart )
{
    pMultimedia->MotionDetection( hChannelHandle[ nChannel ], bStart );
}

void CMonitor::StartPlateRecog( )
{
    QString strKey = "CarLicence/AutoRecognize";
    bool bAuto = pSysSet->value( strKey, 0 ).toBool( );
    if ( !bAuto ) {
        return;
    }

    //StopPlateRecog( );

    pVehicle = CVehicleLicense::CreateInstance( CVehicleLicense::WinToneSdk );
    if ( NULL == pVehicle ) {
        return;
    }

    QStringList lstParam;
    for ( int nIndex = 0; nIndex < nUsedWay; nIndex++ ) {
        if ( !bPlateStart[ nIndex ] ) {
            continue;
        }

        lstParam.clear( );
        lstParam << QString::number( ImageFormatYUV422 ) << QString::number( nIndex ); // Format / Channel
        pVehicle->RecognizedImageFormat( lstParam );
        bool bRet = pVehicle->Initialize( nIndex );
        if ( false == bRet ) {
            CCommonFunction::MsgBox( NULL, CCommonFunction::GetMsgTitle( QMessageBox::Information ),
                                     "���鳵��ʶ����ܹ��Ƿ��ã�", QMessageBox::Information, "background-image: url( );" );
            CVehicleLicense::DestroyInstance( pVehicle );
            pVehicle =  NULL;
            break;
        }
    }

    pVehicle->SetStop( false );
}

void CMonitor::StopPlateRecog( )
{
    if ( NULL == pVehicle ) {
        return;
    }

    pVehicle->SetStop( true );

    for ( int nIndex = 0; nIndex < nUsedWay ; nIndex++ ) {
        if ( !bPlateStart[ nIndex ] ) {
            continue;
        }

        pVehicle->Uninitialize( nIndex );
    }

    pVehicle->DestroyInstance( pVehicle );
    pVehicle = NULL;
}

void CMonitor::StopAvSdk( )
{
    if ( NULL == pMultimedia ) {
        return;
    }
    for ( int nIndex = 0; nIndex < nEncode; nIndex++ ) {
        StopVideo( nIndex );
    }

    nEncode = 0;
    int nRet = 0;

    for ( int nIndex = 0; nIndex < nUsedWay; nIndex++ ) { // Detection
        nRet = pMultimedia->SetupDetection( hChannelHandle[ nIndex ], NULL, nIndex );
        nRet = pMultimedia->MotionDetection( hChannelHandle[ nIndex ], false );
        nRet = pMultimedia->GetStreamData( hChannelHandle[ nIndex ], FALSE, NULL, nIndex );
    }

    nRet = pMultimedia->RegisterStreamCB( NULL, NULL );
    nRet = pMultimedia->SystemShutdown( );
    CMultimedia::DestroyInstance( pMultimedia );
    pMultimedia = NULL;

    InitChannelHandle( );
}

void CMonitor::StartAvSdk( )
{
    pSysSet->sync( );
    QString strKey = "VideoMode/AutoVideo";
    bool bAuto = pSysSet->value( strKey, 0 ).toBool( );
    if ( !bAuto ) {
        return;
    }

    StopAvSdk( );

    for ( int nStart = CMultimedia::HikSdk; nStart <= CMultimedia::TmSDK; ++nStart ) {
        pMultimedia = CMultimedia::CreateInstance( ( CMultimedia::AvSdk ) nStart );
        nEncode = pMultimedia->SystemStartup( );
        if ( 0 >= nEncode ) {
            CMultimedia::DestroyInstance( pMultimedia );
            qDebug( ) << "SystemStartup Failed!( DSPs )" << endl;
            pMultimedia = NULL;
            //return;
        } else {
            break;
        }
    }

    int nRet = pMultimedia->RegisterStreamCB( ImageStreamCallback, this ); // GetVideoData
    //int nRet = pMultimedia->RegisterStreamCB( ( HK_STREAM_CB ) PrcCapSourceStream, this ); // GetVideoData

    for ( int nIndex = 0; nIndex < nUsedWay; nIndex++ ) {
        PlayVideo( nIndex, lblVideoWnd[ nIndex ] );
    }

    for ( int nIndex = 0; nIndex < nUsedWay; nIndex++ ) { // Detection
        nRet = pMultimedia->SetupDetection( hChannelHandle[ nIndex ], MotionDetection, nIndex, this );
        //nRet = pMultimedia->SetupDetection( hChannelHandle[ nIndex ], ( HK_MOTION_CB ) MyPrcCbMotionDetect, nIndex, this );
        nRet = pMultimedia->MotionDetection( hChannelHandle[ nIndex ], true );
        nRet = pMultimedia->TmEnablePicMessage( ( int ) hChannelHandle[ nIndex ], TRUE, PrcPicMessage );

        nRet = pMultimedia->GetStreamData( hChannelHandle[ nIndex ], TRUE, imgData[ nIndex ], 3 );
    }
}

void CMonitor::PlayVideo( int nIndex, QFrame* pVideo )
{
    if ( nIndex > nEncode || 0 > nIndex || NULL == pMultimedia ) {
        return;
    }

    if ( INVALID_HANDLE !=  hChannelHandle[ nIndex ] ) {
        pMultimedia->StopVideo(  hChannelHandle[ nIndex ] );
        pMultimedia->CloseChannel( hChannelHandle[ nIndex ] );
        hChannelHandle[ nIndex ] = INVALID_HANDLE;
    }

    hChannelHandle[ nIndex ] = pMultimedia->OpenChannel( nIndex );
    if ( INVALID_HANDLE == hChannelHandle[ nIndex ] ) {
        qDebug( ) << "OpenChannel( " << nIndex << " ) Failed" << endl;
        return;
    }

    bool bAuto = pSysSet->value( "VideoMode/AutoVideo", false ).toBool( );
    if ( bAuto ) {
        CMyLabel* pLbl = qobject_cast< CMyLabel* >( lblVideoWnd[ nIndex ] );
        pLbl->SetParams( hChannelHandle[ nIndex ], pMultimedia );
    }

    QRect rect = pVideo->rect( );
#if false
    rect.setX( rect.x( ) + pVideo->lineWidth( ) );
    rect.setY( rect.y( ) + pVideo->lineWidth( ) );
    rect.setWidth( rect.width( ) - 2 * pVideo->lineWidth( ) );
    rect.setHeight( rect.height( ) - 2 * pVideo->lineWidth( ) );
#endif
    pMultimedia->PlayVideo( hChannelHandle[ nIndex ], pVideo->winId( ), rect, nIndex );
}

void CMonitor::StopVideo( int nIndex )
{
    if ( nIndex > nEncode || 0 > nIndex || NULL == pMultimedia ) {
        return;
    }

    if ( INVALID_HANDLE != hChannelHandle[ nIndex ] ) {
        pMultimedia->StopVideo( hChannelHandle[ nIndex ] );
        pMultimedia->CloseChannel( hChannelHandle[ nIndex ] );
        hChannelHandle[ nIndex ] = INVALID_HANDLE;
    }
}

void CMonitor::ControlSelf( )
{
    this->geometry();
}

void CMonitor::closeEvent( QCloseEvent *event )
{
    event->ignore( );
}

void CMonitor::CalculatePos( )
{
    QRect rectParent = pParent->geometry( );
    this->setGeometry( rectParent );
    QRect rectWnd = this->geometry( );

    QString strName = "widget";
    QWidget* pWg = findChild< QWidget* >( strName );
    pWg->setGeometry( rectWnd );

#if 0
    QRect rectWg = pWg->geometry( );

    pWg->setGeometry( ( rectWnd.width( ) - rectWg.width( ) -2 ) / 2,
                      ( rectWnd.height( )  - rectWg.height( ) -2 ) / 2,
                      rectWg.width( ), rectWg.height( ) );
#endif
}

void CMonitor::GetParkName( QString& strName, char cCan, int nIndex )
{
    //strName = "";
    //if ( 0 < lstPark.count( ) ) {
    //    strName = lstPark[ 0 ];
    //}

    strName = CCommonFunction::GetCanParkIndexNum( nIndex ).value( cCan );

    if( strName.isEmpty( ) ) {
        //qDebug( ) << "CMonitor::GetParkName() failed" << endl;
        QStringList lstLogs;
        QDateTime dt = QDateTime::currentDateTime( );
        QString strText;
        CCommonFunction::DateTime2String( dt, strText );
        lstLogs << "ͣ����" << "ʧ��" << strText;
        CPmsLog::GetInstance( )->WriteLog( lstLogs );
    }
}

void CMonitor::GetAllParkSpaceLot( bool bChannel, bool bEnter )
{
    QStringList lstRows;
    if ( bChannel ) {
        //strParkName = "�츮����";
        if ( strParkName.isEmpty( ) ) {
            CCommonFunction::MsgBox( NULL, CCommonFunction::GetMsgTitle( QMessageBox::Information ),
                                     "����ѡ��ͣ������", QMessageBox::Information );
            return;
        }
        //CLogicInterface::GetInterface( )->GetAllChannels( lstRows, bEneter ? "1" : "0" );
        CCommonFunction::GetAllChannels( lstRows, strParkName, bEnter );
    } else {
        //CLogicInterface::GetInterface( )->GetAllParks( lstRows );
        CCommonFunction::GetAllParks( lstRows );
    }

    CParkSpaceLotDialog dlg( this );
    dlg.InitDlg( bChannel, lstRows, bEnter );
    dlg.exec( );

    if ( !bChannel ) {
        dlg.GetParkName( strParkName );
        //GetSpaceInfo( strParkName );
    }
}

void CMonitor::showEvent(QShowEvent *)
{
    GetDefaultParkInfo( );
}

void CMonitor::GetDefaultParkInfo(  )
{
    if ( !strParkName.isEmpty( ) ) {
        return;
    }

    QSettings* pSet = CCommonFunction::GetSettings( CommonDataType::CfgDevice );
    strParkName = pSet->value( "Default/ParkName", "" ).toString( );
    //GetSpaceInfo( strParkName );
}

int CMonitor::GetInsideCard( QStringList &lstRows )
{
    int nInside = 0;
    for ( int nIndex = 0; nIndex < lstRows.count( ); nIndex++ ) {
        if ( "0" != lstRows[ ++nIndex ] ) {
            nInside++;
        }
    }
    return nInside;
}

void CMonitor::StartSpaceTimer( )
{
    static QTimer timer( this );
    connect( &timer,SIGNAL( timeout( ) ), this, SLOT( SpaceInfo( ) ) );

    //timer.start( 5 * 60 * 1000 );
    timer.start( nRefreshParkspaceTime );
}

void CMonitor::SpaceInfo(  ) //����Χ
{
    if ( strParkName.isEmpty( ) ) {
        return;
    }

    QString strInfo;

    bool bFull;
    QString strSql;
    QStringList lstData;
    int nFree;
    int nUsed;
    int nM;
    int nS;
    int nT;

    CProcessData* pProcessor = CProcessData::GetProcessor( );
    if ( NULL == pProcessor ) {
        return;
    }

    QSettings* pSystemSet = CCommonFunction::GetSettings( CommonDataType::CfgSystem );
    pSystemSet->sync( );
    bool bSenseOpenGate = pSystemSet->value( "CommonCfg/SenseOpenGate", false ).toBool( );
    if ( bSenseOpenGate ) {
        //QString strName;
        //GetParkName( strName, 0, 0 );
        strSql = QString( "Select sum( usedSpace ) from parkinfo" );
        CLogicInterface::GetInterface( )->ExecuteSql( strSql, lstData );
        if ( 0 < lstData.count( ) ) {
            nUsed = lstData[ 0 ].toInt( );
            nFree = nTotalParkSpace - nUsed;

            LoadDigital( 2, nFree, 'r' );
            LoadDigital( 3, nUsed, 'g' );

            goto SPACEFULL;
        }

        return;
    }

    strSql = "Call Calculate(@M, @s, @t)";
    CLogicInterface::GetInterface( )->ExecuteSql( strSql, lstData );

    strSql = "Select @M, @s, @t";
    CLogicInterface::GetInterface( )->ExecuteSql( strSql, lstData );

    if ( 0 >= lstData.count( ) ) {
        return;
    }

    nM = lstData[ 0 ].toInt( );
    nS = lstData[ 1 ].toInt( );
    nT = lstData[ 2 ].toInt( );

    nFree = nTotalParkSpace - nM - nS - nT;
    nUsed = nM + nS + nT;
    if ( 0 <= nFree ) {
        LoadDigital( 2, nFree, 'r' );
        LoadDigital( 3, nUsed, 'g' );
        LoadDigital( 4, nT, 'g' );
    }

    SPACEFULL:
    bFull = ( 0 >= nFree );
    //QString strInfo = bFull ? "��λ������" : QString( "�ܳ�λ��%1 ������λ��%2 ��ʱ��λ��%3 ���г�λ��%4" ).arg(
    //                                                                                      QString::number( nTotalParkSpace ),  QString::number( nUsed ),
    //                                                                                      QString::number( nT ), QString::number( nFree ) );

    strInfo = bFull ? "��λ������" : QString( "���г�λ��%1" ).arg( QString::number( nFree ) );
    pProcessor->ParkspaceFull( bFull, strInfo, 0 );
}

void CMonitor::GetImgBasePath(QString &strPath)
{
    CCommonFunction::GetPath( strPath, CommonDataType::PathUIImage );
}

void CMonitor::LoadCapturedImg( QString& strPath, int nChannel )
{
    if ( ( VIDEO_USEDWAY / 2 != nUsedWay ) || ( 1 < nChannel ) ) {
        return;
    }

    QPixmap bmp = QPixmap( strPath );

    // nChannel 0 1 2 3
    lblVideoWnd[ nChannel + 2 ]->setPixmap( bmp );
}

void CMonitor::GetInOutPixmap(QPixmap &bmpEnter, QPixmap &bmpLeave)
{
    const QPixmap* pMap = lblVideoWnd[ 2 ] ->pixmap( );
    if ( NULL != pMap ) {
        bmpEnter = *pMap;
    }

    pMap = lblVideoWnd[ 3 ]->pixmap( );
    if ( NULL != pMap ) {
        bmpLeave = *pMap;
    }
}

void CMonitor::LoadImg( )
{
    QString strInfo = "";
    GetImgBasePath( strInfo );

    QString strTmp = strInfo + "logo";
    for ( int nIndex = nUsedWay; nIndex < 4; nIndex++ ) {
        lblVideoWnd[ nIndex ]->setPixmap( pParent->GetPixmap( strTmp ) );
    }

    // Enter
    strTmp = strButtonStyle.arg( strInfo, ui->btnVerifyIn0->objectName( ), "normal" );
    ui->btnVerifyIn0->setStyleSheet( strTmp );
    strTmp = strButtonStyle.arg( strInfo, ui->btnVerifyIn1->objectName( ), "normal" );
    ui->btnVerifyIn1->setStyleSheet( strTmp );
    strTmp = strButtonStyle.arg( strInfo, ui->btnVerifyOut0->objectName( ), "normal" );
    ui->btnVerifyOut0->setStyleSheet( strTmp );
    strTmp = strButtonStyle.arg( strInfo, ui->btnVerifyOut1->objectName( ), "normal" );
    ui->btnVerifyOut1->setStyleSheet( strTmp );

    ////
    strTmp = strButtonStyle.arg( strInfo, ui->btnCenterControlerStatus->objectName( ), "normal" );
    ui->btnCenterControlerStatus->setStyleSheet( strTmp );

    strTmp = strButtonStyle.arg( strInfo, ui->btnPublishLedInfo->objectName( ), "normal" );
    ui->btnPublishLedInfo->setStyleSheet( strTmp );

    strTmp = strButtonStyle.arg( strInfo, ui->btnEnterPeripheralStatus->objectName( ), "normal" );
    ui->btnEnterPeripheralStatus->setStyleSheet( strTmp );

    strTmp = strButtonStyle.arg( strInfo, ui->btnSmsNotification->objectName( ), "normal" );
    ui->btnSmsNotification->setStyleSheet( strTmp );

    strTmp = strButtonStyle.arg( strInfo, ui->btnLeavePeripheralStatus->objectName( ), "normal" );
    ui->btnLeavePeripheralStatus->setStyleSheet( strTmp );

    strTmp = strButtonStyle.arg( strInfo, ui->btnCandinate->objectName( ), "normal" );
    ui->btnCandinate->setStyleSheet( strTmp );

    LoadDigital( 1, nTotalParkSpace, 'g' );

    //for ( int nIndex = 1; nIndex <= 4; nIndex++ ) {
    //    LoadDigital( nIndex, 1234, ( 2 == nIndex ) ? 'r' : 'g' );
    //}
#if false
    strTmp = strInfo + "Shift";
    ui->toolBox->setItemIcon( 0, pParent->GetPixmap( strTmp ) );

    strTmp = strInfo + "MonthlyCard";
    ui->toolBox->setItemIcon( 1, pParent->GetPixmap( strTmp ) );

    strTmp = strInfo + "SaveCard";
    ui->toolBox->setItemIcon( 2, pParent->GetPixmap( strTmp ) );

    strTmp = strInfo + "TimeCard";
    ui->toolBox->setItemIcon( 3, pParent->GetPixmap( strTmp ) );

    strTmp = strInfo + "Inout";
    ui->toolBox->setItemIcon( 4, pParent->GetPixmap( strTmp ) );

    strTmp = strInfo + "Open";
    ui->btnGateOpen1->setIcon( pParent->GetPixmap( strTmp ) );
    ui->btnGateOpen2->setIcon( pParent->GetPixmap( strTmp ) );

    strTmp = strInfo + "Close";
    ui->btnGateClose1->setIcon( pParent->GetPixmap( strTmp ) );
    ui->btnGateClose2->setIcon( pParent->GetPixmap( strTmp ) );
    /////////
    strTmp = strInfo + "HistoryLog";
    ui->btnHistoryLog->setIcon( pParent->GetPixmap( strTmp ) );

    strTmp = strInfo + "HistoryClear";
    ui->btnHistoryClear->setIcon( pParent->GetPixmap( strTmp ) );

    //strTmp = strInfo + "Pass";
    //ui->btnPass->setIcon( pParent->GetPixmap( strTmp ) );

    strTmp = strInfo + "Comfirm";
    ui->btnBarcode->setIcon( pParent->GetPixmap( strTmp ) );

    strTmp = strInfo + "DispatcherOpen";
    ui->btnDispatcherOpen->setIcon( pParent->GetPixmap( strTmp ) );

    strTmp = strInfo + "DispatcherClose";
    ui->btnDispatcherClose->setIcon( pParent->GetPixmap( strTmp ) );

    SetGateImg( false, true );
    SetGateImg( false, false );
#endif
}

void CMonitor::resizeEvent( QResizeEvent* )
{
    //CalculatePos( );
    LoadImg( );
    StartAvSdk( );
    StartPlateRecog( );
}

void CMonitor::SetGateImg(bool bOpen, bool bEnter)
{
#if false
    QString strInfo = "";
    GetImgBasePath( strInfo );

    QString strTmp = strInfo + ( bOpen ? "GateOpened" : "GateClosed" );
    if ( bEnter ) {
        ui->lblGateImg1->setPixmap( pParent->GetPixmap( strTmp ) );
    } else {
        ui->lblGateImg2->setPixmap( pParent->GetPixmap( strTmp ) );
    }
#endif
}

void CMonitor::on_btnDispatcherInfo_clicked()
{
    GetAllParkSpaceLot( true );
}

void CMonitor::on_btnGateChannel1_clicked()
{
    GetAllParkSpaceLot( true );
}

void CMonitor::on_btnGateChannel2_clicked()
{
    GetAllParkSpaceLot( true, false );
}

void CMonitor::ControlGate( bool bOpen, bool bEnter, QObject* sender )
{
    QPushButton* pSender = qobject_cast< QPushButton* >( sender );
    pSender->setEnabled( false );
    //bool bEnter = ( 0 != cCan % 2 ); // 1 2 3 4
    SetGateImg( bOpen, bEnter );

    CParkSpaceLotDialog dlg;
    QString strSql = QString ( "Select distinct shebeiname, shebeiadr From roadconerinfo \
                               where video1ip ='%1' and shebeiadr % 2 %2= 0" ).arg(
                                       CCommonFunction::GetHostIP( ), bEnter ? "!" : "" );
    QStringList lstRows;
    CLogicInterface::GetInterface( )->ExecuteSql( strSql, lstRows );
    QVector< char > vecCan;
    int nCount = 0;
    CProcessData* pProcessor = CProcessData::GetProcessor( pParent->GetSerialPort( ), pParent );
    QString strWhere;
    QString strType = "�ֶ�����բ";
    QString strText;
    QString strContent;
    QDateTime dtDateTime = QDateTime::currentDateTime( );
    CCommonFunction::DateTime2String( dtDateTime, strText );

    if ( 0 == lstRows.count( ) ) {
        goto ENABLEBUTTON;
    }

    dlg.InitDlg( true, lstRows, bEnter );
    dlg.setWindowTitle( dlg.windowTitle( ) + ( bOpen ? QString( "������բ" ) : QString( "������բ" ) ) );
    if ( 2 != lstRows.count( ) && CParkSpaceLotDialog::Rejected == dlg.exec( ) ) {
        goto ENABLEBUTTON;
    }

    dlg.GetCanAddress( vecCan );
    nCount = vecCan.count( );

    for ( int nIndex = 0; nIndex < nCount; nIndex++ ) {
        pProcessor->ControlGate( bOpen, vecCan[ nIndex ] );

        if ( 0 == nIndex ) {
            strContent = QString( "%1�� %2բ" ).arg( bEnter ? "��" : "��", bOpen ? "��" : "��" );
            pParent->WriteLog( strType, strContent, CommonDataType::ManualGateLog, dtDateTime, vecCan[ nIndex ] );
        }

        strWhere = QString( " where infooperator = '%1' and infokind = '%2' and infotext = '%3' and infotime = '%4'" ).arg(
                    pParent->GetUserName( ), strType, strContent, strText );

        pProcessor->CaptureManualGateImage( vecCan[ nIndex ], strWhere );
    }

    ENABLEBUTTON:
    pSender->setEnabled( true );
}

void CMonitor::GateOpen1()
{
    ControlGate( true, true, sender( ) );
}

void CMonitor::GateClose1()
{
    ControlGate( false, true, sender( ) );
}

void CMonitor::GateOpen2()
{
    ControlGate( true, false, sender( ) );
}

void CMonitor::GateClose2()
{
    ControlGate( false, false, sender( ) );
}

void CMonitor::on_btnGate3Channel_clicked()
{
    GetAllParkSpaceLot( false );
}

void CMonitor::ControlChargeInfo(QStringList &strInfo)
{
#if false
    if ( 5 != strInfo.count( ) ) {
        return;
    }

    ui->lblInTime->setText( strInfo[ 0 ] );
    ui->lblOutTime->setText( strInfo[ 1 ] );
    ui->lblRetentionTime->setText( strInfo[ 2 ] );
    ui->lcdAmount->display( strInfo[ 3 ] );
    //ui->btnPass->setEnabled( 0 == strInfo[ 4 ].compare( "1" ) ); // [ 0 disabled, 1 enabled ]
#endif
}

void CMonitor::on_btnDispatcherOpen_clicked()
{
    return;
    QString strFile;
    GetFileName( strFile, "bmp" );

    pMultimedia->CaptureBMP( hChannelHandle[ 0 ], strFile );

    GetFileName( strFile, "jpg" );
    pMultimedia->CaptureJpeg( hChannelHandle[ 0 ], strFile );
    ///////////////////////////
    //AA 0E 00 44 00 3e 1A 1B C7 EB CB A2 BF A8 02 1C 1D 3c 55
    //char cData[ ] = { 0xAA, 0x04, 0x00, 0x54, 0x42, 0x3f, 0x01, 0x00, 0x55};
    char cData[ ] = { 0xAA, 0x04, 0x00, 0x54, 0x42, 0x3e, 0x01, 0x00, 0x55}; //UpBallotSenseVihcleEnter
    //char cData[ ] = { 0xAA, 0x04, 0x00, 0x54, 0x43, 0x3E, 0x01, 0x00, 0x55 }; Send card
    //char cData[ ] = { 0xAA, 0x04, 0x00, 0x54, 0x43, 0x3E, 0x00, 0x00, 0x55 };

    //char cData[ ] = { 0xAA, 0x05, 0x00, 0x50, 0x01, 0x3e, 0x00, 0x00, 0x00, 0x55};
    //char cData[ ] = { 0xAA, 0x05, 0x00, 0x50, 0x01, 0x3e, 0x00, 0x00, 0x00, 0x55};
    QByteArray byData( cData, sizeof ( cData) );
    CProcessData* pProcessor = CProcessData::GetProcessor( pParent->GetSerialPort( ), pParent );
    if ( !pProcessor->IsOpen( ) ) {
        pProcessor->OpenPort( );
    }

    pProcessor->ParseData( byData );
}

void CMonitor::on_btnBarcode_clicked()
{

}

void CMonitor::on_btnDispatcherClose_clicked()
{

}

void CMonitor::ManualRecogonization( int nChannel )
{
    DisplayPlate( nChannel );
}

void CMonitor::ManualRecogonization( int nChannel, QString strPlate )
{
    QByteArray byData = CCommonFunction::GetTextCodec( )->fromUnicode( strPlate );
    const char* pData = byData.data( );
    strcpy( structPlates[ nChannel ].license, pData );
    DisplayPlate( nChannel );
}

void CMonitor::PlateCheck( QString strChar, int nChannel, int nIndex )
{
    if ( 0 > nChannel || 0 > nIndex || strChar.isNull( ) || strChar.isEmpty( ) ) {
        return;
    }

    if ( 1 == nIndex ) {
        nIndex = 0;
    }

    char* pLicense = &structPlates[ nChannel ].license[ nIndex ];
    QByteArray byData = strChar.toUtf8( );
    int nBytes = byData.count( );

    if ( NULL == pLicense || 15 < nBytes ) {
        return;
    }

    for ( nIndex = 0; nIndex < nBytes; nIndex++ ) {
        *pLicense = byData.at( nIndex );
        pLicense++;
    }
}

void CMonitor::ClearPlate( int nPlateChannel )
{
    QString strPlate = "        ";
    CCommonFunction::DisplayPlateChar( *this, nPlateChannel, strPlate );
}

void CMonitor::onLinkActivated(QString link)
{
    static CPrintMonthlyReport check( NULL );
    static bool bConnect = false;
    if ( !bConnect ) {
        QString strStyle = QString( "background-image:url(%1NewIcon/VerifyPlate.JPG)" ).arg( strImagePath );
        check.setStyleSheet( strStyle );
        bConnect = true;
        connect( &check, SIGNAL( SendValue( QString, int, int ) ), this, SLOT( PlateCheck( QString, int, int ) ) );
        connect( &check, SIGNAL( ManualRecogonization( int ) ), this, SLOT( ManualRecogonization( int ) ) );
        connect( &check, SIGNAL( ClearMonitorPlate( int ) ), this, SLOT( ClearPlate( int ) ) );
    }

    QLabel* pLbl = qobject_cast< QLabel* >( sender( ) );
    QString strNumber = pLbl->text( ).right( 2 );
    int nChannel = strNumber.left( 1 ).toInt( );
    int nIndex = strNumber.right( 1 ).toInt( );
    check.SetChannelIndex( nChannel, nIndex );
    check.InitResBtn( link );

    check.show( );
}

void CMonitor::on_btnPass_clicked()
{
    //this->ControlGate( true, false );
    //CCommonFunction::GetSyncPass( ).unlock( );
}

void CMonitor::onBtnVerifyInClicked()
{
    int nChannel = sender( )->objectName( ).right( 1 ).toInt( );
    if ( 1 == nChannel ) {
        nChannel += 1;
    }

    VerifyClecked( nChannel );
}

void CMonitor::onBtnVerifyOutClicked()
{
    int nChannel = sender( )->objectName( ).right( 1 ).toInt( );
    if ( 0 == nChannel ) {
        nChannel += 1;
    } else {
        nChannel += 2;
    }

    VerifyClecked( nChannel );
}

void CMonitor::VerifyClecked( int nChannel )
{
    QString strPlate = QString( structPlates[ nChannel ].license );
    static CPrintMonthlyReport check( NULL, this );
    static bool bConnect = false;

    if ( !bConnect ) {
        bConnect = true;
        QString strStyle = QString( "background-image:url(%1NewIcon/VerifyPlate.JPG)" ).arg( strImagePath );
        check.setStyleSheet( strStyle );
        connect( &check, SIGNAL( ManualRecogonization( int, QString ) ), this, SLOT( ManualRecogonization( int, QString ) ) );
        connect( &check, SIGNAL( ClearMonitorPlate( int ) ), this, SLOT( ClearPlate( int ) ) );
    }

    int nIndex = 0;
    check.SetChannelIndex( nChannel, nIndex );
    check.InitResBtn( strPlate );
    check.show( );
}

void CMonitor::on_tabRecord_cellDoubleClicked(int row, int column)
{
#if false
    M:select a.cardno, a.cardselfno, a.endtime, b.username, b.userpic, b.Comments, c.carcp, c.carmodel,
    c.carpic, d.inshebeiname, d.intime, d.outshebeiname, d.outtime, d.cardkind
    from parkadmin.monthcard a
    inner join parkadmin.userinfo b on a.cardno = '17338' and a.cardno = b.cardindex
    inner join parkadmin.carinfo c on a.cardno = c.cardindex
    inner join parkadmin.stoprd d on a.cardno = d.cardno and ( inshebeiname = '�������' or outshebeiname = '�������')
    and ( intime = '2011-08-11 07:26:49' or outtime = '2011-08-11 07:26:49' );
    0,1,2 M /S /T Card

    S:select a.cardno, a.cardselfno, a.cardfee, b.username, b.userpic, b.Comments, c.carcp, c.carmodel,
    T:select a.cardno, a.cardselfno, b.username, b.userpic, b.Comments, c.carcp, c.carmodel,
      pWG->item( row, 1 )->text( );//Plate
      pWG->item( row, 1 )->text( );//Time
      pWG->item( row, 2 )->text( );//������
      pWG->item( row, 3 )->text( );//Channel
      pWG->item( row, 4 )->text( );//CardNo
      pWG->item( row, 5 )->text( );//Eneter?
      pWG->item( row, 6 )->text( );//CardType
      pWG->item( row, 7 )->text( );// Date
#endif
    try {
        CPictureContrastDlg dlg( this );
        SetDlgBackground( dlg );

        QStringList  lstData;
        QTableWidget* pWG = qobject_cast< QTableWidget* >( sender( ) );
        QString strField[ ] = { "a.endtime, b.username, a.cardcomment, ", "a.cardfee, b.username, a.cardcomment,d.feefactnum,", "d.feefactnum," };
        QString strTable = "";
        bool bEnter = ( pWG->item( row, 5 )->text( ) == "1" );
        int nType = pWG->item( row, 6 )->text( ).toInt( );
        QString strDateTime = pWG->item( row, 7 )->text( ) + " " + pWG->item( row, 1 )->text( );
        CCommonFunction::GetTableName( ( CommonDataType::CardType ) nType, strTable );

        QString strChannelField = bEnter ? "inshebeiname" : "outshebeiname";
        QString strTimeField = bEnter ? "intime" : "outtime";
        QString strChannel = pWG->item( row, 3 )->text( );
        QString strCardNo = pWG->item( row, 4 )->text( );
        QString strUser = ( 2 != nType ) ? QString( "inner join userinfo b on a.cardno = '%1' and a.cardno = b.cardindex" ).arg( strCardNo ) : "";


        QString strSql;
        bool bFreeCard = ( 10 == nType  );
        QString strWhere = QString( " Where cardno = '%1' and %2 = '%3' and %4 = '%5'" ).arg(
                                    strCardNo, strChannelField, strChannel, strTimeField, strDateTime );


        if ( 2 == nType ) {
            strSql  = QString( "select a.cardno, a.cardselfno, %1 '%2', '', \
                      d.inshebeiname, d.intime, d.outshebeiname, d.outtime, d.cardkind, d.carcp, d.carcpout, d.feekind \
                      from %3 a \
                      %4 \
                      inner join stoprd d on a.cardno = d.cardno and %5 = '%6' and %7 = '%8'" ).arg(
                      strField[ nType ], ui->tabRecord->item( row, 0 )->text( ), strTable, strUser,
                      strChannelField, strChannel,
                      strTimeField, strDateTime );
        } else if ( bFreeCard ) {
            strSql = QString( "Select cardno, cardselfno, feefactnum, '%1', '', inshebeiname, intime,outshebeiname,\
                              outtime,cardkind, carcp, carcpout, feekind from stoprd " ).arg( ui->tabRecord->item( row, 0 )->text( ) );
            strSql += strWhere;
            nType = 2;
        } else if ( 0 == nType || 1 == nType ) {
            strSql  = QString( "select a.cardno, a.cardselfno, %1 c.carcp, c.carmodel, \
                          d.inshebeiname, d.intime, d.outshebeiname, d.outtime, d.cardkind \
                          from %2 a \
                          %3 \
                          inner join carinfo c on a.cardno = c.cardindex \
                          inner join stoprd d on a.cardno = d.cardno and %4 = '%5' and %6 = '%7'" ).arg(
                          strField[ nType ], strTable, strUser,
                          strChannelField, strChannel,
                          strTimeField, strDateTime );
        }
        qDebug( ) << strSql << endl;

        CLogicInterface::GetInterface( )->ExecuteSql( strSql, lstData, CCommonFunction::GetHistoryDb( ) );


        if ( 0 == lstData.count( ) ) { // InOut Record empty
            QStringList lstLog;
            QDateTime dt = QDateTime::currentDateTime( );
            QString strDt;
            CCommonFunction::DateTime2String( dt, strDt );
            strSql.remove( "'" );
            lstLog << "�鿴������¼" << strSql << strDt;
            CPmsLog::GetInstance( )->WriteLog( lstLog );
        }

        dlg.InitDlg( lstData, strWhere, strCardNo, nType, bEnter );
        dlg.exec( );
      } catch ( ... ) {
          ;
      }
}

void CMonitor::on_pushButton_clicked()
{
    QFile file( qApp->applicationDirPath( ) + "/logo.jpg" );
    bool bRet = file.open( QIODevice::ReadOnly );
    qDebug( ) << file.errorString( ) << " : " << file.fileName( ) << endl;
    if ( !bRet ) {
        return;
    }
    QByteArray byData = file.readAll( );
    file.close( );

    QStringList lstValue;
    QStringList lstCardno;
    QDateTime dt;
    QString strDt;
    QString strCardno;

    QString strSql = "insert into stoprd ( cardno, inshebeiname, outshebeiname, intime, outtime, feetime,  feeoperator, cardkind ) values %1";
    QString strValue = "( %1, '�������', '���ų���', '%2', '%3', '%4', 'ϵͳ����Ա', '���⿨' )";
    QDate date = QDate::currentDate( );

    for ( int nIndex = 1; nIndex <= ui->spinBox->value( ) * 10000; nIndex++ ) {
        dt = QDateTime( date, QTime::currentTime( ) );
        CCommonFunction::DateTime2String( dt, strDt );
        strCardno = QString::number( dt.toMSecsSinceEpoch( ) );

        lstValue << strValue.arg( strCardno, strDt, strDt, strDt );
        lstCardno << strCardno;

        if ( 0 == nIndex % 1000 ) {
            QString strTmp = strSql.arg( lstValue.join( "," ) );
            CProcessData::GetProcessor( )->SendDbWriteMessage( CDbEvent::SQLExternal, strTmp, true, false );
            lstValue.clear( );

            Sleep( 10 );
            foreach ( const QString str, lstCardno ) {
                strTmp =  QString( " where cardno = '%1'" ).arg( str );
                CProcessData::GetProcessor( )->SendDbWriteMessage( CDbEvent::ImgExternal, strTmp, true, false,
                                                                   CommonDataType::BlobVehicleIn1, byData );

                CProcessData::GetProcessor( )->SendDbWriteMessage( CDbEvent::ImgExternal, strTmp, true, false,
                                                                   CommonDataType::BlobVehicleOut1, byData );
            }

            lstCardno.clear( );
            Sleep( 60000 );
        }

        Sleep( 20 );

        if ( 0 == nIndex % 20000 ) {
            date = date.addDays( 1 );
            Sleep( 60000 * 3 );
        }
    }

}
