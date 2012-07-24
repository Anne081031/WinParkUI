#ifndef QMYDATABASE_H
#define QMYDATABASE_H

#include "MyDatabase_global.h"
#include "../CommonLibrary/CommonDataStruct.h"

class MYDATABASESHARED_EXPORT QMyDatabase : public QObject
{
    Q_OBJECT // qmake Command
public:
    explicit QMyDatabase(QObject *parent = 0);
    virtual ~QMyDatabase( );

    void SetDatabaseParams( MyDataStructs::QParamMultiHash& hashParam );
    void SetEnqueueStartMinute(  );
    void SetLifeTime( quint32 nTime );
    bool MayRelease( );

private:
    inline quint64 GetCurrentMinute( );

private:
    MyDataStructs::QParamMultiHash hashDatabaseParams;
    quint64 nEnqueueStartMinute;
    quint32 nLifeTime;

signals:

public slots:

};

#endif // QMYDATABASE_H
