#include "ui_dialogAdres.h"
#include <QDataWidgetMapper>
#include <QtSql>
#include <QPrinter>
#include <QPrintDialog>
#include <QTextDocument>
#include <QHeaderView>
#include <QDate>
#include <QLocale>
#include "libdbBase.h"
class dialogAdres:public QDialog ,public Ui::DialogAdres
{
		Q_OBJECT
	public:
		int persid;
		QString adresid;

		dialogAdres ( QWidget *parent,int personelid ) :QDialog ( parent )
		{
			setupUi ( this );
			qDebug() << personelid;
			persid=personelid;
// model = new QSqlQueryModel;
//  model->setQuery("SELECT * From adresbilgileri WHERE personel_id="+personelid);
// 			TeDaimiAdres->setText ( "ddddddd" );
			connect ( Pbiptal,SIGNAL ( clicked() ),this,SLOT ( close() ) );
			connect ( PbOnayla,SIGNAL ( clicked() ),this,SLOT ( Kaydet() ) );

		}
		dialogAdres ( QWidget *parent,QString adres_id ) :QDialog ( parent )
		{
			setupUi ( this );
// 			qDebug() << personelid;
			adresid=adres_id;
// model = new QSqlQueryModel;
//  model->setQuery("SELECT * From adresbilgileri WHERE personel_id="+personelid);
// 			TeDaimiAdres->setText ( "ddddddd" );
			connect ( Pbiptal,SIGNAL ( clicked() ),this,SLOT ( close() ) );
			connect ( PbOnayla,SIGNAL ( clicked() ),this,SLOT ( Guncelle() ) );

		}
	public slots:

		void Kaydet()
		{

			if ( true )
			{
				libdbBase *tmp_db=new libdbBase();
				QSqlQuery tmp_kaydet;
				tmp_kaydet.prepare ( "INSERT INTO adresbilgileri(personel_id,daimiadres,geciciadres)"
				                     "VALUES ( :personel_id,:daimiadres, :geciciadres)" );
				tmp_kaydet.bindValue ( ":personel_id",persid );
				tmp_kaydet.bindValue ( ":daimiadres" , TeDaimiAdres->toPlainText() );
				tmp_kaydet.bindValue ( ":geciciadres", TeGeciciAdres->toPlainText() );

				tmp_db->setKaydetSorgusu ( tmp_kaydet );
				if ( tmp_db->Kaydet() )
					this->close();
// sorgu_model->setQuery("SELECT * FROM personel ORDER by id DESC");
// sorgu_model->query();
			}

		}
		void Guncelle()
		{

			if ( true )
			{
				libdbBase *tmp_db=new libdbBase();
				QSqlQuery tmp_guncelle;
				tmp_guncelle.prepare ( "UPDATE adresbilgileri SET daimiadres=:daimiadres, geciciadres=:geciciadres WHERE id="+adresid );
// 				tmp_guncelle.bindValue ( ":personel_id",persid );
 				tmp_guncelle.bindValue ( ":daimiadres" , TeDaimiAdres->toPlainText() );
 				tmp_guncelle.bindValue ( ":geciciadres", TeGeciciAdres->toPlainText() );

				tmp_db->setGuncelleSorgusu ( tmp_guncelle );
				if ( tmp_db->Guncelle() )
					this->close();
// sorgu_model->setQuery("SELECT * FROM personel ORDER by id DESC");
// sorgu_model->query();
			}


		}
}


;
