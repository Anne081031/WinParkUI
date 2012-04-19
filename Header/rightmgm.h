#ifndef RIGHTMGM_H
#define RIGHTMGM_H

#include <QFrame>
#include <QCloseEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include "mainwindow.h"

namespace Ui {
    class CRightMgm;
}

class CRightMgm : public QFrame
{
    Q_OBJECT

public:
    explicit CRightMgm( QWidget* mainWnd, QWidget *parent = 0);
    ~CRightMgm();

protected:
    void closeEvent ( QCloseEvent * event );
    void resizeEvent ( QResizeEvent * );
    void showEvent ( QShowEvent *  );
    void CalculatePos( );

private:
    void ShowDialog( bool bNew );
    void FillTable( QTableWidget* pTableWidget, QString& strWhere );
    void GetWhere( QString& strWhere, bool bUpdate = false, QString strUser = "" );
    bool SameUser( QString& strUser );

    inline bool IsAdministrator( );

private:
    Ui::CRightMgm *ui;
    MainWindow* pParent;

private slots:
    void on_lblClose_linkActivated(QString);
    void on_btnNew_clicked( );
    void  on_btnDelete_clicked( );
    void on_btnExit_clicked( );
    void on_btnEdit_clicked( );
    void on_tableRight_cellDoubleClicked( int, int );
};

#endif // RIGHTMGM_H
