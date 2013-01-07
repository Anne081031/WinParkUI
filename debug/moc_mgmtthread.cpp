/****************************************************************************
** Meta object code from reading C++ file 'mgmtthread.h'
**
** Created: Sun Jan 6 15:52:42 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CenterMgmt/mgmtthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mgmtthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CMgmtThread[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      33,   26,   12,   12, 0x0a,
      52,   12,   12,   12, 0x0a,
      63,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CMgmtThread[] = {
    "CMgmtThread\0\0ThreadExit()\0strMsg\0"
    "NotifyMsg(QString)\0PeerData()\0"
    "UdpPeerData()\0"
};

const QMetaObject CMgmtThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CMgmtThread,
      qt_meta_data_CMgmtThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CMgmtThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CMgmtThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CMgmtThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMgmtThread))
        return static_cast<void*>(const_cast< CMgmtThread*>(this));
    return QThread::qt_metacast(_clname);
}

int CMgmtThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ThreadExit(); break;
        case 1: NotifyMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: PeerData(); break;
        case 3: UdpPeerData(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
