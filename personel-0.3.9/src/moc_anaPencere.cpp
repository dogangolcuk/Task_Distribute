/****************************************************************************
** Meta object code from reading C++ file 'anaPencere.h'
**
** Created: Sat Jul 19 11:20:14 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "anaPencere.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'anaPencere.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_anaPencere[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      31,   11,   11,   11, 0x0a,
      39,   11,   11,   11, 0x0a,
      51,   11,   11,   11, 0x0a,
      61,   11,   11,   11, 0x0a,
      72,   11,   11,   11, 0x0a,
      81,   11,   11,   11, 0x0a,
      98,   11,   11,   11, 0x0a,
     117,   11,   11,   11, 0x0a,
     138,   11,   11,   11, 0x0a,
     159,   11,   11,   11, 0x0a,
     170,   11,   11,   11, 0x0a,
     190,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_anaPencere[] = {
    "anaPencere\0\0updateWindowMenu()\0about()\0"
    "rolegorev()\0roleler()\0personel()\0"
    "roleno()\0role_rolegorev()\0roleno_rolegorev()\0"
    "raporPerRoleGorevi()\0raporRolePerGorevi()\0"
    "gorevler()\0personel_gorevler()\0kurslar()\0"
};

const QMetaObject anaPencere::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_anaPencere,
      qt_meta_data_anaPencere, 0 }
};

const QMetaObject *anaPencere::metaObject() const
{
    return &staticMetaObject;
}

void *anaPencere::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_anaPencere))
	return static_cast<void*>(const_cast< anaPencere*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int anaPencere::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateWindowMenu(); break;
        case 1: about(); break;
        case 2: rolegorev(); break;
        case 3: roleler(); break;
        case 4: personel(); break;
        case 5: roleno(); break;
        case 6: role_rolegorev(); break;
        case 7: roleno_rolegorev(); break;
        case 8: raporPerRoleGorevi(); break;
        case 9: raporRolePerGorevi(); break;
        case 10: gorevler(); break;
        case 11: personel_gorevler(); break;
        case 12: kurslar(); break;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
