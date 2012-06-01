#ifndef DLGSTAYING_H
#define DLGSTAYING_H

#include <QDialog>
#include <QTableWidget>
#include "../Header/printyearlyreport.h"

namespace Ui {
class CDlgStaying;
}

class CDlgStaying : public QDialog
{
    Q_OBJECT
    
public:
    explicit CDlgStaying(QWidget *parent = 0);
    ~CDlgStaying();

private slots:
    void on_tableWidgetMonth_cellClicked(int row, int column);

    void on_tableWidgetTime_cellClicked(int row, int column);

    void on_tabWidget_currentChanged(int index);

private:
    void GetData( );
    void FillTable( QStringList& lstData, QTableWidget* pTable, int nRows );
    void DisplayPic( QTableWidget* pWidget, int nRow, int nCol );
    void SetFrameVisble( bool bVisible );
    
private:
    Ui::CDlgStaying *ui;
    CPrintYearlyReport* pFrmDisplayPic;
    bool bHistory;
};

#endif // DLGSTAYING_H
