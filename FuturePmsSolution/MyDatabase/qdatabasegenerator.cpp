#include "qdatabasegenerator.h"
QDatabaseGenerator* QDatabaseGenerator::pGenerator = NULL;

QDatabaseGenerator::QDatabaseGenerator(QObject *parent) :
    QObject(parent)
{
}

QDatabaseGenerator* QDatabaseGenerator::GetSingleton( )
{
    if ( NULL == pGenerator ) {
        pGenerator = new QDatabaseGenerator( );
    }

    return pGenerator;
}

QMyDatabase* QDatabaseGenerator::GeneratorDatabaseInstance( bool bSQLServer )
{
    QMyDatabase* pDatabase = NULL;

    if ( bSQLServer ) {
        pDatabase = QSqlServer::GetInstance( );
    }

    return pDatabase;
}
