#include "ui_formRoleRoleGorevui.h" 
#include <QtSql>
#include <QMessageBox>
#include <QDate>
#include <QLocale>
#include <QDomDocument>
#include <QDomElement>
#include <QDomNode>
#include<QHeaderView>
class formRoleRoleGorev:public QWidget ,public Ui::FormRoleRoleGorev
{
 Q_OBJECT
 QSqlQueryModel *roleModel;
 QSqlQueryModel *rolegorevModel;
QSqlQueryModel *rolegorevAtananModel;
 QItemSelectionModel *selectionRoleGorevModel ;
 QItemSelectionModel *selectionRoleModel ; 
QItemSelectionModel *selectionrolegorevAtananModel;
 QModelIndex curindex;
 int roleid;
 int rolegorevid;
QString rolegorevidstr;
 public:
formRoleRoleGorev()
{
setupUi(this);
// QDate localDate = QDate::currentDate();
// QDate localDate15sonra = localDate.addDays(15);
// dateVerme->setDate(localDate);
// dateAlma->setDate(localDate15sonra);

 connect(ara_uyeler,SIGNAL(textChanged ( const QString &  )),this,SLOT(AraUyeler(const QString &)));
 connect(ara_kitaplar,SIGNAL(textChanged ( const QString &  )),this,SLOT(AraKitaplar(const QString &)));
 connect(PbAta,SIGNAL(clicked()),this,SLOT(Kaydet()));
 connect(tablo_role,SIGNAL(pressed( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
 connect(tablo_rolegorev,SIGNAL(pressed( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
 connect(tablo_role,SIGNAL(activated( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
 connect(tablo_rolegorev,SIGNAL(activated( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));

connect(tablo_role,SIGNAL(pressed( const QModelIndex & )),this,SLOT(tablo_guncelle(const QModelIndex &)));

connect(tablo_rolegorev_atanan,SIGNAL(pressed( const QModelIndex & )),this,SLOT(tablodolas_gorevAtanan(const QModelIndex &)));


    rolegorevAtananModel = new QSqlQueryModel;
    rolegorevAtananModel->setQuery("SELECT id,ad,komuta,yeri FROM rolegorevleri rg,roleler_rolegorevleri rrg,roleler rol WHERE rrg.rolegorevleri_id=rg.id AND  rrg.roleler_id=rol.id");
// rolegorevAtananModel->query();
     tablo_rolegorev_atanan->setModel(rolegorevAtananModel);
tablo_rolegorev_atanan->addAction(actionSil);
//      tablo_rolegorev_atanan->hideColumn(0);
     tablo_rolegorev_atanan->show();



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
tablo_rolegorev->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
tablo_rolegorev_atanan->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
tablo_role->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
selectionrolegorevAtananModel = tablo_rolegorev_atanan->selectionModel();
      selectionRoleModel = tablo_role->selectionModel();
      selectionRoleGorevModel = tablo_rolegorev->selectionModel();
}
public slots:

void tablodolas(const QModelIndex & index)
{

 roleid = roleModel->data(roleModel->index(selectionRoleModel->currentIndex().row(), 0)).toInt();
 rolegorevid = rolegorevModel->data(rolegorevModel->index(selectionRoleGorevModel->currentIndex().row(), 0)).toInt();

QString roleidstr = roleModel->data(roleModel->index(selectionRoleModel->currentIndex().row(), 1)).toString();
 QString rolegorevstr = rolegorevModel->data(rolegorevModel->index(selectionRoleGorevModel->currentIndex().row(), 1)).toString();
LeRole->setText(roleidstr);
LeRoleGorev->setText(rolegorevstr);



}
void tablodolas_gorevAtanan(const QModelIndex & index)
{


 rolegorevid = rolegorevModel->data(rolegorevModel->index(selectionRoleGorevModel->currentIndex().row(), 0)).toInt();


 rolegorevidstr=rolegorevAtananModel->data(rolegorevAtananModel->index(selectionrolegorevAtananModel->currentIndex().row(), 0)).toString();
qDebug()<<rolegorevidstr;
// LeRole->setText(roleidstr);
// LeRoleGorev->setText(rolegorevstr);



}

void tablo_guncelle(const QModelIndex & index)
{
rolegorevAtananModel->clear();
// roleid = roleModel->data(roleModel->index(selectionRoleModel->currentIndex().row(), 0)).toInt();
QString roleidstr = roleModel->data(roleModel->index(selectionRoleModel->currentIndex().row(), 0)).toString();

rolegorevAtananModel->setQuery("SELECT id,ad,komuta,yeri FROM rolegorevleri rg,roleler_rolegorevleri rrg WHERE rrg.rolegorevleri_id=rg.id AND  rrg.roleler_id="+roleidstr);
rolegorevAtananModel->query();

}

void role_gorev_atanan_sil()
{
QString roleidstr = roleModel->data(roleModel->index(selectionRoleModel->currentIndex().row(), 0)).toString();
// QString rolegorevidstr = rolegorevAtananModel->data(rolegorevAtananModel->index(selectionRoleModel->currentIndex().row(), 0)).toString();


 QSqlDatabase::database().transaction();
 QSqlQuery update_olayi;
qDebug()<<roleidstr<<rolegorevidstr;
 update_olayi.prepare("DELETE FROM roleler_rolegorevleri WHERE rolegorevleri_id="+rolegorevidstr+"AND roleler_id="+roleidstr);
 update_olayi.exec();
 qDebug() << update_olayi.lastError();
 QSqlDatabase::database().commit();

rolegorevAtananModel->setQuery("SELECT id,ad,komuta,yeri FROM rolegorevleri rg,roleler_rolegorevleri rrg WHERE rrg.rolegorevleri_id=rg.id AND  rrg.roleler_id="+roleidstr);
rolegorevAtananModel->query();


}
void on_actionSil_triggered()
{
 role_gorev_atanan_sil();
}

void Kaydet()
{
if(RoleUygunmu()){
      QSqlDatabase::database().transaction();
      QSqlQuery insert_olayi;
      insert_olayi.prepare("INSERT INTO roleler_rolegorevleri ( roleler_id, rolegorevleri_id)" 
                           "VALUES (  :roleid, :rolegorevid)");

      insert_olayi.bindValue(":roleid", roleid);
      insert_olayi.bindValue(":rolegorevid", rolegorevid);
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
QString roleidstr = roleModel->data(roleModel->index(selectionRoleModel->currentIndex().row(), 0)).toString();

rolegorevAtananModel->setQuery("SELECT id,ad,komuta,yeri FROM rolegorevleri rg,roleler_rolegorevleri rrg WHERE rrg.rolegorevleri_id=rg.id AND  rrg.roleler_id="+roleidstr);
rolegorevAtananModel->query();
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
int RoleUygunmu()
{
      QLocale lokal(QLocale::Turkish , QLocale::Turkey);
      QString role = lokal.toString(roleid);
      QString rolegorev = lokal.toString(rolegorevid);

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

