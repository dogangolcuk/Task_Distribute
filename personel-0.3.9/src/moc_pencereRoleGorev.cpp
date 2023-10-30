/****************************************************************************
** Meta object code from reading C++ file 'pencereRoleGorev.h'
**
** Created: Sat Jul 19 11:20:31 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pencereRoleGorev.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pencereRoleGorev.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pencereRoleGorev[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x0a,
      48,   17,   17,   17, 0x0a,
      59,   17,   17,   17, 0x0a,
      73,   68,   17,   17, 0x0a,
      86,   17,   17,   17, 0x0a,
     103,   92,   17,   17, 0x0a,
     159,  142,   17,   17, 0x0a,
     211,   17,  206,   17, 0x0a,
     223,   17,  206,   17, 0x0a,
     238,   17,   17,   17, 0x0a,
     254,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pencereRoleGorev[] = {
    "pencereRoleGorev\0\0index\0tablodolas(QModelIndex)\0"
    "Guncelle()\0Kaydet()\0text\0Ara(QString)\0"
    "Sil()\0widgetList\0"
    "widgetLineEditTemizle(QList<QWidget*>)\0"
    "widgetList,durum\0"
    "widgetLineEditSetReadOnly(QList<QWidget*>,int)\0"
    "bool\0mod_kayit()\0mod_guncelle()\0"
    "mod_baslangic()\0on_actionSil_triggered()\0"
};

const QMetaObject pencereRoleGorev::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pencereRoleGorev,
      qt_meta_data_pencereRoleGorev, 0 }
};

const QMetaObject *pencereRoleGorev::metaObject() const
{
    return &staticMetaObject;
}

void *pencereRoleGorev::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pencereRoleGorev))
	return static_cast<void*>(const_cast< pencereRoleGorev*>(this));
    if (!strcmp(_clname, "Ui::FormRoleGorev"))
	return static_cast< Ui::FormRoleGorev*>(const_cast< pencereRoleGorev*>(this));
    return QWidget::qt_metacast(_clname);
}

int pencereRoleGorev::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tablodolas((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: Guncelle(); break;
        case 2: Kaydet(); break;
        case 3: Ara((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: Sil(); break;
        case 5: widgetLineEditTemizle((*reinterpret_cast< QList<QWidget*>(*)>(_a[1]))); break;
        case 6: widgetLineEditSetReadOnly((*reinterpret_cast< QList<QWidget*>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: { bool _r = mod_kayit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = mod_guncelle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: mod_baslangic(); break;
        case 10: on_actionSil_triggered(); break;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
