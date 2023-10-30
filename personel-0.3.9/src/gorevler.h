#include "libdbBase.h"
class gorevler:public libdbBase
{
Q_OBJECT
public:
gorevler();
gorevler(QString gorevyeri);//Kaydetme için
gorevler(const QString & id,int);//Silme için
gorevler(const QString & id,QString gorevyeri);//Güncelleme için
void arama(QString text);
private:

public slots:

};