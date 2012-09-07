/****************************************************************************
** Meta object code from reading C++ file 'RdAutoDeleteThread.h'
**
** Created: Fri Sep 7 15:37:10 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DbBackup/RdAutoDeleteThread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RdAutoDeleteThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRdAutoDeleteThread[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CRdAutoDeleteThread[] = {
    "CRdAutoDeleteThread\0\0ExitThread()\0"
};

const QMetaObject CRdAutoDeleteThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CRdAutoDeleteThread,
      qt_meta_data_CRdAutoDeleteThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRdAutoDeleteThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRdAutoDeleteThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRdAutoDeleteThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRdAutoDeleteThread))
        return static_cast<void*>(const_cast< CRdAutoDeleteThread*>(this));
    return QThread::qt_metacast(_clname);
}

int CRdAutoDeleteThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ExitThread(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
