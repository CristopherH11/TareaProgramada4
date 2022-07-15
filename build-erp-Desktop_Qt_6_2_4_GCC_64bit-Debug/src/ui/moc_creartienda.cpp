/****************************************************************************
** Meta object code from reading C++ file 'creartienda.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../erp/src/ui/creartienda.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'creartienda.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_crearTienda_t {
    const uint offsetsAndSize[12];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_crearTienda_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_crearTienda_t qt_meta_stringdata_crearTienda = {
    {
QT_MOC_LITERAL(0, 11), // "crearTienda"
QT_MOC_LITERAL(12, 30), // "on_edit_nombre_editingFinished"
QT_MOC_LITERAL(43, 0), // ""
QT_MOC_LITERAL(44, 30), // "on_edit_dirInt_editingFinished"
QT_MOC_LITERAL(75, 30), // "on_edit_dirFis_editingFinished"
QT_MOC_LITERAL(106, 32) // "on_edit_telefono_editingFinished"

    },
    "crearTienda\0on_edit_nombre_editingFinished\0"
    "\0on_edit_dirInt_editingFinished\0"
    "on_edit_dirFis_editingFinished\0"
    "on_edit_telefono_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_crearTienda[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void crearTienda::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<crearTienda *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_edit_nombre_editingFinished(); break;
        case 1: _t->on_edit_dirInt_editingFinished(); break;
        case 2: _t->on_edit_dirFis_editingFinished(); break;
        case 3: _t->on_edit_telefono_editingFinished(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject crearTienda::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_crearTienda.offsetsAndSize,
    qt_meta_data_crearTienda,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_crearTienda_t
, QtPrivate::TypeAndForceComplete<crearTienda, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *crearTienda::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *crearTienda::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_crearTienda.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int crearTienda::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
