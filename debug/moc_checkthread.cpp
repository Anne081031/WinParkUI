/****************************************************************************
** Meta object code from reading C++ file 'checkthread.h'
**
** Created: Thu Jul 18 15:22:52 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../License/checkthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checkthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CCheckThread[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,   13,   13,   13, 0x08,
     109,   89,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CCheckThread[] = {
    "CCheckThread\0\0strMsg,bExpiration,bRetry\0"
    "ExpirationSender(QString,bool,bool)\0"
    "ExitThread()\0strMsg,bExit,bRetry\0"
    "DongleException(QString,bool,bool)\0"
};

const QMetaObject CCheckThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CCheckThread,
      qt_meta_data_CCheckThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CCheckThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CCheckThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CCheckThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CCheckThread))
        return static_cast<void*>(const_cast< CCheckThread*>(this));
    return QThread::qt_metacast(_clname);
}

int CCheckThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ExpirationSender((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: ExitThread(); break;
        case 2: DongleException((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CCheckThread::ExpirationSender(QString _t1, bool _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
