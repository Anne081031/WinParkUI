/****************************************************************************
** Meta object code from reading C++ file 'localsvrcommunication.h'
**
** Created: Thu Sep 12 12:38:09 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Network/localsvrcommunication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'localsvrcommunication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CLocalSvrCommunication[] = {

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
      31,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   23,   23,   23, 0x08,
      60,   23,   23,   23, 0x08,
      79,   23,   23,   23, 0x08,
     104,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CLocalSvrCommunication[] = {
    "CLocalSvrCommunication\0\0strMsg\0"
    "NotifyMsg(QString)\0GetData()\0"
    "AcceptConnection()\0HandleServerDisconnect()\0"
    "SocketError(QLocalSocket::LocalSocketError)\0"
};

const QMetaObject CLocalSvrCommunication::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CLocalSvrCommunication,
      qt_meta_data_CLocalSvrCommunication, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CLocalSvrCommunication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CLocalSvrCommunication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CLocalSvrCommunication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CLocalSvrCommunication))
        return static_cast<void*>(const_cast< CLocalSvrCommunication*>(this));
    return QObject::qt_metacast(_clname);
}

int CLocalSvrCommunication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: NotifyMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: GetData(); break;
        case 2: AcceptConnection(); break;
        case 3: HandleServerDisconnect(); break;
        case 4: SocketError((*reinterpret_cast< QLocalSocket::LocalSocketError(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CLocalSvrCommunication::NotifyMsg(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
