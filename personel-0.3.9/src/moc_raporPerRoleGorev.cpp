/****************************************************************************
** Meta object code from reading C++ file 'raporPerRoleGorev.h'
**
** Created: Sat Jul 19 11:20:43 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "raporPerRoleGorev.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'raporPerRoleGorev.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_raporPerRoleGorev[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      25,   19,   18,   18, 0x0a,
      49,   19,   18,   18, 0x0a,
      93,   18,   18,   18, 0x0a,
     114,  109,   18,   18, 0x0a,
     127,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_raporPerRoleGorev[] = {
    "raporPerRoleGorev\0\0index\0"
    "tablodolas(QModelIndex)\0"
    "tablo_mevcut_gorevler_guncelle(QModelIndex)\0"
    "cikti_hazirla()\0text\0Ara(QString)\0"
    "print()\0"
};

const QMetaObject raporPerRoleGorev::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_raporPerRoleGorev,
      qt_meta_data_raporPerRoleGorev, 0 }
};

const QMetaObject *raporPerRoleGorev::metaObject() const
{
    return &staticMetaObject;
}

void *raporPerRoleGorev::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_raporPerRoleGorev))
	return static_cast<void*>(const_cast< raporPerRoleGorev*>(this));
    if (!strcmp(_clname, "Ui::RaporPerRole"))
	return static_cast< Ui::RaporPerRole*>(const_cast< raporPerRoleGorev*>(this));
    return QWidget::qt_metacast(_clname);
}

int raporPerRoleGorev::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tablodolas((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: tablo_mevcut_gorevler_guncelle((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: cikti_hazirla(); break;
        case 3: Ara((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: print(); break;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
