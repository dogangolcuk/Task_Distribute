#include "ui_formPersonel.h"
#include "personel.h"
#include "formSecRoleNo.h"
#include "formPersonelGorev.h"

// #include "dialogAdres.h"
#include "adresbilgileri.h"

// #include <QtSql>
// #include <QDataWidgetMapper>
// #include <QMessageBox>
#include<QSqlQueryModel>
#include<QItemSelectionModel>
#include <QSqlRelationalTableModel>
#include<QDataWidgetMapper>
#include <QDomDocument>
#include <QDomElement>
#include <QDomNode>
class pencerePersonel:public QWidget ,public Ui::FormPersonel
{
		Q_OBJECT
	public:

		QSqlQueryModel *mevcutGorevlerModel;
		QItemSelectionModel *selectionMevcutGorevlerModel;



		QSqlQueryModel *sorgu_model;
		QItemSelectionModel *selectionModel ;
		QDataWidgetMapper *mapper ;
		QList<QWidget *> wList;//Bunlara formdaki lineedit alanlarÄ±nÄ± ekliyorum.setreadonly iÃ§in.
		bool yeni_kayit;
		bool guncelle;
		int LeRoleId;
		QString personel_id;
		int personel_id_int;
		QString mevcutgorevidstr;
		AdresBilgileri *adresler;

		pencerePersonel()
		{
			setupUi ( this );

			wList.append ( LeAd );
			wList.append ( LeSoyad );
			wList.append ( LeSicilNo );
// wList.append(LeTel);
// wList.append(LeCeptel);
// wList.append(LeEmail);

			yeni_kayit=true;
			guncelle=true;

// pBKaydet->setText(trUtf8("Yeni KayÄ±t"));


			sorgu_model = new QSqlQueryModel;
			sorgu_model->setQuery ( "SELECT * FROM personel" );

// sorgu_model->setRelation(6,QSqlRelation("roleno", "id", "rno"));

			personel_tablo->setModel ( sorgu_model );
			personel_tablo->addAction ( actionSil );
			personel_tablo->hideColumn ( 0 );
			personel_tablo->horizontalHeader()->setResizeMode ( QHeaderView::Stretch );
			personel_tablo->show();
			selectionModel = personel_tablo->selectionModel();
			mapper = new QDataWidgetMapper;
			mapper->setModel ( sorgu_model );
			mapper->addMapping ( LeSicilNo, 1 );
			mapper->addMapping ( LeAd, 2 );
			mapper->addMapping ( LeSoyad, 3 );


			mevcutGorevlerModel = new QSqlQueryModel;
			mevcutGorevlerModel->setQuery ( "SELECT pg.id,g.gorevyeri, pg.atanmatarihi,pg.katilmatarihi,pg.ayrilmatarihi FROM personel_gorevler pg,gorevler g WHERE pg.gorevler_id=g.id AND  pg.personel_id="+personel_id );
// mevcutGorevlerModel->query();
			tablo_mevcut_gorevler->setModel ( mevcutGorevlerModel );
			tablo_mevcut_gorevler->addAction ( actionGorevSil );
			tablo_mevcut_gorevler->addAction ( actionGorev_Ekle );
			tablo_mevcut_gorevler->horizontalHeader()->setResizeMode ( QHeaderView::Stretch );
			selectionMevcutGorevlerModel = tablo_mevcut_gorevler->selectionModel();
//      tablo_mevcut_gorevler->hideColumn(0);
			tablo_mevcut_gorevler->show();


// LeRoleId="s000a";
//   mapper->addMapping(Lesinif, 4);
//   mapper->addMapping(DeUyelikTarihi, 5);
//   mapper->addMapping(LeUyelikTipi, 6);
//   mapper->addMapping(LeTel, 7);
//   mapper->addMapping(LeCeptel, 8);
//   mapper->addMapping(LeEmail, 9);
//   mapper->addMapping(TeAdres, 10);
//   mapper->addMapping(TeEk, 11);

			adresler =new AdresBilgileri ( tab_4 );

			QGridLayout *layout = new QGridLayout;
// layout->addWidget(button1, 0, 0);
			layout->addWidget ( adresler );
			adreslerFrame->setLayout ( layout );
// QDate localDate = QDate::currentDate();
// QDate localDate15sonra = localDate.addDays(15);
// DeUyelikTarihi->setDate(localDate);
			mod_baslangic();

			cBDoldur();
			connect ( pBKaydet,SIGNAL ( clicked() ),this,SLOT ( Kaydet() ) );
// connect(PbAdresDegistir,SIGNAL(clicked()),this,SLOT(adresBilgileri()));
			connect ( arama_kutusu,SIGNAL ( textChanged ( const QString & ) ),this,SLOT ( Ara ( const QString & ) ) );
			connect ( pBSil,SIGNAL ( clicked() ),this,SLOT ( Sil() ) );
			connect ( pBiptal,SIGNAL ( clicked() ),this,SLOT ( mod_baslangic() ) );
			connect ( pBDegistir,SIGNAL ( clicked() ),this,SLOT ( Guncelle() ) );
// connect(PbGorevler,SIGNAL(clicked()),this,SLOT(personel_gorevler()()));
			connect ( personel_tablo,SIGNAL ( pressed ( const QModelIndex & ) ),this,SLOT ( tablodolas ( const QModelIndex & ) ) );
			connect ( personel_tablo,SIGNAL ( activated ( const QModelIndex & ) ),this,SLOT ( tablodolas ( const QModelIndex & ) ) );
			connect ( TbRoleSec,SIGNAL ( clicked() ),this,SLOT ( secRoleNo() ) );
			connect ( tablo_mevcut_gorevler,SIGNAL ( pressed ( const QModelIndex & ) ),this,SLOT ( tablodolas_mevcutGorevler ( const QModelIndex & ) ) );
		}
	public slots:

