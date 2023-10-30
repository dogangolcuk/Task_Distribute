/********************************************************************************
** Form generated from reading ui file 'YazarSec.ui'
**
** Created: Mon Sep 3 20:38:20 2007
**      by: Qt User Interface Compiler version 4.3.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_YAZARSEC_H
#define UI_YAZARSEC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

class Ui_FormYazarSec
{
public:
    QAction *actionEkle;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *arama_kutusu;
    QTableView *tVYayinci;
    QPushButton *pBekle;
    QPushButton *pBTemizle;
    QListWidget *LwSecilenler;
    QPushButton *pBSec;

    void setupUi(QDialog *FormYazarSec)
    {
    if (FormYazarSec->objectName().isEmpty())
        FormYazarSec->setObjectName(QString::fromUtf8("FormYazarSec"));
    QSize size(431, 388);
    size = size.expandedTo(FormYazarSec->minimumSizeHint());
    FormYazarSec->resize(size);
    FormYazarSec->setWindowIcon(QIcon());
    actionEkle = new QAction(FormYazarSec);
    actionEkle->setObjectName(QString::fromUtf8("actionEkle"));
    gridLayout = new QGridLayout(FormYazarSec);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(FormYazarSec);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    arama_kutusu = new QLineEdit(FormYazarSec);
    arama_kutusu->setObjectName(QString::fromUtf8("arama_kutusu"));

    gridLayout->addWidget(arama_kutusu, 0, 1, 1, 2);

    tVYayinci = new QTableView(FormYazarSec);
    tVYayinci->setObjectName(QString::fromUtf8("tVYayinci"));
    tVYayinci->setContextMenuPolicy(Qt::ActionsContextMenu);
    tVYayinci->setAlternatingRowColors(true);
    tVYayinci->setSelectionBehavior(QAbstractItemView::SelectRows);

    gridLayout->addWidget(tVYayinci, 1, 0, 1, 3);

    pBekle = new QPushButton(FormYazarSec);
    pBekle->setObjectName(QString::fromUtf8("pBekle"));

    gridLayout->addWidget(pBekle, 2, 0, 1, 3);

    pBTemizle = new QPushButton(FormYazarSec);
    pBTemizle->setObjectName(QString::fromUtf8("pBTemizle"));

    gridLayout->addWidget(pBTemizle, 3, 0, 1, 2);

    LwSecilenler = new QListWidget(FormYazarSec);
    LwSecilenler->setObjectName(QString::fromUtf8("LwSecilenler"));

    gridLayout->addWidget(LwSecilenler, 3, 2, 1, 1);

    pBSec = new QPushButton(FormYazarSec);
    pBSec->setObjectName(QString::fromUtf8("pBSec"));
    pBSec->setIcon(QIcon(QString::fromUtf8(":/ikonlar/onayla.png")));

    gridLayout->addWidget(pBSec, 4, 0, 1, 3);


    retranslateUi(FormYazarSec);

    QMetaObject::connectSlotsByName(FormYazarSec);
    } // setupUi

    void retranslateUi(QDialog *FormYazarSec)
    {
    FormYazarSec->setWindowTitle(QApplication::translate("FormYazarSec", "Yazar Se\303\247", 0, QApplication::UnicodeUTF8));
    actionEkle->setText(QApplication::translate("FormYazarSec", "Ekle", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("FormYazarSec", "Ara:", 0, QApplication::UnicodeUTF8));
    pBekle->setText(QApplication::translate("FormYazarSec", "Ekle", 0, QApplication::UnicodeUTF8));
    pBTemizle->setText(QApplication::translate("FormYazarSec", "Temizle", 0, QApplication::UnicodeUTF8));
    pBSec->setText(QApplication::translate("FormYazarSec", "Se\303\247", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(FormYazarSec);
    } // retranslateUi

};

namespace Ui {
    class FormYazarSec: public Ui_FormYazarSec {};
} // namespace Ui

#endif // UI_YAZARSEC_H
