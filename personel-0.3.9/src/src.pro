SOURCES += main.cpp \
anaPencere.cpp \
personel.cpp \
 libdbBase.cpp \
 roleno.cpp \
 rolegorev.cpp \
 roleler.cpp \
 gorevler.cpp \
 kurslar.cpp
TEMPLATE = app
CONFIG += warn_on \
	  thread \
          qt
TARGET = ../bin/Personel

QT += sql \
gui \
 xml
FORMS += anaPencere.ui \
formPersonel.ui \
 secRoleNo.ui \
 formRoleNo.ui \
 formRoleGorev.ui \
 formRoleler.ui \
 formRoleRoleGorevui.ui \
 formRoleNoRoleGorev.ui \
 raporPerRoleGor.ui \
 raporRolePerGorev.ui \
 formGorevler.ui \
 formPersonelGorev.ui \
 formKurslar.ui \
 dialogAdres.ui \
 widgetAdresBilgileri.ui
HEADERS += anaPencere.h \
libdbBase.h \
personel.h \
 pencerePersonel.h \
 formSecRoleNo.h \
 roleno.h \
 pencereRoleNo.h \
 rolegorev.h \
 pencereRoleGorev.h \
 roleler.h \
 pencereRoleler.h \
 formRoleRoleGorev.h \
 formRoleNoRoleGorev.h \
 raporPerRoleGorev.h \
 raporRolePerGorev.h \
 gorevler.h \
 pencereGorevler.h \
 formPersonelGorev.h \
 kurslar.h \
 pencereKurslar.h \
 dialogAdres.h \
 adresbilgileri.h
RESOURCES += ikon.qrc

DESTDIR = .

TRANSLATIONS += eng.ts

