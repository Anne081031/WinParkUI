#include "picturecontrastdlg.h"
#include "ui_picturecontrastdlg.h"
#include "Common/commonfunction.h"
#include <SerialPort/processdata.h>
#include "Common/logicinterface.h"
#include "Header/printmonthlyreport.h"

CPictureContrastDlg::CPictureContrastDlg( QWidget *parent ) :
    QDialog(parent),
    ui(new Ui::CPictureContrastDlg)
{
    ui->setupUi(this);
    ConnectRadioBtn( );
    FillDiscount( );

    nAmount = 0;
    nFeeNum = 0;

    strButtonStyle = "background-image:url(%1NewIcon/%2-%3.JPG);\nborder-style: outset; ";
    CCommonFunction::GetPath( strImagePath, CommonDataType::PathUIImage );

    QString strTmp = strButtonStyle.arg( strImagePath, ui->btnVerifyIn->objectName( ), "normal" );
    ui->btnVerifyIn->setStyleSheet( strTmp );

    strTmp = strButtonStyle.arg( strImagePath, ui->btnVerifyOut->objectName( ), "normal" );
    ui->btnVerifyOut->setStyleSheet( strTmp );

    strTmp = strButtonStyle.arg( strImagePath, ui->btnPass->objectName( ), "normal" );
    ui->btnPass->setStyleSheet( strTmp );

    CCommonFunction::ControlSysMenu( *this );

    connect( ui->btnVerifyIn, SIGNAL( clicked( ) ), this, SLOT( OnClickedDlgPopup( ) ) );
    connect( ui->btnVerifyIn, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnVerifyIn, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    connect( ui->btnVerifyOut, SIGNAL( clicked( ) ), this, SLOT( OnClickedDlgPopup( ) ) );
    connect( ui->btnVerifyOut, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnVerifyOut, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    connect( ui->btnPass, SIGNAL( pressed( ) ), this, SLOT( BtnPressed( ) ) );
    connect( ui->btnPass, SIGNAL( released( ) ), this, SLOT( BtnReleased( ) ) );

    setWindowFlags( Qt::FramelessWindowHint );
    ui->lblTitle->setText( windowTitle( ) );

    connect( ui->btnPass1, SIGNAL( clicked( ) ), this, SLOT( OnClickedDlgPopup( ) ) );
    connect( ui->btnPass2, SIGNAL( clicked( ) ), this, SLOT( OnClickedDlgPopup( ) ) );
    connect( ui->btnPass3, SIGNAL( clicked( ) ), this, SLOT( OnClickedDlgPopup( ) ) );
    connect( ui->btnPass4, SIGNAL( clicked( ) ), this, SLOT( OnClickedDlgPopup( ) ) );

    QString strName = "lblLicence%1%2";
    QLabel* pLabel = NULL;
    for ( int nChannel = 1; nChannel <= 2; nChannel++ ) {
        for ( int nIndex = 1; nIndex <= 8; nIndex++ ) {
            pLabel = findChild< QLabel* >( strName.arg( nChannel ).arg( nIndex ) );

            if ( NULL != pLabel ) {
                QObject::connect( pLabel, SIGNAL( linkActivated( QString ) ), this, SLOT( onLinkActivated( QString ) ) );
            }
        }
    }
}

CPictureContrastDlg::~CPictureContrastDlg()
{
    delete ui;
}

void CPictureContrastDlg::PlateCheck( QString strChar, int nChannel, int nIndex )
{

}

QString CPictureContrastDlg::GetFeeRateType( )
{
    return strFeeRateType;
}

QString CPictureContrastDlg::GetDiscountType( )
{
    QString strType = ui->cbxDiscount->currentText( );
    ui->cbxDiscount->setCurrentIndex( 0 );

    return strType;
}

void CPictureContrastDlg::onLinkActivated( QString link )
{
    static CPrintMonthlyReport check( NULL );
    static bool bConnect = false;
    if ( !bConnect ) {
        bConnect = true;
        connect( &check, SIGNAL( SendValue( QString, int, int ) ), this, SLOT( PlateCheck( QString, int, int ) ) );
    }

    QLabel* pLbl = qobject_cast< QLabel* >( sender( ) );
    QString strNumber = pLbl->text( ).right( 2 );
    int nChannel = strNumber.left( 1 ).toInt( );
    int nIndex = strNumber.right( 1 ).toInt( );
    check.SetChannelIndex( nChannel, nIndex );

    check.show( );
}

void CPictureContrastDlg::DefaultClicked( )
{
    on_btnPass_clicked( );
}

void CPictureContrastDlg::resizeEvent( QResizeEvent *event )
{
    QWidget::resizeEvent( event );

    QString strFile = strImagePath + "NewIcon/FeeBG-normal.jpg";
    QPixmap bgimage( strFile );
    QPalette pal( palette( ) );
    pal.setBrush( QPalette::Window, QBrush( bgimage.scaled( event->size( ),
                                                            Qt::IgnoreAspectRatio,
                                                            Qt::SmoothTransformation ) ) );
    setPalette(pal);

    CCommonFunction::WindowCenter( *this );
}

void CPictureContrastDlg::InitDlg( QStringList& lstRows, QPixmap& bmpEnter, QPixmap& bmpLeave, QByteArray& byData, bool bBuffer )
{
    //ui->lblEnterImg->setPixmap( bmpEnter ); // 2011 12 18
    bmpEnter.isNull( );
    ui->lblLeaveImg->setPixmap( bmpLeave ); // 2011 12 18
    this->byData = byData;
    Write2UI( lstRows, bEnter1, true, bBuffer );
    //Calculate( *ui->rdx2 );
}

void CPictureContrastDlg::Write2UI( QStringList &lstRows, bool bEnter, bool bAuto, bool bBuffer )
{
    if ( 0 >= lstRows.count( ) ) {
        return;
    }

    int nField= 0;
    //QString strPlate;
    QString strTmp;
    QString strPlates[ 2 ];

    if ( bAuto ) {
        ui->edtCardID->setText( lstRows[  0 ] );
        QString strCardID = lstRows[  0 ];
        ui->edtCardType->setText( lstRows[ 1 ] );
        ui->edtEnterChannel->setText( lstRows[ 2 ] );
        ui->edtEnterTime->setText( lstRows[ 3 ] );
        ui->edtLeaveChannel->setText( lstRows[ 4 ] );
        ui->edtLeaveTime->setText( lstRows[ 5 ] );
        nHour = lstRows[ 6 ].toInt( );
        nMin = lstRows[ 7 ].toInt( );
        //ui->edtAmount->setText( lstRows[ 8 ] );
        strTabName = lstRows[ 9 ];
        strParkName = lstRows[ 10 ];
        dtStart = CCommonFunction::String2DateTime( lstRows[ 11 ] );
        dtEnd = CCommonFunction::String2DateTime( lstRows[ 12 ] );
        strPlates[ 0 ] = lstRows[ 13 ];
        if ( !bEnter ) {
            strPlates[ 1 ] = strPlates[ 0 ];
        }
        ui->edtStayTime->setText( QString::number( nHour ) + "ʱ" + QString::number( nMin ) + "��" );
        ui->edtVechilePlate->setText( strPlates[ 0 ] );

        //QString strSql = QString( "select a.cardselfno, b.carcp, b.carmodel, c.username from tmpcard a \
        //                 inner join carinfo b on a.cardno = '%1' and a.cardno = b.cardindex \
        //                 inner join userinfo c on c.cardindex = a.cardno" ).arg( ui->edtCardID->text( ) );
        //QString strSql = QString( "select a.cardselfno, '%1', '', '' from tmpcard a.cardno = '%2' " ).arg( strPlate, ui->edtCardID->text( ) );

        ui->edtComments->clear( );
        ui->edtExpiration->clear( );
        ui->edtSurplus->clear( );

        strTmp = CCommonFunction::GetCarTypeString( lstRows[ lstRows.count( ) -1 ] );
        lstRows.clear( );
        //CLogicInterface::GetInterface()->ExecuteSql( strSql, lstRows );
        //if ( ( 0 == nAmount ) && ( 0 >= lstRows.count( ) ) ) {
        //    strTmp = "С�ͳ�";
        //    Calculate( SetCarType( strTmp ) );
            //return;
        //}

        //strTmp = "С�ͳ�";
        SetCarType( strTmp );

        nField = 0;
        //ui->edtCardSelf->setText( "δ֪" );//lstRows[ nField++ ] );
        //if ( strPlate.isEmpty( ) ) {
        //    strPlate = lstRows[ nField++ ];
            //ui->edtVechilePlate->setText( strPlate );
        //} else {
        //    nField++;
       // }

        //strTmp = lstRows[ nField++ ];
        ui->edtVechileType->setText( strTmp );
        //Calculate( SetCarType( strTmp ) );
        //ui->edtOwner->setText( lstRows[ nField++ ] );

        CommonDataType ::BlobType blob = bBuffer ? CommonDataType::BlobTimeInImg : CommonDataType::BlobVehicleIn1;
        LoadMyImage( blob, strCardID, false );
    } else {
        ui->edtCardID->setText( lstRows[ nField++ ] );
        ui->edtCardSelf->setText( lstRows[ nField++ ] );
        if ( 0 == nCardType ) { // M
            ui->edtExpiration->setText( lstRows[ nField++ ] );
            ui->edtAmount->clear( );
        } else if ( 1 == nCardType ) { // S
            ui->edtSurplus->setText( lstRows[ nField++ ] );
        } else if ( 2 == nCardType ) { // T
            ui->edtAmount->setText( lstRows[ nField++ ] );
        }

        if ( 2 != nCardType ) {
            ui->edtOwner->setText( lstRows[ nField++ ] );
        }

        if ( 2 != nCardType ) {
            ui->edtComments->setPlainText( lstRows[ nField++ ] );
        }

        if ( 1 == nCardType ) {
            ui->edtAmount->setText( lstRows[ nField++ ] );
        }

        strPlates[ 0 ] = lstRows[ nField++ ];
        ui->edtVechilePlate->setText( strPlates[ 0 ] );
        if ( 2 != nCardType ) {
            strPlates[ 1 ] = strPlates[ 0 ];
        }
        strTmp = lstRows[ nField++ ];
        ui->edtVechileType->setText( strTmp );
        SetCarType( strTmp );
        ui->edtEnterChannel->setText( lstRows[ nField++ ] );
        QString strStart = lstRows[ nField++ ];
        ui->edtEnterTime->setText( strStart );
        ui->edtLeaveChannel->setText( lstRows[ nField++ ] );
        QString strEnd = lstRows[ nField++ ];
        ui->edtLeaveTime->setText( strEnd );
        ui->edtCardType->setText( lstRows[ nField++ ] );

        if ( 2 == nCardType ) {
            strPlates[ 0 ] = lstRows[ nField++ ];
            strPlates[ 1 ] = lstRows[ nField++ ];
            ui->edtVechileType->setText( lstRows[ nField++ ] );
        }

        if ( !strStart.isEmpty( ) && !strEnd.isEmpty( ) ) {
            QDateTime dtStart = CCommonFunction::String2DateTime( strStart );
            QDateTime dtEnd = CCommonFunction::String2DateTime( strEnd );

            quint64 nMinute = ( dtEnd.toMSecsSinceEpoch( ) - dtStart.toMSecsSinceEpoch( ) ) / ( 1000 * 60 );
            nHour = nMinute / 60;
            nMin = nMinute - nHour * 60;

            ui->edtStayTime->setText( QString::number( nHour ) + "ʱ" + QString::number( nMin ) + "��" );
        }

        bool bEnable = false;
        ui->gbFee->setEnabled( bEnable );
        ui->btnVerifyIn->setEnabled( bEnable );
        ui->btnVerifyOut->setEnabled( bEnable );
        ui->cbxDiscount->setEnabled( bEnable );
    }

    int nCount = bEnter ? 0 : 1;
    for ( int nIndex = 0; nIndex <= nCount; nIndex++ ) {
        if ( "δ֪" != strPlates[ nIndex ] ) {
            CCommonFunction::DisplayPlateChar( *this, nIndex, strPlates[ nIndex ] );
        }
    }
}

void CPictureContrastDlg::InitDlg( QStringList &lstData, QString &strWhere, QString &strCardNo, int nType, bool bEnter  )
{
    strVideoWhere = strWhere;
    bool bHistory = CCommonFunction::GetHistoryDb( );
    LoadMyImage( CommonDataType::BlobVehicleIn1, strCardNo, bHistory );
    if ( !bEnter ) {
        LoadMyImage( CommonDataType::BlobVehicleOut1, strCardNo, bHistory );
    }
    LoadMyImage( CommonDataType::BlobOwner, strCardNo, false );
    LoadMyImage( CommonDataType::BlobVehicle, strCardNo, false );

    nCardType = nType;
    Write2UI( lstData, bEnter, false );
}

void CPictureContrastDlg::ConnectRadioBtn( )
{
    QObjectList lstChild = ui->gbFee->children( );
    QObjectList::Iterator ite = lstChild.begin( );
    QRadioButton* pBtn = NULL;

    for ( ; ite != lstChild.end( ); ite++ ) {
        pBtn = dynamic_cast< QRadioButton* >( *ite );
        connect( pBtn, SIGNAL( clicked( ) ), this, SLOT( RbtnClicked( ) ) );
    }
}

void CPictureContrastDlg::closeEvent(QCloseEvent *e)
{
    if ( e->spontaneous( ) ) {
        e->ignore( );
    }
}

void CPictureContrastDlg::showEvent(QShowEvent *)
{
    emit SendTimeCardInfo( byData1, vData1, nMin1, nHour1, nAmount1, bEnter1 );
    QDateTime dt = QDateTime::currentDateTime();
    QString strText = "";
    CCommonFunction::DateTime2String( dt, strText );

    ui->lblDateTime->setText( strText );
}

void CPictureContrastDlg::SetParams( QByteArray &byData, QByteArray &vData, int nMin, int nHour, int nAmount, bool bEnter )
{
    this->byData1 = byData;
    this->vData1 = vData;
    this->nMin1 = nMin;
    this->nHour1 = nHour;
    this->nAmount1 = nAmount;
    this->nAmount = nAmount;
    nFeeNum = nAmount;
    ui->edtAmount->setText( QString::number( nAmount ) );
    this->bEnter1 = bEnter;
}

void CPictureContrastDlg::FillDiscount( )
{
    ui->cbxDiscount->clear( );

    QString strSql = "select distinct zkname, zkflag, zknumb from zkset";
    QStringList lstRows;
    int nRows = CLogicInterface::GetInterface( )->ExecuteSql( strSql, lstRows );
    int nField = 0;

    ui->cbxDiscount->insertItem( 0, "���ۿ�" );

    for ( int nIndex = 1; nIndex <= nRows; nIndex++ ) {
        nField = ( nIndex - 1 ) * 3;
        ui->cbxDiscount->insertItem( nIndex, lstRows[ nField++ ] );
        ui->cbxDiscount->setItemData( nIndex, lstRows[ nField++ ], Qt::UserRole );
        ui->cbxDiscount->setItemData( nIndex, lstRows[ nField++ ], Qt::StatusTipRole );
    }

    QObject::connect( ui->cbxDiscount, SIGNAL( currentIndexChanged( int ) ), this, SLOT( CbxIndexChanged( int ) ) );
}

void CPictureContrastDlg::CbxIndexChanged( int )
{
    QString strRbx = ui->cbxDiscount->statusTip( );
    quint32 nRbx = strRbx.toUInt( );

    QRadioButton* pRbx = ( QRadioButton* ) nRbx;

    CaculateAndPlay( *pRbx );
}

int CPictureContrastDlg::GetDiscount( int nPrevValue )
{
    int nDiscountIndex = ui->cbxDiscount->currentIndex( );
    int nValue = nPrevValue;
    if ( 0 == nDiscountIndex ) {
        return nValue;
    }

    int nDisMethod = ui->cbxDiscount->itemData( nDiscountIndex, Qt::UserRole ).toInt( );
    int nDisValue = ui->cbxDiscount->itemData( nDiscountIndex, Qt::StatusTipRole ).toInt( );

    switch ( nDisMethod ) {
        case 1 : // �ٷֱ�
            nValue *= nDisValue;
            nValue /= 100;
        break;

        case 0 : // ֱ�Ӽ�
            nValue -= nDisValue;
            if ( 0 > nValue ) {
                nValue = 0;
            }
            break;
    }

    return nValue;
}

void CPictureContrastDlg::SetParkID( QString &strID )
{
    strParkID = strID;
}

void CPictureContrastDlg::Calculate(QRadioButton &rbtn)
{
    QString strType = rbtn.text( );
    QStringList lstText;
    strType = CCommonFunction::GetFeeStd( strType );
    nAmount = CCommonFunction::CalculateFee( *CCommonFunction::GetSettings( CommonDataType::CfgTariff ),
                                             strParkID, strType, dtStart, dtEnd, lstText );

    if ( 0 != nAmount ) {
        nFeeNum = nAmount;
    }

    int nDiscount = GetDiscount( nAmount );
    ui->edtAmount->setText( QString::number( nDiscount ) );
}

QRadioButton& CPictureContrastDlg::SetCarType( QString &strType )
{
    QString strName = "rdx%1";
    QString strTmp;
    QRadioButton* pRdx = NULL;

    for ( int nIndex = 1; nIndex <= 8; nIndex++ ) {
        strTmp = strName.arg( nIndex );
        pRdx = findChild< QRadioButton* >( strTmp );
        if ( pRdx->text( ) == strType ) {
            pRdx->setChecked( true );
            SetCurrentRadioBox( pRdx );
            break;
        }
    }

    if ( NULL == pRdx ) {
        pRdx = new QRadioButton( );
    }

    return *pRdx;
}

void CPictureContrastDlg::SetCurrentRadioBox( QRadioButton *pRbx )
{
    quint32 nRbx = ( quint32 )pRbx;
    QString strRbx = QString::number( nRbx );
    ui->cbxDiscount->setStatusTip( strRbx );
    strFeeRateType = pRbx->text( );
}

void CPictureContrastDlg::CaculateAndPlay( QRadioButton &rbtn )
{
    Calculate( rbtn );
    int nDiscount = GetDiscount( nAmount );
    CProcessData::GetProcessor()->TimeCardPass( nDiscount, nHour, nMin, byData );
}

void CPictureContrastDlg::RbtnClicked( )
{
    QRadioButton* pBtn = dynamic_cast< QRadioButton* > ( sender( ) );
    if ( NULL != pBtn ) {
        SetCurrentRadioBox( pBtn );
        CaculateAndPlay( *pBtn );
    }
}

int CPictureContrastDlg::GetAmount( )
{
    return nFeeNum;
}

int CPictureContrastDlg::GetDisAmount( )
{
    return GetDiscount( nAmount );
}

void CPictureContrastDlg::on_btnPass_clicked()
{
    qDebug( ) << QTime::currentTime( ).toString( "hh:mm:ss" ) << endl;
    //nAmount = ui->edtAmount->text( ).toInt( );
    //close( );
    setVisible( false );
    setResult( CPictureContrastDlg::Accepted );
    qDebug( ) << QTime::currentTime( ).toString( "hh:mm:ss" ) << endl;
}

void CPictureContrastDlg::BtnPressed( )
{
    QPushButton* pBtn = qobject_cast< QPushButton* >( sender( ) );
    SwitchImage( pBtn, true );
}

void CPictureContrastDlg::BtnReleased( )
{
    QPushButton* pBtn = qobject_cast< QPushButton* >( sender( ) );
    SwitchImage( pBtn, false );
}

void CPictureContrastDlg::SwitchImage( QPushButton *pBtn, bool bDown )
{
    QString strStyle = strButtonStyle.arg( strImagePath, pBtn->objectName( ),  bDown ? "clicked" : "normal" );
    //qDebug( ) << strStyle << endl << "Down" << bDown << endl;
    pBtn->setStyleSheet( strStyle );
}

void CPictureContrastDlg::OnClickedDlgPopup( )
{
    QPushButton* pBtn = qobject_cast< QPushButton* >( sender( ) );
    QString strName = pBtn->objectName( );
    QString strCardNo = ui->edtCardID->text( );
    bool bHistory = CCommonFunction::GetHistoryDb( );

    if ( strName == ui->btnPass1->objectName( ) ) {
        LoadMyImage( CommonDataType::BlobVehicleIn1, strCardNo, bHistory );
        LoadMyImage( CommonDataType::BlobVehicleOut1, strCardNo, bHistory );
    } else if ( strName == ui->btnPass2->objectName( ) ) {
        LoadMyImage( CommonDataType::BlobVehicleIn2, strCardNo, bHistory );
        LoadMyImage( CommonDataType::BlobVehicleOut2, strCardNo, bHistory );
    } else if ( strName == ui->btnPass3->objectName( ) ) {
        LoadMyImage( CommonDataType::BlobVehicleIn3, strCardNo, bHistory );
        LoadMyImage( CommonDataType::BlobVehicleOut3, strCardNo, bHistory );
    } else if ( strName == ui->btnPass4->objectName( ) ) {
        LoadMyImage( CommonDataType::BlobVehicleIn4, strCardNo, bHistory );
        LoadMyImage( CommonDataType::BlobVehicleOut4, strCardNo, bHistory );
    } else if ( strName == ui->btnVerifyIn->objectName( ) ) {

    } else if ( strName == ui->btnVerifyOut->objectName( ) ) {

    }
}

void CPictureContrastDlg::LoadMyImage( CommonDataType::BlobType blob, QString& strCardNo, bool bHistory )
{
    QLabel* pLbl = NULL;
    QString strWhere = " Where %1 = '%2'";
    QString strField = "cardindex";

    switch ( blob ) {
    case CommonDataType::BlobManualGate1 :
    case CommonDataType::BlobManualGate2 :
    case CommonDataType::BlobManualGate3 :
    case CommonDataType::BlobManualGate4 :
        break;

    case CommonDataType::BlobVehicleIn1 :
    case CommonDataType::BlobVehicleIn2 :
    case CommonDataType::BlobVehicleIn3 :
    case CommonDataType::BlobVehicleIn4 :
    case CommonDataType::BlobTimeInImg :
        pLbl = ui->lblEnterImg;
        strWhere = strVideoWhere;
        break;
    case CommonDataType::BlobVehicleOut1 :
    case CommonDataType::BlobVehicleOut2 :
    case CommonDataType::BlobVehicleOut3 :
    case CommonDataType::BlobVehicleOut4 :
        pLbl = ui->lblLeaveImg;
        strWhere = strVideoWhere;
        break;
    case CommonDataType::BlobOwner :
        pLbl = ui->lblUserImg;
        strWhere = strWhere.arg( strField, strCardNo );
        break;
    case CommonDataType::BlobVehicle :
        pLbl = ui->lblCarImg;
        strWhere = strWhere.arg( strField, strCardNo );
        break;
    }

    if ( strWhere.isEmpty( ) ) {
        QString strChannel = ui->edtEnterChannel->text( );
        QString strTime = ui->edtEnterTime->text( );
        if ( CommonDataType::BlobTimeInImg == blob ) {
            strWhere = QString( " Where cardno ='%1' and intime = '%2'" ).arg( strCardNo, strTime );
        } else {
            strWhere = QString( " Where cardno = '%1' and inshebeiname = '%2' and intime = '%3'" ).arg(
                                        strCardNo, strChannel, strTime );
        }
    }

    CCommonFunction::LoadFourImages( blob, strWhere, *pLbl, bHistory );
}
