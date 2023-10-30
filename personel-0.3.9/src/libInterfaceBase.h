#ifndef LIBINTERFACEBASE_H
#define LIBINTERFACEBASE_H
#include <QtCore> 
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QItemSelectionModel>
#include <QSqlDatabase>
class libInterfaceBase:public QObject
{
 Q_OBJECT
public:
libInterfaceBase();
~libInterfaceBase();
private:
// QSqlQuery kaydet_sorgusu;
// QSqlQuery guncelle_sorgusu;
// QSqlQuery silme_sorgusu;
// QSqlQuery arama_sorgusu;
// QString currentId;
// signals:


public slots:
//  bool dbislem(QSqlQuery sorgu);
//  void setKaydetSorgusu(QSqlQuery sorgu);
//  void setGuncelleSorgusu(QSqlQuery sorgu);
//  void setSilSorgusu(QSqlQuery sorgu);
//  void setAramaSorgusu(QSqlQuery sorgu);
//  void setCurrentId(QString str);
//  QSqlQuery getKaydetSorgusu();
//  QSqlQuery getGuncelleSorgusu();
//  QSqlQuery getSilSorgusu();
//  QSqlQuery getAramaSorgusu();
//  QString getCurrentId();
//  bool Kaydet();
//  bool Guncelle();
//  bool Sil();
};
#endif