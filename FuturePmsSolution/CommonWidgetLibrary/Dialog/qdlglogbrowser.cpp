#include "Dialog\qdlglogbrowser.h"
#include "ui_qdlglogbrowser.h"
#include <QDateEdit>
#include <QTextEdit>
#include <QDebug>

QDlgLogBrowser::QDlgLogBrowser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QDlgLogBrowser)
{
    ui->setupUi(this);
    Initialize( );
}

QDlgLogBrowser::~QDlgLogBrowser()
{
    delete ui;
}

void QDlgLogBrowser::Initialize( )
{
    ui->splitter->setParent( NULL );
    QString strTitle = "��־���";
    ui->splitter->setWindowTitle( strTitle );

    BuildTree( );
}

void QDlgLogBrowser::BuildTree( )
{
    QList< QTreeWidgetItem* > lstItems;
    QTreeWidgetItem* pItem = NULL;
    QString strTexts[ ] = { "���ݿ���־", "������־", "�߳�", "������־"  };
    QDateEdit* pDateEdit = NULL;

    for ( int nIndex = 0; nIndex < QManipulateIniFile::LogItems; nIndex++ ) {
        pItem = new QTreeWidgetItem( );
        pItem->setText( 0, strTexts[ nIndex ] );
        pItem->setData( 0, Qt::UserRole, nIndex );
        lstItems << pItem;
    }

    ui->treeWidget->addTopLevelItems( lstItems );

    for ( int nIndex = 0; nIndex < lstItems.count( ); nIndex++ ) {
        pDateEdit = new QDateEdit(  );
        pDateEdit->setDate( QDate::currentDate( ) );
        pDateEdit->setAutoFillBackground( true );
        pDateEdit->setCalendarPopup( true );
        pDateEdit->setDisplayFormat( "yyyy-MM-dd" );
        ui->treeWidget->setItemWidget( lstItems.at( nIndex ), 1, pDateEdit );
    }
}

void QDlgLogBrowser::FreeItemWidget( )
{
    int nRows = ui->tableWidget->rowCount( );
    QWidget* pWidget = NULL;

    for ( int nIndex = nRows - 1; nIndex >= 0; nIndex-- ) {
        pWidget = ui->tableWidget->cellWidget( nIndex, 0 );
        ui->tableWidget->removeCellWidget( nIndex, 0 );
        delete pWidget;

        ui->tableWidget->removeRow( nIndex );
    }
}

void QDlgLogBrowser::ReadLog( const QManipulateIniFile::LogTypes type, const QString& strDate )
{
    QStringList lstLogs;
    QString strPath;

    commonFunction.GetPath( strPath, QCommonFunction::PathLogs );
    strPath += strDate;
    manipulateFile.ReadLogFile( type, strPath, lstLogs );

    FreeItemWidget( );
    ui->tableWidget->setRowCount( lstLogs.count( ) );
    int nRow = 0;

    QTextEdit* pTextEdit = NULL;
    QString shtHtml = "<html><body><p>%1</p></body></html>";
    QString strTmpHtml;

    foreach ( const QString& str, lstLogs ) {
        strTmpHtml = shtHtml.arg( str );
        strTmpHtml.replace( "\n", "<br>" );
        pTextEdit = new QTextEdit( strTmpHtml );
        pTextEdit->setAcceptRichText( true );
        pTextEdit->setReadOnly( true );
        ui->tableWidget->setCellWidget( nRow, 0, pTextEdit );

        nRow++;
    }
}

void QDlgLogBrowser::BrowseLog( )
{
    ui->splitter->setWindowState( Qt::WindowMaximized );
    ui->splitter->show( );
}

void QDlgLogBrowser::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    int nData = item->data( column, Qt::UserRole ).toInt( );
    QTreeWidget* pTreeWidget = qobject_cast< QTreeWidget* >( sender( ) );
    QDateEdit* pDateEdit = qobject_cast< QDateEdit* >( pTreeWidget->itemWidget( item, 1 ) );
    QString strDate = pDateEdit->text( );

    ReadLog( ( QManipulateIniFile::LogTypes ) nData, strDate );
}
