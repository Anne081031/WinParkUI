/****************************************************************************
** Meta object code from reading C++ file 'http.h'
**
** Created: Fri Apr 27 12:19:47 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Network/http.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'http.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CHttp[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,    7,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,    6,    6,    6, 0x08,
      58,   52,    6,    6, 0x08,
      87,    6,    6,    6, 0x08,
     108,  103,    6,    6, 0x08,
     172,  147,    6,    6, 0x08,
     224,  203,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CHttp[] = {
    "CHttp\0\0strMsg\0NotifyMessage(QString)\0"
    "GetReplyData()\0reply\0MngrFinished(QNetworkReply*)\0"
    "ReplyFinished()\0code\0"
    "HttpError(QNetworkReply::NetworkError)\0"
    "bytesReceived,bytesTotal\0"
    "DownloadProcess(qint64,qint64)\0"
    "bytesSent,bytesTotal\0UploadProcess(qint64,qint64)\0"
};

const QMetaObject CHttp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CHttp,
      qt_meta_data_CHttp, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CHttp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CHttp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CHttp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CHttp))
        return static_cast<void*>(const_cast< CHttp*>(this));
    return QObject::qt_metacast(_clname);
}

int CHttp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: NotifyMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: GetReplyData(); break;
        case 2: MngrFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: ReplyFinished(); break;
        case 4: HttpError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 5: DownloadProcess((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: UploadProcess((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CHttp::NotifyMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
