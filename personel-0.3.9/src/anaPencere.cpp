#include "anaPencere.h"
anaPencere::anaPencere()
{
        mdiArea = new QMdiArea;
        setCentralWidget(mdiArea);
        
        createActions();
        createMenus();
        createToolBars();
        createStatusBar();
// pencerePersonel *p= new pencerePersonel();

}
void anaPencere::createActions()
{

 kurslarAct= new QAction(QIcon(":/ikonlar/edit_remove.png"), trUtf8("Personelin Gördüğü Kurslar"), this);
//     newAct->setShortcut(tr("Ctrl+N"));
    kurslarAct->setStatusTip(trUtf8("Personelin Gördüğü Kurslar"));
    connect(kurslarAct, SIGNAL(triggered()), this, SLOT(kurslar()));


personel_gorevlerAct= new QAction(QIcon(":/ikonlar/edit_remove.png"), trUtf8("Personel/Görev Yeri Eşleştirme "), this);
//     newAct->setShortcut(tr("Ctrl+N"));
    personel_gorevlerAct->setStatusTip(trUtf8("Personel/Görev Yeri Eşleştirme"));
    connect(personel_gorevlerAct, SIGNAL(triggered()), this, SLOT(personel_gorevler()));


    gorevlerAct= new QAction(QIcon(":/ikonlar/edit_remove.png"), trUtf8("Personelin Görev Yerleri"), this);
//     newAct->setShortcut(tr("Ctrl+N"));
    gorevlerAct->setStatusTip(trUtf8("Personelin Görev Yerleri"));
    connect(gorevlerAct, SIGNAL(triggered()), this, SLOT(gorevler()));

raporRolePerGorevAct= new QAction(QIcon(":/ikonlar/edit_remove.png"), trUtf8("Roledeki Personel Görevleri"), this);
//     newAct->setShortcut(tr("Ctrl+N"));
    raporRolePerGorevAct->setStatusTip(trUtf8("Rolelerdeki Personel Görevleri"));
    connect(raporRolePerGorevAct, SIGNAL(triggered()), this, SLOT(raporRolePerGorevi()));

raporPerRoleGorevAct= new QAction(QIcon(":/ikonlar/edit_remove.png"), trUtf8("Personel Role Görevleri"), this);
//     newAct->setShortcut(tr("Ctrl+N"));
    raporPerRoleGorevAct->setStatusTip(trUtf8("Personel Role Görevleri"));
    connect(raporPerRoleGorevAct, SIGNAL(triggered()), this, SLOT(raporPerRoleGorevi()));



roleno_rolegorevAct = new QAction(QIcon(":/ikonlar/roleno_role_rolegorev.png"), trUtf8("RoleNo/Role/Role Görev"), this);
//     newAct->setShortcut(tr("Ctrl+N"));
    roleno_rolegorevAct->setStatusTip(trUtf8("Role Numarası//Role//Role Görevi Eşleştirme Penceresi"));
    connect(roleno_rolegorevAct, SIGNAL(triggered()), this, SLOT(roleno_rolegorev()));



    role_rolegorevAct = new QAction(QIcon(":/ikonlar/role_rolegorev.png"), trUtf8("&Role/Role Görev"), this);
//     newAct->setShortcut(tr("Ctrl+N"));
    role_rolegorevAct->setStatusTip(trUtf8("Role//Role Görevi Eşleştirme Penceresi"));
    connect(role_rolegorevAct, SIGNAL(triggered()), this, SLOT(role_rolegorev()));

rolelerAct = new QAction(QIcon(":/ikonlar/roleler.png"), trUtf8("&RoleLer"), this);
//     newAct->setShortcut(tr("Ctrl+N"));
    rolelerAct->setStatusTip(trUtf8("Role Adları Penceresi"));
    connect(rolelerAct, SIGNAL(triggered()), this, SLOT(roleler()));

rolegorevAct = new QAction(QIcon(":/ikonlar/rolegorevleri.png"), trUtf8("&Role Görevleri"), this);
//     newAct->setShortcut(tr("Ctrl+N"));
    rolegorevAct->setStatusTip(trUtf8("Role Görevleri Penceresi"));
    connect(rolegorevAct, SIGNAL(triggered()), this, SLOT(rolegorev()));


    rolenoAct = new QAction(QIcon(":/ikonlar/roleno.png"), tr("&Role No"), this);
//     newAct->setShortcut(tr("Ctrl+N"));
    rolenoAct->setStatusTip(trUtf8("Role Numaraları Penceresi"));
    connect(rolenoAct, SIGNAL(triggered()), this, SLOT(roleno()));


    uyelerAct = new QAction(QIcon(":/ikonlar/personal.png"), tr("&Personel"), this);
//     newAct->setShortcut(tr("Ctrl+N"));
    uyelerAct->setStatusTip(trUtf8("Personel Penceresi"));
    connect(uyelerAct, SIGNAL(triggered()), this, SLOT(personel()));



    exitAct = new QAction(trUtf8("Çıkış"), this);
    exitAct->setShortcut(tr("Ctrl+Q"));
    exitAct->setStatusTip(trUtf8("Programdan Çık"));
    connect(exitAct, SIGNAL(triggered()), qApp, SLOT(closeAllWindows()));


    closeAct = new QAction(tr("Kapat"), this);
    closeAct->setShortcut(tr("Ctrl+F4"));
    closeAct->setStatusTip(tr("Aktif Pencereyi Kapat"));
    connect(closeAct, SIGNAL(triggered()),
            mdiArea, SLOT(closeActiveSubWindow()));

    closeAllAct = new QAction(tr("Hepsini Kapat"), this);
    closeAllAct->setStatusTip(tr("Tüm Pencereleri Kapat"));
    connect(closeAllAct, SIGNAL(triggered()),
            mdiArea, SLOT(closeAllSubWindows()));

    tileAct = new QAction(tr("&Diz"), this);
    tileAct->setStatusTip(trUtf8("Pencereleri Diz"));
    connect(tileAct, SIGNAL(triggered()), mdiArea, SLOT(tileSubWindows()));

    cascadeAct = new QAction(trUtf8("&Sırala"), this);
    cascadeAct->setStatusTip(trUtf8("Pencereleri Sırala"));
    connect(cascadeAct, SIGNAL(triggered()), mdiArea, SLOT(cascadeSubWindows()));

    nextAct = new QAction(tr("Sonraki"), this);
    nextAct->setStatusTip(tr("Bir Sonraki Pencere"));
    connect(nextAct, SIGNAL(triggered()),
            mdiArea, SLOT(activateNextSubWindow()));

    previousAct = new QAction(trUtf8("Önceki"), this);
    previousAct->setStatusTip(tr("Bir Önceki Pencere"));
    connect(previousAct, SIGNAL(triggered()),
            mdiArea, SLOT(activatePreviousSubWindow()));

    separatorAct = new QAction(this);
    separatorAct->setSeparator(true);

    aboutAct = new QAction(QIcon(":/ikonlar/info.png"),trUtf8("&Hakkında"), this);
    aboutAct->setStatusTip(tr("Program Hakkında"));
    connect(aboutAct, SIGNAL(triggered()), this, SLOT(about()));

//     aboutQtAct = new QAction(tr("About &Qt"), this);
//     aboutQtAct->setStatusTip(tr("Show the Qt library's About box"));
//     connect(aboutQtAct, SIGNAL(triggered()), qApp, SLOT(aboutQt()));

}
void anaPencere::createToolBars()
{
    formBar = addToolBar(tr("Formlar"));
    formBar->addAction(uyelerAct);
//     formBar->addAction(gorevlerAct);
    formBar->addSeparator();
//     formBar->addAction(rolenoAct);
// formBar->addAction(rolegorevAct);
// formBar->addAction(rolelerAct);
    formBar->addAction(role_rolegorevAct);
    formBar->addAction(roleno_rolegorevAct);
    formBar->addSeparator();
    formBar->addAction(raporPerRoleGorevAct);
    formBar->addAction(raporRolePerGorevAct);
//     formBar->addAction(geriAlAct);    
    
//       raporBar = addToolBar(tr("Raporlar"));
//       raporBar->addAction(raporGetirilmeyenAct);
//       raporBar->addAction(raporUyelerAct);
//       raporBar->addAction(raporKitaplarAct);
   
}
void anaPencere::createMenus()
{
    formMenu = menuBar()->addMenu(tr("&Personel"));
	formMenu->addAction(uyelerAct);
	formMenu->addAction(personel_gorevlerAct);   

 formMenu->addAction(exitAct);
     formMenu->addSeparator();
//         formMenu->addAction(gorevlerAct);
// 	formMenu->addAction(rolenoAct);
// 	formMenu->addAction(rolegorevAct);
// 	formMenu->addAction(rolelerAct);
// 	formMenu->addAction(role_rolegorevAct);
// 	formMenu->addAction(roleno_rolegorevAct);

roleMenu = menuBar()->addMenu(tr("&Role"));
// 	roleMenu->addAction(uyelerAct); 
	roleMenu->addAction(role_rolegorevAct);
	roleMenu->addAction(roleno_rolegorevAct);
	roleMenu->addSeparator();  
	roleMenu->addAction(rolenoAct);
	roleMenu->addAction(rolegorevAct);
	roleMenu->addAction(rolelerAct);

//     formMenu->addSeparator();
//      formMenu->addAction(raporPerRoleGorevAct);
//     formMenu->addAction(geriAlAct);  
//     formMenu->addSeparator();

    
//     QAction *action = formMenu->addAction(tr("Switch layout direction"));
//     connect(action, SIGNAL(triggered()), this, SLOT(switchLayoutDirection()));
//     fileMenu->addAction(exitAct);
     raporMenu = menuBar()->addMenu(tr("&Raporlar"));
     raporMenu->addAction(raporPerRoleGorevAct);
     raporMenu->addAction(raporRolePerGorevAct);

sabitlerMenu = menuBar()->addMenu(tr("&Sabit Veriler"));
        sabitlerMenu->addAction(gorevlerAct);
	sabitlerMenu->addAction(kurslarAct);
//     raporMenu = menuBar()->addMenu(tr("&Raporlar"));
//      raporMenu->addAction(raporGetirilmeyenAct);
//      raporMenu->addAction(raporUyelerAct);
//      raporMenu->addAction(raporKitaplarAct);
//     windowMenu = menuBar()->addMenu(tr("&Window"));
//     updateWindowMenu();
//     connect(windowMenu, SIGNAL(aboutToShow()), this, SLOT(updateWindowMenu()));

//     raporMenu->addSeparator();
    
    windowMenu = menuBar()->addMenu(tr("&Pencereler"));
    updateWindowMenu();
    connect(windowMenu, SIGNAL(aboutToShow()), this, SLOT(updateWindowMenu()));

    helpMenu = menuBar()->addMenu(trUtf8("&Yardım"));
    helpMenu->addAction(aboutAct);
//    helpMenu->addAction(aboutQtAct);
}
void anaPencere::createStatusBar()
{
    statusBar()->showMessage(trUtf8("Personel Bilgi Yazılımı"));
}
void anaPencere::updateWindowMenu()
{
    windowMenu->clear();
    windowMenu->addAction(closeAct);
    windowMenu->addAction(closeAllAct);
    windowMenu->addSeparator();
    windowMenu->addAction(tileAct);
    windowMenu->addAction(cascadeAct);
    windowMenu->addSeparator();
    windowMenu->addAction(nextAct);
    windowMenu->addAction(previousAct);
    windowMenu->addAction(separatorAct);

}
void anaPencere::about()
{
   QMessageBox::about(this, trUtf8("Personel Bilgi Yazılımı"),
            trUtf8( "    Program Sahibi\n\n"
                               "    Doğan Gölcük"));
}



