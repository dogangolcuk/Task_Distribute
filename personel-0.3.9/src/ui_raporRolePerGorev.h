/********************************************************************************
** Form generated from reading ui file 'raporRolePerGorev.ui'
**
** Created: Sat Jul 19 11:19:45 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_RAPORROLEPERGOREV_H
#define UI_RAPORROLEPERGOREV_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RaporRolePerGorev
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *arama_kutusu;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QTableView *tablo;
    QTableView *tablo_mevcut_gorevler;
    QTextEdit *textEdit;
    QPushButton *pBYazdir;

    void setupUi(QWidget *RaporRolePerGorev)
    {
    if (RaporRolePerGorev->objectName().isEmpty())
        RaporRolePerGorev->setObjectName(QString::fromUtf8("RaporRolePerGorev"));
    RaporRolePerGorev->resize(536, 474);
    gridLayout = new QGridLayout(RaporRolePerGorev);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(RaporRolePerGorev);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    arama_kutusu = new QLineEdit(RaporRolePerGorev);
    arama_kutusu->setObjectName(QString::fromUtf8("arama_kutusu"));

    gridLayout->addWidget(arama_kutusu, 0, 1, 1, 1);

    splitter_2 = new QSplitter(RaporRolePerGorev);
    splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
    splitter_2->setOrientation(Qt::Vertical);
    splitter = new QSplitter(splitter_2);
    splitter->setObjectName(QString::fromUtf8("splitter"));
    splitter->setOrientation(Qt::Horizontal);
    tablo = new QTableView(splitter);
    tablo->setObjectName(QString::fromUtf8("tablo"));
    tablo->setSelectionMode(QAbstractItemView::SingleSelection);
    tablo->setSelectionBehavior(QAbstractItemView::SelectRows);
    splitter->addWidget(tablo);
    tablo_mevcut_gorevler = new QTableView(splitter);
    tablo_mevcut_gorevler->setObjectName(QString::fromUtf8("tablo_mevcut_gorevler"));
    tablo_mevcut_gorevler->setSelectionMode(QAbstractItemView::SingleSelection);
    tablo_mevcut_gorevler->setSelectionBehavior(QAbstractItemView::SelectRows);
    splitter->addWidget(tablo_mevcut_gorevler);
    splitter_2->addWidget(splitter);
    textEdit = new QTextEdit(splitter_2);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    splitter_2->addWidget(textEdit);

    gridLayout->addWidget(splitter_2, 1, 0, 1, 2);

    pBYazdir = new QPushButton(RaporRolePerGorev);
    pBYazdir->setObjectName(QString::fromUtf8("pBYazdir"));

    gridLayout->addWidget(pBYazdir, 2, 0, 1, 2);


    retranslateUi(RaporRolePerGorev);

    QMetaObject::connectSlotsByName(RaporRolePerGorev);
    } // setupUi

    void retranslateUi(QWidget *RaporRolePerGorev)
    {
    RaporRolePerGorev->setWindowTitle(QApplication::translate("RaporRolePerGorev", "Rolelerdeki Personel G\303\266revleri", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("RaporRolePerGorev", "Ara :", 0, QApplication::UnicodeUTF8));
    pBYazdir->setText(QApplication::translate("RaporRolePerGorev", "\303\207\304\261kt\304\261 Al", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(RaporRolePerGorev);
    } // retranslateUi

};

namespace Ui {
    class RaporRolePerGorev: public Ui_RaporRolePerGorev {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAPORROLEPERGOREV_H
