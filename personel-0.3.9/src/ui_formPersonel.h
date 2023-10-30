/********************************************************************************
** Form generated from reading ui file 'formPersonel.ui'
**
** Created: Sat Jul 19 11:19:45 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FORMPERSONEL_H
#define UI_FORMPERSONEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPersonel
{
public:
    QAction *actionSil;
    QAction *actionGorevSil;
    QAction *actionGorev_Ekle;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *arama_kutusu;
    QTableView *personel_tablo;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout1;
    QLabel *label;
    QLineEdit *LeSicilNo;
    QLabel *label_7;
    QToolButton *TbRoleSec;
    QLineEdit *LeRoleNo;
    QLabel *label_4;
    QLineEdit *LeAd;
    QLabel *label_5;
    QLineEdit *LeSoyad;
    QLabel *label_2;
    QComboBox *CbSinif;
    QLabel *label_6;
    QComboBox *CbRutbe;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QPushButton *pBDegistir;
    QPushButton *pBKaydet;
    QPushButton *pBiptal;
    QPushButton *pBSil;
    QWidget *tab_2;
    QGridLayout *gridLayout3;
    QTableView *tablo_mevcut_gorevler;
    QWidget *tab_4;
    QGridLayout *gridLayout4;
    QFrame *adreslerFrame;

    void setupUi(QWidget *FormPersonel)
    {
    if (FormPersonel->objectName().isEmpty())
        FormPersonel->setObjectName(QString::fromUtf8("FormPersonel"));
    FormPersonel->resize(670, 571);
    actionSil = new QAction(FormPersonel);
    actionSil->setObjectName(QString::fromUtf8("actionSil"));
    const QIcon icon = QIcon(QString::fromUtf8(":/ikonlar/eraser.png"));
    actionSil->setIcon(icon);
    actionGorevSil = new QAction(FormPersonel);
    actionGorevSil->setObjectName(QString::fromUtf8("actionGorevSil"));
    actionGorevSil->setIcon(icon);
    actionGorev_Ekle = new QAction(FormPersonel);
    actionGorev_Ekle->setObjectName(QString::fromUtf8("actionGorev_Ekle"));
    const QIcon icon1 = QIcon(QString::fromUtf8(":/ikonlar/onayla.png"));
    actionGorev_Ekle->setIcon(icon1);
    gridLayout = new QGridLayout(FormPersonel);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label_3 = new QLabel(FormPersonel);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    gridLayout->addWidget(label_3, 0, 0, 1, 1);

    arama_kutusu = new QLineEdit(FormPersonel);
    arama_kutusu->setObjectName(QString::fromUtf8("arama_kutusu"));

    gridLayout->addWidget(arama_kutusu, 0, 1, 1, 1);

    personel_tablo = new QTableView(FormPersonel);
    personel_tablo->setObjectName(QString::fromUtf8("personel_tablo"));
    personel_tablo->setMinimumSize(QSize(0, 172));
    QPalette palette;
    QBrush brush(QColor(0, 0, 0, 255));
    brush.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
    QBrush brush1(QColor(167, 181, 186, 255));
    brush1.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Button, brush1);
    QBrush brush2(QColor(253, 255, 255, 255));
    brush2.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Light, brush2);
    QBrush brush3(QColor(210, 218, 220, 255));
    brush3.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
    QBrush brush4(QColor(83, 90, 93, 255));
    brush4.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
    QBrush brush5(QColor(111, 121, 124, 255));
    brush5.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
    palette.setBrush(QPalette::Active, QPalette::Text, brush);
    QBrush brush6(QColor(255, 255, 255, 255));
    brush6.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
    palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
    palette.setBrush(QPalette::Active, QPalette::Base, brush6);
    palette.setBrush(QPalette::Active, QPalette::Window, brush1);
    palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
    QBrush brush7(QColor(211, 218, 220, 255));
    brush7.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
    palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
    palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
    palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
    palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
    palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
    palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
    palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
    palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
    palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
    palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
    palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
    palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
    palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
    palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
    palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
    palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
    palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
    palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
    palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
    palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
    palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
    palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
    palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
    palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
    palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
    palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
    personel_tablo->setPalette(palette);
    personel_tablo->setMouseTracking(true);
    personel_tablo->setFocusPolicy(Qt::ClickFocus);
    personel_tablo->setContextMenuPolicy(Qt::ActionsContextMenu);
    personel_tablo->setAcceptDrops(false);
    personel_tablo->setFrameShape(QFrame::StyledPanel);
    personel_tablo->setFrameShadow(QFrame::Sunken);
    personel_tablo->setEditTriggers(QAbstractItemView::AllEditTriggers);
    personel_tablo->setTabKeyNavigation(false);
    personel_tablo->setAlternatingRowColors(true);
    personel_tablo->setSelectionMode(QAbstractItemView::SingleSelection);
    personel_tablo->setSelectionBehavior(QAbstractItemView::SelectRows);
    personel_tablo->setGridStyle(Qt::DashLine);
    personel_tablo->setSortingEnabled(true);

    gridLayout->addWidget(personel_tablo, 1, 0, 1, 2);

    tabWidget = new QTabWidget(FormPersonel);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    gridLayout1 = new QGridLayout(tab);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    label = new QLabel(tab);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout1->addWidget(label, 0, 0, 1, 1);

    LeSicilNo = new QLineEdit(tab);
    LeSicilNo->setObjectName(QString::fromUtf8("LeSicilNo"));

    gridLayout1->addWidget(LeSicilNo, 0, 1, 1, 1);

    label_7 = new QLabel(tab);
    label_7->setObjectName(QString::fromUtf8("label_7"));

    gridLayout1->addWidget(label_7, 0, 2, 1, 1);

    TbRoleSec = new QToolButton(tab);
    TbRoleSec->setObjectName(QString::fromUtf8("TbRoleSec"));

    gridLayout1->addWidget(TbRoleSec, 0, 3, 1, 1);

    LeRoleNo = new QLineEdit(tab);
    LeRoleNo->setObjectName(QString::fromUtf8("LeRoleNo"));

    gridLayout1->addWidget(LeRoleNo, 0, 4, 1, 1);

    label_4 = new QLabel(tab);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    gridLayout1->addWidget(label_4, 1, 0, 1, 1);

    LeAd = new QLineEdit(tab);
    LeAd->setObjectName(QString::fromUtf8("LeAd"));

    gridLayout1->addWidget(LeAd, 1, 1, 1, 1);

    label_5 = new QLabel(tab);
    label_5->setObjectName(QString::fromUtf8("label_5"));

    gridLayout1->addWidget(label_5, 1, 2, 1, 1);

    LeSoyad = new QLineEdit(tab);
    LeSoyad->setObjectName(QString::fromUtf8("LeSoyad"));

    gridLayout1->addWidget(LeSoyad, 1, 3, 1, 2);

    label_2 = new QLabel(tab);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout1->addWidget(label_2, 2, 0, 1, 1);

    CbSinif = new QComboBox(tab);
    CbSinif->setObjectName(QString::fromUtf8("CbSinif"));

    gridLayout1->addWidget(CbSinif, 2, 1, 1, 1);

    label_6 = new QLabel(tab);
    label_6->setObjectName(QString::fromUtf8("label_6"));

    gridLayout1->addWidget(label_6, 2, 2, 1, 1);

    CbRutbe = new QComboBox(tab);
    CbRutbe->setObjectName(QString::fromUtf8("CbRutbe"));

    gridLayout1->addWidget(CbRutbe, 2, 3, 1, 2);

    groupBox = new QGroupBox(tab);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setMaximumSize(QSize(16777215, 66));
    gridLayout2 = new QGridLayout(groupBox);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    gridLayout2->setHorizontalSpacing(6);
    gridLayout2->setVerticalSpacing(6);
    gridLayout2->setContentsMargins(9, 9, 9, 9);
    pBDegistir = new QPushButton(groupBox);
    pBDegistir->setObjectName(QString::fromUtf8("pBDegistir"));
    const QIcon icon2 = QIcon(QString::fromUtf8(":/ikonlar/cnr-update.png"));
    pBDegistir->setIcon(icon2);

    gridLayout2->addWidget(pBDegistir, 0, 0, 1, 1);

    pBKaydet = new QPushButton(groupBox);
    pBKaydet->setObjectName(QString::fromUtf8("pBKaydet"));
    const QIcon icon3 = QIcon(QString::fromUtf8(":/ikonlar/filesaveas.png"));
    pBKaydet->setIcon(icon3);

    gridLayout2->addWidget(pBKaydet, 0, 1, 1, 1);

    pBiptal = new QPushButton(groupBox);
    pBiptal->setObjectName(QString::fromUtf8("pBiptal"));
    const QIcon icon4 = QIcon(QString::fromUtf8(":/ikonlar/edit_remove.png"));
    pBiptal->setIcon(icon4);

    gridLayout2->addWidget(pBiptal, 0, 2, 1, 1);

    pBSil = new QPushButton(groupBox);
    pBSil->setObjectName(QString::fromUtf8("pBSil"));
    pBSil->setIcon(icon);

    gridLayout2->addWidget(pBSil, 0, 3, 1, 1);


    gridLayout1->addWidget(groupBox, 3, 0, 1, 5);

    tabWidget->addTab(tab, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    gridLayout3 = new QGridLayout(tab_2);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    tablo_mevcut_gorevler = new QTableView(tab_2);
    tablo_mevcut_gorevler->setObjectName(QString::fromUtf8("tablo_mevcut_gorevler"));
    tablo_mevcut_gorevler->setContextMenuPolicy(Qt::ActionsContextMenu);
    tablo_mevcut_gorevler->setSelectionMode(QAbstractItemView::SingleSelection);
    tablo_mevcut_gorevler->setSelectionBehavior(QAbstractItemView::SelectRows);

    gridLayout3->addWidget(tablo_mevcut_gorevler, 0, 0, 1, 1);

    tabWidget->addTab(tab_2, QString());
    tab_4 = new QWidget();
    tab_4->setObjectName(QString::fromUtf8("tab_4"));
    gridLayout4 = new QGridLayout(tab_4);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    adreslerFrame = new QFrame(tab_4);
    adreslerFrame->setObjectName(QString::fromUtf8("adreslerFrame"));
    adreslerFrame->setFrameShape(QFrame::StyledPanel);
    adreslerFrame->setFrameShadow(QFrame::Raised);

    gridLayout4->addWidget(adreslerFrame, 0, 0, 1, 1);

    tabWidget->addTab(tab_4, QString());

    gridLayout->addWidget(tabWidget, 2, 0, 1, 2);

    label_3->setBuddy(arama_kutusu);
    QWidget::setTabOrder(arama_kutusu, personel_tablo);

    retranslateUi(FormPersonel);

    tabWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(FormPersonel);
    } // setupUi

    void retranslateUi(QWidget *FormPersonel)
    {
    FormPersonel->setWindowTitle(QApplication::translate("FormPersonel", "Personel", 0, QApplication::UnicodeUTF8));
    actionSil->setText(QApplication::translate("FormPersonel", "Sil", 0, QApplication::UnicodeUTF8));
    actionGorevSil->setText(QApplication::translate("FormPersonel", "GorevSil", 0, QApplication::UnicodeUTF8));
    actionGorev_Ekle->setText(QApplication::translate("FormPersonel", "Gorev Ekle", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("FormPersonel", "&Ara :", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("FormPersonel", "Sicil No:", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("FormPersonel", "Role No:", 0, QApplication::UnicodeUTF8));
    TbRoleSec->setText(QApplication::translate("FormPersonel", "...", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("FormPersonel", "Ad:", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("FormPersonel", "Soyad:", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("FormPersonel", "S\304\261n\304\261f:", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("FormPersonel", "R\303\274tbe:", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("FormPersonel", "\304\260\305\237lemler", 0, QApplication::UnicodeUTF8));
    pBDegistir->setText(QApplication::translate("FormPersonel", "De\304\237i\305\237tir", 0, QApplication::UnicodeUTF8));
    pBKaydet->setText(QApplication::translate("FormPersonel", "Yeni Kay\304\261t", 0, QApplication::UnicodeUTF8));
    pBiptal->setText(QApplication::translate("FormPersonel", "iPtal", 0, QApplication::UnicodeUTF8));
    pBSil->setText(QApplication::translate("FormPersonel", "Sil", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("FormPersonel", "K\303\274nye Bilgileri", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("FormPersonel", "G\303\266revler", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("FormPersonel", "Adres Bilgileri", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(FormPersonel);
    } // retranslateUi

};

namespace Ui {
    class FormPersonel: public Ui_FormPersonel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPERSONEL_H
