/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Mon Aug 10 10:54:36 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mv3d_sm/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      27,   11,   11,   11, 0x0a,
      42,   11,   11,   11, 0x0a,
      57,   11,   11,   11, 0x0a,
      74,   72,   11,   11, 0x0a,
      93,   11,   11,   11, 0x0a,
     110,   11,   11,   11, 0x08,
     135,   11,   11,   11, 0x08,
     160,   11,   11,   11, 0x08,
     186,   11,   11,   11, 0x08,
     212,   11,   11,   11, 0x08,
     238,   11,   11,   11, 0x08,
     262,   11,   11,   11, 0x08,
     289,   11,   11,   11, 0x08,
     319,   11,   11,   11, 0x08,
     348,   11,   11,   11, 0x08,
     376,   11,   11,   11, 0x08,
     402,   11,   11,   11, 0x08,
     428,   11,   11,   11, 0x08,
     454,   11,   11,   11, 0x08,
     480,   11,   11,   11, 0x08,
     506,   11,   11,   11, 0x08,
     532,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0ch_showBegin()\0dc_showBegin()\0"
    "hv_showBegin()\0sy_showBegin()\0,\0"
    "getSignal(int,int)\0mv3d_status(int)\0"
    "on_stop_button_clicked()\0"
    "on_call_Button_clicked()\0"
    "on_button_hvps1_clicked()\0"
    "on_button_hvps3_clicked()\0"
    "on_button_hvps2_clicked()\0"
    "on_button_sdb_clicked()\0"
    "on_button_systic_clicked()\0"
    "on_button_pdu_right_clicked()\0"
    "on_button_pdu_left_clicked()\0"
    "on_button_chiller_clicked()\0"
    "on_button_dcb_1_clicked()\0"
    "on_button_dcb_2_clicked()\0"
    "on_button_dcb_3_clicked()\0"
    "on_button_dcb_4_clicked()\0"
    "on_button_dcb_5_clicked()\0"
    "on_button_dcb_6_clicked()\0"
    "on_button_dcb_7_clicked()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ch_showBegin(); break;
        case 1: dc_showBegin(); break;
        case 2: hv_showBegin(); break;
        case 3: sy_showBegin(); break;
        case 4: getSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: mv3d_status((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: on_stop_button_clicked(); break;
        case 7: on_call_Button_clicked(); break;
        case 8: on_button_hvps1_clicked(); break;
        case 9: on_button_hvps3_clicked(); break;
        case 10: on_button_hvps2_clicked(); break;
        case 11: on_button_sdb_clicked(); break;
        case 12: on_button_systic_clicked(); break;
        case 13: on_button_pdu_right_clicked(); break;
        case 14: on_button_pdu_left_clicked(); break;
        case 15: on_button_chiller_clicked(); break;
        case 16: on_button_dcb_1_clicked(); break;
        case 17: on_button_dcb_2_clicked(); break;
        case 18: on_button_dcb_3_clicked(); break;
        case 19: on_button_dcb_4_clicked(); break;
        case 20: on_button_dcb_5_clicked(); break;
        case 21: on_button_dcb_6_clicked(); break;
        case 22: on_button_dcb_7_clicked(); break;
        default: ;
        }
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
