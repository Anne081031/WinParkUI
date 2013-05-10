/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 8),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 11),
QT_MOC_LITERAL(4, 33, 23),
QT_MOC_LITERAL(5, 57, 25),
QT_MOC_LITERAL(6, 83, 40),
QT_MOC_LITERAL(7, 124, 3),
QT_MOC_LITERAL(8, 128, 25),
QT_MOC_LITERAL(9, 154, 16),
QT_MOC_LITERAL(10, 171, 4),
QT_MOC_LITERAL(11, 176, 6),
QT_MOC_LITERAL(12, 183, 17),
QT_MOC_LITERAL(13, 201, 21),
QT_MOC_LITERAL(14, 223, 17),
QT_MOC_LITERAL(15, 241, 17),
QT_MOC_LITERAL(16, 259, 22),
QT_MOC_LITERAL(17, 282, 26)
    },
    "MainWindow\0ShowTime\0\0refreshSlot\0"
    "on_actionExit_triggered\0"
    "on_actionChange_triggered\0"
    "on_treeWidget_customContextMenuRequested\0"
    "pos\0on_treeWidget_itemClicked\0"
    "QTreeWidgetItem*\0item\0column\0"
    "on_ptnAdd_clicked\0on_ptnAddNext_clicked\0"
    "on_ptnMod_clicked\0on_ptnDel_clicked\0"
    "on_ptnBatchAdd_clicked\0"
    "on_ptnBatchAddNext_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08,
       3,    0,   75,    2, 0x08,
       4,    0,   76,    2, 0x08,
       5,    0,   77,    2, 0x08,
       6,    1,   78,    2, 0x08,
       8,    2,   81,    2, 0x08,
      12,    0,   86,    2, 0x08,
      13,    0,   87,    2, 0x08,
      14,    0,   88,    2, 0x08,
      15,    0,   89,    2, 0x08,
      16,    0,   90,    2, 0x08,
      17,    0,   91,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->ShowTime(); break;
        case 1: _t->refreshSlot(); break;
        case 2: _t->on_actionExit_triggered(); break;
        case 3: _t->on_actionChange_triggered(); break;
        case 4: _t->on_treeWidget_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->on_treeWidget_itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->on_ptnAdd_clicked(); break;
        case 7: _t->on_ptnAddNext_clicked(); break;
        case 8: _t->on_ptnMod_clicked(); break;
        case 9: _t->on_ptnDel_clicked(); break;
        case 10: _t->on_ptnBatchAdd_clicked(); break;
        case 11: _t->on_ptnBatchAddNext_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
