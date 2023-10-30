#include "libdbBase.h"
class rolegorev:public libdbBase
{
Q_OBJECT
public:
rolegorev(QString ad, QString komuta, QString yeri, QString neyapar);//Kaydetme için
rolegorev(const QString & id);//Silme için
rolegorev(const QString & id,QString ad, QString komuta, QString yeri, QString neyapar);//Güncelleme için
private:

public slots:

};