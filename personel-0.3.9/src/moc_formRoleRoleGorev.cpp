/****************************************************************************
** Meta object code from reading C++ file 'formRoleRoleGorev.h'
**
** Created: Sat Jul 19 11:20:38 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "formRoleRoleGorev.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formRoleRoleGorev.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_formRoleRoleGorev[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      25,   19,   18,   18, 0x0a,
      49,   19,   18,   18, 0x0a,
      85,   19,   18,   18, 0x0a,
     113,   18,   18,   18, 0x0a,
     137,   18,   18,   18, 0x0a,
     162,   18,   18,   18, 0x0a,
     176,  171,   18,   18, 0x0a,
     195,  171,   18,   18, 0x0a,
     220,   18,  216,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_formRoleRoleGorev[] = {
    "formRoleRoleGorev\0\0index\0"
    "tablodolas(QModelIndex)\0"
    "tablodolas_gorevAtanan(QModelIndex)\0"
    "tablo_guncelle(QModelIndex)\0"
    "role_gorev_atanan_sil()\0"
    "on_actionSil_triggered()\0Kaydet()\0"
    "text\0AraUyeler(QString)\0AraKitaplar(QString)\0"
    "int\0RoleUygunmu()\0"
};

const QMetaObject formRoleRoleGorev::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_formRoleRoleGorev,
      qt_meta_data_formRoleRoleGorev, 0 }
};

const QMetaObject *formRoleRoleGorev::metaObject() const
{
    return &staticMetaObject;
}

void *formRoleRoleGorev::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_formRoleRoleGorev))
	return static_cast<void*>(const_cast< formRoleRoleGorev*>(this));
    if (!strcmp(_clname, "Ui::FormRoleRoleGorev"))
	return static_cast< Ui::FormRoleRoleGorev*>(const_cast< formRoleRoleGorev*>(this));
    return QWidget::qt_metacast(_clname);
}

int formRoleRoleGorev::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tablodolas((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: tablodolas_gorevAtanan((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: tablo_guncelle((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: role_gorev_atanan_sil(); break;
        case 4: on_actionSil_triggered(); break;
        case 5: Kaydet(); break;
        case 6: AraUyeler((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: AraKitaplar((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: { int _r = RoleUygunmu();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
