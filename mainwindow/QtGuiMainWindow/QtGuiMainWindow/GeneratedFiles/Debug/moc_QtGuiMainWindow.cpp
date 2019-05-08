/****************************************************************************
** Meta object code from reading C++ file 'QtGuiMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtGuiMainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtGuiMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtGuiMainWindow_t {
    QByteArrayData data[15];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtGuiMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtGuiMainWindow_t qt_meta_stringdata_QtGuiMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QtGuiMainWindow"
QT_MOC_LITERAL(1, 16, 20), // "send_click_under_cnt"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "on_chkBoxUnder"
QT_MOC_LITERAL(4, 53, 7), // "checked"
QT_MOC_LITERAL(5, 61, 15), // "on_chkBoxItalic"
QT_MOC_LITERAL(6, 77, 13), // "on_chkBoxBold"
QT_MOC_LITERAL(7, 91, 20), // "click_under_cnt_proc"
QT_MOC_LITERAL(8, 112, 10), // "on_rBtnRed"
QT_MOC_LITERAL(9, 123, 7), // "toggled"
QT_MOC_LITERAL(10, 131, 11), // "on_rBtnBlue"
QT_MOC_LITERAL(11, 143, 12), // "on_rBtnBlack"
QT_MOC_LITERAL(12, 156, 11), // "on_TimerOut"
QT_MOC_LITERAL(13, 168, 17), // "slot_action_new_1"
QT_MOC_LITERAL(14, 186, 19) // "slot_action_multi_1"

    },
    "QtGuiMainWindow\0send_click_under_cnt\0"
    "\0on_chkBoxUnder\0checked\0on_chkBoxItalic\0"
    "on_chkBoxBold\0click_under_cnt_proc\0"
    "on_rBtnRed\0toggled\0on_rBtnBlue\0"
    "on_rBtnBlack\0on_TimerOut\0slot_action_new_1\0"
    "slot_action_multi_1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtGuiMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   72,    2, 0x08 /* Private */,
       5,    1,   75,    2, 0x08 /* Private */,
       6,    1,   78,    2, 0x08 /* Private */,
       7,    1,   81,    2, 0x08 /* Private */,
       8,    1,   84,    2, 0x08 /* Private */,
      10,    1,   87,    2, 0x08 /* Private */,
      11,    1,   90,    2, 0x08 /* Private */,
      12,    0,   93,    2, 0x08 /* Private */,
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtGuiMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtGuiMainWindow *_t = static_cast<QtGuiMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_click_under_cnt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_chkBoxUnder((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_chkBoxItalic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_chkBoxBold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->click_under_cnt_proc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_rBtnRed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_rBtnBlue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_rBtnBlack((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_TimerOut(); break;
        case 9: _t->slot_action_new_1(); break;
        case 10: _t->slot_action_multi_1(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtGuiMainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGuiMainWindow::send_click_under_cnt)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtGuiMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtGuiMainWindow.data,
      qt_meta_data_QtGuiMainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtGuiMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtGuiMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtGuiMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QtGuiMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QtGuiMainWindow::send_click_under_cnt(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
