/********************************************************************************
** Form generated from reading ui file 'widgetYayinciSec.ui'
**
** Created: Mon Sep 3 20:38:20 2007
**      by: Qt User Interface Compiler version 4.3.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIDGETYAYINCISEC_H
#define UI_WIDGETYAYINCISEC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

class Ui_YayinciSec
{
public:
    QGridLayout *gridLayout;
    QLineEdit *arama_kutusu;
    QLabel *label;
    QTableView *tVYayinci;
    QPushButton *pBSec;

    void setupUi(QDialog *YayinciSec)
    {
    if (YayinciSec->objectName().isEmpty())
        YayinciSec->setObjectName(QString::fromUtf8("YayinciSec"));
    QSize size(400, 300);
    size = size.expandedTo(YayinciSec->minimumSizeHint());
    YayinciSec->resize(size);
    gridLayout = new QGridLayout(YayinciSec);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(9, 9, 9, 9);
    arama_kutusu = new QLineEdit(YayinciSec);
    arama_kutusu->setObjectName(QString::fromUtf8("arama_kutusu"));

    gridLayout->addWidget(arama_kutusu, 0, 1, 1, 1);

    label = new QLabel(YayinciSec);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    tVYayinci = new QTableView(YayinciSec);
    tVYayinci->setObjectName(QString::fromUtf8("tVYayinci"));
    tVYayinci->setSelectionBehavior(QAbstractItemView::SelectRows);

    gridLayout->addWidget(tVYayinci, 1, 0, 1, 2);

    pBSec = new QPushButton(YayinciSec);
    pBSec->setObjectName(QString::fromUtf8("pBSec"));

    gridLayout->addWidget(pBSec, 2, 0, 1, 2);


    retranslateUi(YayinciSec);
    QObject::connect(label, SIGNAL(linkActivated(QString)), arama_kutusu, SLOT(clear()));

    QMetaObject::connectSlotsByName(YayinciSec);
    } // setupUi

    void retranslateUi(QDialog *YayinciSec)
    {
    YayinciSec->setWindowTitle(QApplication::translate("YayinciSec", "Yay\304\261nc\304\261 Se\303\247", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("YayinciSec", "Ara:", 0, QApplication::UnicodeUTF8));
    pBSec->setText(QApplication::translate("YayinciSec", "Se\303\247", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(YayinciSec);
    } // retranslateUi

};

namespace Ui {
    class YayinciSec: public Ui_YayinciSec {};
} // namespace Ui

#endif // UI_WIDGETYAYINCISEC_H
