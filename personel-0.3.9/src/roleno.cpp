#include "roleno.h"
roleno::roleno(const QString & id)
{
     setCurrentId(id);
//delete olayı
     QSqlQuery tmp_sil;
     tmp_sil.prepare("DELETE FROM roleno WHERE id =" + getCurrentId() );
      setSilSorgusu(tmp_sil);

}
roleno::roleno(const QString & id,QString rno)
{
     setCurrentId(id);
 //güncelleme olayı
     QSqlQuery tmp_guncelle;
     tmp_guncelle.prepare("UPDATE roleno SET rno=:rno WHERE  id = " + getCurrentId() );
     tmp_guncelle.bindValue(":rno", rno);
     setGuncelleSorgusu(tmp_guncelle);

}
roleno::roleno(QString rno,int k)
{


   //insert olayı burada 
     QSqlQuery tmp_kaydet; 
     tmp_kaydet.prepare("INSERT INTO roleno(rno)"
               "VALUES (:rno)");
     tmp_kaydet.bindValue(":rno", rno);
     setKaydetSorgusu(tmp_kaydet); 
  //insert olayı burda biter
}