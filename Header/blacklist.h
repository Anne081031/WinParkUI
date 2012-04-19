#ifndef BLACKLIST_H
#define BLACKLIST_H

#include <QFrame>
#include <QCloseEvent>
#include <QResizeEvent>
#include "mainwindow.h"

namespace Ui {
    class CBlacklist;
}

class CBlacklist : public QFrame
{
    Q_OBJECT

public:
    explicit CBlacklist( QWidget* mainWnd, QWidget *parent = 0);
    ~CBlacklist();

protected:
    void  closeEvent ( QCloseEvent * event );
    void resizeEvent( QResizeEvent * );
    void CalculatePos( );

private:

    void ControlButton( bool bEnabled );
    void AssignValue( bool bToTable, int nRowIndex );
    void EnableControl( bool bEnabled );
    void FillTable( );
    void SaveData( int nType );

private:
    Ui::CBlacklist *ui;
    MainWindow* pParent;
    int nOperate; // 0 Add , 1 Delete , 2 Modify

private slots:
    void on_lblClose_linkActivated(QString);
    void on_btnMinimalize_clicked();
    void on_btnAdd_clicked( );
    void on_btnDelete_clicked( );
    void on_btnModify_clicked( );
    void on_btnOk_clicked( );
    void on_btnCancel_clicked( );
    void on_tableBlacklist_cellClicked ( int row, int column );
};

#endif // BLACKLIST_H
