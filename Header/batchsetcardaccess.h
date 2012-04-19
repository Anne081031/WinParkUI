#ifndef BATCHSETCARDACCESS_H
#define BATCHSETCARDACCESS_H

#include <QFrame>
#include <QCloseEvent>
#include <QResizeEvent>
#include "mainwindow.h"

namespace Ui {
    class CBatchSetCardAccess;
}

class CBatchSetCardAccess : public QFrame
{
    Q_OBJECT

public:
    explicit CBatchSetCardAccess( QWidget* mainWnd, QWidget *parent = 0);
    ~CBatchSetCardAccess();

protected:
    void  closeEvent ( QCloseEvent * event );
    void showEvent(QShowEvent *);
    void resizeEvent( QResizeEvent * );
    void CalculatePos( );

private:

    void SelectAllCards( QTableWidget* pTable, bool bAll );
    void SelectTable( bool bAll );
    void SetTimeValue( bool bAllTime );
    void GetData( QStringList& lstData, QTableWidget& table );
    void FillTable( QTableWidget* table, QString& strSql, int nCols );
    void DisplayData( int nIndex );

private:
    Ui::CBatchSetCardAccess *ui;
    MainWindow* pParent;

private slots:
    void on_btnAllUnselected_2_clicked();
    void on_btnAllSecleted_2_clicked();
    void on_lblClose_linkActivated(QString);
    void on_tableWidget_currentChanged(int index);
    void on_btnMinimalize_clicked();
    void on_btnAllSecleted_clicked( );
    void on_btnAllUnselected_clicked( );
    void on_btnOk_clicked( );
    void on_btnAllTime_clicked( );
    void on_btnForbidden_clicked( );
};

#endif // BATCHSETCARDACCESS_H
