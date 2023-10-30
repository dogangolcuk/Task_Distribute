/********************************************************************************
** Form generated from reading ui file 'raporPerRoleGorev.ui'
**
** Created: Fri Sep 14 14:35:19 2007
**      by: Qt User Interface Compiler version 4.3.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_RAPORPERROLEGOREV_H
#define UI_RAPORPERROLEGOREV_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

class Ui_RaporPerRoleGorev
{
public:
    QGridLayout *gridLayout;
    QTableView *tablo;
    QTableView *tablo_mevcut_gorevler;
    QTextEdit *textEdit;
    QPushButton *pBYazdir;
    QLineEdit *arama_kutusu;

    void setupUi(QWidget *RaporPerRoleGorev)
    {
    if (RaporPerRoleGorev->objectName().isEmpty())
        RaporPerRoleGorev->setObjectName(QString::fromUtf8("RaporPerRoleGorev"));
    QSize size(522, 444);
    size = size.expandedTo(RaporPerRoleGorev->minimumSizeHint());
    RaporPerRoleGorev->resize(size);
    gridLayout = new QGridLayout(RaporPerRoleGorev);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tablo = new QTableView(RaporPerRoleGorev);
    tablo->setObjectName(QString::fromUtf8("tablo"));

    gridLayout->addWidget(tablo, 0, 0, 1, 1);

    tablo_mevcut_gorevler = new QTableView(RaporPerRoleGorev);
    tablo_mevcut_gorevler->setObjectName(QString::fromUtf8("tablo_mevcut_gorevler"));

    gridLayout->addWidget(tablo_mevcut_gorevler, 0, 1, 1, 1);

    textEdit = new QTextEdit(RaporPerRoleGorev);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));

    gridLayout->addWidget(textEdit, 1, 0, 1, 2);

    pBYazdir = new QPushButton(RaporPerRoleGorev);
    pBYazdir->setObjectName(QString::fromUtf8("pBYazdir"));

    gridLayout->addWidget(pBYazdir, 2, 0, 1, 1);

    arama_kutusu = new QLineEdit(RaporPerRoleGorev);
    arama_kutusu->setObjectName(QString::fromUtf8("arama_kutusu"));

    gridLayout->addWidget(arama_kutusu, 2, 1, 1, 1);


    retranslateUi(RaporPerRoleGorev);

    QMetaObject::connectSlotsByName(RaporPerRoleGorev);
    } // setupUi

    void retranslateUi(QWidget *RaporPerRoleGorev)
    {
    RaporPerRoleGorev->setWindowTitle(QApplication::translate("RaporPerRoleGorev", "Form", 0, QApplication::UnicodeUTF8));
    pBYazdir->setText(QApplication::translate("RaporPerRoleGorev", "PushButton", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(RaporPerRoleGorev);
    } // retranslateUi

};

namespace Ui {
    class RaporPerRoleGorev: public Ui_RaporPerRoleGorev {};
} // namespace Ui

#endif // UI_RAPORPERROLEGOREV_H
