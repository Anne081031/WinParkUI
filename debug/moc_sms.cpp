/****************************************************************************
** Meta object code from reading C++ file 'sms.h'
**
** Created: Fri Feb 1 11:05:01 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SMS/sms.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sms.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CSms[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,    6,    5,    5, 0x05,
      81,   68,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
     114,  106,    5,    5, 0x08,
     145,  135,    5,    5, 0x08,
     178,  160,    5,    5, 0x08,
     219,  197,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CSms[] = {
    "CSms\0\0lstTelNumber,strContent\0"
    "ReceiveMessage(QStringList&,QString&)\0"
    "lstTelNumber\0SendFailed(QStringList&)\0"
    "nStatus\0OnConnectResult(int)\0nMsgCount\0"
    "OnRecvMsg(int)\0nResult,nMsgIndex\0"
    "OnSendMsg(int,int)\0code,source,desc,help\0"
    "HandleException(int,QString,QString,QString)\0"
};

const QMetaObject CSms::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CSms,
      qt_meta_data_CSms, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CSms::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CSms::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CSms::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CSms))
        return static_cast<void*>(const_cast< CSms*>(this));
    return QThread::qt_metacast(_clname);
}

int CSms::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ReceiveMessage((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: SendFailed((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: OnConnectResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: OnRecvMsg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: OnSendMsg((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: HandleException((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CSms::ReceiveMessage(QStringList & _t1, QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CSms::SendFailed(QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
