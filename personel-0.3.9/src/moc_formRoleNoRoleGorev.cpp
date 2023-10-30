/****************************************************************************
** Meta object code from reading C++ file 'formRoleNoRoleGorev.h'
**
** Created: Sat Jul 19 11:20:40 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "formRoleNoRoleGorev.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formRoleNoRoleGorev.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_formRoleNoRoleGorev[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      27,   21,   20,   20, 0x0a,
      51,   21,   20,   20, 0x0a,
      95,   20,   20,   20, 0x0a,
     117,   20,   20,   20, 0x0a,
     147,   21,   20,   20, 0x0a,
     185,   20,   20,   20, 0x0a,
     199,  194,   20,   20, 0x0a,
     218,  194,   20,   20, 0x0a,
     239,  194,   20,   20, 0x0a,
     262,   20,  258,   20, 0x0a,
     276,   20,  258,   20, 0x0a,
     301,   20,  258,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_formRoleNoRoleGorev[] = {
    "formRoleNoRoleGorev\0\0index\0"
    "tablodolas(QModelIndex)\0"
    "tablo_mevcut_gorevler_guncelle(QModelIndex)\0"
    "mevcut_gorevler_sil()\0"
    "on_actionGorevsil_triggered()\0"
    "tablo_rolegorev_guncelle(QModelIndex)\0"
    "Kaydet()\0text\0AraUyeler(QString)\0"
    "AraKitaplar(QString)\0AraRoleNo(QString)\0"
    "int\0RoleUygunmu()\0AyniRoledeKacGoreviVar()\0"
    "AyniRoledeKacPersonelVar()\0"
};

const QMetaObject formRoleNoRoleGorev::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_formRoleNoRoleGorev,
      qt_meta_data_formRoleNoRoleGorev, 0 }
};

const QMetaObject *formRoleNoRoleGorev::metaObject() const
{
    return &staticMetaObject;
}

void *formRoleNoRoleGorev::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_formRoleNoRoleGorev))
	return static_cast<void*>(const_cast< formRoleNoRoleGorev*>(this));
    if (!strcmp(_clname, "Ui::FormRoleNoRoleGorev"))
	return static_cast< Ui::FormRoleNoRoleGorev*>(const_cast< formRoleNoRoleGorev*>(this));
    return QWidget::qt_metacast(_clname);
}

int formRoleNoRoleGorev::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tablodolas((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: tablo_mevcut_gorevler_guncelle((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: mevcut_gorevler_sil(); break;
        case 3: on_actionGorevsil_triggered(); break;
        case 4: tablo_rolegorev_guncelle((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: Kaydet(); break;
        case 6: AraUyeler((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: AraKitaplar((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: AraRoleNo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: { int _r = RoleUygunmu();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = AyniRoledeKacGoreviVar();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = AyniRoledeKacPersonelVar();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
