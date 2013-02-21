/****************************************************************************
** Meta object code from reading C++ file 'deviceconfig.h'
**
** Created: Wed Feb 20 12:13:13 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Header/deviceconfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CDeviceConfig[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      50,   14,   14,   14, 0x08,
      81,   77,   14,   14, 0x08,
     130,   14,   14,   14, 0x08,
     140,   14,   14,   14, 0x08,
     153,   14,   14,   14, 0x08,
     168,   14,   14,   14, 0x08,
     186,   14,   14,   14, 0x08,
     199,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CDeviceConfig[] = {
    "CDeviceConfig\0\0on_lblClose_linkActivated(QString)\0"
    "on_btnMinimalize_clicked()\0pos\0"
    "on_treeWidget_customContextMenuRequested(QPoint)\0"
    "AddPark()\0AddSubPark()\0AddControler()\0"
    "ModifyAttribute()\0DeleteItem()\0"
    "DisplayTree()\0"
};

const QMetaObject CDeviceConfig::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CDeviceConfig,
      qt_meta_data_CDeviceConfig, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CDeviceConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CDeviceConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CDeviceConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDeviceConfig))
        return static_cast<void*>(const_cast< CDeviceConfig*>(this));
    return QFrame::qt_metacast(_clname);
}

int CDeviceConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lblClose_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_btnMinimalize_clicked(); break;
        case 2: on_treeWidget_customContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: AddPark(); break;
        case 4: AddSubPark(); break;
        case 5: AddControler(); break;
        case 6: ModifyAttribute(); break;
        case 7: DeleteItem(); break;
        case 8: DisplayTree(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
