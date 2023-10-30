#include "pencerePersonel.h"
#include "pencereGorevler.h"
#include "pencereKurslar.h"
#include "pencereRoleNo.h"
#include "pencereRoleGorev.h"
#include "pencereRoleler.h"
#include "formRoleRoleGorev.h"
#include "formRoleNoRoleGorev.h"
#include "formPersonelGorev.h"

#include "raporPerRoleGorev.h"
#include "raporRolePerGorev.h"

#include <QMdiArea>
#include <QMainWindow>
#include <QMdiSubWindow>
#include <QAction>
#include <QMenu>
#include <QSignalMapper>
#include <QtGui>
class anaPencere : public QMainWindow
{
   Q_OBJECT
   public:
      anaPencere(); 
// bool yazarlarOpen;
     
//       QWidget *activeMdiChild();
//       QMdiSubWindow *findMdiChild();
      
   private:
    bool raporGetirilmeyenAcik;
    void createActions();
    void createMenus();
    void createToolBars();
    void createStatusBar();
//  pencereYazarlar *py  ;
//  pencereKitaplar *pk;
//  QMdiSubWindow *winYazar;
 QMdiArea *mdiArea;
 QSignalMapper *windowMapper;

    QMenu *formMenu;
    QMenu *roleMenu;
    QMenu *raporMenu;
    QMenu *sabitlerMenu;
    QMenu *windowMenu;
    QMenu *helpMenu;
    
    QToolBar *formBar;
    QToolBar *raporBar;

    QAction *rolelerAct;
    QAction *rolegorevAct;
    QAction *uyelerAct;
    QAction *rolenoAct;
    QAction *oduncVerAct;
    QAction *role_rolegorevAct;
    QAction *roleno_rolegorevAct;
    QAction *personel_gorevlerAct;

    QAction *gorevlerAct;
    QAction *kurslarAct;

    
    QAction *raporPerRoleGorevAct;
    QAction *raporRolePerGorevAct;
    QAction *raporUyelerAct;
    QAction *raporKitaplarAct;

    QAction *exitAct;
    QAction *closeAct;
    QAction *closeAllAct;
    QAction *tileAct;
    QAction *cascadeAct;
    QAction *nextAct;
    QAction *previousAct;
    QAction *separatorAct;
    QAction *aboutAct;
//     QAction *aboutQtAct;
   public slots:
           void updateWindowMenu();
           void about();
           void rolegorev();
           void roleler();
//            void oduncver();
           void personel();
           void roleno();
	   void role_rolegorev();
	   void roleno_rolegorev();
//            void gerial();
           void raporPerRoleGorevi();	
	   void raporRolePerGorevi();
	   void	gorevler();
           void personel_gorevler();
           void kurslar();
// 	   void raporKitapListesi();
//           void yazardene();
};
