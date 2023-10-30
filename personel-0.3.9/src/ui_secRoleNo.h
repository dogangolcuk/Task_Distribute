/********************************************************************************
** Form generated from reading ui file 'secRoleNo.ui'
**
** Created: Sat Jul 19 11:19:45 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SECROLENO_H
#define UI_SECROLENO_H

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

QT_BEGIN_NAMESPACE

class Ui_RoleNoSec
{
public:
    QGridLayout *gridLayout;
    QLineEdit *arama_kutusu;
    QLabel *label;
    QTableView *tablo;
    QPushButton *pBSec;

    void setupUi(QDialog *RoleNoSec)
    {
    if (RoleNoSec->objectName().isEmpty())
        RoleNoSec->setObjectName(QString::fromUtf8("RoleNoSec"));
    RoleNoSec->resize(400, 300);
    gridLayout = new QGridLayout(RoleNoSec);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(9, 9, 9, 9);
    arama_kutusu = new QLineEdit(RoleNoSec);
    arama_kutusu->setObjectName(QString::fromUtf8("arama_kutusu"));

    gridLayout->addWidget(arama_kutusu, 0, 1, 1, 1);

    label = new QLabel(RoleNoSec);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    tablo = new QTableView(RoleNoSec);
    tablo->setObjectName(QString::fromUtf8("tablo"));
    tablo->setSelectionBehavior(QAbstractItemView::SelectRows);

    gridLayout->addWidget(tablo, 1, 0, 1, 2);

    pBSec = new QPushButton(RoleNoSec);
    pBSec->setObjectName(QString::fromUtf8("pBSec"));

    gridLayout->addWidget(pBSec, 2, 0, 1, 2);


    retranslateUi(RoleNoSec);
    QObject::connect(label, SIGNAL(linkActivated(QString)), arama_kutusu, SLOT(clear()));

    QMetaObject::connectSlotsByName(RoleNoSec);
    } // setupUi

    void retranslateUi(QDialog *RoleNoSec)
    {
    RoleNoSec->setWindowTitle(QApplication::translate("RoleNoSec", "Role No Se\303\247", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("RoleNoSec", "Ara:", 0, QApplication::UnicodeUTF8));
    pBSec->setText(QApplication::translate("RoleNoSec", "Se\303\247", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(RoleNoSec);
    } // retranslateUi

};

namespace Ui {
    class RoleNoSec: public Ui_RoleNoSec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECROLENO_H
