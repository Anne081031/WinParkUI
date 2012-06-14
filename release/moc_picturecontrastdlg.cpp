/****************************************************************************
** Meta object code from reading C++ file 'picturecontrastdlg.h'
**
** Created: Thu Jun 14 13:33:30 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialog/picturecontrastdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'picturecontrastdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CPictureContrastDlg[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      60,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     119,   20,   20,   20, 0x08,
     140,   20,   20,   20, 0x08,
     154,   20,   20,   20, 0x08,
     167,   20,   20,   20, 0x08,
     181,   20,   20,   20, 0x08,
     208,  201,   20,   20, 0x08,
     234,  229,   20,   20, 0x08,
     283,  259,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CPictureContrastDlg[] = {
    "CPictureContrastDlg\0\0"
    "byData,vData,nMin,nHour,nAmount,bEnter\0"
    "SendTimeCardInfo(QByteArray&,QByteArray&,int,int,int,bool)\0"
    "on_btnPass_clicked()\0RbtnClicked()\0"
    "BtnPressed()\0BtnReleased()\0"
    "OnClickedDlgPopup()\0nIndex\0"
    "CbxIndexChanged(int)\0link\0"
    "onLinkActivated(QString)\0"
    "strChar,nChannel,nIndex\0"
    "PlateCheck(QString,int,int)\0"
};

const QMetaObject CPictureContrastDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CPictureContrastDlg,
      qt_meta_data_CPictureContrastDlg, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CPictureContrastDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CPictureContrastDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CPictureContrastDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CPictureContrastDlg))
        return static_cast<void*>(const_cast< CPictureContrastDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CPictureContrastDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SendTimeCardInfo((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 1: on_btnPass_clicked(); break;
        case 2: RbtnClicked(); break;
        case 3: BtnPressed(); break;
        case 4: BtnReleased(); break;
        case 5: OnClickedDlgPopup(); break;
        case 6: CbxIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: onLinkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: PlateCheck((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void CPictureContrastDlg::SendTimeCardInfo(QByteArray & _t1, QByteArray & _t2, int _t3, int _t4, int _t5, bool _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
