/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Jul 16 12:24:06 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   12,   11,   11, 0x08,
     109,   92,   11,   11, 0x08,
     157,  141,   11,   11, 0x08,
     208,  191,   11,   11, 0x08,
     235,   11,   11,   11, 0x08,
     267,  256,   11,   11, 0x08,
     301,   11,   11,   11, 0x08,
     323,   11,   11,   11, 0x08,
     352,   11,   11,   11, 0x08,
     382,   11,   11,   11, 0x08,
     408,   11,   11,   11, 0x08,
     442,   11,   11,   11, 0x08,
     473,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0lstResult,nChannel,bSuccess,bVideo\0"
    "HandlePlateResult(QStringList,int,bool,bool)\0"
    "strFile,nChannel\0HandleCaptureImage(QString,int)\0"
    "strMsg,bSuccess\0HandleNotifyMessage(QString,bool)\0"
    "nChannel,bMotion\0HandleDetectInfo(int,bool)\0"
    "on_btnFile_clicked()\0row,column\0"
    "on_tabResult_cellClicked(int,int)\0"
    "on_btnClear_clicked()\0"
    "on_btnAnalogCamera_clicked()\0"
    "on_btnDigitalCamera_clicked()\0"
    "on_btnVideoFile_clicked()\0"
    "on_btnAnalogCaptureFile_clicked()\0"
    "on_btnIPCCaptureFile_clicked()\0"
    "on_btnStopVideoRecognize_clicked()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
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
        switch (_id) {
        case 0: HandlePlateResult((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 1: HandleCaptureImage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: HandleNotifyMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: HandleDetectInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: on_btnFile_clicked(); break;
        case 5: on_tabResult_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: on_btnClear_clicked(); break;
        case 7: on_btnAnalogCamera_clicked(); break;
        case 8: on_btnDigitalCamera_clicked(); break;
        case 9: on_btnVideoFile_clicked(); break;
        case 10: on_btnAnalogCaptureFile_clicked(); break;
        case 11: on_btnIPCCaptureFile_clicked(); break;
        case 12: on_btnStopVideoRecognize_clicked(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE