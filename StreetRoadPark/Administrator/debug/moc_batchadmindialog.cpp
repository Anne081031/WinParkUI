/****************************************************************************
** Meta object code from reading C++ file 'batchadmindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Batch/batchadmindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchadmindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BatchAdminDialog_t {
    QByteArrayData data[10];
    char stringdata[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BatchAdminDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BatchAdminDialog_t qt_meta_stringdata_BatchAdminDialog = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 17),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 20),
QT_MOC_LITERAL(4, 57, 20),
QT_MOC_LITERAL(5, 78, 18),
QT_MOC_LITERAL(6, 97, 19),
QT_MOC_LITERAL(7, 117, 31),
QT_MOC_LITERAL(8, 149, 3),
QT_MOC_LITERAL(9, 153, 6)
    },
    "BatchAdminDialog\0on_ptnAdd_clicked\0\0"
    "on_ptnModify_clicked\0on_ptnDelete_clicked\0"
    "on_ptnSave_clicked\0on_ptnClose_clicked\0"
    "on_adminTableWidget_cellClicked\0row\0"
    "column\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatchAdminDialog[] = {

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
       1,    0,   44,    2, 0x08,
       3,    0,   45,    2, 0x08,
       4,    0,   46,    2, 0x08,
       5,    0,   47,    2, 0x08,
       6,    0,   48,    2, 0x08,
       7,    2,   49,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,

       0        // eod
};

void BatchAdminDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BatchAdminDialog *_t = static_cast<BatchAdminDialog *>(_o);
        switch (_id) {
        case 0: _t->on_ptnAdd_clicked(); break;
        case 1: _t->on_ptnModify_clicked(); break;
        case 2: _t->on_ptnDelete_clicked(); break;
        case 3: _t->on_ptnSave_clicked(); break;
        case 4: _t->on_ptnClose_clicked(); break;
        case 5: _t->on_adminTableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject BatchAdminDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BatchAdminDialog.data,
      qt_meta_data_BatchAdminDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *BatchAdminDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchAdminDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BatchAdminDialog.stringdata))
        return static_cast<void*>(const_cast< BatchAdminDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BatchAdminDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
