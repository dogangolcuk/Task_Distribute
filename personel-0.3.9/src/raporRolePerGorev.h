#include <ui_raporRolePerGorev.h>
#include <QDataWidgetMapper>
#include <QtSql>
#include <QPrinter>
#include <QPrintDialog>
#include <QTextDocument>
#include <QHeaderView>
#include <QDate>
#include <QLocale>
class raporRolePerGorev:public QWidget ,public Ui::RaporRolePerGorev
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

QString roleadstr;
QString ad;
QString soyad;
QString gorevi;
QString yeri;
QString roleidstr;
 
raporRolePerGorev(QWidget *parent):QWidget(parent)
{
setupUi(this);


 model = new QSqlQueryModel;
 model->setQuery("SELECT * From roleler");
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
   roleidstr = model->data(model->index(selectionModel->currentIndex().row(), 0)).toString();
 roleadstr=model->data(model->index(selectionModel->currentIndex().row(), 1)).toString();

mevcutGorevlerModel->setQuery("SELECT  rl.ad AS rolead,rn.rno, p.ad AS pad, p.soyad, rlg.ad AS gorev, rlg.yeri AS gorevYeri FROM roleno_roleler_rolegorevleri rrr, personel p, roleno rn, roleler rl, rolegorevleri rlg WHERE rrr.roleno = p.roleno AND rrr.rolegorevleri_id = rlg.id AND p.roleno = rn.id AND rrr.roleler_id = rl.id AND rrr.roleler_id = "+roleidstr+"ORDER BY rlg.yeri");

// roleadstr=mevcutGorevlerModel->data(mevcutGorevlerModel->index(selectionModel->currentIndex().row(), 1)).toString();


mevcutGorevlerModel->query();

cikti_hazirla();

}
void cikti_hazirla()
{

textEdit->clear();
 ht.clear();
// Model->
ht.append("<TABLE WIDTH=50% BORDER=1 CELLPADDING=4 CELLSPACING=0>");
ht.append(trUtf8("<tr><center><h1><u><td>%2</td></u></h1></center></tr> ").arg(roleadstr));
// ht.append("<hr></hr>");
// ht.append("<tr><small><table cellspacing='7' cellpadding='7' border='0' frame='box'>");
ht.append(trUtf8("<tr><small><td><b>Role No</b></td><td><b>Görevi</b></td><td><b>Yeri</b></td></small></tr>     "));

// textEdit->append("<tr><table>");
while (mevcutGorevlerModel->query().next()) {
         QString roleno = mevcutGorevlerModel->query().value(1).toString();
         QString rolegorev = mevcutGorevlerModel->query().value(4).toString();

QString roleyeri = mevcutGorevlerModel->query().value(5).toString();	 
ht.append("<tr><td><font font-style:'italic'>"+roleno+"</font></td><td>"+rolegorev+"</td><td>"+roleyeri+"</td></tr>");
     }
ht.append("</table>");
textEdit->setHtml(ht);
qDebug()<<ht;

}
void Ara(const QString & text )
{
// 
 model->clear();
 QString f;
//  f.append("rno LIKE '%"+text+"%'");
//  f.append("OR lower(rno) LIKE '%"+text.toLower()+"%'");
 f.append("ad LIKE '%"+text+"%'");
 f.append("OR lower(ad) LIKE '%"+text.toLower()+"%'");
//  f.append("OR soyad LIKE '%"+text+"%'");
//  f.append("OR lower(soyad) LIKE '%"+text.toLower()+"%'");
//  f.append("OR kitap LIKE '%"+text+"%'");
//  f.append("OR lower(kitap) LIKE '%"+text.toLower()+"%'");
//  f.append("OR almatarihi LIKE '%"+text+"%'");
//  qDebug() << f ;
// model1->clear();
 model->setQuery("SELECT * FROM roleler WHERE "+ f);
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
        dlg->setWindowTitle (trUtf8("Roledeki Personel") );
        if (dlg->exec() != QDialog::Accepted)
            return;

        document->print(&printer);
// ht.print(&printer);

    }


};