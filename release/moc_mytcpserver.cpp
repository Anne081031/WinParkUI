/****************************************************************************
** Meta object code from reading C++ file 'mytcpserver.h'
**
** Created: Fri Sep 7 15:37:28 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Network/mytcpserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CMyTcpServer[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   13,   13,   13, 0x0a,
      56,   13,   13,   13, 0x0a,
      68,   13,   13,   13, 0x0a,
      96,   84,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CMyTcpServer[] = {
    "CMyTcpServer\0\0NotifyMessage(QString)\0"
    "HandleDisconnect()\0GetStream()\0"
    "GetMgmtStream()\0socketError\0"
    "TcpError(QAbstractSocket::SocketError)\0"
};

const QMetaObject CMyTcpServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_CMyTcpServer,
      qt_meta_data_CMyTcpServer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CMyTcpServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CMyTcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CMyTcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMyTcpServer))
        return static_cast<void*>(const_cast< CMyTcpServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int CMyTcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: NotifyMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: HandleDisconnect(); break;
        case 2: GetStream(); break;
        case 3: GetMgmtStream(); break;
        case 4: TcpError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CMyTcpServer::NotifyMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
