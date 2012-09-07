/****************************************************************************
** Meta object code from reading C++ file 'dlginconformity.h'
**
** Created: Fri Sep 7 15:37:52 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/dlginconformity.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlginconformity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CDlgInconformity[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   17,   17,   17, 0x08,
      87,   17,   17,   17, 0x08,
     105,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CDlgInconformity[] = {
    "CDlgInconformity\0\0strCardNo,cCan,strPlate\0"
    "Pass(QString,char,QString)\0on_btn2_clicked()\0"
    "on_btn1_clicked()\0on_btn3_clicked()\0"
};

const QMetaObject CDlgInconformity::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CDlgInconformity,
      qt_meta_data_CDlgInconformity, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CDlgInconformity::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CDlgInconformity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CDlgInconformity::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDlgInconformity))
        return static_cast<void*>(const_cast< CDlgInconformity*>(this));
    return QDialog::qt_metacast(_clname);
}

int CDlgInconformity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Pass((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: on_btn2_clicked(); break;
        case 2: on_btn1_clicked(); break;
        case 3: on_btn3_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CDlgInconformity::Pass(QString _t1, char _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
