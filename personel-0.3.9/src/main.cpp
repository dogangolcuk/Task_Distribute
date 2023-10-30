#include <QApplication>
#include "anaPencere.h"
#include <QSettings>
// #include <QCryptographicHash>
#include <QTranslator>
int main(int argc, char *argv[])
{ 
//  Q_OBJECT
//   Q_INIT_RESOURCE(mdi);
     QApplication app(argc,argv);
     app.setWindowIcon(QIcon(":/ikonlar/cache.png"));
     QTranslator translator;
     translator.load("eng");
     app.installTranslator(&translator);

/*
     QSettings settings;
     settings.setValue("lisans","");
     settings.setValue("kod","hvKdyZ");
     QByteArray li = settings.value("lisans").toByteArray();
     QByteArray kod = settings.value("kod").toByteArray();
     settings.setValue("h","");
     QByteArray ha = QCryptographicHash::hash ( li+kod, QCryptographicHash::Md5 );
// 	QString s =  QString(h);
     ha = QByteArray::fromHex(ha);
     qDebug() << ha;

*/

     QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
     db.setHostName("localhost");
     db.setDatabaseName("personel");
     db.setUserName("postgres");
//      db.setPassword("yetli");
     	bool ok = db.open();
      		if(ok)
         		qDebug("Veritabanı bağlandı");
      		else{ 
         		qDebug("Bağlantıda hata ");
         		QSqlError hata =db.lastError();
         		if(hata.isValid() )
                           QMessageBox::critical(0, (" Veritabanı Hatası"), 
		QString::fromUtf8("Bir hata oluştu! Hata ile ilgili bilgiyi aşağıdaki metinden alabilirsiniz.\n\n") 
		+ hata.text());
//             		   qDebug() << hata.text();
                return false;
                }

    anaPencere form ;
//     formPersonelGorev *fg = new formPersonelGorev();
// pencerePersonel *p= new pencerePersonel();

    form.show();

// QObject::connect(p->PbGorevler,SIGNAL(clicked()),form,SLOT(personel_gorevler()()));

    return app.exec();
}

