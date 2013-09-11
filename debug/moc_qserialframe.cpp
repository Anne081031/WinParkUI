/****************************************************************************
** Meta object code from reading C++ file 'qserialframe.h'
**
** Created: Wed Sep 11 12:01:53 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qserialframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qserialframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSerialFrame[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x08,
      46,   13,   13,   13, 0x08,
      68,   13,   13,   13, 0x08,
      86,   13,   13,   13, 0x08,
     104,   13,   13,   13, 0x08,
     122,   13,   13,   13, 0x08,
     140,   13,   13,   13, 0x08,
     158,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QSerialFrame[] = {
    "QSerialFrame\0\0byCmd\0HandleCommand(QByteArray)\0"
    "on_btnTimer_clicked()\0on_btn1_clicked()\0"
    "on_btn0_clicked()\0on_btn2_clicked()\0"
    "on_btn4_clicked()\0on_btn3_clicked()\0"
    "on_btn5_clicked()\0"
};

const QMetaObject QSerialFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QSerialFrame,
      qt_meta_data_QSerialFrame, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSerialFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSerialFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSerialFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSerialFrame))
        return static_cast<void*>(const_cast< QSerialFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int QSerialFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: HandleCommand((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: on_btnTimer_clicked(); break;
        case 2: on_btn1_clicked(); break;
        case 3: on_btn0_clicked(); break;
        case 4: on_btn2_clicked(); break;
        case 5: on_btn4_clicked(); break;
        case 6: on_btn3_clicked(); break;
        case 7: on_btn5_clicked(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
