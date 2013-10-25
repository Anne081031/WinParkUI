/****************************************************************************
** Meta object code from reading C++ file 'qplatethread.h'
**
** Created: Fri Oct 18 10:03:52 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Thread/qplatethread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatethread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPlateThread[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      53,   14,   13,   13, 0x05,
     193,   92,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     273,   14,   13,   13, 0x08,
     318,   92,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QPlateThread[] = {
    "QPlateThread\0\0lstPlateParam,nChannel,bSuccess,bVideo\0"
    "PlateResult(QStringList,int,bool,bool)\0"
    "strPlate,nChannel,bSuccess,bVideo,nWidth,nHeight,nConfidence,strDirect"
    "ion,byData,rectPlate,rectVideo\0"
    "UIPlateResult(QString,int,bool,bool,int,int,int,QString,QByteArray,QRe"
    "ct,QRect)\0"
    "HandlePlateResult(QStringList,int,bool,bool)\0"
    "HandleUIPlateResult(QString,int,bool,bool,int,int,int,QString,QByteArr"
    "ay,QRect,QRect)\0"
};

const QMetaObject QPlateThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QPlateThread,
      qt_meta_data_QPlateThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPlateThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPlateThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPlateThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPlateThread))
        return static_cast<void*>(const_cast< QPlateThread*>(this));
    return QThread::qt_metacast(_clname);
}

int QPlateThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: PlateResult((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 1: UIPlateResult((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< QByteArray(*)>(_a[9])),(*reinterpret_cast< QRect(*)>(_a[10])),(*reinterpret_cast< QRect(*)>(_a[11]))); break;
        case 2: HandlePlateResult((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: HandleUIPlateResult((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< QByteArray(*)>(_a[9])),(*reinterpret_cast< QRect(*)>(_a[10])),(*reinterpret_cast< QRect(*)>(_a[11]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QPlateThread::PlateResult(QStringList _t1, int _t2, bool _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlateThread::UIPlateResult(QString _t1, int _t2, bool _t3, bool _t4, int _t5, int _t6, int _t7, QString _t8, QByteArray _t9, QRect _t10, QRect _t11)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
