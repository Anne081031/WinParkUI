#ifndef SYSLOG_H
#define SYSLOG_H

#include <QFrame>
#include <QCloseEvent>
#include <QResizeEvent>
#include "mainwindow.h"

namespace Ui {
    class CSysLog;
}

class CSysLog : public QFrame
{
    Q_OBJECT

public:
    explicit CSysLog( QWidget* mainWnd, QWidget *parent = 0);
    ~CSysLog();

protected:
    void  closeEvent ( QCloseEvent * event );
    void resizeEvent( QResizeEvent * );
    void CalculatePos( );

private:
    void ControlDataGrid( );
    void GetImage( CommonDataType::BlobType blob, int nRow );
    void ClearImage( );

private:
    Ui::CSysLog *ui;
    MainWindow* pParent;
    QHash< CommonDataType::BlobType, QLabel*> hashScaleImage;

private slots:
    void on_lblClose_linkActivated(QString );
    void on_btnMinimalize_clicked();
    void on_tabWidget_currentChanged(int index);
    void on_tableManualGate_cellClicked(int row, int column);
    void on_btnQuery_clicked();
};

#endif // SYSLOG_H