		void tablodolas ( const QModelIndex & index )
		{

			mapper->setCurrentModelIndex ( index );
// widgetLineEditSetReadOnly(wList,1);
			QString sinifText = sorgu_model->data ( sorgu_model->index ( selectionModel->currentIndex().row(), 4 ) ).toString() ;
			int sinifIndex=CbSinif->findText ( sinifText );
			CbSinif->setCurrentIndex ( sinifIndex );

			QString rutbeText = sorgu_model->data ( sorgu_model->index ( selectionModel->currentIndex().row(), 5 ) ).toString() ;
			int rutbeIndex=CbRutbe->findText ( rutbeText );
			CbRutbe->setCurrentIndex ( rutbeIndex );

			setRoleNoText();

			personel_id= sorgu_model->data ( sorgu_model->index ( selectionModel->currentIndex().row(), 0 ) ).toString();
			personel_id_int=sorgu_model->data ( sorgu_model->index ( selectionModel->currentIndex().row(), 0 ) ).toInt();
			gorevGoster();

			mod_baslangic();
// setYayinciText();
			adresler->guncelle ( personel_id,personel_id_int );
// rp  *adresler =new rp(tab_5,personel_id);
		}

		void Guncelle()
		{

			if ( mod_guncelle() )
			{
				QString tmp_id= sorgu_model->data ( sorgu_model->index ( selectionModel->currentIndex().row(), 0 ) ).toString();
				personel *uye = new personel ( tmp_id,LeSicilNo->text(),LeAd->text(),LeSoyad->text(),CbSinif->currentText(),CbRutbe->currentText(),LeRoleId );
				uye->Guncelle();
				sorgu_model->setQuery ( "SELECT * FROM personel " );
				sorgu_model->query();
			}
			else
				LeRoleId = sorgu_model->data ( sorgu_model->index ( selectionModel->currentIndex().row(), 6 ) ).toInt();
		}

		void Kaydet()
		{

			if ( mod_kayit() )
			{
				personel *uye = new personel ( LeSicilNo->text(),LeAd->text(),LeSoyad->text(),CbSinif->currentText(),CbRutbe->currentText(),LeRoleId );

				uye->Kaydet();
				sorgu_model->setQuery ( "SELECT * FROM personel ORDER by id DESC" );
				sorgu_model->query();
			}
		}

		void Ara ( const QString & text )
		{

			sorgu_model->clear();
			personel *per = new personel();
			per->arama ( text );
			per->dbislem ( per->getAramaSorgusu() );
			sorgu_model->setQuery ( per->getAramaSorgusu() );
			sorgu_model->query();

		}

