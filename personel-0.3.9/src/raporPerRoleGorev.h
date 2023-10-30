#include <ui_raporPerRoleGor.h>
#include <QDataWidgetMapper>
#include <QtSql>
#include <QPrinter>
#include <QPrintDialog>
#include <QTextDocument>
#include <QHeaderView>
#include <QDate>
#include <QLocale>
class raporPerRoleGorev:public QWidget ,public Ui::RaporPerRole
{
 Q_OBJECT

public:
QString ht;
QItemSelectionModel *selectionModel;
QString currentId ;
QDataWidgetMapper *mapper ;
QSqlQueryModel *model;
QSqlQueryModel *mevcutGorevlerModel;
QItemSelectionModel *selectionMevcutGorevler;

QString rolenostr;
QString ad;
QString soyad;
 
raporPerRoleGorev(QWidget *parent):QWidget(parent)
{
setupUi(this);


 model = new QSqlQueryModel;
 model->setQuery("SELECT * From personel_roleno");
//  model->setHeaderData(0, Qt::Horizontal, trUtf8("Üye No"));
//  model->setHeaderData(1, Qt::Horizontal, trUtf8("Üye Ad"));
//  model->setHeaderData(2, Qt::Horizontal, trUtf8("Üye Soyad"));
//  model->setHeaderData(3, Qt::Horizontal, tr("Kitap"));
//  model->setHeaderData(4, Qt::Horizontal, trUtf8("Ödünç Verme Tarihi"));
//  model->setHeaderData(5, Qt::Horizontal, trUtf8("Geri Alınacak Tarih"));
tablo->setSortingEnabled(true);
tablo->setModel(model);
tablo->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
tablo->hideColumn(0);
selectionModel = tablo->selectionModel();
tablo->show();

mevcutGorevlerModel = new QSqlQueryModel;
tablo_mevcut_gorevler->setModel(mevcutGorevlerModel);
tablo_mevcut_gorevler->show();
tablo_mevcut_gorevler->horizontalHeader()->setResizeMode(QHeaderView::Stretch);

//         selectionRoleModel = tablo_role->selectionModel();
// 	selectionRoleNoModel = tablo_roleno->selectionModel();
//         selectionRoleGorevModel = tablo_rolegorev->selectionModel();
	selectionMevcutGorevler = tablo_mevcut_gorevler->selectionModel();

cikti_hazirla();

connect(arama_kutusu,SIGNAL(textChanged ( const QString &  )),this,SLOT(Ara(const QString &)));
connect(pBYazdir,SIGNAL(clicked()),this,SLOT(print()));
// connect(pBGunuGecmis,SIGNAL(clicked()),this,SLOT(gunuGecmisler()));
connect(tablo,SIGNAL(pressed( const QModelIndex & )),this,SLOT(tablo_mevcut_gorevler_guncelle(const QModelIndex &)));


}
public slots:

void tablodolas(const QModelIndex & index)
{



}
void tablo_mevcut_gorevler_guncelle(const QModelIndex & index)
{
mevcutGorevlerModel->clear();
  QString rolenoidstr = model->data(model->index(selectionModel->currentIndex().row(), 0)).toString();
rolenostr=model->data(model->index(selectionModel->currentIndex().row(), 1)).toString();
 ad=model->data(model->index(selectionModel->currentIndex().row(), 2)).toString();
 soyad=model->data(model->index(selectionModel->currentIndex().row(), 3)).toString();
mevcutGorevlerModel->setQuery("SELECT  rl.ad AS roleadi , rlg.ad AS gorevi FROM roleno_roleler_rolegorevleri rrr, roleler rl, rolegorevleri rlg WHERE rrr.roleler_id = rl.id AND rrr.rolegorevleri_id = rlg.id AND rrr.roleno="+rolenoidstr);

mevcutGorevlerModel->query();
cikti_hazirla();

}
void cikti_hazirla()
{

textEdit->clear();
 ht.clear();
// Model->
ht.append("<TABLE WIDTH=50% BORDER=1 CELLPADDING=4 CELLSPACING=0>");
ht.append(trUtf8("<tr><td><center><u>Personel Rolesi</u></center></td><td>%1\n%2\n%3</td></tr> ").arg(rolenostr,ad,soyad));
// ht.append("<hr></hr>");
// ht.append("<tr><small><table cellspacing='7' cellpadding='7' border='0' frame='box'>");
ht.append(trUtf8("<tr><small><td><b>Role Adı</b></td><td><b>Role Görevleri</b></td></small></tr>     "));

// textEdit->append("<tr><table>");
while (mevcutGorevlerModel->query().next()) {
         QString rolead = mevcutGorevlerModel->query().value(0).toString();
         QString rolegorev = mevcutGorevlerModel->query().value(1).toString();
	 ht.append("<tr><td><small><font font-style:'italic'>"+rolead+"</font></small></td><td>"+rolegorev+"</td></tr>");
     }
ht.append("</tr></small></table>");
textEdit->setHtml(ht);
qDebug()<<ht;

}
void Ara(const QString & text )
{
// 
 model->clear();
 QString f;
 f.append("rno LIKE '%"+text+"%'");
 f.append("OR lower(rno) LIKE '%"+text.toLower()+"%'");
 f.append("OR ad LIKE '%"+text+"%'");
 f.append("OR lower(ad) LIKE '%"+text.toLower()+"%'");
 f.append("OR soyad LIKE '%"+text+"%'");
 f.append("OR lower(soyad) LIKE '%"+text.toLower()+"%'");
//  f.append("OR kitap LIKE '%"+text+"%'");
//  f.append("OR lower(kitap) LIKE '%"+text.toLower()+"%'");
//  f.append("OR almatarihi LIKE '%"+text+"%'");
//  qDebug() << f ;
// model1->clear();
 model->setQuery("SELECT * FROM personel_roleno WHERE "+ f);
//  model->setQuery("SELECT * FROM getirilmeyenler");
//  model->setHeaderData(0, Qt::Horizontal, trUtf8("Üye No"));
//  model->setHeaderData(1, Qt::Horizontal, trUtf8("Üye Ad"));
//  model->setHeaderData(2, Qt::Horizontal, trUtf8("Üye Soyad"));
//  model->setHeaderData(3, Qt::Horizontal, tr("Kitap"));
//  model->setHeaderData(4, Qt::Horizontal, trUtf8("Ödünç Verme Tarihi"));
//  model->setHeaderData(5, Qt::Horizontal, trUtf8("Geri Alınacak Tarih"));
// tablo->setSortingEnabled(true);
// tablo->setModel(model);
tablo->horizontalHeader()->setResizeMode(QHeaderView::Stretch);

cikti_hazirla();
// 
}
void print()
   {
       QTextDocument *document = textEdit->document();
//         QTextDocument *document ;
//         document->setHtml(ht);
        QPrinter printer;

        QPrintDialog *dlg = new QPrintDialog(&printer, this);
        dlg->setWindowTitle (trUtf8("Personel Role Gorevleri") );
        if (dlg->exec() != QDialog::Accepted)
            return;

        document->print(&printer);
// ht.print(&printer);

    }


};