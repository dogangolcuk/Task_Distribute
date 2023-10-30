/********************************************************************************
** Form generated from reading ui file 'formRoleNoRoleGorev.ui'
**
** Created: Sat Jul 19 11:19:45 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FORMROLENOROLEGOREV_H
#define UI_FORMROLENOROLEGOREV_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormRoleNoRoleGorev
{
public:
    QAction *actionGorevsil;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *label_4;
    QLineEdit *ara_roleno;
    QSplitter *splitter_2;
    QTableView *tablo_roleno;
    QTableView *tablo_mevcut_gorevler;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QLabel *label;
    QLineEdit *ara_uyeler;
    QLabel *label_2;
    QLineEdit *ara_kitaplar;
    QSplitter *splitter;
    QTableView *tablo_role;
    QTableView *tablo_rolegorev;
    QLabel *label_5;
    QLineEdit *LeRoleNo;
    QLabel *label_3;
    QLineEdit *LeRole;
    QLabel *label_6;
    QLineEdit *LeRoleGorev;
    QPushButton *PbAta;

    void setupUi(QWidget *FormRoleNoRoleGorev)
    {
    if (FormRoleNoRoleGorev->objectName().isEmpty())
        FormRoleNoRoleGorev->setObjectName(QString::fromUtf8("FormRoleNoRoleGorev"));
    FormRoleNoRoleGorev->resize(558, 594);
    actionGorevsil = new QAction(FormRoleNoRoleGorev);
    actionGorevsil->setObjectName(QString::fromUtf8("actionGorevsil"));
    const QIcon icon = QIcon(QString::fromUtf8(":/ikonlar/eraser.png"));
    actionGorevsil->setIcon(icon);
    gridLayout = new QGridLayout(FormRoleNoRoleGorev);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    groupBox = new QGroupBox(FormRoleNoRoleGorev);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout1 = new QGridLayout(groupBox);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    label_4 = new QLabel(groupBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    gridLayout1->addWidget(label_4, 0, 0, 1, 1);

    ara_roleno = new QLineEdit(groupBox);
    ara_roleno->setObjectName(QString::fromUtf8("ara_roleno"));

    gridLayout1->addWidget(ara_roleno, 0, 1, 1, 1);

    splitter_2 = new QSplitter(groupBox);
    splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
    splitter_2->setOrientation(Qt::Horizontal);
    tablo_roleno = new QTableView(splitter_2);
    tablo_roleno->setObjectName(QString::fromUtf8("tablo_roleno"));
    tablo_roleno->setAlternatingRowColors(true);
    tablo_roleno->setSelectionMode(QAbstractItemView::SingleSelection);
    tablo_roleno->setSelectionBehavior(QAbstractItemView::SelectRows);
    splitter_2->addWidget(tablo_roleno);
    tablo_mevcut_gorevler = new QTableView(splitter_2);
    tablo_mevcut_gorevler->setObjectName(QString::fromUtf8("tablo_mevcut_gorevler"));
    tablo_mevcut_gorevler->setContextMenuPolicy(Qt::ActionsContextMenu);
    tablo_mevcut_gorevler->setSelectionMode(QAbstractItemView::SingleSelection);
    tablo_mevcut_gorevler->setSelectionBehavior(QAbstractItemView::SelectRows);
    splitter_2->addWidget(tablo_mevcut_gorevler);

    gridLayout1->addWidget(splitter_2, 1, 0, 1, 2);


    gridLayout->addWidget(groupBox, 0, 0, 1, 4);

    groupBox_2 = new QGroupBox(FormRoleNoRoleGorev);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    gridLayout2 = new QGridLayout(groupBox_2);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    label = new QLabel(groupBox_2);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout2->addWidget(label, 0, 0, 1, 1);

    ara_uyeler = new QLineEdit(groupBox_2);
    ara_uyeler->setObjectName(QString::fromUtf8("ara_uyeler"));

    gridLayout2->addWidget(ara_uyeler, 0, 1, 1, 1);

    label_2 = new QLabel(groupBox_2);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout2->addWidget(label_2, 0, 2, 1, 1);

    ara_kitaplar = new QLineEdit(groupBox_2);
    ara_kitaplar->setObjectName(QString::fromUtf8("ara_kitaplar"));

    gridLayout2->addWidget(ara_kitaplar, 0, 3, 1, 1);

    splitter = new QSplitter(groupBox_2);
    splitter->setObjectName(QString::fromUtf8("splitter"));
    splitter->setOrientation(Qt::Horizontal);
    tablo_role = new QTableView(splitter);
    tablo_role->setObjectName(QString::fromUtf8("tablo_role"));
    tablo_role->setSelectionMode(QAbstractItemView::SingleSelection);
    tablo_role->setSelectionBehavior(QAbstractItemView::SelectRows);
    splitter->addWidget(tablo_role);
    tablo_rolegorev = new QTableView(splitter);
    tablo_rolegorev->setObjectName(QString::fromUtf8("tablo_rolegorev"));
    tablo_rolegorev->setSelectionMode(QAbstractItemView::SingleSelection);
    tablo_rolegorev->setSelectionBehavior(QAbstractItemView::SelectRows);
    splitter->addWidget(tablo_rolegorev);

    gridLayout2->addWidget(splitter, 1, 0, 1, 4);


    gridLayout->addWidget(groupBox_2, 1, 0, 1, 4);

    label_5 = new QLabel(FormRoleNoRoleGorev);
    label_5->setObjectName(QString::fromUtf8("label_5"));

    gridLayout->addWidget(label_5, 2, 0, 1, 1);

    LeRoleNo = new QLineEdit(FormRoleNoRoleGorev);
    LeRoleNo->setObjectName(QString::fromUtf8("LeRoleNo"));

    gridLayout->addWidget(LeRoleNo, 2, 1, 1, 3);

    label_3 = new QLabel(FormRoleNoRoleGorev);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    gridLayout->addWidget(label_3, 4, 0, 1, 1);

    LeRole = new QLineEdit(FormRoleNoRoleGorev);
    LeRole->setObjectName(QString::fromUtf8("LeRole"));

    gridLayout->addWidget(LeRole, 4, 1, 1, 1);

    label_6 = new QLabel(FormRoleNoRoleGorev);
    label_6->setObjectName(QString::fromUtf8("label_6"));

    gridLayout->addWidget(label_6, 4, 2, 1, 1);

    LeRoleGorev = new QLineEdit(FormRoleNoRoleGorev);
    LeRoleGorev->setObjectName(QString::fromUtf8("LeRoleGorev"));

    gridLayout->addWidget(LeRoleGorev, 4, 3, 1, 1);

    PbAta = new QPushButton(FormRoleNoRoleGorev);
    PbAta->setObjectName(QString::fromUtf8("PbAta"));

    gridLayout->addWidget(PbAta, 6, 0, 1, 4);


    retranslateUi(FormRoleNoRoleGorev);

    QMetaObject::connectSlotsByName(FormRoleNoRoleGorev);
    } // setupUi

    void retranslateUi(QWidget *FormRoleNoRoleGorev)
    {
    FormRoleNoRoleGorev->setWindowTitle(QApplication::translate("FormRoleNoRoleGorev", "Role Numaras\304\261na Role G\303\266revi Atama", 0, QApplication::UnicodeUTF8));
    actionGorevsil->setText(QApplication::translate("FormRoleNoRoleGorev", "G\303\266revi Sil", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("FormRoleNoRoleGorev", "Role Numaras\304\261 / Mevcut G\303\266revler", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("FormRoleNoRoleGorev", "Role No Ara:", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("FormRoleNoRoleGorev", "Roleler / Role G\303\266revleri", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("FormRoleNoRoleGorev", "Role Ara :", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("FormRoleNoRoleGorev", "Role G\303\266revi Ara:", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("FormRoleNoRoleGorev", "Se\303\247ilen Role No:", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("FormRoleNoRoleGorev", "Se\303\247ilen Role:", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("FormRoleNoRoleGorev", "Se\303\247ilen G\303\266rev:", 0, QApplication::UnicodeUTF8));
    PbAta->setText(QApplication::translate("FormRoleNoRoleGorev", "Onayla", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(FormRoleNoRoleGorev);
    } // retranslateUi

};

namespace Ui {
    class FormRoleNoRoleGorev: public Ui_FormRoleNoRoleGorev {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMROLENOROLEGOREV_H
