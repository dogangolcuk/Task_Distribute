/********************************************************************************
** Form generated from reading ui file 'raporKitaplar.ui'
**
** Created: Mon Sep 3 20:38:20 2007
**      by: Qt User Interface Compiler version 4.3.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_RAPORKITAPLAR_H
#define UI_RAPORKITAPLAR_H

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

class Ui_RaporKitaplar
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *arama_kutusu;
    QTableView *tablo;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pBYazdir;
    QPushButton *pBencok;

    void setupUi(QWidget *RaporKitaplar)
    {
    if (RaporKitaplar->objectName().isEmpty())
        RaporKitaplar->setObjectName(QString::fromUtf8("RaporKitaplar"));
    QSize size(515, 396);
    size = size.expandedTo(RaporKitaplar->minimumSizeHint());
    RaporKitaplar->resize(size);
    RaporKitaplar->setWindowIcon(QIcon(QString::fromUtf8(":/ikonlar/uyelist.png")));
    gridLayout = new QGridLayout(RaporKitaplar);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(RaporKitaplar);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    arama_kutusu = new QLineEdit(RaporKitaplar);
    arama_kutusu->setObjectName(QString::fromUtf8("arama_kutusu"));

    gridLayout->addWidget(arama_kutusu, 0, 1, 1, 1);

    tablo = new QTableView(RaporKitaplar);
    tablo->setObjectName(QString::fromUtf8("tablo"));
    tablo->setAlternatingRowColors(false);
    tablo->setSelectionBehavior(QAbstractItemView::SelectRows);

    gridLayout->addWidget(tablo, 1, 0, 1, 3);

    label_2 = new QLabel(RaporKitaplar);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 2, 0, 1, 3);

    textEdit = new QTextEdit(RaporKitaplar);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    textEdit->setReadOnly(false);

    gridLayout->addWidget(textEdit, 3, 0, 1, 3);

    pBYazdir = new QPushButton(RaporKitaplar);
    pBYazdir->setObjectName(QString::fromUtf8("pBYazdir"));
    pBYazdir->setIcon(QIcon(QString::fromUtf8(":/ikonlar/fileprint.png")));

    gridLayout->addWidget(pBYazdir, 4, 0, 1, 3);

    pBencok = new QPushButton(RaporKitaplar);
    pBencok->setObjectName(QString::fromUtf8("pBencok"));
    pBencok->setIcon(QIcon(QString::fromUtf8(":/ikonlar/kitaplist.png")));

    gridLayout->addWidget(pBencok, 0, 2, 1, 1);


    retranslateUi(RaporKitaplar);

    QMetaObject::connectSlotsByName(RaporKitaplar);
    } // setupUi

    void retranslateUi(QWidget *RaporKitaplar)
    {
    RaporKitaplar->setWindowTitle(QApplication::translate("RaporKitaplar", "Kitaplar Listesi", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("RaporKitaplar", "Ara:", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("RaporKitaplar", "\303\207\304\261kt\304\261 Ekran\304\261:", 0, QApplication::UnicodeUTF8));
    pBYazdir->setText(QApplication::translate("RaporKitaplar", "Yazd\304\261r", 0, QApplication::UnicodeUTF8));
    pBencok->setText(QApplication::translate("RaporKitaplar", "En \303\207ok Okunan Kitaplar", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(RaporKitaplar);
    } // retranslateUi

};

namespace Ui {
    class RaporKitaplar: public Ui_RaporKitaplar {};
} // namespace Ui

#endif // UI_RAPORKITAPLAR_H
