#include "libdbBase.h"
class kurslar:public libdbBase
{
Q_OBJECT
public:
kurslar();
kurslar(QString kursadi);//Kaydetme için
kurslar(const QString & id,int);//Silme için
kurslar(const QString & id,QString kursadi);//Güncelleme için
void arama(QString text);
private:

public slots:

};