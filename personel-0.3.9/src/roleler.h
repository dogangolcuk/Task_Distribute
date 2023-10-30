#include "libdbBase.h"
class roleler:public libdbBase
{
Q_OBJECT
public:
roleler(QString ad, QString tipi);//Kaydetme için
roleler(const QString & id);//Silme için
roleler(const QString & id,QString ad, QString tipi);//Güncelleme için
private:

public slots:

};