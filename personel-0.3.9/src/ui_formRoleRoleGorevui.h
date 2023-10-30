/********************************************************************************
** Form generated from reading ui file 'formRoleRoleGorevui.ui'
**
** Created: Sat Jul 19 11:19:45 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FORMROLEROLEGOREVUI_H
#define UI_FORMROLEROLEGOREVUI_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormRoleRoleGorev
{
public:
    QAction *actionSil;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *ara_uyeler;
    QLabel *label_2;
    QLineEdit *ara_kitaplar;
    QLabel *label_7;
    QLabel *label_3;
    QSplitter *splitter;
    QTableView *tablo_role;
    QTableView *tablo_rolegorev;
    QLabel *label_5;
    QLineEdit *LeRole;
    QLabel *label_6;
    QLineEdit *LeRoleGorev;
    QPushButton *PbAta;
    QLabel *label_4;
    QTableView *tablo_rolegorev_atanan;

    void setupUi(QWidget *FormRoleRoleGorev)
    {
    if (FormRoleRoleGorev->objectName().isEmpty())
        FormRoleRoleGorev->setObjectName(QString::fromUtf8("FormRoleRoleGorev"));
    FormRoleRoleGorev->resize(551, 556);
    const QIcon icon = QIcon(QString::fromUtf8(":/ikonlar/share.png"));
    FormRoleRoleGorev->setWindowIcon(icon);
    actionSil = new QAction(FormRoleRoleGorev);
    actionSil->setObjectName(QString::fromUtf8("actionSil"));
    const QIcon icon1 = QIcon(QString::fromUtf8(":/ikonlar/eraser.png"));
    actionSil->setIcon(icon1);
    gridLayout = new QGridLayout(FormRoleRoleGorev);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(FormRoleRoleGorev);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    ara_uyeler = new QLineEdit(FormRoleRoleGorev);
    ara_uyeler->setObjectName(QString::fromUtf8("ara_uyeler"));

    gridLayout->addWidget(ara_uyeler, 0, 1, 1, 2);

    label_2 = new QLabel(FormRoleRoleGorev);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 0, 3, 1, 1);

    ara_kitaplar = new QLineEdit(FormRoleRoleGorev);
    ara_kitaplar->setObjectName(QString::fromUtf8("ara_kitaplar"));

    gridLayout->addWidget(ara_kitaplar, 0, 4, 1, 1);

    label_7 = new QLabel(FormRoleRoleGorev);
    label_7->setObjectName(QString::fromUtf8("label_7"));

    gridLayout->addWidget(label_7, 1, 0, 1, 2);

    label_3 = new QLabel(FormRoleRoleGorev);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    gridLayout->addWidget(label_3, 1, 3, 1, 2);

    splitter = new QSplitter(FormRoleRoleGorev);
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

    gridLayout->addWidget(splitter, 2, 0, 1, 5);

    label_5 = new QLabel(FormRoleRoleGorev);
    label_5->setObjectName(QString::fromUtf8("label_5"));

    gridLayout->addWidget(label_5, 3, 0, 1, 2);

    LeRole = new QLineEdit(FormRoleRoleGorev);
    LeRole->setObjectName(QString::fromUtf8("LeRole"));

    gridLayout->addWidget(LeRole, 3, 2, 1, 1);

    label_6 = new QLabel(FormRoleRoleGorev);
    label_6->setObjectName(QString::fromUtf8("label_6"));

    gridLayout->addWidget(label_6, 3, 3, 1, 1);

    LeRoleGorev = new QLineEdit(FormRoleRoleGorev);
    LeRoleGorev->setObjectName(QString::fromUtf8("LeRoleGorev"));

    gridLayout->addWidget(LeRoleGorev, 3, 4, 1, 1);

    PbAta = new QPushButton(FormRoleRoleGorev);
    PbAta->setObjectName(QString::fromUtf8("PbAta"));
    const QIcon icon2 = QIcon(QString::fromUtf8(":/ikonlar/onayla.png"));
    PbAta->setIcon(icon2);

    gridLayout->addWidget(PbAta, 4, 0, 1, 5);

    label_4 = new QLabel(FormRoleRoleGorev);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    gridLayout->addWidget(label_4, 5, 0, 1, 5);

    tablo_rolegorev_atanan = new QTableView(FormRoleRoleGorev);
    tablo_rolegorev_atanan->setObjectName(QString::fromUtf8("tablo_rolegorev_atanan"));
    tablo_rolegorev_atanan->setMouseTracking(true);
    tablo_rolegorev_atanan->setFocusPolicy(Qt::WheelFocus);
    tablo_rolegorev_atanan->setContextMenuPolicy(Qt::ActionsContextMenu);
    tablo_rolegorev_atanan->setEditTriggers(QAbstractItemView::AllEditTriggers);
    tablo_rolegorev_atanan->setTabKeyNavigation(false);
    tablo_rolegorev_atanan->setAlternatingRowColors(true);
    tablo_rolegorev_atanan->setSelectionMode(QAbstractItemView::SingleSelection);
    tablo_rolegorev_atanan->setSelectionBehavior(QAbstractItemView::SelectRows);
    tablo_rolegorev_atanan->setSortingEnabled(true);

    gridLayout->addWidget(tablo_rolegorev_atanan, 6, 0, 1, 5);


    retranslateUi(FormRoleRoleGorev);

    QMetaObject::connectSlotsByName(FormRoleRoleGorev);
    } // setupUi

    void retranslateUi(QWidget *FormRoleRoleGorev)
    {
    FormRoleRoleGorev->setWindowTitle(QApplication::translate("FormRoleRoleGorev", "Role ye Role G\303\266revi Atama", 0, QApplication::UnicodeUTF8));
    actionSil->setText(QApplication::translate("FormRoleRoleGorev", "sil", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("FormRoleRoleGorev", "Role Ara :", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("FormRoleRoleGorev", "Role G\303\266revi Ara:", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("FormRoleRoleGorev", "Roleler :", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("FormRoleRoleGorev", "T\303\274m G\303\266revler:", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("FormRoleRoleGorev", "Se\303\247ilen Role:", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("FormRoleRoleGorev", "Se\303\247ilen G\303\266rev:", 0, QApplication::UnicodeUTF8));
    PbAta->setText(QApplication::translate("FormRoleRoleGorev", "Onayla", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("FormRoleRoleGorev", "Sadece Bu Rolede ki G\303\266revler:", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(FormRoleRoleGorev);
    } // retranslateUi

};

namespace Ui {
    class FormRoleRoleGorev: public Ui_FormRoleRoleGorev {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMROLEROLEGOREVUI_H
