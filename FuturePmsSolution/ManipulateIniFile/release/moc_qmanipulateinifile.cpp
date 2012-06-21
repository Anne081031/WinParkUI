/****************************************************************************
** Meta object code from reading C++ file 'qmanipulateinifile.h'
**
** Created: Thu Jun 21 17:15:49 2012
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
       3,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      19, 0x1,    3,   26,
      34, 0x1,    7,   32,
      53, 0x1,    5,   46,

 // enum data: key, value
      61, uint(QManipulateIniFile::IniDatabase),
      73, uint(QManipulateIniFile::IniNetwork),
      84, uint(QManipulateIniFile::IniThreadPool),
      98, uint(QManipulateIniFile::DatabaseHost),
     111, uint(QManipulateIniFile::DatabasePort),
     124, uint(QManipulateIniFile::DatabaseUser),
     137, uint(QManipulateIniFile::DatabasePwd),
     149, uint(QManipulateIniFile::NetworkTcpServerPort),
     170, uint(QManipulateIniFile::NetworkTcpMaxConnection),
     194, uint(QManipulateIniFile::ThreadPool),
     205, uint(QManipulateIniFile::LogDatabase),
     217, uint(QManipulateIniFile::LogNetwork),
     228, uint(QManipulateIniFile::LogThread),
     238, uint(QManipulateIniFile::LogOther),
     247, uint(QManipulateIniFile::LogItems),

       0        // eod
};

static const char qt_meta_stringdata_QManipulateIniFile[] = {
    "QManipulateIniFile\0IniFileSection\0"
    "IniFileSectionItem\0LogType\0IniDatabase\0"
    "IniNetwork\0IniThreadPool\0DatabaseHost\0"
    "DatabasePort\0DatabaseUser\0DatabasePwd\0"
    "NetworkTcpServerPort\0NetworkTcpMaxConnection\0"
    "ThreadPool\0LogDatabase\0LogNetwork\0"
    "LogThread\0LogOther\0LogItems\0"
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
