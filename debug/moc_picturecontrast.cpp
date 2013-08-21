/****************************************************************************
** Meta object code from reading C++ file 'picturecontrast.h'
**
** Created: Fri Aug 16 12:17:43 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Header/picturecontrast.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'picturecontrast.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CPictureContrast[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      57,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     116,   17,   17,   17, 0x08,
     137,   17,   17,   17, 0x08,
     158,   17,   17,   17, 0x08,
     179,   17,   17,   17, 0x08,
     200,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CPictureContrast[] = {
    "CPictureContrast\0\0"
    "byData,vData,nMin,nHour,nAmount,bEnter\0"
    "SendTimeCardInfo(QByteArray&,QByteArray&,int,int,int,bool)\0"
    "on_btnPass_clicked()\0on_btnImg4_clicked()\0"
    "on_btnImg3_clicked()\0on_btnImg2_clicked()\0"
    "on_btnImg1_clicked()\0"
};

const QMetaObject CPictureContrast::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CPictureContrast,
      qt_meta_data_CPictureContrast, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CPictureContrast::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CPictureContrast::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CPictureContrast::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CPictureContrast))
        return static_cast<void*>(const_cast< CPictureContrast*>(this));
    return QFrame::qt_metacast(_clname);
}

int CPictureContrast::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SendTimeCardInfo((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 1: on_btnPass_clicked(); break;
        case 2: on_btnImg4_clicked(); break;
        case 3: on_btnImg3_clicked(); break;
        case 4: on_btnImg2_clicked(); break;
        case 5: on_btnImg1_clicked(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CPictureContrast::SendTimeCardInfo(QByteArray & _t1, QByteArray & _t2, int _t3, int _t4, int _t5, bool _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
