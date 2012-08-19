/****************************************************************************
** Meta object code from reading C++ file 'processdata.h'
**
** Created: Sun Aug 19 19:04:07 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SerialPort/processdata.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'processdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CProcessData[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   14,   13,   13, 0x05,
      93,   67,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     156,  132,   13,   13, 0x08,
     207,  199,   13,   13, 0x08,
     274,  235,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CProcessData[] = {
    "CProcessData\0\0byData,nMinor\0"
    "OnResponseUserRequest(QByteArray&,int)\0"
    "nChannel,lstData,strPlate\0"
    "PlateDelivery(int,QStringList,QString)\0"
    "strCardNo,cCan,strPlate\0"
    "PlateCardComfirmPass(QString,char,QString)\0"
    "lstData\0HandleWeighing(QStringList)\0"
    "byData,vData,nMin,nHour,nAmount,bEnter\0"
    "SendTimeCardInfo(QByteArray&,QByteArray&,int,int,int,bool)\0"
};

const QMetaObject CProcessData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CProcessData,
      qt_meta_data_CProcessData, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CProcessData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CProcessData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CProcessData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CProcessData))
        return static_cast<void*>(const_cast< CProcessData*>(this));
    return QObject::qt_metacast(_clname);
}

int CProcessData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: OnResponseUserRequest((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: PlateDelivery((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: PlateCardComfirmPass((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: HandleWeighing((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: SendTimeCardInfo((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CProcessData::OnResponseUserRequest(QByteArray & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CProcessData::PlateDelivery(int _t1, QStringList _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
