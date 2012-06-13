#ifndef QMYDATABASE_H
#define QMYDATABASE_H

#include "MyDatabase_global.h"

class MYDATABASESHARED_EXPORT QMyDatabase : public QObject
{
    Q_OBJECT // qmake Command
public:
    explicit QMyDatabase(QObject *parent = 0);
    virtual ~QMyDatabase( );

signals:

public slots:

};

#endif // QMYDATABASE_H