void anaPencere::rolegorev()
 {
  pencereRoleGorev *prg =new pencereRoleGorev();
  mdiArea->addSubWindow(prg);
  prg->show();
 }

 void anaPencere::personel()
 {
  pencerePersonel *pp =new pencerePersonel();
//   connect(pp->PbGorevler,SIGNAL(clicked()),this,SLOT(personel_gorevler()));
connect(pp->actionGorev_Ekle,SIGNAL(triggered()),this,SLOT(personel_gorevler()));
  mdiArea->addSubWindow(pp);
  pp->show();
 }
 void anaPencere::roleno()
 {
  pencereRoleNo *pr =new pencereRoleNo();
  mdiArea->addSubWindow(pr);
  pr->show();
 }

void anaPencere::roleler()
 {
  pencereRoleler *pr =new pencereRoleler();
  mdiArea->addSubWindow(pr);
  pr->show();
 }

void anaPencere::role_rolegorev()
{
  formRoleRoleGorev *fr = new formRoleRoleGorev();
  mdiArea->addSubWindow(fr);
  fr->show();


}

void anaPencere::roleno_rolegorev()
{
  formRoleNoRoleGorev *fn = new formRoleNoRoleGorev();
  mdiArea->addSubWindow(fn);
  fn->show();


}
void anaPencere::raporPerRoleGorevi()
{

raporPerRoleGorev *rp = new raporPerRoleGorev(0);
mdiArea->addSubWindow(rp);
 rp->show();

}


void anaPencere::raporRolePerGorevi()
{

raporRolePerGorev *rrpg = new raporRolePerGorev(0);
mdiArea->addSubWindow(rrpg);
 rrpg->show();

}
void anaPencere::gorevler()
{

 pencereGorevler *pg = new pencereGorevler();
 mdiArea->addSubWindow(pg);
 pg->show();

}
void anaPencere::kurslar()
{

 pencereKurslar *pk = new pencereKurslar();
 mdiArea->addSubWindow(pk);
 pk->show();

}

void anaPencere::personel_gorevler()
{

 formPersonelGorev *fg = new formPersonelGorev();
 mdiArea->addSubWindow(fg);
 fg->show();

}