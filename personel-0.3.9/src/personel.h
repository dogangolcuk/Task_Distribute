#include "libdbBase.h"
class personel:public libdbBase
{
Q_OBJECT
public:
personel();
personel(QString sicilno, QString ad, QString soyad, QString sinif,QString rutbe, int roleno);//Kaydetme için
personel(const QString & id);//Silme için
personel(const QString & id,QString sicilno, QString ad, QString soyad, QString sinif,QString rutbe, int roleno);//Güncelleme için
void arama(QString text);
private:
 /*
 QString uye_no;
 QString ad;
 QString soyad;
 QString sinif;
 QDate uyelik_tarihi;
 QString uyelik_tipi;
 QString tel;
 QString ceptel;
 QString email; 
 QString adres; 
 QString ek_bilgi;
*/
public slots:
// void setAd(QString str);
// void setSoyad(QString str);
// void setEk(QString str);
// QString getAd();
// QString getSoyad();
// QString getEk();
};