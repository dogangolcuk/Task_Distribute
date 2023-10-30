#include "rolegorev.h"
rolegorev::rolegorev(const QString & id)
{
     setCurrentId(id);
//delete olayı
     QSqlQuery tmp_sil;
     tmp_sil.prepare("DELETE FROM rolegorevleri WHERE id =" + getCurrentId() );
      setSilSorgusu(tmp_sil);

}
rolegorev::rolegorev(const QString & id,QString ad, QString komuta, QString yeri, QString neyapar)
{
     setCurrentId(id);
 //güncelleme olayı
     QSqlQuery tmp_guncelle;
     tmp_guncelle.prepare("UPDATE rolegorevleri SET ad=:ad, komuta=:komuta, yeri=:yeri, neyapar=:neyapar WHERE  id = " + getCurrentId() );
//      tmp_guncelle.bindValue(":sicilno", sicilno);
     tmp_guncelle.bindValue(":ad",ad);
     tmp_guncelle.bindValue(":komuta",komuta);
     tmp_guncelle.bindValue(":yeri",yeri);
     tmp_guncelle.bindValue(":neyapar",neyapar);
     setGuncelleSorgusu(tmp_guncelle);

}
rolegorev::rolegorev(QString ad, QString komuta, QString yeri, QString neyapar)
{


     //insert olayı burada 
     QSqlQuery tmp_kaydet; 
     tmp_kaydet.prepare("INSERT INTO rolegorevleri(ad, komuta, yeri, neyapar)"
               "VALUES ( :ad, :komuta, :yeri, :neyapar)");
//      tmp_kaydet.bindValue(":ad", sicilno);
     tmp_kaydet.bindValue(":ad",ad);
     tmp_kaydet.bindValue(":komuta",komuta);
     tmp_kaydet.bindValue(":yeri",yeri);
     tmp_kaydet.bindValue(":neyapar",neyapar);
//      tmp_kaydet.bindValue(":roleno",roleno);
     setKaydetSorgusu(tmp_kaydet); 
  //insert olayı burda biter
}