		void Sil()
		{

			QString tmp_id= sorgu_model->data ( sorgu_model->index ( selectionModel->currentIndex().row(), 0 ) ).toString();

			personel *uye = new personel ( tmp_id );
			uye->Sil();
			sorgu_model->setQuery ( "SELECT * FROM personel " );
			sorgu_model->query();

		}
		void widgetLineEditTemizle ( QList<QWidget *> widgetList )
		{
			for ( int i = 0; i < widgetList.size(); ++i )
			{
				qobject_cast<QLineEdit *> ( widgetList.at ( i ) )->clear();
			}
		}
		void widgetLineEditSetReadOnly ( QList<QWidget *> widgetList , int durum )
		{
			for ( int i = 0; i < widgetList.size(); ++i )
			{
				qobject_cast<QLineEdit *> ( widgetList.at ( i ) )->setReadOnly ( durum );
			}
		}

		bool mod_kayit()
		{
			if ( yeni_kayit )
			{
				pBKaydet->setText ( trUtf8 ( "Kaydet" ) );
//Bilgi girilebilir.
				widgetLineEditSetReadOnly ( wList,0 );
//  	TeEk->setReadOnly(0);
//         TeAdres->setReadOnly(false);
//Bilgi girilebilir
				widgetLineEditTemizle ( wList );
//  	TeEk->clear();
//         TeAdres->clear();
				yeni_kayit=false;
				pBDegistir->setEnabled ( false );
				TbRoleSec->setEnabled ( true );
				return false;
			}
			else
			{
				pBKaydet->setText ( trUtf8 ( "Yeni Kayıt" ) );
				widgetLineEditSetReadOnly ( wList,1 );
//         TeAdres->setReadOnly(true);
//         TeEk->setReadOnly(true);
				yeni_kayit=true;
				pBDegistir->setEnabled ( true );
				TbRoleSec->setEnabled ( false );
				return true;
			}
		}
		bool mod_guncelle()
		{
			if ( guncelle )
			{
				pBDegistir->setText ( "Onayla" );
				pBKaydet-> setEnabled ( false );
				TbRoleSec->setEnabled ( true );
//Bilgi girilebilir.
				widgetLineEditSetReadOnly ( wList,0 );
// 	TeEk->setReadOnly(false);
//         TeAdres->setReadOnly(false);
//Bilgi girilebilir.

				guncelle=false;
				return false;
			}
			else
			{
				pBDegistir->setText ( trUtf8 ( "Değiştir" ) );
				pBKaydet-> setEnabled ( true );
				TbRoleSec->setEnabled ( false );
//Bilgi girilecek yerler aktif deÄil.
				widgetLineEditSetReadOnly ( wList,1 );
// 	TeEk->setReadOnly(true);
//          TeEk->setReadOnly(true);
//         TeAdres->setReadOnly(true);
//Bilgi girilecek yerler aktif deÄil.
				guncelle=true;
				return true;

			}


		}
		void mod_baslangic()
		{
			pBKaydet-> setEnabled ( true );
			pBDegistir->setEnabled ( true );
			yeni_kayit=true;
			guncelle=true;
			pBDegistir->setText ( trUtf8 ( "Değiştir" ) );
			pBKaydet->setText ( trUtf8 ( "Yeni Kayıt" ) );
			widgetLineEditSetReadOnly ( wList,1 );
			TbRoleSec->setEnabled ( false );

			//Buralara wList de olmayan diÄer date,spinbox text alanlarÄ±nÄ± ekle.
// 	 TeEk->setReadOnly(true);
//          TeAdres->setReadOnly(true);
		}

		void on_actionSil_triggered()
		{
			Sil();
		}
		void on_actionGorevSil_triggered()
		{
			GorevSil();
		}

		void cBDoldur()
		{

			QDomDocument ayarDosyasi;
			QFile tmp ( "/etc/personel.ayar" );
			tmp.open ( QIODevice::ReadOnly| QIODevice::Text );
			ayarDosyasi.setContent ( &tmp );

			QDomElement root = ayarDosyasi.firstChildElement ( "Ayarlar" );
			QDomElement sinif = root.firstChildElement ( "Sinif" );
			QDomElement deger = sinif.firstChildElement ( "Deger" );
// 		QStringList items;
			for ( ; !deger.isNull(); deger = deger.nextSiblingElement ( "Deger" ) )
			{
// 		qDebug() << deger.text();
// 		items.append(deger.text());
				CbSinif->addItem ( deger.text() );
			}

			QDomElement root1 = ayarDosyasi.firstChildElement ( "Ayarlar" );
			QDomElement rutbe = root1.firstChildElement ( "Rutbe" );
			QDomElement rdeger = rutbe.firstChildElement ( "Deger" );
			for ( ; !rdeger.isNull(); rdeger = rdeger.nextSiblingElement ( "Deger" ) )
			{
// 		qDebug() << deger.text();
// 		items.append(deger.text());
				CbRutbe->addItem ( rdeger.text() );
			}
		}

