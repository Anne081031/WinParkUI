#ifndef DONGLE_H
#define DONGLE_H

#include "Dongle_global.h"
#include <QObject>
#include <QLibrary>
#include <QTimerEvent>
#include <QDate>
#include <windows.h>
#include <QHash>
#include <QStringList>

class DONGLESHARED_EXPORT CDongle : public QObject
{
    Q_OBJECT

public:
    explicit CDongle( QObject* parent = NULL );
    ~CDongle( );

    void SetVerifyDate( bool bVerifyDate );
    void SetDate( QDate& start, QDate& end );
    virtual bool GetHID( QString& strHID ) = 0;
    virtual bool Administrator( ) = 0;
    virtual bool IsAdminHID( QString& strHID ) = 0;
    virtual void Reopen( ) = 0;
    virtual void GetAllHids( QStringList& lstHids ) = 0;
    virtual void GetCurrentDate( QDate& dtDate ) = 0;
#if false
    typedef enum __DongleNotify {
        NotPlug, // 未插上
        NotProviderCompany, // 不是加密狗供应商的
        NotMyBuy, // 不是我公司买的
        DllException,
        MemoryException
    } DongleNotify;
#endif

protected:
    virtual void	timerEvent ( QTimerEvent * event );

    virtual void InitApiPointer( ) = 0;
    virtual void GetApiPointer( ) = 0;
    virtual void DongleDetection(  bool bVerifyDate = true ) = 0;
    virtual void DongleTimerOpen(  ) = 0;

    void MyStartTimer( );

    QDate dateStart;
    QDate dateEnd;
    QLibrary apiLoader;
    bool bVerifyDate;
    QHash< QString, QString > hashAdminHID;

    static const quint32 dwCustomerID;
    static const quint8 bATR[ 16 ];
    static const QString strCustomerSeed;
    const QString strHID;

private:
    qint32 nTimerCheckID;
    qint32 nTimerOpen;

signals:
    void DongleException( QString strMsg, bool bExit, bool bRetry );

private slots:

};

#endif // DONGLE_H
