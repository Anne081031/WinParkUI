/****************************************************************************
** Meta object code from reading C++ file 'publishledinfo.h'
**
** Created: Wed Apr 18 16:46:15 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Header/publishledinfo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'publishledinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CPublishLEDInfo[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      52,   16,   16,   16, 0x08,
      81,   16,   16,   16, 0x08,
     109,   16,   16,   16, 0x08,
     135,   16,   16,   16, 0x08,
     157,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CPublishLEDInfo[] = {
    "CPublishLEDInfo\0\0on_lblClose_linkActivated(QString)\0"
    "on_btnDownloadTime_clicked()\0"
    "on_btnUnselectAll_clicked()\0"
    "on_btnSelectAll_clicked()\0"
    "on_btnClose_clicked()\0on_btnDownload_clicked()\0"
};

const QMetaObject CPublishLEDInfo::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CPublishLEDInfo,
      qt_meta_data_CPublishLEDInfo, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CPublishLEDInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CPublishLEDInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CPublishLEDInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CPublishLEDInfo))
        return static_cast<void*>(const_cast< CPublishLEDInfo*>(this));
    return QFrame::qt_metacast(_clname);
}

int CPublishLEDInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lblClose_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_btnDownloadTime_clicked(); break;
        case 2: on_btnUnselectAll_clicked(); break;
        case 3: on_btnSelectAll_clicked(); break;
        case 4: on_btnClose_clicked(); break;
        case 5: on_btnDownload_clicked(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
