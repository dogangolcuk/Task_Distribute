/********************************************************************************
** Form generated from reading ui file 'widgetAdresBilgileri.ui'
**
** Created: Sat Jul 19 11:19:45 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIDGETADRESBILGILERI_H
#define UI_WIDGETADRESBILGILERI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widgetAdresBilgileri
{
public:
    QAction *actionSil;
    QGridLayout *gridLayout;
    QTableView *tablo;
    QTextEdit *TeDaimiAdres;
    QTextEdit *TeGeciciAdres;
    QPushButton *PbAdresEkle;
    QPushButton *PbAdresDegistir;

    void setupUi(QWidget *widgetAdresBilgileri)
    {
    if (widgetAdresBilgileri->objectName().isEmpty())
        widgetAdresBilgileri->setObjectName(QString::fromUtf8("widgetAdresBilgileri"));
    widgetAdresBilgileri->resize(613, 484);
    widgetAdresBilgileri->setAutoFillBackground(true);
    actionSil = new QAction(widgetAdresBilgileri);
    actionSil->setObjectName(QString::fromUtf8("actionSil"));
    const QIcon icon = QIcon(QString::fromUtf8(":/ikonlar/eraser.png"));
    actionSil->setIcon(icon);
    gridLayout = new QGridLayout(widgetAdresBilgileri);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tablo = new QTableView(widgetAdresBilgileri);
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

    gridLayout->addWidget(tablo, 0, 0, 1, 2);

    TeDaimiAdres = new QTextEdit(widgetAdresBilgileri);
    TeDaimiAdres->setObjectName(QString::fromUtf8("TeDaimiAdres"));

    gridLayout->addWidget(TeDaimiAdres, 1, 0, 1, 1);

    TeGeciciAdres = new QTextEdit(widgetAdresBilgileri);
    TeGeciciAdres->setObjectName(QString::fromUtf8("TeGeciciAdres"));

    gridLayout->addWidget(TeGeciciAdres, 1, 1, 1, 1);

    PbAdresEkle = new QPushButton(widgetAdresBilgileri);
    PbAdresEkle->setObjectName(QString::fromUtf8("PbAdresEkle"));

    gridLayout->addWidget(PbAdresEkle, 2, 0, 1, 1);

    PbAdresDegistir = new QPushButton(widgetAdresBilgileri);
    PbAdresDegistir->setObjectName(QString::fromUtf8("PbAdresDegistir"));

    gridLayout->addWidget(PbAdresDegistir, 2, 1, 1, 1);


    retranslateUi(widgetAdresBilgileri);

    QMetaObject::connectSlotsByName(widgetAdresBilgileri);
    } // setupUi

    void retranslateUi(QWidget *widgetAdresBilgileri)
    {
    widgetAdresBilgileri->setWindowTitle(QApplication::translate("widgetAdresBilgileri", "Roleler", 0, QApplication::UnicodeUTF8));
    actionSil->setText(QApplication::translate("widgetAdresBilgileri", "Sil", 0, QApplication::UnicodeUTF8));
    tablo->setStyleSheet(QString());
    PbAdresEkle->setText(QApplication::translate("widgetAdresBilgileri", "Adres Ekle", 0, QApplication::UnicodeUTF8));
    PbAdresDegistir->setText(QApplication::translate("widgetAdresBilgileri", "Adresi De\304\237i\305\237tir", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(widgetAdresBilgileri);
    } // retranslateUi

};

namespace Ui {
    class widgetAdresBilgileri: public Ui_widgetAdresBilgileri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETADRESBILGILERI_H
