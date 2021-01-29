/****************************************************************************
** Meta object code from reading C++ file 'worker_hvps.h'
**
** Created: Mon Aug 10 10:54:39 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mv3d_sm/worker_hvps.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'worker_hvps.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_worker_hvps[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   13,   12,   12, 0x05,
      38,   12,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_worker_hvps[] = {
    "worker_hvps\0\0,\0hv_sender(QString,int)\0"
    "hv_init()\0"
};

const QMetaObject worker_hvps::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_worker_hvps,
      qt_meta_data_worker_hvps, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &worker_hvps::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *worker_hvps::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *worker_hvps::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_worker_hvps))
        return static_cast<void*>(const_cast< worker_hvps*>(this));
    return QThread::qt_metacast(_clname);
}

int worker_hvps::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: hv_sender((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: hv_init(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void worker_hvps::hv_sender(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void worker_hvps::hv_init()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
