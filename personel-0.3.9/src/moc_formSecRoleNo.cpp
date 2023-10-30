/****************************************************************************
** Meta object code from reading C++ file 'formSecRoleNo.h'
**
** Created: Sat Jul 19 11:20:24 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "formSecRoleNo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formSecRoleNo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_formSecRoleNo[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      17,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   46,   14,   14, 0x0a,
      76,   14,   14,   14, 0x0a,
      87,   82,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_formSecRoleNo[] = {
    "formSecRoleNo\0\0,\0yayinciSelected(int,QString)\0"
    "index\0tablodolas(QModelIndex)\0sec()\0"
    "text\0Ara(QString)\0"
};

const QMetaObject formSecRoleNo::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_formSecRoleNo,
      qt_meta_data_formSecRoleNo, 0 }
};

const QMetaObject *formSecRoleNo::metaObject() const
{
    return &staticMetaObject;
}

void *formSecRoleNo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_formSecRoleNo))
	return static_cast<void*>(const_cast< formSecRoleNo*>(this));
    if (!strcmp(_clname, "Ui::RoleNoSec"))
	return static_cast< Ui::RoleNoSec*>(const_cast< formSecRoleNo*>(this));
    return QDialog::qt_metacast(_clname);
}

int formSecRoleNo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: yayinciSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: tablodolas((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: sec(); break;
        case 3: Ara((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void formSecRoleNo::yayinciSelected(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
