/****************************************************************************
** Meta object code from reading C++ file 'alper.h'
**
** Created: Fri Aug 7 13:29:55 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "/mnt/Izmir_Turkey/ecs/alper/alper/alper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_alper[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,    7,    6,    6, 0x0a,
      56,   54,    6,    6, 0x0a,
      71,    6,    6,    6, 0x08,
      99,    6,    6,    6, 0x08,
     121,    6,    6,    6, 0x08,
     143,    6,    6,    6, 0x08,
     165,    6,    6,    6, 0x08,
     187,    6,    6,    6, 0x08,
     209,    6,    6,    6, 0x08,
     232,    6,    6,    6, 0x08,
     257,    6,    6,    6, 0x08,
     282,    6,    6,    6, 0x08,
     309,    6,    6,    6, 0x08,
     336,    6,    6,    6, 0x08,
     363,    6,    6,    6, 0x08,
     392,    6,    6,    6, 0x08,
     423,    6,    6,    6, 0x08,
     456,    6,    6,    6, 0x08,
     490,    6,    6,    6, 0x08,
     532,  524,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_alper[] = {
    "alper\0\0,,,,\0writer(int,int,QDateTime,QString,QString)\0"
    ",\0reset(int,int)\0on_system_monitor_clicked()\0"
    "on_reset_78_clicked()\0on_reset_70_clicked()\0"
    "on_reset_69_clicked()\0on_reset_68_clicked()\0"
    "on_terminal_clicked()\0on_usb_mount_clicked()\0"
    "on_call_button_clicked()\0"
    "on_usb_unmount_clicked()\0"
    "on_bag_finder_bt_clicked()\0"
    "on_screenshot_bt_clicked()\0"
    "on_silentmode_bt_clicked()\0"
    "on_save_flt_button_clicked()\0"
    "on_log_finder_button_clicked()\0"
    "on_fault_screen_button_clicked()\0"
    "on_fault_display_button_clicked()\0"
    "on_fault_browser_button_clicked()\0"
    "checked\0on_manuelactive_toggled(bool)\0"
};

const QMetaObject alper::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_alper,
      qt_meta_data_alper, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &alper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *alper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *alper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_alper))
        return static_cast<void*>(const_cast< alper*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int alper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: writer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 1: reset((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: on_system_monitor_clicked(); break;
        case 3: on_reset_78_clicked(); break;
        case 4: on_reset_70_clicked(); break;
        case 5: on_reset_69_clicked(); break;
        case 6: on_reset_68_clicked(); break;
        case 7: on_terminal_clicked(); break;
        case 8: on_usb_mount_clicked(); break;
        case 9: on_call_button_clicked(); break;
        case 10: on_usb_unmount_clicked(); break;
        case 11: on_bag_finder_bt_clicked(); break;
        case 12: on_screenshot_bt_clicked(); break;
        case 13: on_silentmode_bt_clicked(); break;
        case 14: on_save_flt_button_clicked(); break;
        case 15: on_log_finder_button_clicked(); break;
        case 16: on_fault_screen_button_clicked(); break;
        case 17: on_fault_display_button_clicked(); break;
        case 18: on_fault_browser_button_clicked(); break;
        case 19: on_manuelactive_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
