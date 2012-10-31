#include "Header/printdaylyreport.h"
#include "ui_printdaylyreport.h"
#include "Common/commonfunction.h"
#include "Dialog/cdlgquerywhere.h"

CPrintDaylyReport::CPrintDaylyReport(QWidget* mainWnd, QWidget *parent) :
    QFrame(parent),
    ui(new Ui::CPrintDaylyReport)
{
    ui->setupUi(this);
    pParent = dynamic_cast< MainWindow* > ( mainWnd );
    CCommonFunction::ConnectCloseButton( ui->lblClose );

    ui->lblTitle->setText( windowTitle( ) );
    nReportType = 0;
    QString strName = "rdChx%1";
    QChar cFill = '0';
    for ( int nIndex = 1; nIndex <= ui->gbType->children().size( ); nIndex++ ) {
        QString strTmp = strName.arg( nIndex, 2, 10, cFill );
        QRadioButton* pRd = ui->gbType->findChild< QRadioButton* >( strTmp );
        if ( NULL != pRd ) {
            connect( pRd, SIGNAL( clicked( ) ), this, SLOT( OnRdChkClicked( ) ) );
        }
    }

    QDateTime date = QDateTime::currentDateTime( );
    SetDateTime( date, date );
    move( 123, 177 );
}

CPrintDaylyReport::~CPrintDaylyReport()
{
    delete ui;
}

void CPrintDaylyReport::SetDateTime( QDateTime& dtStart, QDateTime& dtEnd )
{
    ui->dReportStartDate->setDateTime( dtStart );
    ui->dReportEndDate->setDateTime( dtEnd );
}

void CPrintDaylyReport::SetDateTimeFormat( QString &strFormat )
{
    ui->dReportStartDate->setDisplayFormat( strFormat );
    ui->dReportEndDate->setDisplayFormat( strFormat );
}

void CPrintDaylyReport::OnRdChkClicked( )
{
    QRadioButton* pBtn = qobject_cast< QRadioButton* >( sender( ) );
    nReportType = pBtn->objectName( ).right( 2 ).toInt( ) - 1; // 1 - 9

    bool bMonth = CommonDataType::ReportMonth == nReportType;
    ui->dReportEndDate->setEnabled( !bMonth );
    ui->dReportStartDate->setEnabled( !bMonth );
    if ( bMonth ) {
        return;
    }

    QString strFormat = "yyyy-MM-dd";
    if ( CommonDataType::ReportTimeCardDetail == nReportType ) {
        strFormat = "yyyy-MM-dd HH:mm:ss";
        SetDateTimeFormat( strFormat );
        QDateTime dtCurrent = QDateTime::currentDateTime( );
        QDateTime dtStart( ui->dReportStartDate->date( ), dtCurrent.time( ) );
        QDateTime dtEnd( ui->dReportEndDate->date( ), dtCurrent.time( ) );
        SetDateTime( dtStart, dtEnd );
    } else {
        SetDateTimeFormat( strFormat );
    }

    if ( CommonDataType::ReportMonthInOut == nReportType ) {
        QStringList lstWhere;
        CDlgQueryWhere dlg;
        dlg.exec( );
        dlg.GetWhere( lstWhere );
        reporter.SetWhere( lstWhere );
    }
}

void CPrintDaylyReport::closeEvent( QCloseEvent *event )
{
    pParent->ControlChild( event, this );
}

void CPrintDaylyReport::on_btnGenerate_clicked()
{
    QDateTime dtStart = ui->dReportStartDate->dateTime( );
    QDateTime dtEnd = ui->dReportEndDate->dateTime( );
    //QTime time = ui->dReportEndDate->maximumTime( );
    //dtEnd.setTime( time );
    reporter.BuildHtmlDoc( dtStart, dtEnd, ( CommonDataType::ReportType ) nReportType, *ui->wvReport );
}

void CPrintDaylyReport::on_btnPrint_clicked()
{
    reporter.Print( ( CommonDataType::ReportType ) nReportType, *ui->wvReport );
}

void CPrintDaylyReport::on_btnClose_clicked()
{
    close( );
}

void CPrintDaylyReport::on_lblClose_linkActivated(QString)
{
    close( );
}