		void secRoleNo()
		{
			formSecRoleNo *wY = new formSecRoleNo ( this );
			connect ( wY,SIGNAL ( yayinciSelected ( int ,QString ) ),this,SLOT ( roleNoSet ( int,QString ) ) );
			wY->show();

		}
		void roleNoSet ( int id,QString no )
		{

// qDebug()<< ad ;
			LeRoleNo->setText ( no );
			LeRoleId=id;
		}
		void setRoleNoText()
		{
			QSqlQueryModel *model2 = new QSqlQueryModel;
			QString LeRoleIdStr = sorgu_model->data ( sorgu_model->index ( selectionModel->currentIndex().row(), 6 ) ).toString();
			qDebug() << LeRoleIdStr;
			model2->setQuery ( "SELECT rno FROM roleno Where id="+ LeRoleIdStr );
			model2->query();
			QString roleno1=model2->data ( model2->index ( 0, 0 ) ).toString();
			qDebug() << roleno1;
			LeRoleNo->setText ( roleno1 );

		}
		void gorevGoster()
		{
// personel_id= perModel->data(perModel->index(selectionPerModel->currentIndex().row(), 0)).toString();
			mevcutGorevlerModel->clear();
			mevcutGorevlerModel->setQuery ( "SELECT pg.id,g.gorevyeri, pg.atanmatarihi,pg.katilmatarihi,pg.ayrilmatarihi FROM personel_gorevler pg,gorevler g WHERE pg.gorevler_id=g.id AND  pg.personel_id="+personel_id );
			mevcutGorevlerModel->query();


		}
		void tablodolas_mevcutGorevler ( const QModelIndex & index )
		{


//  gorevyeriid = gorevyeriModel->data(gorevyeriModel->index(selectionGorevYeriModel->currentIndex().row(), 0)).toInt();
			mevcutgorevidstr=mevcutGorevlerModel->data ( mevcutGorevlerModel->index ( selectionMevcutGorevlerModel->currentIndex().row(), 0 ) ).toString();

			mevcutgorevidstr=mevcutGorevlerModel->data ( mevcutGorevlerModel->index ( selectionMevcutGorevlerModel->currentIndex().row(), 0 ) ).toString();

			qDebug() << "gorev id=" <<mevcutgorevidstr;
// LeRole->setText(personelidstr);
// LeRoleGorev->setText(rolegorevstr);



		}
		void GorevSil()
		{

// mevcutgorevidstr = mevcutGorevlerModel->data(mevcutGorevlerModel->index(selectionMevcutGorevlerModel->currentIndex().row(), 0)).toString();

			QSqlDatabase::database().transaction();
			QSqlQuery update_olayi;
			qDebug() <<personel_id<<mevcutgorevidstr;
//  update_olayi.prepare("DELETE FROM personel_gorevler WHERE personel_id="+personel_id+"AND gorevler_id="+mevcutgorevidstr);
			update_olayi.prepare ( "DELETE FROM personel_gorevler WHERE id="+mevcutgorevidstr );
			update_olayi.exec();
			qDebug() << update_olayi.lastError();
			QSqlDatabase::database().commit();

			mevcutGorevlerModel->clear();
			mevcutGorevlerModel->setQuery ( "SELECT pg.id,g.gorevyeri, pg.atanmatarihi,pg.katilmatarihi,pg.ayrilmatarihi FROM personel_gorevler pg,gorevler g WHERE pg.gorevler_id=g.id AND  pg.personel_id="+personel_id );
			mevcutGorevlerModel->query();

		}
		void personel_gorevler()
		{

//  formPersonelGorev *fg = new formPersonelGorev();
//  anaPencere->mdiArea->addSubWindow(fg);
//  fg->show();

		}

		void adresBilgileri()
		{
// dialogAdres *da= new dialogAdres(this,personel_id_int);
// da->show();

		}

};
