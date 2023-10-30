#include "ui_formPersonelGorev.h" 
#include <QtSql>
#include <QMessageBox>
#include <QDate>
#include <QLocale>
#include <QDomDocument>
#include <QDomElement>
#include <QDomNode>
#include<QHeaderView>
#ifndef FORMPERSONELGOREV_H
#define FORMPERSONELGOREV_H
class formPersonelGorev:public QWidget ,public Ui::FormPersonelGorev
{
 Q_OBJECT
 QSqlQueryModel *perModel;
 QSqlQueryModel *gorevyeriModel;
 QSqlQueryModel *mevcutGorevlerModel;
 QItemSelectionModel *selectionPerModel ;
 QItemSelectionModel *selectionGorevYeriModel ; 
 QItemSelectionModel *selectionMevcutGorevlerModel;
 QModelIndex curindex;
 int personelid;
 int gorevyeriid;
 QString mevcutgorevidstr;
 QString personelidstr;
 public:
formPersonelGorev()
{
setupUi(this);
QDate localDate = QDate::currentDate();
// QDate localDate15sonra = localDate.addDays(15);
// dateAlma->setDate(localDate15sonra);
DeAtanma->setDate(localDate);
DeKatilma->setDate(localDate);
DeAyrilma->setDate(localDate);

 connect(ara_uyeler,SIGNAL(textChanged ( const QString &  )),this,SLOT(AraUyeler(const QString &)));
 connect(ara_gorevyeri,SIGNAL(textChanged ( const QString &  )),this,SLOT(AraGorevler(const QString &)));
 connect(PbAta,SIGNAL(clicked()),this,SLOT(Kaydet()));
 connect(tablo_personel,SIGNAL(pressed( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
 connect(tablo_personel,SIGNAL(pressed( const QModelIndex & )),this,SLOT(tablo_guncelle(const QModelIndex &)));
 connect(tablo_personel,SIGNAL(activated( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
 connect(tablo_gorevyeri,SIGNAL(pressed( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
 connect(tablo_gorevyeri,SIGNAL(activated( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
 connect(tablo_mevcut_gorevler,SIGNAL(pressed( const QModelIndex & )),this,SLOT(tablodolas_mevcutGorevler(const QModelIndex &)));


    mevcutGorevlerModel = new QSqlQueryModel;
    mevcutGorevlerModel->setQuery("SELECT pg.id,g.gorevyeri, pg.atanmatarihi,pg.katilmatarihi,pg.ayrilmatarihi FROM personel_gorevler pg,gorevler g WHERE pg.gorevler_id=g.id AND  pg.personel_id="+personelidstr);
// mevcutGorevlerModel->query();
     tablo_mevcut_gorevler->setModel(mevcutGorevlerModel);
     tablo_mevcut_gorevler->addAction(actionSil);
//      tablo_mevcut_gorevler->hideColumn(0);
     tablo_mevcut_gorevler->show();



     perModel = new QSqlQueryModel;
     perModel->setQuery("SELECT id,sicilno,ad,soyad FROM personel");
     tablo_personel->setModel(perModel);
     tablo_personel->hideColumn(0);
     tablo_personel->show();


     gorevyeriModel = new QSqlQueryModel;
     gorevyeriModel->setQuery("SELECT id,gorevyeri FROM gorevler");
     tablo_gorevyeri->setModel(gorevyeriModel);
     tablo_gorevyeri->hideColumn(0);
     tablo_gorevyeri->show();

	tablo_gorevyeri->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
	tablo_mevcut_gorevler->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
	tablo_personel->horizontalHeader()->setResizeMode(QHeaderView::Stretch);

	selectionMevcutGorevlerModel = tablo_mevcut_gorevler->selectionModel();
	selectionGorevYeriModel = tablo_gorevyeri->selectionModel();
	selectionPerModel = tablo_personel->selectionModel();
}
public slots:

void tablodolas(const QModelIndex & index)
{

 personelid = perModel->data(perModel->index(selectionPerModel->currentIndex().row(), 0)).toInt();
 gorevyeriid = gorevyeriModel->data(gorevyeriModel->index(selectionGorevYeriModel->currentIndex().row(), 0)).toInt();

 QString perAd = perModel->data(perModel->index(selectionPerModel->currentIndex().row(), 2)).toString();
 QString perSoyAd = perModel->data(perModel->index(selectionPerModel->currentIndex().row(), 3)).toString();
 QString gorevYeristr = gorevyeriModel->data(gorevyeriModel->index(selectionGorevYeriModel->currentIndex().row(), 1)).toString();
LePersonel->setText(perAd+" "+perSoyAd);
LeGorevYeri->setText(gorevYeristr);



}
void tablodolas_mevcutGorevler(const QModelIndex & index)
{


 gorevyeriid = gorevyeriModel->data(gorevyeriModel->index(selectionGorevYeriModel->currentIndex().row(), 0)).toInt();


 mevcutgorevidstr=mevcutGorevlerModel->data(mevcutGorevlerModel->index(selectionMevcutGorevlerModel->currentIndex().row(), 0)).toString();
 
 qDebug()<<mevcutgorevidstr;
// LeRole->setText(personelidstr);
// LeRoleGorev->setText(rolegorevstr);



}

void tablo_guncelle(const QModelIndex & index)
{
mevcutGorevlerModel->clear();
// personelid = perModel->data(perModel->index(selectionGorevYeriModel->currentIndex().row(), 0)).toInt();
personelidstr = perModel->data(perModel->index(selectionPerModel->currentIndex().row(), 0)).toString();
qDebug()<< personelidstr;

mevcutGorevlerModel->clear();
mevcutGorevlerModel->setQuery("SELECT pg.id,g.gorevyeri, pg.atanmatarihi,pg.katilmatarihi,pg.ayrilmatarihi FROM personel_gorevler pg,gorevler g WHERE pg.gorevler_id=g.id AND  pg.personel_id="+personelidstr);
mevcutGorevlerModel->query();

}

void mevcutGorevSil()
{
personelidstr = perModel->data(perModel->index(selectionPerModel->currentIndex().row(), 0)).toString();
// QString mevcutgorevidstr = mevcutGorevlerModel->data(mevcutGorevlerModel->index(selectionGorevYeriModel->currentIndex().row(), 0)).toString();


 QSqlDatabase::database().transaction();
 QSqlQuery update_olayi;
 qDebug()<<personelidstr<<mevcutgorevidstr;
//  update_olayi.prepare("DELETE FROM personel_gorevler WHERE personel_id="+personelidstr+"AND gorevler_id="+mevcutgorevidstr);
update_olayi.prepare("DELETE FROM personel_gorevler WHERE id="+mevcutgorevidstr);
 update_olayi.exec();
 qDebug() << update_olayi.lastError();
 QSqlDatabase::database().commit();

mevcutGorevlerModel->setQuery("SELECT pg.id,g.gorevyeri, pg.atanmatarihi,pg.katilmatarihi,pg.ayrilmatarihi FROM personel_gorevler pg,gorevler g WHERE pg.gorevler_id=g.id AND  pg.personel_id="+personelidstr);
mevcutGorevlerModel->query();


}
void on_actionSil_triggered()
{
 mevcutGorevSil();
}

void Kaydet()
{
if(1){
      QSqlDatabase::database().transaction();
      QSqlQuery insert_olayi;
      insert_olayi.prepare("INSERT INTO personel_gorevler ( personel_id, gorevler_id,atanmatarihi,katilmatarihi,ayrilmatarihi)" 
                           "VALUES (  :personelid, :gorevyeriid,:atanmatarihi,:katilmatarihi,:ayrilmatarihi)");

      insert_olayi.bindValue(":personelid", personelid);
      insert_olayi.bindValue(":gorevyeriid", gorevyeriid);
      insert_olayi.bindValue(":atanmatarihi",DeAtanma->date());
      insert_olayi.bindValue(":katilmatarihi",DeKatilma->date());
      insert_olayi.bindValue(":ayrilmatarihi",DeAyrilma->date());
      if(insert_olayi.exec()){
     
      QSqlDatabase::database().commit();
//             qDebug("Kayıt oldu");
              QMessageBox::question(
			this,
			trUtf8("Uyarı"),
			trUtf8("Kayıt Tamamlandı.")
			);


     }else{
        QSqlDatabase::database().rollback();
        qDebug() << insert_olayi.lastError();
//         qDebug("Ödünç verilemedi");
        QMessageBox::question(
			this,
			trUtf8("Uyarı"),

			trUtf8("HATA OLUŞTU.")
			);
     }
personelidstr = perModel->data(perModel->index(selectionPerModel->currentIndex().row(), 0)).toString();
mevcutGorevlerModel->clear();
mevcutGorevlerModel->setQuery("SELECT pg.id,g.gorevyeri, pg.atanmatarihi,pg.katilmatarihi,pg.ayrilmatarihi FROM personel_gorevler pg,gorevler g WHERE pg.gorevler_id=g.id AND  pg.personel_id="+personelidstr);
mevcutGorevlerModel->query();
	}

}	

void AraUyeler(const QString & text )
{
 perModel->clear();
 QString f;
 f.append( "lower(ad) LIKE '%");
 f.append(text.toLower());
 f.append("%'");
 f.append( " OR lower(ad) LIKE '%");
 f.append(text);
 f.append("%'");
 
 f.append(" OR lower(soyad) LIKE '%" );
 f.append(text.toLower());
 f.append("%'");
 f.append( " OR lower(soyad) LIKE '%");
 f.append(text);
 f.append("%'");

//  f.append(" OR lower(uye_no) LIKE '%" );
//  f.append(text.toLower());
//  f.append("%'");
//  f.append( " OR lower(uye_no) LIKE '%");
//  f.append(text);
//  f.append("%'");

//  qDebug() << f ;

 perModel->setQuery("SELECT id,sicilno,ad,soyad FROM personel WHERE "+ f);
 perModel->query();

}
void AraGorevler(const QString & text )
{
 gorevyeriModel->clear();
 QString f;
 f.append( "lower(gorevyeri) LIKE '%");
 f.append(text.toLower());
 f.append("%'");
 f.append( " OR lower(gorevyeri) LIKE '%");
 f.append(text);
 f.append("%'");

//  f.append(" OR isbn LIKE '%" );
//  f.append(text);
//  f.append("%'");

//  f.append(" OR lower(komuta) LIKE '%" );
//  f.append(text.toLower());
//  f.append("%'");
//  f.append( " OR lower(komuta) LIKE '%");
//  f.append(text);
//  f.append("%'");
// qDebug() << f ;
 

 gorevyeriModel->setQuery("SELECT id,gorevyeri FROM gorevler WHERE "+ f);
 gorevyeriModel->query();
}
/*
int RoleUygunmu()
{
      QLocale lokal(QLocale::Turkish , QLocale::Turkey);
      QString role = lokal.toString(personelid);
      QString rolegorev = lokal.toString(gorevyeriid);

QSqlQuery sorgu("SELECT count(*)  FROM  roleler_rolegorevleri WHERE  roleler_id="+role +" and rolegorevleri_id="+rolegorev);
// QSqlQuery sorgu1("SELECT adet  FROM  kitaplar WHERE  id="+kitap);
 sorgu.exec();
// sorgu1.exec();
sorgu.next();
// sorgu1.next();
if (sorgu.lastError().isValid());
     qDebug() << sorgu.lastError();
// qDebug() << sorgu1.lastError();
int tmp=sorgu.value(0).toInt();
// int toplam_kitap_sayisi=sorgu1.value(0).toInt();
QString k=sorgu.value(0).toString();
// QString tk=sorgu1.value(0).toString();
qDebug()<< k ;
// qDebug()<< tk;
if (tmp>=1){
    qDebug("Bu Roleye Zaten Bu Görev Atanmış");
    QMessageBox::question(
			this,
			trUtf8("Uyarı"),
			trUtf8("Bu Roleye Zaten Bu Görev Atanmış.")
			);
return 0;
}else return 1;

}
*/
/*
int KitapUygunmu()
{
     QLocale lokal(QLocale::Turkish , QLocale::Turkey);
     QString kitap = lokal.toString(gorevyeriid);

QSqlQuery sorgu("SELECT count(*)  FROM  odunc_al_ver WHERE  kitap_id="+kitap +" and verdi_vermedi=false");
QSqlQuery sorgu1("SELECT adet  FROM  kitaplar WHERE  id="+kitap);
sorgu.exec();
sorgu1.exec();
sorgu.next();
sorgu1.next();
if (sorgu.lastError().isValid());
     qDebug() << sorgu.lastError();
qDebug() << sorgu1.lastError();
int verilen_kitap_sayisi=sorgu.value(0).toInt();
int toplam_kitap_sayisi=sorgu1.value(0).toInt();
QString k=sorgu.value(0).toString();
QString tk=sorgu1.value(0).toString();
qDebug()<< k ;
qDebug()<< tk;
if (toplam_kitap_sayisi<=verilen_kitap_sayisi){
    qDebug("Kitap kalmamış");
    QMessageBox::question(
			this,
			trUtf8("Uyarı"),
			trUtf8("Kitap Adeti Yetersiz.Kitap Diğer Üyelerde Olabilir.")
			);
return 0;
}else return 1;

}

int uyeUygunmu()
{
     QLocale lokal(QLocale::Turkish , QLocale::Turkey);
     QString uye = lokal.toString(personelid);

QDomDocument ayarDosyasi;
        QFile tmp("/etc/kutya.ayar");
        tmp.open(QIODevice::ReadOnly| QIODevice::Text);
        ayarDosyasi.setContent(&tmp);
        QDomElement root = ayarDosyasi.firstChildElement("Ayarlar");
  	QDomElement kategori = root.firstChildElement("KitapLimit");
	QDomElement deger = kategori.firstChildElement("Deger");
// 		QStringList items;
// 	for (; !deger.isNull(); deger = deger.nextSiblingElement("Deger")) {
// 		qDebug() << deger.text();
// 		items.append(deger.text());
     int kitaplimit= deger.text().toInt();
// 		CbKategori->addItem(deger.text());
//  	}

QSqlQuery sorgu("SELECT count(*)  FROM  odunc_al_ver WHERE  uye_id="+uye +" and verdi_vermedi=false");
// QSqlQuery sorgu1("SELECT adet  FROM  kitaplar WHERE  id="+kitap);
sorgu.exec();
// sorgu1.exec();
sorgu.next();
// sorgu1.next();
if (sorgu.lastError().isValid());
     qDebug() << sorgu.lastError();
// qDebug() << sorgu1.lastError();
int uyedeki_kitap_sayisi=sorgu.value(0).toInt();
// int toplam_kitap_sayisi=sorgu1.value(0).toInt();
QString k=sorgu.value(0).toString();
// QString tk=sorgu1.value(0).toString();
qDebug()<< k ;
// qDebug()<< tk;
if (uyedeki_kitap_sayisi>=kitaplimit){
//     qDebug("Üyede 4 adet verilmemiş kitap var.");
QString kstr = lokal.toString(uyedeki_kitap_sayisi);
// const QChar *k=kstr.data();
// qDebug()<< kstr;
if (
		QMessageBox::question(
			this,
			trUtf8("Uyarı"),
			trUtf8("Üyede  <b>%1 adet</b> getirilmemiş kitap gözüküyor."
                        "Üyenin getirmediği kitaplar için <u>Geri Al Formu</u>'na bakabilirsiniz."
                        "Buna rağmen kitap vermek istiyor musunuz?").arg(kstr),
			trUtf8("Evet"),
			trUtf8("Hayır"),
			QString(), 1, 0 | QMessageBox::Default | QMessageBox::Escape) == 0
		) return 1;return 0;
}
return 1;
}
*/

};
#endif
