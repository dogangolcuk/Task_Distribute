/********************************************************************************
** Form generated from reading ui file 'raporGetirilmeyenler.ui'
**
** Created: Mon Sep 3 20:38:20 2007
**      by: Qt User Interface Compiler version 4.3.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_RAPORGETIRILMEYENLER_H
#define UI_RAPORGETIRILMEYENLER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

class Ui_RaporGetirilmeyenler
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *arama_kutusu;
    QPushButton *pBGunuGecmis;
    QTableView *tablo;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pBYazdir;

    void setupUi(QWidget *RaporGetirilmeyenler)
    {
    if (RaporGetirilmeyenler->objectName().isEmpty())
        RaporGetirilmeyenler->setObjectName(QString::fromUtf8("RaporGetirilmeyenler"));
    QSize size(515, 396);
    size = size.expandedTo(RaporGetirilmeyenler->minimumSizeHint());
    RaporGetirilmeyenler->resize(size);
    gridLayout = new QGridLayout(RaporGetirilmeyenler);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(RaporGetirilmeyenler);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    arama_kutusu = new QLineEdit(RaporGetirilmeyenler);
    arama_kutusu->setObjectName(QString::fromUtf8("arama_kutusu"));

    gridLayout->addWidget(arama_kutusu, 0, 1, 1, 1);

    pBGunuGecmis = new QPushButton(RaporGetirilmeyenler);
    pBGunuGecmis->setObjectName(QString::fromUtf8("pBGunuGecmis"));
    pBGunuGecmis->setIcon(QIcon(QString::fromUtf8(":/ikonlar/agt_business.png")));

    gridLayout->addWidget(pBGunuGecmis, 0, 2, 1, 1);

    tablo = new QTableView(RaporGetirilmeyenler);
    tablo->setObjectName(QString::fromUtf8("tablo"));
    tablo->setAlternatingRowColors(false);
    tablo->setSelectionBehavior(QAbstractItemView::SelectRows);

    gridLayout->addWidget(tablo, 1, 0, 1, 3);

    label_2 = new QLabel(RaporGetirilmeyenler);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 2, 0, 1, 3);

    textEdit = new QTextEdit(RaporGetirilmeyenler);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    textEdit->setReadOnly(false);

    gridLayout->addWidget(textEdit, 3, 0, 1, 3);

    pBYazdir = new QPushButton(RaporGetirilmeyenler);
    pBYazdir->setObjectName(QString::fromUtf8("pBYazdir"));
    pBYazdir->setIcon(QIcon(QString::fromUtf8(":/ikonlar/fileprint.png")));

    gridLayout->addWidget(pBYazdir, 4, 0, 1, 3);


    retranslateUi(RaporGetirilmeyenler);

    QMetaObject::connectSlotsByName(RaporGetirilmeyenler);
    } // setupUi

    void retranslateUi(QWidget *RaporGetirilmeyenler)
    {
    RaporGetirilmeyenler->setWindowTitle(QApplication::translate("RaporGetirilmeyenler", "Getirilmeyen Kitaplar Listesi", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("RaporGetirilmeyenler", "Ara:", 0, QApplication::UnicodeUTF8));
    pBGunuGecmis->setText(QApplication::translate("RaporGetirilmeyenler", "G\303\274n\303\274 Ge\303\247enler", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("RaporGetirilmeyenler", "\303\207\304\261kt\304\261 Ekran\304\261:", 0, QApplication::UnicodeUTF8));
    pBYazdir->setText(QApplication::translate("RaporGetirilmeyenler", "Yazd\304\261r", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(RaporGetirilmeyenler);
    } // retranslateUi

};

namespace Ui {
    class RaporGetirilmeyenler: public Ui_RaporGetirilmeyenler {};
} // namespace Ui

#endif // UI_RAPORGETIRILMEYENLER_H
