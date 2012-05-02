/****************************************************************************
** Meta object code from reading C++ file 'ftp.h'
**
** Created: Fri Apr 27 18:46:34 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Network/ftp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ftp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CFtp[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      30,   19,    5,    5, 0x08,
      62,   55,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CFtp[] = {
    "CFtp\0\0ThreadExit()\0nId,bError\0"
    "FtpCmdFinished(int,bool)\0nState\0"
    "StateChanged(int)\0"
};

const QMetaObject CFtp::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CFtp,
      qt_meta_data_CFtp, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CFtp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CFtp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CFtp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CFtp))
        return static_cast<void*>(const_cast< CFtp*>(this));
    return QThread::qt_metacast(_clname);
}

int CFtp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ThreadExit(); break;
        case 1: FtpCmdFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: StateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
