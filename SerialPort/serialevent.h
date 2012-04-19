#ifndef SERIALEVENT_H
#define SERIALEVENT_H

#include <QEvent>
#include <QByteArray>

class CSerialEvent : public QEvent
{
public:
    CSerialEvent( Type event );

    void SetSerialData( const QByteArray& byData );
    QByteArray& GetSerialData( );

private:
    QByteArray bySerialData;
};

#endif // SERIALEVENT_H
