#include "ui_formRoleNoRoleGorev.h" 
#include <QtSql>
#include <QMessageBox>
#include <QDate>
#include <QLocale>
#include <QDomDocument>
#include <QDomElement>
#include <QDomNode>
#include <QHeaderView>
class formRoleNoRoleGorev:public QWidget ,public Ui::FormRoleNoRoleGorev
{
 Q_OBJECT
QSqlQueryModel *rolenoModel;
 QSqlQueryModel *roleModel;
 QSqlQueryModel *rolegorevModel;
QSqlQueryModel *mevcutGorevlerModel;
 QItemSelectionModel *selectionRoleGorevModel ;
 QItemSelectionModel *selectionRoleModel ; 
QItemSelectionModel *selectionRoleNoModel ;
QItemSelectionModel *selectionMevcutGorevler; 
 QModelIndex curindex;
 int rolenoid;
 int roleid;
 int rolegorevid;
 public:
formRoleNoRoleGorev()
{
setupUi(this);
// QDate localDate = QDate::currentDate();
// QDate localDate15sonra = localDate.addDays(15);
// dateVerme->setDate(localDate);
// dateAlma->setDate(localDate15sonra);
 connect(ara_roleno,SIGNAL(textChanged ( const QString &  )),this,SLOT(AraRoleNo(const QString &)));
 connect(ara_uyeler,SIGNAL(textChanged ( const QString &  )),this,SLOT(AraUyeler(const QString &)));
 connect(ara_kitaplar,SIGNAL(textChanged ( const QString &  )),this,SLOT(AraKitaplar(const QString &)));
 connect(PbAta,SIGNAL(clicked()),this,SLOT(Kaydet()));
 connect(tablo_role,SIGNAL(pressed( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
connect(tablo_role,SIGNAL(pressed( const QModelIndex & )),this,SLOT(tablo_rolegorev_guncelle(const QModelIndex &)));
 connect(tablo_rolegorev,SIGNAL(pressed( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
 connect(tablo_role,SIGNAL(activated( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
connect(tablo_role,SIGNAL(pressed( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
 connect(tablo_rolegorev,SIGNAL(activated( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
connect(tablo_roleno,SIGNAL(activated( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
connect(tablo_roleno,SIGNAL(pressed( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
connect(tablo_roleno,SIGNAL(pressed( const QModelIndex & )),this,SLOT(tablo_mevcut_gorevler_guncelle(const QModelIndex &)));
connect(tablo_roleno,SIGNAL(activated( const QModelIndex & )),this,SLOT(tablo_mevcut_gorevler_guncelle(const QModelIndex &)));
     rolenoModel = new QSqlQueryModel;
     rolenoModel->setQuery("SELECT * From personel_roleno");
     tablo_roleno->setModel(rolenoModel);
//      tablo_roleno->hideColumn(0);
     tablo_roleno->show();


     roleModel = new QSqlQueryModel;
     roleModel->setQuery("SELECT id,ad,tipi FROM roleler");
     tablo_role->setModel(roleModel);
     tablo_role->hideColumn(0);
     tablo_role->show();


     rolegorevModel = new QSqlQueryModel;
     rolegorevModel->setQuery("SELECT id,ad,komuta,yeri FROM rolegorevleri");
      tablo_rolegorev->setModel(rolegorevModel);
      tablo_rolegorev->hideColumn(0);
      tablo_rolegorev->show();


mevcutGorevlerModel = new QSqlQueryModel;
tablo_mevcut_gorevler->setModel(mevcutGorevlerModel);
tablo_mevcut_gorevler->addAction(actionGorevsil);
tablo_mevcut_gorevler->hideColumn(0);
tablo_mevcut_gorevler->hideColumn(1);
tablo_mevcut_gorevler->show();

        selectionRoleModel = tablo_role->selectionModel();
	selectionRoleNoModel = tablo_roleno->selectionModel();
        selectionRoleGorevModel = tablo_rolegorev->selectionModel();
	selectionMevcutGorevler = tablo_mevcut_gorevler->selectionModel();

tablo_role->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
tablo_roleno->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
tablo_rolegorev->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
tablo_mevcut_gorevler->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
}
public slots:

void tablodolas(const QModelIndex & index)
{
LeRoleGorev->clear();
rolenoid = rolenoModel->data(rolenoModel->index(selectionRoleNoModel->currentIndex().row(), 0)).toInt();
 

 roleid = roleModel->data(roleModel->index(selectionRoleModel->currentIndex().row(), 0)).toInt();
 rolegorevid = rolegorevModel->data(rolegorevModel->index(selectionRoleGorevModel->currentIndex().row(), 0)).toInt();


QString rolenoidstr = rolenoModel->data(rolenoModel->index(selectionRoleNoModel->currentIndex().row(), 1)).toString();

QString roleidstr = roleModel->data(roleModel->index(selectionRoleModel->currentIndex().row(), 1)).toString();
 QString rolegorevstr = rolegorevModel->data(rolegorevModel->index(selectionRoleGorevModel->currentIndex().row(), 1)).toString();

LeRoleNo->setText(rolenoidstr);
LeRole->setText(roleidstr);
LeRoleGorev->setText(rolegorevstr);
}

void tablo_mevcut_gorevler_guncelle(const QModelIndex & index)
{
mevcutGorevlerModel->clear();
QString rolenoidstr = rolenoModel->data(rolenoModel->index(selectionRoleNoModel->currentIndex().row(), 0)).toString();

mevcutGorevlerModel->setQuery("SELECT  rl.id as rlid,rlg.id as rlgid ,rl.ad AS roleadi , rlg.ad AS gorevi FROM roleno_roleler_rolegorevleri rrr, roleler rl, rolegorevleri rlg WHERE rrr.roleler_id = rl.id AND rrr.rolegorevleri_id = rlg.id AND rrr.roleno="+rolenoidstr);
tablo_mevcut_gorevler->hideColumn(0);
tablo_mevcut_gorevler->hideColumn(1);
mevcutGorevlerModel->query();

}
void mevcut_gorevler_sil()
{
// mevcutGorevlerModel->clear();
QString rolenoidstr = rolenoModel->data(rolenoModel->index(selectionRoleNoModel->currentIndex().row(), 0)).toString();

QString roleidstr = mevcutGorevlerModel->data(mevcutGorevlerModel->index(selectionMevcutGorevler->currentIndex().row(), 0)).toString();

QString rolegorevidstr = mevcutGorevlerModel->data(mevcutGorevlerModel->index(selectionMevcutGorevler->currentIndex().row(), 1)).toString();

QSqlDatabase::database().transaction();
 QSqlQuery update_olayi;
qDebug()<<roleidstr<<rolegorevidstr;
 update_olayi.prepare("DELETE FROM roleno_roleler_rolegorevleri WHERE rolegorevleri_id="+rolegorevidstr+"AND roleler_id="+roleidstr+"AND roleno="+rolenoidstr);
 update_olayi.exec();
 qDebug() << update_olayi.lastError();
 QSqlDatabase::database().commit();

mevcutGorevlerModel->setQuery("SELECT  rl.id as rlid,rlg.id as rlgid ,rl.ad AS roleadi , rlg.ad AS gorevi FROM roleno_roleler_rolegorevleri rrr, roleler rl, rolegorevleri rlg WHERE rrr.roleler_id = rl.id AND rrr.rolegorevleri_id = rlg.id AND rrr.roleno="+rolenoidstr);

mevcutGorevlerModel->query();
// mevcutGorevlerModel->setQuery("SELECT  rl.ad AS roleadi , rlg.ad AS gorevi FROM roleno_roleler_rolegorevleri rrr, roleler rl, rolegorevleri rlg WHERE rrr.roleler_id = rl.id AND rrr.rolegorevleri_id = rlg.id AND rrr.roleno="+rolenoidstr);

// mevcutGorevlerModel->query();

}
void on_actionGorevsil_triggered()
{
 mevcut_gorevler_sil();
}
void tablo_rolegorev_guncelle(const QModelIndex & index)
{
rolegorevModel->clear();
// roleid = roleModel->data(roleModel->index(selectionRoleModel->currentIndex().row(), 0)).toInt();
QString roleidstr = roleModel->data(roleModel->index(selectionRoleModel->currentIndex().row(), 0)).toString();

rolegorevModel->setQuery("SELECT id,ad,komuta,yeri FROM rolegorevleri rg,roleler_rolegorevleri rrg WHERE rrg.rolegorevleri_id=rg.id AND  rrg.roleler_id="+roleidstr);
rolegorevModel->query();



}


void Kaydet()
{
if(RoleUygunmu() and AyniRoledeKacGoreviVar() and AyniRoledeKacPersonelVar()){
      QSqlDatabase::database().transaction();
      QSqlQuery insert_olayi;
      insert_olayi.prepare("INSERT INTO roleno_roleler_rolegorevleri ( roleler_id, rolegorevleri_id,roleno)" 
                           "VALUES (  :roleid, :rolegorevid,:roleno)");

      insert_olayi.bindValue(":roleid", roleid);
      insert_olayi.bindValue(":rolegorevid", rolegorevid);
insert_olayi.bindValue(":roleno", rolenoid);
//       insert_olayi.bindValue(":verme_tarihi",dateVerme->date());
//       insert_olayi.bindValue(":alma_tarihi",dateAlma->date());
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

			trUtf8("Seçtiğiniz Role ye Görev Atanamadı.")
			);
     }

	}

}	

void AraUyeler(const QString & text )
{
 roleModel->clear();
 QString f;
 f.append( "lower(ad) LIKE '%");
 f.append(text.toLower());
 f.append("%'");
 f.append( " OR lower(ad) LIKE '%");
 f.append(text);
 f.append("%'");
 
 f.append(" OR lower(tipi) LIKE '%" );
 f.append(text.toLower());
 f.append("%'");
 f.append( " OR lower(tipi) LIKE '%");
 f.append(text);
 f.append("%'");

//  f.append(" OR lower(uye_no) LIKE '%" );
//  f.append(text.toLower());
//  f.append("%'");
//  f.append( " OR lower(uye_no) LIKE '%");
//  f.append(text);
//  f.append("%'");

//  qDebug() << f ;

 roleModel->setQuery("SELECT id,ad,tipi FROM roleler WHERE "+ f);
 roleModel->query();

}
void AraKitaplar(const QString & text )
{
 rolegorevModel->clear();
 QString f;
 f.append( "lower(ad) LIKE '%");
 f.append(text.toLower());
 f.append("%'");
 f.append( " OR lower(ad) LIKE '%");
 f.append(text);
 f.append("%'");

//  f.append(" OR isbn LIKE '%" );
//  f.append(text);
//  f.append("%'");

 f.append(" OR lower(komuta) LIKE '%" );
 f.append(text.toLower());
 f.append("%'");
 f.append( " OR lower(komuta) LIKE '%");
 f.append(text);
 f.append("%'");
// qDebug() << f ;
 

 rolegorevModel->setQuery("SELECT id,ad,komuta,yeri FROM rolegorevleri WHERE "+ f);
 rolegorevModel->query();
}

void AraRoleNo(const QString & text )
{
 rolenoModel->clear();
 QString f;
 f.append( "lower(rno) LIKE '%");
 f.append(text.toLower());
 f.append("%'");
 f.append( " OR lower(rno) LIKE '%");
 f.append(text);
 f.append("%'");

//  f.append(" OR isbn LIKE '%" );
//  f.append(text);
//  f.append("%'");

 f.append(" OR lower(ad) LIKE '%" );
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
// qDebug() << f ;
 
rolenoModel->setQuery("SELECT * FROM personel_roleno WHERE "+f);
//  rolegorevModel->setQuery("SELECT id,ad,komuta,yeri FROM rolegorevleri WHERE "+ f);
 rolenoModel->query();
}
int RoleUygunmu()
{
      QLocale lokal(QLocale::Turkish , QLocale::Turkey);
      QString role = lokal.toString(roleid);
      QString rolegorev = lokal.toString(rolegorevid);
QString roleno = lokal.toString(rolenoid);
qDebug()<<"Rolelerid="<<role<<" rolegorevid="<<rolegorev<<"roleno="<<roleno;
QSqlQuery sorgu("SELECT count(*)  FROM  roleno_roleler_rolegorevleri WHERE  roleler_id="+role +" and rolegorevleri_id="+rolegorev+"and roleno="+roleno);
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
    qDebug("Bu Rolede Bu Görev Zaten Bu Personele Verilmiş.");
    QMessageBox::question(
			this,
			trUtf8("Uyarı"),
			trUtf8("Bu Rolede Bu Görev Zaten Bu Personele Verilmiş.Eğer ikiz role ise tekrar kaydetmenize gerek yok.")
			);
return 0;
}else return 1;

}

int AyniRoledeKacGoreviVar()
{
      QLocale lokal(QLocale::Turkish , QLocale::Turkey);
      QString role = lokal.toString(roleid);
      QString rolegorev = lokal.toString(rolegorevid);
QString roleno = lokal.toString(rolenoid);
qDebug()<<"Rolelerid="<<role<<" rolegorevid="<<rolegorev<<"roleno="<<roleno;
QSqlQuery sorgu("SELECT count(*)  FROM  roleno_roleler_rolegorevleri WHERE  roleler_id="+role +" and roleno="+roleno);
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
    qDebug("Bu Rolede Bu Görev Zaten Bu Personele Verilmiş.");
    QMessageBox::question(
			this,
			trUtf8("Uyarı"),
			trUtf8("Bu Personele Bu Rolede Zaten Görev Verilmiş.")
			);
return 0;
}else return 1;


}

int AyniRoledeKacPersonelVar()
{
      QLocale lokal(QLocale::Turkish , QLocale::Turkey);
      QString role = lokal.toString(roleid);
      QString rolegorev = lokal.toString(rolegorevid);
QString roleno = lokal.toString(rolenoid);
qDebug()<<"Rolelerid="<<role<<" rolegorevid="<<rolegorev<<"roleno="<<roleno;
QSqlQuery sorgu("SELECT count(*)  FROM  roleno_roleler_rolegorevleri WHERE  roleler_id="+role +" and rolegorevleri_id="+rolegorev);
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
QString tmpstr=sorgu.value(0).toString();
// QString tk=sorgu1.value(0).toString();
qDebug()<< tmpstr ;
// qDebug()<< tk;
if (tmp>=1){
    qDebug("Bu Rolede Bu Görev Zaten Bu Personele Verilmiş.");
    if (
		QMessageBox::question(
			this,
			trUtf8("Uyarı"),
			trUtf8("Bu Rolede Bu göreve zaten %1 personel tefrik edilmiş."
			"Buna rağmen kaydetmek istiyor musunuz?").arg(tmpstr),
			trUtf8("Evet"),
			trUtf8("Hayır"),
			QString(), 1, 0 | QMessageBox::Default | QMessageBox::Escape) == 0
		)
return 1;else return 0; 
}else return 1;


}
/*

int KitapUygunmu()
{
     QLocale lokal(QLocale::Turkish , QLocale::Turkey);
     QString kitap = lokal.toString(rolegorevid);

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
     QString uye = lokal.toString(roleid);

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

