/****************************************************************************
** Meta object code from reading C++ file 'rp.h'
**
** Created: Sun Nov 11 21:00:05 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_AdresBilgileri[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x0a,
      64,   46,   15,   15, 0x0a,
      86,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AdresBilgileri[] = {
    "AdresBilgileri\0\0index\0tablodolas(QModelIndex)\0"
    "personelid,persid\0guncelle(QString,int)\0"
    "adresekle()\0"
};

const QMetaObject AdresBilgileri::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdresBilgileri,
      qt_meta_data_AdresBilgileri, 0 }
};

const QMetaObject *AdresBilgileri::metaObject() const
{
    return &staticMetaObject;
}

void *AdresBilgileri::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdresBilgileri))
	return static_cast<void*>(const_cast< AdresBilgileri*>(this));
    if (!strcmp(_clname, "Ui::widgetAdresBilgileri"))
	return static_cast< Ui::widgetAdresBilgileri*>(const_cast< AdresBilgileri*>(this));
    return QWidget::qt_metacast(_clname);
}

int AdresBilgileri::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tablodolas((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: guncelle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: adresekle(); break;
        }
        _id -= 3;
    }
    return _id;
}
