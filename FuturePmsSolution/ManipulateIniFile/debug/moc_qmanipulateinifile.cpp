/****************************************************************************
** Meta object code from reading C++ file 'qmanipulateinifile.h'
**
** Created: Tue Jul 24 11:44:19 2012
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
       5,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      19, 0x1,    4,   34,
      31, 0x1,    4,   42,
      43, 0x1,    3,   50,
      58, 0x1,   22,   56,
      77, 0x1,    6,  100,

 // enum data: key, value
      85, uint(QManipulateIniFile::PlatformCentralClient),
     107, uint(QManipulateIniFile::PlatformCentralServer),
     129, uint(QManipulateIniFile::PlatformCentralDataReceiver),
     157, uint(QManipulateIniFile::PlatformCount),
     171, uint(QManipulateIniFile::PlatformCentralLogClient),
     196, uint(QManipulateIniFile::PlatformCentralLogServer),
     221, uint(QManipulateIniFile::PlatformCentralLogDataReceiver),
     252, uint(QManipulateIniFile::PlatformLogCount),
     269, uint(QManipulateIniFile::IniDatabase),
     281, uint(QManipulateIniFile::IniNetwork),
     292, uint(QManipulateIniFile::IniThread),
     302, uint(QManipulateIniFile::DatabaseType),
     315, uint(QManipulateIniFile::DatabaseHost),
     328, uint(QManipulateIniFile::DatabasePort),
     341, uint(QManipulateIniFile::DatabaseUser),
     354, uint(QManipulateIniFile::DatabasePwd),
     366, uint(QManipulateIniFile::DatabaseSchema),
     381, uint(QManipulateIniFile::DatabaseThreadpoolMaxThreads),
     410, uint(QManipulateIniFile::DatabaseThreadpoolThreadExpire),
     441, uint(QManipulateIniFile::DatabaseObjectLifeTime),
     464, uint(QManipulateIniFile::DatabaseObjectReleaseInterval),
     494, uint(QManipulateIniFile::NetworkTcpMaxConnection),
     518, uint(QManipulateIniFile::NetworkTcpServerPort),
     539, uint(QManipulateIniFile::NetworkTcpServerIP),
     558, uint(QManipulateIniFile::NetworkUdpServerPort),
     579, uint(QManipulateIniFile::NetworkUdpServerIP),
     598, uint(QManipulateIniFile::NetworkUdpBroadcastPort),
     622, uint(QManipulateIniFile::NetworkMulticastPort),
     643, uint(QManipulateIniFile::NetworkMulticastIP),
     662, uint(QManipulateIniFile::ThreadPeerSocketCount),
     684, uint(QManipulateIniFile::ThreadPeerStackSize),
     704, uint(QManipulateIniFile::ThreadPeerReleaseInterval),
     730, uint(QManipulateIniFile::ThreadPool),
     741, uint(QManipulateIniFile::LogDatabase),
     753, uint(QManipulateIniFile::LogNetwork),
     764, uint(QManipulateIniFile::LogThread),
     774, uint(QManipulateIniFile::LogCfgParam),
     786, uint(QManipulateIniFile::LogOther),
     795, uint(QManipulateIniFile::LogItems),

       0        // eod
};

static const char qt_meta_stringdata_QManipulateIniFile[] = {
    "QManipulateIniFile\0IniFileName\0"
    "LogFileName\0IniFileSection\0"
    "IniFileSectionItem\0LogType\0"
    "PlatformCentralClient\0PlatformCentralServer\0"
    "PlatformCentralDataReceiver\0PlatformCount\0"
    "PlatformCentralLogClient\0"
    "PlatformCentralLogServer\0"
    "PlatformCentralLogDataReceiver\0"
    "PlatformLogCount\0IniDatabase\0IniNetwork\0"
    "IniThread\0DatabaseType\0DatabaseHost\0"
    "DatabasePort\0DatabaseUser\0DatabasePwd\0"
    "DatabaseSchema\0DatabaseThreadpoolMaxThreads\0"
    "DatabaseThreadpoolThreadExpire\0"
    "DatabaseObjectLifeTime\0"
    "DatabaseObjectReleaseInterval\0"
    "NetworkTcpMaxConnection\0NetworkTcpServerPort\0"
    "NetworkTcpServerIP\0NetworkUdpServerPort\0"
    "NetworkUdpServerIP\0NetworkUdpBroadcastPort\0"
    "NetworkMulticastPort\0NetworkMulticastIP\0"
    "ThreadPeerSocketCount\0ThreadPeerStackSize\0"
    "ThreadPeerReleaseInterval\0ThreadPool\0"
    "LogDatabase\0LogNetwork\0LogThread\0"
    "LogCfgParam\0LogOther\0LogItems\0"
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
