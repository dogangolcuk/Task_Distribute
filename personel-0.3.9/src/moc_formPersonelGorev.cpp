/****************************************************************************
** Meta object code from reading C++ file 'formPersonelGorev.h'
**
** Created: Sat Jul 19 11:20:52 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "formPersonelGorev.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formPersonelGorev.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_formPersonelGorev[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      25,   19,   18,   18, 0x0a,
      49,   19,   18,   18, 0x0a,
      88,   19,   18,   18, 0x0a,
     116,   18,   18,   18, 0x0a,
     133,   18,   18,   18, 0x0a,
     158,   18,   18,   18, 0x0a,
     172,  167,   18,   18, 0x0a,
     191,  167,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_formPersonelGorev[] = {
    "formPersonelGorev\0\0index\0"
    "tablodolas(QModelIndex)\0"
    "tablodolas_mevcutGorevler(QModelIndex)\0"
    "tablo_guncelle(QModelIndex)\0"
    "mevcutGorevSil()\0on_actionSil_triggered()\0"
    "Kaydet()\0text\0AraUyeler(QString)\0"
    "AraGorevler(QString)\0"
};

const QMetaObject formPersonelGorev::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_formPersonelGorev,
      qt_meta_data_formPersonelGorev, 0 }
};

const QMetaObject *formPersonelGorev::metaObject() const
{
    return &staticMetaObject;
}

void *formPersonelGorev::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_formPersonelGorev))
	return static_cast<void*>(const_cast< formPersonelGorev*>(this));
    if (!strcmp(_clname, "Ui::FormPersonelGorev"))
	return static_cast< Ui::FormPersonelGorev*>(const_cast< formPersonelGorev*>(this));
    return QWidget::qt_metacast(_clname);
}

int formPersonelGorev::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tablodolas((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: tablodolas_mevcutGorevler((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: tablo_guncelle((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: mevcutGorevSil(); break;
        case 4: on_actionSil_triggered(); break;
        case 5: Kaydet(); break;
        case 6: AraUyeler((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: AraGorevler((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
