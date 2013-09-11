/****************************************************************************
** Meta object code from reading C++ file 'syslog.h'
**
** Created: Wed Sep 11 11:57:50 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Header/syslog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syslog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CSysLog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      44,    8,    8,    8, 0x08,
      77,   71,    8,    8, 0x08,
     121,  110,    8,    8, 0x08,
     161,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CSysLog[] = {
    "CSysLog\0\0on_lblClose_linkActivated(QString)\0"
    "on_btnMinimalize_clicked()\0index\0"
    "on_tabWidget_currentChanged(int)\0"
    "row,column\0on_tableManualGate_cellClicked(int,int)\0"
    "on_btnQuery_clicked()\0"
};

const QMetaObject CSysLog::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CSysLog,
      qt_meta_data_CSysLog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CSysLog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CSysLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CSysLog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CSysLog))
        return static_cast<void*>(const_cast< CSysLog*>(this));
    return QFrame::qt_metacast(_clname);
}

int CSysLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lblClose_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_btnMinimalize_clicked(); break;
        case 2: on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_tableManualGate_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: on_btnQuery_clicked(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
