#include "ui_secRoleNo.h" 
#include <QtSql>
#include<QHeaderView>
#ifndef FORMSECROLENO_H
#define FORMSECROLENO_H
class formSecRoleNo :public QDialog ,public Ui::RoleNoSec
{
   Q_OBJECT

QSqlQueryModel *model;
QItemSelectionModel *selectionYayinci ;
QModelIndex curindex;
int id;
QString roleno;
public:
formSecRoleNo(QWidget *parent):QDialog(parent)
{

     setupUi(this);

     connect(arama_kutusu,SIGNAL(textChanged ( const QString &  )),this,SLOT(Ara(const QString &)));
     connect(tablo,SIGNAL(clicked ( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
     connect(tablo,SIGNAL(activated ( const QModelIndex & )),this,SLOT(tablodolas(const QModelIndex &)));
     connect(pBSec,SIGNAL(clicked()),this,SLOT(sec()));
     model = new QSqlQueryModel;
     model->setQuery("SELECT * FROM roleno");
     tablo->setModel(model);
tablo->hideColumn(0);
tablo->verticalHeader()->hide();
tablo->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
     tablo->show();
     selectionYayinci = tablo->selectionModel();

} 
     
//    protected:



public slots:
void tablodolas(const QModelIndex & index)
{
// curindex = index;
 id = model->data(model->index(selectionYayinci->currentIndex().row(), 0)).toInt() ;
QString idStr = model->data(model->index(selectionYayinci->currentIndex().row(), 0)).toString() ;
 roleno = model->data(model->index(selectionYayinci->currentIndex().row(), 1)).toString() ;


// QSqlQuery sil;
// QString f;
//  f.append("SELECT no FROM roleno WHERE id=");

//   f.append(idStr);

//  sil.prepare(f);
//    sil.exec();
// sil.next();
//  QVariant vad = sil.value(0);



//  QString yAd = vad.toString() ;
// qDebug()<< yAd;
}
void sec()
{
emit yayinciSelected(id,roleno);
qDebug()<< roleno <<"fromWidget";
this->hide();
}
void Ara(const QString & text )
{
// QSqlQuery query;
//      query.prepare("SELECT roleno, soyad, ek FROM yazarlar ");
model->clear();
QString f;
f.append( "lower(rno) LIKE '%");
f.append(text.toLower());
f.append("%' OR ");
// f.append("lower(roleno) LIKE '%");
// f.append(text.toLower());
// f.append("%'");
f.append( " lower(rno) LIKE '%");
f.append(text);
f.append("%'");
// f.append(" lower(roleno) LIKE '%");
// f.append(text);
// f.append("%'");
qDebug() << f ;
model->setQuery("SELECT * FROM roleno WHERE "+ f);
//  model->setFilter(f);
// model->select();
model->query();

// yazarlar_tablo->keyboardSearch (text );
}

 signals:
void yayinciSelected(int ,QString);
private:
      
};
#endif