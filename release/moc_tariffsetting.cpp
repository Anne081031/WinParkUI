/****************************************************************************
** Meta object code from reading C++ file 'tariffsetting.h'
**
** Created: Wed May 8 16:32:51 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Header/tariffsetting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tariffsetting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CTariffSetting[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      57,   51,   15,   15, 0x08,
     100,   93,   15,   15, 0x08,
     133,   93,   15,   15, 0x08,
     166,   51,   15,   15, 0x08,
     204,  199,   15,   15, 0x08,
     238,  199,   15,   15, 0x08,
     272,   93,   15,   15, 0x08,
     307,   93,   15,   15, 0x08,
     342,   93,   15,   15, 0x08,
     377,   93,   15,   15, 0x08,
     412,   93,   15,   15, 0x08,
     447,   93,   15,   15, 0x08,
     482,   93,   15,   15, 0x08,
     517,   93,   15,   15, 0x08,
     552,   93,   15,   15, 0x08,
     587,   93,   15,   15, 0x08,
     622,   93,   15,   15, 0x08,
     657,   93,   15,   15, 0x08,
     692,   93,   15,   15, 0x08,
     727,   93,   15,   15, 0x08,
     762,   15,   15,   15, 0x08,
     787,   15,   15,   15, 0x08,
     814,   15,   15,   15, 0x08,
     839,   15,   15,   15, 0x08,
     860,   15,   15,   15, 0x08,
     885,   15,   15,   15, 0x08,
     911,   51,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CTariffSetting[] = {
    "CTariffSetting\0\0on_lblClose_linkActivated(QString)\0"
    "index\0on_cbxName_currentIndexChanged(int)\0"
    "nValue\0on_perMinOuter_valueChanged(int)\0"
    "on_perMinInner_valueChanged(int)\0"
    "on_tabWidget_currentChanged(int)\0date\0"
    "on_tdtSection2_timeChanged(QTime)\0"
    "on_tdtSection1_timeChanged(QTime)\0"
    "on_rule7MinOuter_valueChanged(int)\0"
    "on_rule6MinOuter_valueChanged(int)\0"
    "on_rule5MinOuter_valueChanged(int)\0"
    "on_rule4MinOuter_valueChanged(int)\0"
    "on_rule3MinOuter_valueChanged(int)\0"
    "on_rule2MinOuter_valueChanged(int)\0"
    "on_rule1MinOuter_valueChanged(int)\0"
    "on_rule7MinInner_valueChanged(int)\0"
    "on_rule5MinInner_valueChanged(int)\0"
    "on_rule4MinInner_valueChanged(int)\0"
    "on_rule3MinInner_valueChanged(int)\0"
    "on_rule2MinInner_valueChanged(int)\0"
    "on_rule1MinInner_valueChanged(int)\0"
    "on_rule6MinInner_valueChanged(int)\0"
    "on_rbtnSection_clicked()\0"
    "on_rbtnNoSection_clicked()\0"
    "on_btnDownload_clicked()\0on_btnSave_clicked()\0"
    "on_btnSaveExit_clicked()\0"
    "on_btnCalculate_clicked()\0"
    "on_cbxType_currentIndexChanged(int)\0"
};

const QMetaObject CTariffSetting::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CTariffSetting,
      qt_meta_data_CTariffSetting, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CTariffSetting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CTariffSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CTariffSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CTariffSetting))
        return static_cast<void*>(const_cast< CTariffSetting*>(this));
    return QFrame::qt_metacast(_clname);
}

int CTariffSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lblClose_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_cbxName_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_perMinOuter_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_perMinInner_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: on_tdtSection2_timeChanged((*reinterpret_cast< QTime(*)>(_a[1]))); break;
        case 6: on_tdtSection1_timeChanged((*reinterpret_cast< QTime(*)>(_a[1]))); break;
        case 7: on_rule7MinOuter_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: on_rule6MinOuter_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: on_rule5MinOuter_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: on_rule4MinOuter_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: on_rule3MinOuter_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: on_rule2MinOuter_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: on_rule1MinOuter_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: on_rule7MinInner_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: on_rule5MinInner_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: on_rule4MinInner_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: on_rule3MinInner_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: on_rule2MinInner_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: on_rule1MinInner_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: on_rule6MinInner_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: on_rbtnSection_clicked(); break;
        case 22: on_rbtnNoSection_clicked(); break;
        case 23: on_btnDownload_clicked(); break;
        case 24: on_btnSave_clicked(); break;
        case 25: on_btnSaveExit_clicked(); break;
        case 26: on_btnCalculate_clicked(); break;
        case 27: on_cbxType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 28;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
