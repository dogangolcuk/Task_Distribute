/****************************************************************************
** Meta object code from reading C++ file 'libdbBase.h'
**
** Created: Sat Jul 19 11:20:18 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "libdbBase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'libdbBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_libdbBase[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      22,   16,   11,   10, 0x0a,
      41,   16,   10,   10, 0x0a,
      69,   16,   10,   10, 0x0a,
      99,   16,   10,   10, 0x0a,
     124,   16,   10,   10, 0x0a,
     155,  151,   10,   10, 0x0a,
     187,   10,  177,   10, 0x0a,
     206,   10,  177,   10, 0x0a,
     227,   10,  177,   10, 0x0a,
     243,   10,  177,   10, 0x0a,
     269,   10,  261,   10, 0x0a,
     284,   10,   11,   10, 0x0a,
     293,   10,   11,   10, 0x0a,
     304,   10,   11,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_libdbBase[] = {
    "libdbBase\0\0bool\0sorgu\0dbislem(QSqlQuery)\0"
    "setKaydetSorgusu(QSqlQuery)\0"
    "setGuncelleSorgusu(QSqlQuery)\0"
    "setSilSorgusu(QSqlQuery)\0"
    "setAramaSorgusu(QSqlQuery)\0str\0"
    "setCurrentId(QString)\0QSqlQuery\0"
    "getKaydetSorgusu()\0getGuncelleSorgusu()\0"
    "getSilSorgusu()\0getAramaSorgusu()\0"
    "QString\0getCurrentId()\0Kaydet()\0"
    "Guncelle()\0Sil()\0"
};

const QMetaObject libdbBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_libdbBase,
      qt_meta_data_libdbBase, 0 }
};

const QMetaObject *libdbBase::metaObject() const
{
    return &staticMetaObject;
}

void *libdbBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_libdbBase))
	return static_cast<void*>(const_cast< libdbBase*>(this));
    return QObject::qt_metacast(_clname);
}

int libdbBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = dbislem((*reinterpret_cast< QSqlQuery(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: setKaydetSorgusu((*reinterpret_cast< QSqlQuery(*)>(_a[1]))); break;
        case 2: setGuncelleSorgusu((*reinterpret_cast< QSqlQuery(*)>(_a[1]))); break;
        case 3: setSilSorgusu((*reinterpret_cast< QSqlQuery(*)>(_a[1]))); break;
        case 4: setAramaSorgusu((*reinterpret_cast< QSqlQuery(*)>(_a[1]))); break;
        case 5: setCurrentId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { QSqlQuery _r = getKaydetSorgusu();
            if (_a[0]) *reinterpret_cast< QSqlQuery*>(_a[0]) = _r; }  break;
        case 7: { QSqlQuery _r = getGuncelleSorgusu();
            if (_a[0]) *reinterpret_cast< QSqlQuery*>(_a[0]) = _r; }  break;
        case 8: { QSqlQuery _r = getSilSorgusu();
            if (_a[0]) *reinterpret_cast< QSqlQuery*>(_a[0]) = _r; }  break;
        case 9: { QSqlQuery _r = getAramaSorgusu();
            if (_a[0]) *reinterpret_cast< QSqlQuery*>(_a[0]) = _r; }  break;
        case 10: { QString _r = getCurrentId();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { bool _r = Kaydet();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = Guncelle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = Sil();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
