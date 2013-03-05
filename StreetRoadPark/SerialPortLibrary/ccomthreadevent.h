#ifndef CCOMTHREADEVENT_H
#define CCOMTHREADEVENT_H

#include <QEvent>
#include <QDebug>
#include <QGuiApplication>

class CComThreadEvent : public QEvent
{
public:

    typedef enum __ThreadType {
        ThreadSender,
        ThreadReceiver,
        ThreadParser
    } ThreadType;

    typedef enum __EventType {
        EventOpenPort = User,
        EventClosePort,
        EventSendData,
        EventParseData
    } EventType;

    static CComThreadEvent* CreateThreadEvent( ThreadType thrType, EventType evtType );

    void SetPortName( const QString& strCOMx );
    const QString& GetPortName( ) const;

    void SetByteArrayData( QByteArray& byData );
    QByteArray& GetByteArrayData( );

private:
    CComThreadEvent( ThreadType thrType, Type evtType );
    ThreadType typeThread;
    EventType typeEvent;

    QString strCOM;
    QByteArray byByteArrayData;
};

#endif // CCOMTHREADEVENT_H
