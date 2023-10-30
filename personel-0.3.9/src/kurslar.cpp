#include "kurslar.h"
kurslar::kurslar()
{

}
kurslar::kurslar(const QString & id,int)
{
     setCurrentId(id);
//delete olayı
     QSqlQuery tmp_sil;
     tmp_sil.prepare("DELETE FROM kurslar WHERE id =" + getCurrentId() );
      setSilSorgusu(tmp_sil);

}
kurslar::kurslar(const QString & id,QString kursadi)
{
     setCurrentId(id);
 //güncelleme olayı
     QSqlQuery tmp_guncelle;
     tmp_guncelle.prepare("UPDATE kurslar SET kursadi=:kursadi WHERE  id = " + getCurrentId() );
//      tmp_guncelle.bindValue(":sicilno", sicilno);
     tmp_guncelle.bindValue(":kursadi",kursadi);
//      tmp_guncelle.bindValue(":tipi",tipi);
//      tmp_guncelle.bindValue(":yeri",yeri);
//      tmp_guncelle.bindValue(":neyapar",neyapar);
     setGuncelleSorgusu(tmp_guncelle);

}
kurslar::kurslar(QString kursadi)
{


     //insert olayı burada 
     QSqlQuery tmp_kaydet; 
     tmp_kaydet.prepare("INSERT INTO kurslar(kursadi)"
               "VALUES ( :kursadi)");
//      tmp_kaydet.bindValue(":ad", sicilno);
     tmp_kaydet.bindValue(":kursadi",kursadi);
     setKaydetSorgusu(tmp_kaydet); 
  //insert olayı burda biter
}
void kurslar::arama(QString text)
{
QString lowerText = text.toLower();

	QSqlQuery tmp_arama;
	QString find_str;
	find_str.append("lower(kursadi) LIKE '%"+lowerText+"%'"); 
// 	find_str.append("OR lower(sicilno) LIKE '%"+lowerText+"%'");
// 	find_str.append("OR lower(soyad) LIKE '%"+lowerText+"%'");
// 	find_str.append("OR lower(sinif) LIKE '%"+lowerText+"%'");
// 	find_str.append("OR lower(rutbe) LIKE '%"+lowerText+"%'");
	
	find_str.append("OR kursadi LIKE '%"+text+"%'"); 
// 	find_str.append("OR sicilno LIKE '%"+text+"%'");
// 	find_str.append("OR soyad LIKE '%"+text+"%'");
// 	find_str.append("OR sinif LIKE '%"+text+"%'");
// 	find_str.append("OR rutbe LIKE '%"+text+"%'");
	
	tmp_arama.prepare("SELECT * FROM kurslar WHERE "+find_str);
	setAramaSorgusu(tmp_arama);

}