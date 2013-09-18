/****************************************************************************
** Meta object code from reading C++ file 'blacklistmainwindow.h'
**
** Created: Wed Sep 18 16:10:22 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../blacklistmainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blacklistmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BlacklistMainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      56,   21,   20,   20, 0x08,
     101,   20,   20,   20, 0x08,
     128,   20,   20,   20, 0x08,
     152,   20,   20,   20, 0x08,
     177,   20,   20,   20, 0x08,
     216,  205,   20,   20, 0x08,
     251,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BlacklistMainWindow[] = {
    "BlacklistMainWindow\0\0"
    "lstResult,nChannel,bSuccess,bVideo\0"
    "HandlePlateResult(QStringList,int,bool,bool)\0"
    "on_btnSingleFile_clicked()\0"
    "on_btnPreFile_clicked()\0"
    "on_btnNextFile_clicked()\0"
    "on_actBlacklist_triggered()\0row,column\0"
    "on_tableAlert_cellClicked(int,int)\0"
    "on_actParameter_triggered()\0"
};

const QMetaObject BlacklistMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BlacklistMainWindow,
      qt_meta_data_BlacklistMainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BlacklistMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BlacklistMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BlacklistMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BlacklistMainWindow))
        return static_cast<void*>(const_cast< BlacklistMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BlacklistMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: HandlePlateResult((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 1: on_btnSingleFile_clicked(); break;
        case 2: on_btnPreFile_clicked(); break;
        case 3: on_btnNextFile_clicked(); break;
        case 4: on_actBlacklist_triggered(); break;
        case 5: on_tableAlert_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: on_actParameter_triggered(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
