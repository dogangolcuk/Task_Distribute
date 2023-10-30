/********************************************************************************
** Form generated from reading ui file 'formRoleler.ui'
**
** Created: Sat Jul 19 11:19:45 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FORMROLELER_H
#define UI_FORMROLELER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormRoleler
{
public:
    QAction *actionSil;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *arama_kutusu;
    QTableView *tablo;
    QLabel *label;
    QLineEdit *LeRoleAd;
    QLabel *label_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QPushButton *pBDegistir;
    QPushButton *pBiptal;
    QPushButton *pBSil;
    QPushButton *pBKaydet;
    QComboBox *CbRoleTipi;

    void setupUi(QWidget *FormRoleler)
    {
    if (FormRoleler->objectName().isEmpty())
        FormRoleler->setObjectName(QString::fromUtf8("FormRoleler"));
    FormRoleler->resize(377, 406);
    FormRoleler->setAutoFillBackground(true);
    actionSil = new QAction(FormRoleler);
    actionSil->setObjectName(QString::fromUtf8("actionSil"));
    const QIcon icon = QIcon(QString::fromUtf8(":/ikonlar/eraser.png"));
    actionSil->setIcon(icon);
    gridLayout = new QGridLayout(FormRoleler);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label_3 = new QLabel(FormRoleler);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    gridLayout->addWidget(label_3, 0, 0, 1, 1);

    arama_kutusu = new QLineEdit(FormRoleler);
    arama_kutusu->setObjectName(QString::fromUtf8("arama_kutusu"));

    gridLayout->addWidget(arama_kutusu, 0, 1, 1, 1);

    tablo = new QTableView(FormRoleler);
    tablo->setObjectName(QString::fromUtf8("tablo"));
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
    tablo->setPalette(palette);
    tablo->setMouseTracking(true);
    tablo->setFocusPolicy(Qt::ClickFocus);
    tablo->setContextMenuPolicy(Qt::ActionsContextMenu);
    tablo->setAcceptDrops(false);
    tablo->setFrameShape(QFrame::StyledPanel);
    tablo->setFrameShadow(QFrame::Sunken);
    tablo->setEditTriggers(QAbstractItemView::AllEditTriggers);
    tablo->setTabKeyNavigation(false);
    tablo->setAlternatingRowColors(true);
    tablo->setSelectionMode(QAbstractItemView::SingleSelection);
    tablo->setSelectionBehavior(QAbstractItemView::SelectRows);
    tablo->setGridStyle(Qt::DashLine);
    tablo->setSortingEnabled(true);

    gridLayout->addWidget(tablo, 1, 0, 1, 2);

    label = new QLabel(FormRoleler);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 2, 0, 1, 1);

    LeRoleAd = new QLineEdit(FormRoleler);
    LeRoleAd->setObjectName(QString::fromUtf8("LeRoleAd"));

    gridLayout->addWidget(LeRoleAd, 2, 1, 1, 1);

    label_2 = new QLabel(FormRoleler);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 3, 0, 1, 1);

    groupBox = new QGroupBox(FormRoleler);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout1 = new QGridLayout(groupBox);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(9, 9, 9, 9);
    pBDegistir = new QPushButton(groupBox);
    pBDegistir->setObjectName(QString::fromUtf8("pBDegistir"));
    const QIcon icon1 = QIcon(QString::fromUtf8(":/ikonlar/cnr-update.png"));
    pBDegistir->setIcon(icon1);

    gridLayout1->addWidget(pBDegistir, 0, 0, 1, 1);

    pBiptal = new QPushButton(groupBox);
    pBiptal->setObjectName(QString::fromUtf8("pBiptal"));
    const QIcon icon2 = QIcon(QString::fromUtf8(":/ikonlar/edit_remove.png"));
    pBiptal->setIcon(icon2);

    gridLayout1->addWidget(pBiptal, 0, 2, 1, 1);

    pBSil = new QPushButton(groupBox);
    pBSil->setObjectName(QString::fromUtf8("pBSil"));
    pBSil->setIcon(icon);

    gridLayout1->addWidget(pBSil, 0, 3, 1, 1);

    pBKaydet = new QPushButton(groupBox);
    pBKaydet->setObjectName(QString::fromUtf8("pBKaydet"));
    const QIcon icon3 = QIcon(QString::fromUtf8(":/ikonlar/filesaveas.png"));
    pBKaydet->setIcon(icon3);

    gridLayout1->addWidget(pBKaydet, 0, 1, 1, 1);


    gridLayout->addWidget(groupBox, 4, 0, 1, 2);

    CbRoleTipi = new QComboBox(FormRoleler);
    CbRoleTipi->setObjectName(QString::fromUtf8("CbRoleTipi"));

    gridLayout->addWidget(CbRoleTipi, 3, 1, 1, 1);

    label_3->setBuddy(arama_kutusu);
    label->setBuddy(LeRoleAd);
    QWidget::setTabOrder(arama_kutusu, tablo);
    QWidget::setTabOrder(tablo, LeRoleAd);
    QWidget::setTabOrder(LeRoleAd, pBDegistir);
    QWidget::setTabOrder(pBDegistir, pBKaydet);
    QWidget::setTabOrder(pBKaydet, pBiptal);
    QWidget::setTabOrder(pBiptal, pBSil);

    retranslateUi(FormRoleler);

    QMetaObject::connectSlotsByName(FormRoleler);
    } // setupUi

    void retranslateUi(QWidget *FormRoleler)
    {
    FormRoleler->setWindowTitle(QApplication::translate("FormRoleler", "Roleler", 0, QApplication::UnicodeUTF8));
    actionSil->setText(QApplication::translate("FormRoleler", "sil", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("FormRoleler", "&Ara :", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("FormRoleler", "Role Ad\304\261 :", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("FormRoleler", "Role Tipi :", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("FormRoleler", "\304\260\305\237lemler", 0, QApplication::UnicodeUTF8));
    pBDegistir->setText(QApplication::translate("FormRoleler", "De\304\237i\305\237tir", 0, QApplication::UnicodeUTF8));
    pBiptal->setText(QApplication::translate("FormRoleler", "iPtal", 0, QApplication::UnicodeUTF8));
    pBSil->setText(QApplication::translate("FormRoleler", "Sil", 0, QApplication::UnicodeUTF8));
    pBKaydet->setText(QApplication::translate("FormRoleler", "Yeni Kay\304\261t", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(FormRoleler);
    } // retranslateUi

};

namespace Ui {
    class FormRoleler: public Ui_FormRoleler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMROLELER_H
