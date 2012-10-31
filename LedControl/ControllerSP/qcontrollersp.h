#ifndef QCONTROLLERSP_H
#define QCONTROLLERSP_H

#include <QObject>
#include "ControllerSP_global.h"
#include "qextserialport/win_qextserialport.h"
#include "../ControllerCommon/CommonHead.h"

class CONTROLLERSPSHARED_EXPORT QControllerSP : public QObject {
    Q_OBJECT

public:
    QControllerSP( QObject* parent = 0 );

    bool IsOpened( );
    bool OpenPort( );
    void ClosePort( );
    void ConfigPort( const LedControll::SComConfig& sConfig );

    qint64 WriteData( QByteArray& data, const bool bThread = false );

private:
    BaudRateType GetBaud( quint8 nIndex );
    DataBitsType GetDataBit( quint8 nIndex );
    StopBitsType GetStopBit( quint8 nIndex );
    ParityType GetParity( quint8 nIndex );
    FlowType GetFlow( quint8 nIndex );

private:
    Win_QextSerialPort winPort;

signals:
    void Data( QByteArray data );

public slots:

private slots:
    void ReceiveData( );
};

#endif // QCONTROLLERSP_H
