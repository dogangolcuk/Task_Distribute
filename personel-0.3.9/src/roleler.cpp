#include "roleler.h"
roleler::roleler(const QString & id)
{
     setCurrentId(id);
//delete olayı
     QSqlQuery tmp_sil;
     tmp_sil.prepare("DELETE FROM roleler WHERE id =" + getCurrentId() );
      setSilSorgusu(tmp_sil);

}
roleler::roleler(const QString & id,QString ad, QString tipi)
{
     setCurrentId(id);
 //güncelleme olayı
     QSqlQuery tmp_guncelle;
     tmp_guncelle.prepare("UPDATE roleler SET ad=:ad, tipi=:tipi WHERE  id = " + getCurrentId() );
//      tmp_guncelle.bindValue(":sicilno", sicilno);
     tmp_guncelle.bindValue(":ad",ad);
     tmp_guncelle.bindValue(":tipi",tipi);
//      tmp_guncelle.bindValue(":yeri",yeri);
//      tmp_guncelle.bindValue(":neyapar",neyapar);
     setGuncelleSorgusu(tmp_guncelle);

}
roleler::roleler(QString ad, QString tipi)
{


     //insert olayı burada 
     QSqlQuery tmp_kaydet; 
     tmp_kaydet.prepare("INSERT INTO roleler(ad, tipi)"
               "VALUES ( :ad, :tipi)");
//      tmp_kaydet.bindValue(":ad", sicilno);
     tmp_kaydet.bindValue(":ad",ad);
     tmp_kaydet.bindValue(":tipi",tipi);
//      tmp_kaydet.bindValue(":yeri",yeri);
//      tmp_kaydet.bindValue(":neyapar",neyapar);
//      tmp_kaydet.bindValue(":roleno",roleno);
     setKaydetSorgusu(tmp_kaydet); 
  //insert olayı burda biter
}