/********************************************************************************
** Form generated from reading ui file 'raporUyeler.ui'
**
** Created: Fri Sep 7 23:12:48 2007
**      by: Qt User Interface Compiler version 4.3.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_RAPORUYELER_H
#define UI_RAPORUYELER_H

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

class Ui_RaporUyeler
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

    void setupUi(QWidget *RaporUyeler)
    {
    if (RaporUyeler->objectName().isEmpty())
        RaporUyeler->setObjectName(QString::fromUtf8("RaporUyeler"));
    QSize size(515, 396);
    size = size.expandedTo(RaporUyeler->minimumSizeHint());
    RaporUyeler->resize(size);
    RaporUyeler->setWindowIcon(QIcon(QString::fromUtf8(":/ikonlar/uyelist.png")));
    gridLayout = new QGridLayout(RaporUyeler);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(RaporUyeler);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    arama_kutusu = new QLineEdit(RaporUyeler);
    arama_kutusu->setObjectName(QString::fromUtf8("arama_kutusu"));

    gridLayout->addWidget(arama_kutusu, 0, 1, 1, 1);

    tablo = new QTableView(RaporUyeler);
    tablo->setObjectName(QString::fromUtf8("tablo"));
    tablo->setAlternatingRowColors(false);
    tablo->setSelectionBehavior(QAbstractItemView::SelectRows);

    gridLayout->addWidget(tablo, 1, 0, 1, 3);

    label_2 = new QLabel(RaporUyeler);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 2, 0, 1, 3);

    textEdit = new QTextEdit(RaporUyeler);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    textEdit->setReadOnly(false);

    gridLayout->addWidget(textEdit, 3, 0, 1, 3);

    pBYazdir = new QPushButton(RaporUyeler);
    pBYazdir->setObjectName(QString::fromUtf8("pBYazdir"));
    pBYazdir->setIcon(QIcon(QString::fromUtf8(":/ikonlar/fileprint.png")));

    gridLayout->addWidget(pBYazdir, 4, 0, 1, 3);

    pBencok = new QPushButton(RaporUyeler);
    pBencok->setObjectName(QString::fromUtf8("pBencok"));
    pBencok->setIcon(QIcon(QString::fromUtf8(":/ikonlar/agt_family.png")));

    gridLayout->addWidget(pBencok, 0, 2, 1, 1);


    retranslateUi(RaporUyeler);

    QMetaObject::connectSlotsByName(RaporUyeler);
    } // setupUi

    void retranslateUi(QWidget *RaporUyeler)
    {
    RaporUyeler->setWindowTitle(QApplication::translate("RaporUyeler", "\303\234yeler Listesi", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("RaporUyeler", "Ara:", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("RaporUyeler", "\303\207\304\261kt\304\261 Ekran\304\261:", 0, QApplication::UnicodeUTF8));
    pBYazdir->setText(QApplication::translate("RaporUyeler", "Yazd\304\261r", 0, QApplication::UnicodeUTF8));
    pBencok->setText(QApplication::translate("RaporUyeler", "En \303\207ok Kitap Okuyanlar", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(RaporUyeler);
    } // retranslateUi

};

namespace Ui {
    class RaporUyeler: public Ui_RaporUyeler {};
} // namespace Ui

#endif // UI_RAPORUYELER_H
