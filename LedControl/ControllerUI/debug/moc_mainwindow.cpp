/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Nov 7 14:10:26 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      32,   11,   11,   11, 0x08,
      56,   11,   11,   11, 0x08,
      80,   11,   11,   11, 0x08,
     106,   11,   11,   11, 0x08,
     125,   11,   11,   11, 0x08,
     151,  144,   11,   11, 0x08,
     182,  174,   11,   11, 0x08,
     210,  174,   11,   11, 0x08,
     245,  174,   11,   11, 0x08,
     281,  275,   11,   11, 0x08,
     316,   11,   11,   11, 0x08,
     349,  338,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_btnSet_clicked()\0"
    "on_btnSaveSet_clicked()\0on_tbnReadSet_clicked()\0"
    "on_btnTestFlash_clicked()\0OnRbModeXClicked()\0"
    "OnRbSyncXClicked()\0nValue\0"
    "OnSpXValueChanged(int)\0checked\0"
    "on_chkDevType_clicked(bool)\0"
    "on_chkLightSensitive_clicked(bool)\0"
    "on_chkBaseLight_clicked(bool)\0index\0"
    "on_cbMode_currentIndexChanged(int)\0"
    "on_btnQuery_clicked()\0data,bSend\0"
    "HandleCmd(QByteArray,bool)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_btnSet_clicked(); break;
        case 1: _t->on_btnSaveSet_clicked(); break;
        case 2: _t->on_tbnReadSet_clicked(); break;
        case 3: _t->on_btnTestFlash_clicked(); break;
        case 4: _t->OnRbModeXClicked(); break;
        case 5: _t->OnRbSyncXClicked(); break;
        case 6: _t->OnSpXValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_chkDevType_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_chkLightSensitive_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_chkBaseLight_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_cbMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_btnQuery_clicked(); break;
        case 12: _t->HandleCmd((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
