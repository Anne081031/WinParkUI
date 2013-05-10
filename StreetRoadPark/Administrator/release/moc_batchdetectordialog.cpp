/****************************************************************************
** Meta object code from reading C++ file 'batchdetectordialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Batch/batchdetectordialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchdetectordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BatchDetectorDialog_t {
    QByteArrayData data[10];
    char stringdata[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BatchDetectorDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BatchDetectorDialog_t qt_meta_stringdata_BatchDetectorDialog = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 34),
QT_MOC_LITERAL(2, 55, 0),
QT_MOC_LITERAL(3, 56, 3),
QT_MOC_LITERAL(4, 60, 6),
QT_MOC_LITERAL(5, 67, 17),
QT_MOC_LITERAL(6, 85, 20),
QT_MOC_LITERAL(7, 106, 20),
QT_MOC_LITERAL(8, 127, 18),
QT_MOC_LITERAL(9, 146, 19)
    },
    "BatchDetectorDialog\0"
    "on_detectorTableWidget_cellClicked\0\0"
    "row\0column\0on_ptnAdd_clicked\0"
    "on_ptnModify_clicked\0on_ptnDelete_clicked\0"
    "on_ptnSave_clicked\0on_ptnClose_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatchDetectorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x08,
       5,    0,   49,    2, 0x08,
       6,    0,   50,    2, 0x08,
       7,    0,   51,    2, 0x08,
       8,    0,   52,    2, 0x08,
       9,    0,   53,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BatchDetectorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BatchDetectorDialog *_t = static_cast<BatchDetectorDialog *>(_o);
        switch (_id) {
        case 0: _t->on_detectorTableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_ptnAdd_clicked(); break;
        case 2: _t->on_ptnModify_clicked(); break;
        case 3: _t->on_ptnDelete_clicked(); break;
        case 4: _t->on_ptnSave_clicked(); break;
        case 5: _t->on_ptnClose_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject BatchDetectorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BatchDetectorDialog.data,
      qt_meta_data_BatchDetectorDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *BatchDetectorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchDetectorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BatchDetectorDialog.stringdata))
        return static_cast<void*>(const_cast< BatchDetectorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BatchDetectorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
