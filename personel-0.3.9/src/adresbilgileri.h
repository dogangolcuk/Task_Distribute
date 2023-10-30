#include "ui_widgetAdresBilgileri.h"
#include "dialogAdres.h"
#include <QDataWidgetMapper>
#include <QtSql>
#include <QPrinter>
#include <QPrintDialog>
#include <QTextDocument>
#include <QHeaderView>
#include <QDate>
#include <QLocale>
class AdresBilgileri:public QWidget ,public Ui::widgetAdresBilgileri
{
		Q_OBJECT

	public:
		QItemSelectionModel *selectionModel;
		QDataWidgetMapper *mapper ;
		QSqlQueryModel *model;
		QSqlQuery *sorgu;
		QString adres_id;
		int personel_id_int;
		AdresBilgileri ( QWidget *parent ) :QWidget ( parent )
		{
			setupUi ( this );


			model = new QSqlQueryModel;
			tablo->setSortingEnabled ( true );
			tablo->setModel ( model );
			tablo->horizontalHeader()->setResizeMode ( QHeaderView::Stretch );
			tablo->hideColumn ( 0 );
			tablo->addAction ( actionSil );
			selectionModel = tablo->selectionModel();
			tablo->show();

			mapper = new QDataWidgetMapper;
			mapper->setModel ( model );
			mapper->addMapping ( TeDaimiAdres, 2 );
			mapper->addMapping ( TeGeciciAdres, 3 );


			connect ( tablo,SIGNAL ( pressed ( const QModelIndex & ) ),this,SLOT ( tablodolas ( const QModelIndex & ) ) );
			connect ( tablo,SIGNAL ( activated ( const QModelIndex & ) ),this,SLOT ( tablodolas ( const QModelIndex & ) ) );
			connect ( PbAdresDegistir,SIGNAL ( clicked() ),this,SLOT ( adresdegistir() ) );
			connect ( PbAdresEkle,SIGNAL ( clicked() ),this,SLOT ( adresekle() ) );
		}
	public slots:

		void tablodolas ( const QModelIndex & index )
		{
			mapper->setCurrentModelIndex ( index );
                        adres_id= model->data ( model->index ( selectionModel->currentIndex().row(), 0 ) ).toString();

		}
		void guncelle ( QString personelid,int persid )
		{
			model->setQuery ( "SELECT * From adresbilgileri where personel_id="+personelid );
			model->query();
			personel_id_int=persid;
		}
		void adresekle()
		{
			dialogAdres *da= new dialogAdres ( this,personel_id_int );
			da->show();

		}
		void adresdegistir()
		{
			
			dialogAdres *da= new dialogAdres ( this,adres_id );
			
			QString daimi= model->data ( model->index ( selectionModel->currentIndex().row(), 2 ) ).toString();
			QString gecici= model->data ( model->index ( selectionModel->currentIndex().row(), 3 ) ).toString();
			da->TeDaimiAdres->setPlainText(daimi);
			da->TeGeciciAdres->setPlainText(gecici);
			da->show();
		}
		void adresSil()
		{
			
			
			QString adres_id= model->data ( model->index ( selectionModel->currentIndex().row(), 0 ) ).toString();
				libdbBase *tmp_db=new libdbBase();
				QSqlQuery tmp_sil;
				tmp_sil.prepare ( "DELETE FROM adresbilgileri WHERE id="+adres_id );
				tmp_db->setSilSorgusu ( tmp_sil );
				tmp_db->Sil();
// 				if ( tmp_db->Sil() )
// 					this->close();

		}
		
		void on_actionSil_triggered()
		{
			adresSil();
		}
		void ileri()
		{
// 			QModelIndex *simdiki
		
		}

};