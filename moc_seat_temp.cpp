/****************************************************************************
** Meta object code from reading C++ file 'seat_temp.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "seat_temp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seat_temp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_seat_temp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      18,   10,   10,   10, 0x08,
      26,   10,   10,   10, 0x08,
      46,   10,   10,   10, 0x08,
      68,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_seat_temp[] = {
    "seat_temp\0\0plus()\0minus()\0on_up_btn_clicked()\0"
    "on_down_btn_clicked()\0on_back_btn_pressed()\0"
};

void seat_temp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        seat_temp *_t = static_cast<seat_temp *>(_o);
        switch (_id) {
        case 0: _t->plus(); break;
        case 1: _t->minus(); break;
        case 2: _t->on_up_btn_clicked(); break;
        case 3: _t->on_down_btn_clicked(); break;
        case 4: _t->on_back_btn_pressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData seat_temp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject seat_temp::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_seat_temp,
      qt_meta_data_seat_temp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &seat_temp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *seat_temp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *seat_temp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_seat_temp))
        return static_cast<void*>(const_cast< seat_temp*>(this));
    return QWidget::qt_metacast(_clname);
}

int seat_temp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
