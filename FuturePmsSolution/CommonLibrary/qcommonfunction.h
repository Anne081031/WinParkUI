#ifndef QCOMMONFUNCTION_H
#define QCOMMONFUNCTION_H

#include "QCommonFunction_global.h"

class QCOMMONFUNCTIONSHARED_EXPORT QCommonFunction : public QObject
{
    Q_OBJECT
public:
    explicit QCommonFunction(QObject *parent = 0);
    virtual ~QCommonFunction( );

    enum PathType {
        Images,
        Config,
        Logs
    };

    Q_DECLARE_FLAGS( PathTypes, PathType )
    Q_FLAGS( PathType )

public:
    void GetPath( QString& strPath, const PathTypes type );

private:
    void MakePath( const QString& strPath );
    
signals:
    
public slots:
    
};

#endif // QCOMMONFUNCTION_H
