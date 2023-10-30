#include "personel.h"
personel::personel()
{

}
personel::personel(const QString & id)
{
     setCurrentId(id);
//delete olayı
     QSqlQuery tmp_sil;
     tmp_sil.prepare("DELETE FROM personel WHERE id =" + getCurrentId() );
      setSilSorgusu(tmp_sil);

}
personel::personel(const QString & id,QString sicilno, QString ad, QString soyad, QString sinif,QString rutbe, int roleno)
{
     setCurrentId(id);
 //güncelleme olayı
     QSqlQuery tmp_guncelle;
     tmp_guncelle.prepare("UPDATE personel SET sicilno=:sicilno, ad=:ad, soyad=:soyad, sinif=:sinif, rutbe=:rutbe, roleno=:roleno WHERE  id = " + getCurrentId() );
     tmp_guncelle.bindValue(":sicilno", sicilno);
     tmp_guncelle.bindValue(":ad",ad);
     tmp_guncelle.bindValue(":soyad",soyad);
     tmp_guncelle.bindValue(":sinif",sinif);
     tmp_guncelle.bindValue(":rutbe",rutbe);
     tmp_guncelle.bindValue(":roleno",roleno);
     setGuncelleSorgusu(tmp_guncelle);

}
personel::personel(QString sicilno, QString ad, QString soyad, QString sinif,QString rutbe, int roleno)
{


     //insert olayı burada 
     QSqlQuery tmp_kaydet; 
     tmp_kaydet.prepare("INSERT INTO personel(sicilno, ad, soyad, sinif, rutbe, roleno)"
               "VALUES ( :sicilno, :ad, :soyad, :sinif, :rutbe, :roleno)");
     tmp_kaydet.bindValue(":sicilno", sicilno);
     tmp_kaydet.bindValue(":ad",ad);
     tmp_kaydet.bindValue(":soyad",soyad);
     tmp_kaydet.bindValue(":sinif",sinif);
     tmp_kaydet.bindValue(":rutbe",rutbe);
     tmp_kaydet.bindValue(":roleno",roleno);
     setKaydetSorgusu(tmp_kaydet); 
  //insert olayı burda biter
}
void personel::arama(QString text)
{
QString lowerText = text.toLower();

	QSqlQuery tmp_arama;
	QString find_str;
	find_str.append("lower(ad) LIKE '%"+lowerText+"%'"); 
	find_str.append("OR lower(sicilno) LIKE '%"+lowerText+"%'");
	find_str.append("OR lower(soyad) LIKE '%"+lowerText+"%'");
	find_str.append("OR lower(sinif) LIKE '%"+lowerText+"%'");
	find_str.append("OR lower(rutbe) LIKE '%"+lowerText+"%'");
	
	find_str.append("OR ad LIKE '%"+text+"%'"); 
	find_str.append("OR sicilno LIKE '%"+text+"%'");
	find_str.append("OR soyad LIKE '%"+text+"%'");
	find_str.append("OR sinif LIKE '%"+text+"%'");
	find_str.append("OR rutbe LIKE '%"+text+"%'");
	
	tmp_arama.prepare("SELECT * FROM personel WHERE "+find_str);
	setAramaSorgusu(tmp_arama);

}