/****************************************************************************
** Meta object code from reading C++ file 'dialog_chiller.h'
**
** Created: Mon Aug 10 11:28:18 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mv3d_sm/dialog_chiller.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_chiller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dialog_chiller[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   16,   15,   15, 0x0a,
      62,   15,   15,   15, 0x0a,
      75,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_dialog_chiller[] = {
    "dialog_chiller\0\0,\0chfaultState(int,int)\0"
    "ch_taker(QString,int)\0initilazer()\0"
    "on_pushButton_clicked()\0"
};

const QMetaObject dialog_chiller::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dialog_chiller,
      qt_meta_data_dialog_chiller, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dialog_chiller::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dialog_chiller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dialog_chiller::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dialog_chiller))
        return static_cast<void*>(const_cast< dialog_chiller*>(this));
    return QDialog::qt_metacast(_clname);
}

int dialog_chiller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: chfaultState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: ch_taker((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: initilazer(); break;
        case 3: on_pushButton_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void dialog_chiller::chfaultState(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
