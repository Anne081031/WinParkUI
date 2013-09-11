#include "dlgperipheralstatus.h"
#include "ui_dlgperipheralstatus.h"
#include "Common/commonfunction.h"
#include "SerialPort/processdata.h"
#include "Dialog/passdlg.h"

CDlgPeripheralStatus::CDlgPeripheralStatus( bool bEnter, QWidget *parent ) :
    QDialog(parent),
    ui(new Ui::CDlgPeripheralStatus),
    bPeripheralLocation( bEnter )
{
    ui->setupUi(this);
    QString strTitle = windowTitle( ).arg( bEnter ? "��" : "��" );
    CCommonFunction::ConnectCloseButton( ui->lblClose );
    setWindowTitle( strTitle );
    pSettings = CCommonFunction::GetSettings( CommonDataType::CfgSystem );
    strKey = QString( "UserRequest/NoCarCardValided%1" ).arg( bPeripheralLocation ? "Entrance" : "Exit" );

    bool bvalided = pSettings->value( strKey, true ).toBool( );
    ui->chkValided->setChecked( bvalided );

    for ( int nIndex = 1; nIndex <=9; nIndex++ ) {
        QString strName = QString( "btn%1" ).arg( nIndex );
        QPushButton* pBtn = findChild< QPushButton* >( strName );
        connect( pBtn, SIGNAL( clicked( ) ), this, SLOT( OnBtnClicked( ) ) );
    }

    QString strName = "edt%1q";

    for ( int nIndex = 1; nIndex <= 5; nIndex++ ) {
        lblInfos[ nIndex - 1 ] = findChild< QLineEdit* >( strName.arg( nIndex ) );
    }

    ui->frmForbidden->setVisible( bEnter );
    ui->lblTitle->setText( windowTitle( ) );

    if ( bEnter ) {
        ui->chkForbidden->setChecked( pSettings->value( "UserRequest/EntranceForbidden", false ).toBool( ) );
    }

    setStyleSheet( QString( "background-image:url(%1);" ).arg( statusTip( ) ) );
}

CDlgPeripheralStatus::~CDlgPeripheralStatus()
{
    delete ui;
}

void CDlgPeripheralStatus::on_btnSave_clicked()
{
    pSettings->setValue( strKey, ui->chkValided->isChecked( ) );
    if ( bPeripheralLocation ) {
        pSettings->setValue( "UserRequest/EntranceForbidden", ui->chkForbidden->isChecked( ) );
    }
    pSettings->sync( );

}

void CDlgPeripheralStatus::on_btnCancel_clicked()
{
    close( );
}

void CDlgPeripheralStatus::OnBtnClicked( )
{
    QPushButton* pBtn = qobject_cast< QPushButton* >( sender( ) );
    QString strName = pBtn->objectName( );
    strName = strName.remove( 0, 3 );
    int nCount = strName.toInt( );
    if ( 6 > nCount ) {
        lblInfos[ nCount - 1 ]->clear( );
    }
    char cCan;
    CPassDlg dlg( bPeripheralLocation );
    if ( dlg.IsShow( ) && CPassDlg::Rejected == dlg.exec( ) ) {
        return;
    }

    cCan = dlg.GetCanAddress( );
    if ( char( 0 ) == cCan ) {
        return;
    }

    QStringList lstData;
    lstData << ( bPeripheralLocation ? "1" : "0" )
            << strName;

    CProcessData* pProcessor = CProcessData::GetProcessor( );
    if ( NULL == pProcessor ) {
        return;
    }
    pProcessor->ProcessUserRequest( CommonDataType::UserPheripheral, cCan, lstData );
}

void CDlgPeripheralStatus::ResponseUserRequest( QByteArray &byData, int nMinor )
{
    if ( 8 > byData.count( ) ) {
        return;
    }

    bool bStatus = char( 0x00 ) == byData[ 6 ];
    QString strName = QString( "edt%1q" ).arg( nMinor );
    QLineEdit* pEdit = findChild< QLineEdit* >( strName );

    switch ( nMinor ) {
    case 1 :
        strName =  bStatus ? "�г�" : "�޳�";
        break;

    case 2 :
        strName =  bStatus ? "�г�" : "�޳�";
        break;

    case 3 :
        strName =  bStatus ? "����" : "����";
        break;

    case 4 : // 0x00 -0x07
        switch ( byData[ 6 ] ) {
        case 0 :
            break;
        case 1 :
            break;
        case 2 :
            break;
        case 3 :
            break;
        case 4 :
            break;
        case 5 :
            break;
        case 6 :
            break;
        case 7 :
            break;
        }

        strName = "";
        break;

    case 5 :
        QByteArray vData = byData.mid( 9, byData.count( ) - 13 );

        if ( vData == QByteArray::fromHex( "383030" ) ) {
            strName = "���������ڷ���";
        } else if ( vData == QByteArray::fromHex( "343030" ) ) {
            strName = "���������ڻ��տ�Ƭ";
        } else if ( vData == QByteArray::fromHex( "323030" ) ) {
            strName = "����������";
        } else if ( vData == QByteArray::fromHex( "313030" ) ) {
            strName = "���������ղֿ�Ƭ��װ��";
        } else if ( vData == QByteArray::fromHex( "303230" ) ) {
            strName = "�������¿�";
        } else if ( vData == QByteArray::fromHex( "303130" ) ) {
            strName = "�����ֿ�����";
        } else if ( vData == QByteArray::fromHex( "303038" ) ) {
            strName = "�����ֿ���";
        } else if ( vData == QByteArray::fromHex( "303034" ) ) {
            strName = "���ѷ���ȡ��λ�ã����Ⱥ�ȡ��";
        } else if ( vData == QByteArray::fromHex( "303032" ) ) {
            strName = "�ѷ�������λ�ã����Ⱥ��";
        } else if ( vData == QByteArray::fromHex( "303031" ) ) {
            strName = "����δ����";
        } else if ( vData == QByteArray::fromHex( "303030" ) ) {
            strName = "��������׼����";
        } else if ( vData == QByteArray::fromHex( "FFFFFF" ) ) {
            strName = "�뷢����ͨѶʧ��";
        } else {
            strName = "";
        }
        break;
    }

    pEdit->setText( strName );
}

void CDlgPeripheralStatus::resizeEvent( QResizeEvent *event )
{
    QWidget::resizeEvent( event );

    QString strFile = statusTip( );
    QPixmap bgimage( strFile );
    QPalette pal( palette( ) );
    pal.setBrush( QPalette::Window, QBrush( bgimage.scaled( event->size( ),
                                                            Qt::IgnoreAspectRatio,
                                                            Qt::SmoothTransformation ) ) );
    setPalette(pal);
}

void CDlgPeripheralStatus::on_lblClose_linkActivated(QString)
{
    close( );
}
