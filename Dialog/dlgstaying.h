#ifndef DLGSTAYING_H
#define DLGSTAYING_H

#include <QDialog>
#include <QTableWidget>

namespace Ui {
class CDlgStaying;
}

class CDlgStaying : public QDialog
{
    Q_OBJECT
    
public:
    explicit CDlgStaying(QWidget *parent = 0);
    ~CDlgStaying();

private:
    void GetData( );
    void FillTable( QStringList& lstData, QTableWidget* pTable, int nRows );
    
private:
    Ui::CDlgStaying *ui;
};

#endif // DLGSTAYING_H
