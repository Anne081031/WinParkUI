#ifndef QDLGCONFIG_H
#define QDLGCONFIG_H

#include <QDialog>

namespace Ui {
class QDlgConfig;
}

class QDlgConfig : public QDialog
{
    Q_OBJECT
    
public:
    explicit QDlgConfig(QWidget *parent = 0);
    ~QDlgConfig();

private:
    void ReadConfig( );
    void WriteConfig( );
    
private slots:
    void on_btnOK_clicked();

    void on_btnCancel_clicked();

private:
    Ui::QDlgConfig *ui;
};

#endif // QDLGCONFIG_H
