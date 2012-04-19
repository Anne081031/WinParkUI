#ifndef DLGGARAGEINGARAGE_H
#define DLGGARAGEINGARAGE_H

#include <QDialog>
#include <QResizeEvent>

namespace Ui {
    class CDlgGarageInGarage;
}

class CDlgGarageInGarage : public QDialog
{
    Q_OBJECT

public:
    explicit CDlgGarageInGarage(QWidget *parent = 0);
    ~CDlgGarageInGarage();

    bool FillTable( QString& strCardID );

protected:
    void resizeEvent(QResizeEvent *);

private:
    Ui::CDlgGarageInGarage *ui;

private slots:
    void on_lblClose_linkActivated(QString );
};

#endif // DLGGARAGEINGARAGE_H
