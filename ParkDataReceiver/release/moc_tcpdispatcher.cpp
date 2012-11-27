/****************************************************************************
** Meta object code from reading C++ file 'tcpdispatcher.h'
**
** Created: Tue Nov 27 14:19:58 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Network/tcpdispatcher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpdispatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CTcpDispatcher[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   16,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CTcpDispatcher[] = {
    "CTcpDispatcher\0\0strMsg\0NotifyMessage(QString)\0"
    "HandleMessage(QString)\0"
};

const QMetaObject CTcpDispatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CTcpDispatcher,
      qt_meta_data_CTcpDispatcher, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CTcpDispatcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CTcpDispatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CTcpDispatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CTcpDispatcher))
        return static_cast<void*>(const_cast< CTcpDispatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int CTcpDispatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: NotifyMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: HandleMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CTcpDispatcher::NotifyMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
