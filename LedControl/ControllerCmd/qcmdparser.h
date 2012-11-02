#ifndef QCMDPARSER_H
#define QCMDPARSER_H

#include <QObject>

class QCmdParser : public QObject
{
    Q_OBJECT
public:
    explicit QCmdParser(QObject *parent = 0);
    virtual ~QCmdParser( );
    
signals:
    
public slots:
    
};

#endif // QCMDPARSER_H
