#include "gorevler.h"
gorevler::gorevler()
{

}
gorevler::gorevler(const QString & id,int)
{
     setCurrentId(id);
//delete olayı
     QSqlQuery tmp_sil;
     tmp_sil.prepare("DELETE FROM gorevler WHERE id =" + getCurrentId() );
      setSilSorgusu(tmp_sil);

}
gorevler::gorevler(const QString & id,QString gorevyeri)
{
     setCurrentId(id);
 //güncelleme olayı
     QSqlQuery tmp_guncelle;
     tmp_guncelle.prepare("UPDATE gorevler SET gorevyeri=:gorevyeri WHERE  id = " + getCurrentId() );
//      tmp_guncelle.bindValue(":sicilno", sicilno);
     tmp_guncelle.bindValue(":gorevyeri",gorevyeri);
//      tmp_guncelle.bindValue(":tipi",tipi);
//      tmp_guncelle.bindValue(":yeri",yeri);
//      tmp_guncelle.bindValue(":neyapar",neyapar);
     setGuncelleSorgusu(tmp_guncelle);

}
gorevler::gorevler(QString gorevyeri)
{


     //insert olayı burada 
     QSqlQuery tmp_kaydet; 
     tmp_kaydet.prepare("INSERT INTO gorevler(gorevyeri)"
               "VALUES ( :gorevyeri)");
//      tmp_kaydet.bindValue(":ad", sicilno);
     tmp_kaydet.bindValue(":gorevyeri",gorevyeri);
     setKaydetSorgusu(tmp_kaydet); 
  //insert olayı burda biter
}
void gorevler::arama(QString text)
{
QString lowerText = text.toLower();

	QSqlQuery tmp_arama;
	QString find_str;
	find_str.append("lower(gorevyeri) LIKE '%"+lowerText+"%'"); 
// 	find_str.append("OR lower(sicilno) LIKE '%"+lowerText+"%'");
// 	find_str.append("OR lower(soyad) LIKE '%"+lowerText+"%'");
// 	find_str.append("OR lower(sinif) LIKE '%"+lowerText+"%'");
// 	find_str.append("OR lower(rutbe) LIKE '%"+lowerText+"%'");
	
	find_str.append("OR gorevyeri LIKE '%"+text+"%'"); 
// 	find_str.append("OR sicilno LIKE '%"+text+"%'");
// 	find_str.append("OR soyad LIKE '%"+text+"%'");
// 	find_str.append("OR sinif LIKE '%"+text+"%'");
// 	find_str.append("OR rutbe LIKE '%"+text+"%'");
	
	tmp_arama.prepare("SELECT * FROM gorevler WHERE "+find_str);
	setAramaSorgusu(tmp_arama);

}