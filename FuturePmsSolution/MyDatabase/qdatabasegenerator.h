#ifndef QDATABASSEGENERATOR_H
#define QDATABASSEGENERATOR_H

#include <QObject>
#include "qsqlserver.h"
#include "MyDatabase_global.h"

class MYDATABASESHARED_EXPORT QDatabaseGenerator : public QObject
{
    Q_OBJECT
public:
    static QDatabaseGenerator* GetSingleton( );

    QMyDatabase* GeneratorDatabaseInstance( bool bSQLServer );

protected:
    explicit QDatabaseGenerator(QObject *parent = 0);

private:
    static QDatabaseGenerator* pGenerator;
    
signals:
    
public slots:
    
};

#endif // QDATABASSEGENERATOR_H
