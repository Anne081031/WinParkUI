#ifndef DLGINCONFORMITY_H
#define DLGINCONFORMITY_H

#include <QDialog>
#include <QLineEdit>
#include <QResizeEvent>

namespace Ui {
    class CDlgInconformity;
}

class CDlgInconformity : public QDialog
{
    Q_OBJECT

public:
    explicit CDlgInconformity( QWidget *parent = 0);
    ~CDlgInconformity();

    void GetInfomation( bool bEnter, QString& strPlate, QString& strCardID, char cCan );

protected:
    void resizeEvent(QResizeEvent * event );
signals:
    void Pass( QString strCardNo, char cCan, QString strPlate);

private:
    void FillCntrl( QStringList& lstRows, bool bCard );

private:
    Ui::CDlgInconformity *ui;
    QLineEdit* edtCntrl[ 2 ][ 5 ];
    char cCanAddr;
    bool bEnter;

private slots:
    void on_btn2_clicked();
    void on_btn1_clicked();
    void on_btn3_clicked();
};

#endif // DLGINCONFORMITY_H
