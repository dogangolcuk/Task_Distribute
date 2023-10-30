#include "ui_formRoleNo.h" 
#include "roleno.h"
#include<QHeaderView>
#include <QCloseEvent>
// #include "formSecRoleNo.h"
#include<QSqlQueryModel>
#include<QItemSelectionModel>
#include<QDataWidgetMapper>
#include <QDomDocument>
#include <QDomElement>
#include <QDomNode>
class pencereRoleNo:public QWidget ,public Ui::FormRoleNo
{
 Q_OBJECT
public:
 QSqlQueryModel *sorgu_model;
 QItemSelectionModel *selectionModel ;
 QDataWidgetMapper *mapper ;
 QList<QWidget *> wList;//Bunlara formdaki lineedit alanlarını ekliyorum.setreadonly için.
 bool yeni_kayit;
 bool guncelle;
//  int LeRoleId;

pencereRoleNo()
{
setupUi(this);

wList.append(LeRoleNo);
// wList.append(LeSoyad);
// wList.append(LeSicilNo);
// wList.append(LeTel);
// wList.append(LeCeptel);
// wList.append(LeEmail);

 yeni_kayit=true;
 guncelle=true;

// pBKaydet->setText(trUtf8("Yeni Kayıt"));


     sorgu_model = new QSqlQueryModel;
     sorgu_model->setQuery("SELECT * FROM roleno");
sorgu_model->setHeaderData(0, Qt::Horizontal, trUtf8("Role No"));
     tablo->setModel(sorgu_model);
     tablo->addAction(actionSil);
tablo->hideColumn(0);
     tablo->show();
     selectionModel = tablo->selectionModel();
  mapper = new QDataWidgetMapper;
  mapper->setModel(sorgu_model);
  mapper->addMapping(LeRoleNo, 1);
tablo->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
//   mapper->addMapping(LeAd, 2);
//   mapper->addMapping(LeSoyad, 3);
// LeRoleId="s000a";
//   mapper->addMapping(Lesinif, 4);
//   mapper->addMapping(DeUyelikTarihi, 5);
//   mapper->addMapping(LeUyelikTipi, 6);
//   mapper->addMapping(LeTel, 7);
//   mapper->addMapping(LeCeptel, 8);
//   mapper->addMapping(LeEmail, 9);
//   mapper->addMapping(TeAdres, 10);
//   mapper->addMapping(TeEk, 11);


// QDate localDate = QDate::currentDate();
// QDate localDate15sonra = localDate.addDays(15);
// DeUyelikTarihi->setDate(localDate);
mod_baslangic();

// cBDoldur();
  connect(pBKaydet,SIGNAL(clicked()),this,SLOT(Kaydet()));

  connect(arama_kutusu,SIGNAL(textChanged ( const QString &  )),this,SLOT(Ara(const QString &)));
  connect(pBSil,SIGNAL(clicked()),this,SLOT(Sil()));
  connect(pBiptal,SIGNAL(clicked()),this,SLOT(mod_baslangic()));
  connect(pBDegistir,SIGNAL(clicked()),this,SLOT(Guncelle()));
  connect(tablo,SIGNAL(pressed ( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
  connect(tablo,SIGNAL(activated ( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
// connect(TbRoleSec,SIGNAL(clicked()),this,SLOT(secRoleNo()));
}
public slots:

void tablodolas(const QModelIndex & index)
{

mapper->setCurrentModelIndex(index);
mod_baslangic();
}

void Guncelle()
{

   if(mod_guncelle()){
        QString tmp_id= sorgu_model->data(sorgu_model->index(selectionModel->currentIndex().row(), 0)).toString();
	roleno *uye = new roleno(tmp_id,LeRoleNo->text());
        uye->Guncelle();
		sorgu_model->setQuery("SELECT * FROM roleno ");
		sorgu_model->query();
   }
}

void Kaydet()
{

if(mod_kayit()){
roleno *uye = new roleno(LeRoleNo->text(),1);

uye->Kaydet();
sorgu_model->setQuery("SELECT * FROM roleno ORDER by id DESC");
sorgu_model->query();
}
}

void Ara(const QString & text )
{

sorgu_model->clear();
QString f;
f.append( "lower(rno) LIKE '%");
f.append(text.toLower());
f.append("%' OR ");
f.append(" rno LIKE '%");
f.append(text);
f.append("%'");
qDebug() << f ;
sorgu_model->setQuery("SELECT * FROM roleno WHERE "+ f);
sorgu_model->query();

}

void Sil()
{

 QString tmp_id= sorgu_model->data(sorgu_model->index(selectionModel->currentIndex().row(), 0)).toString();

 roleno *uye = new roleno(tmp_id);
	uye->Sil();
		sorgu_model->setQuery("SELECT * FROM roleno ");
		sorgu_model->query();

}
void widgetLineEditTemizle(QList<QWidget *> widgetList)
{
 for (int i = 0; i < widgetList.size(); ++i) {
         qobject_cast<QLineEdit *>(widgetList.at(i))->clear();
 }
}
void widgetLineEditSetReadOnly(QList<QWidget *> widgetList , int durum)
{
 for (int i = 0; i < widgetList.size(); ++i) {
         qobject_cast<QLineEdit *>(widgetList.at(i))->setReadOnly(durum);
 }
}

bool mod_kayit()
{
if(yeni_kayit){
	pBKaydet->setText(trUtf8("Kaydet"));
//Bilgi girilebilir. 
	widgetLineEditSetReadOnly(wList,0);
//  	TeEk->setReadOnly(0);
//         TeAdres->setReadOnly(false);
//Bilgi girilebilir
 	widgetLineEditTemizle(wList);
//  	TeEk->clear();
//         TeAdres->clear();
	yeni_kayit=false;
	pBDegistir->setEnabled (false);
// TbRoleSec->setEnabled(true);
return false;
}else{
	pBKaydet->setText(trUtf8("Yeni Kayıt"));
 	widgetLineEditSetReadOnly(wList,1);
//         TeAdres->setReadOnly(true);
//         TeEk->setReadOnly(true);
	yeni_kayit=true;
	pBDegistir->setEnabled (true);
// TbRoleSec->setEnabled(false);
return true;
     }
}
bool mod_guncelle()
{
if(guncelle){
	pBDegistir->setText("Onayla");
	pBKaydet-> setEnabled (false);
// TbRoleSec->setEnabled(true);
//Bilgi girilebilir.
	widgetLineEditSetReadOnly(wList,0);
// 	TeEk->setReadOnly(false);
//         TeAdres->setReadOnly(false);
//Bilgi girilebilir.

	guncelle=false;
return false;
}else{
	pBDegistir->setText(trUtf8("Değiştir"));
	pBKaydet-> setEnabled (true);
// TbRoleSec->setEnabled(false);
//Bilgi girilecek yerler aktif değil.
	widgetLineEditSetReadOnly(wList,1);
// 	TeEk->setReadOnly(true);
//          TeEk->setReadOnly(true);
//         TeAdres->setReadOnly(true); 
//Bilgi girilecek yerler aktif değil.
	guncelle=true;
return true;

}


}
void mod_baslangic()
{
	pBKaydet-> setEnabled (true);
	pBDegistir->setEnabled (true);
	yeni_kayit=true;
	guncelle=true;
	pBDegistir->setText(trUtf8("Değiştir"));
	pBKaydet->setText(trUtf8("Yeni Kayıt"));
	widgetLineEditSetReadOnly(wList,1);
// TbRoleSec->setEnabled(false);
        
      //Buralara wList de olmayan diğer date,spinbox text alanlarını ekle.
// 	 TeEk->setReadOnly(true);
//          TeAdres->setReadOnly(true);
}

void on_actionSil_triggered()
{
 Sil(); 
}
};