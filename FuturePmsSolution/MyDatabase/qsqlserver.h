#ifndef QSQLSERVER_H
#define QSQLSERVER_H

#include "qmydatabase.h"

class QSqlServer : public QMyDatabase
{
    Q_OBJECT
public:
    explicit QSqlServer(QObject *parent = 0);
    virtual ~QSqlServer( );
    
signals:
    
public slots:
    
};

#endif // QSQLSERVER_H
