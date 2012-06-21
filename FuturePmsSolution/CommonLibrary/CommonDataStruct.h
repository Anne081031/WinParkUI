#ifndef COMMONDATASTRUCT_H
#define COMMONDATASTRUCT_H

#include <QQueue>
#include <QVariant>

namespace MyDataStructs {
    typedef QMultiHash< int, QVariant > QEventMultiHash, *PQEventMultiHash;
    typedef QQueue< QEventMultiHash > QQueueEventParams, *PQQueueEventParams;
}

#endif // COMMONDATASTRUCT_H
