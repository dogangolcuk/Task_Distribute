#include "libdbBase.h"
class roleno:public libdbBase
{
Q_OBJECT
public:
roleno(QString rno,int k);//Kaydetme için
roleno(const QString & id);//Silme için
roleno(const QString & id,QString rno);//Güncelleme için
private:

public slots:
};