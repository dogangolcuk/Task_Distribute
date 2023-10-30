/****************************************************************************
** Meta object code from reading C++ file 'roleler.h'
**
** Created: Sat Jul 19 11:20:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "roleler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roleler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_roleler[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_roleler[] = {
    "roleler\0"
};

const QMetaObject roleler::staticMetaObject = {
    { &libdbBase::staticMetaObject, qt_meta_stringdata_roleler,
      qt_meta_data_roleler, 0 }
};

const QMetaObject *roleler::metaObject() const
{
    return &staticMetaObject;
}

void *roleler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_roleler))
	return static_cast<void*>(const_cast< roleler*>(this));
    return libdbBase::qt_metacast(_clname);
}

int roleler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = libdbBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
