/****************************************************************************
** Meta object code from reading C++ file 'qmanipulateinifile.h'
**
** Created: Fri Jun 15 17:29:27 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmanipulateinifile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmanipulateinifile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QManipulateIniFile[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      19, 0x1,    3,   22,
      34, 0x1,    5,   28,

 // enum data: key, value
      53, uint(QManipulateIniFile::PlatformServer),
      68, uint(QManipulateIniFile::PlatformClient),
      83, uint(QManipulateIniFile::PlatformDataReceiver),
     104, uint(QManipulateIniFile::DatabaseHost),
     117, uint(QManipulateIniFile::DatabasePort),
     130, uint(QManipulateIniFile::DatabaseUser),
     143, uint(QManipulateIniFile::DatabasePwd),
     155, uint(QManipulateIniFile::ThreadPool),

       0        // eod
};

static const char qt_meta_stringdata_QManipulateIniFile[] = {
    "QManipulateIniFile\0CfgFileSection\0"
    "CfgFileSectionItem\0PlatformServer\0"
    "PlatformClient\0PlatformDataReceiver\0"
    "DatabaseHost\0DatabasePort\0DatabaseUser\0"
    "DatabasePwd\0ThreadPool\0"
};

void QManipulateIniFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QManipulateIniFile::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QManipulateIniFile::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QManipulateIniFile,
      qt_meta_data_QManipulateIniFile, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QManipulateIniFile::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QManipulateIniFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QManipulateIniFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QManipulateIniFile))
        return static_cast<void*>(const_cast< QManipulateIniFile*>(this));
    return QObject::qt_metacast(_clname);
}

int QManipulateIniFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
