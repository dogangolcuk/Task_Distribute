/********************************************************************************
** Form generated from reading ui file 'formPersonelGorev.ui'
**
** Created: Sat Jul 19 11:19:45 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FORMPERSONELGOREV_H
#define UI_FORMPERSONELGOREV_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPersonelGorev
{
public:
    QAction *actionSil;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *ara_uyeler;
    QLabel *label_2;
    QLineEdit *ara_gorevyeri;
    QLabel *label_7;
    QLabel *label_3;
    QSplitter *splitter;
    QTableView *tablo_personel;
    QTableView *tablo_gorevyeri;
    QLabel *label_5;
    QLineEdit *LePersonel;
    QLabel *label_6;
    QLineEdit *LeGorevYeri;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QDateEdit *DeAtanma;
    QDateEdit *DeKatilma;
    QDateEdit *DeAyrilma;
    QPushButton *PbAta;
    QLabel *label_4;
    QTableView *tablo_mevcut_gorevler;

    void setupUi(QWidget *FormPersonelGorev)
    {
    if (FormPersonelGorev->objectName().isEmpty())
        FormPersonelGorev->setObjectName(QString::fromUtf8("FormPersonelGorev"));
    FormPersonelGorev->resize(558, 507);
    const QIcon icon = QIcon(QString::fromUtf8(":/ikonlar/share.png"));
    FormPersonelGorev->setWindowIcon(icon);
    actionSil = new QAction(FormPersonelGorev);
    actionSil->setObjectName(QString::fromUtf8("actionSil"));
    const QIcon icon1 = QIcon(QString::fromUtf8(":/ikonlar/eraser.png"));
    actionSil->setIcon(icon1);
    gridLayout = new QGridLayout(FormPersonelGorev);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(FormPersonelGorev);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    ara_uyeler = new QLineEdit(FormPersonelGorev);
    ara_uyeler->setObjectName(QString::fromUtf8("ara_uyeler"));

    gridLayout->addWidget(ara_uyeler, 0, 1, 1, 2);

    label_2 = new QLabel(FormPersonelGorev);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 0, 3, 1, 2);

    ara_gorevyeri = new QLineEdit(FormPersonelGorev);
    ara_gorevyeri->setObjectName(QString::fromUtf8("ara_gorevyeri"));

    gridLayout->addWidget(ara_gorevyeri, 0, 5, 1, 2);

    label_7 = new QLabel(FormPersonelGorev);
    label_7->setObjectName(QString::fromUtf8("label_7"));

    gridLayout->addWidget(label_7, 1, 0, 1, 2);

    label_3 = new QLabel(FormPersonelGorev);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    gridLayout->addWidget(label_3, 1, 3, 1, 3);

    splitter = new QSplitter(FormPersonelGorev);
    splitter->setObjectName(QString::fromUtf8("splitter"));
    splitter->setOrientation(Qt::Horizontal);
    tablo_personel = new QTableView(splitter);
    tablo_personel->setObjectName(QString::fromUtf8("tablo_personel"));
    tablo_personel->setSelectionMode(QAbstractItemView::SingleSelection);
    tablo_personel->setSelectionBehavior(QAbstractItemView::SelectRows);
    splitter->addWidget(tablo_personel);
    tablo_gorevyeri = new QTableView(splitter);
    tablo_gorevyeri->setObjectName(QString::fromUtf8("tablo_gorevyeri"));
    tablo_gorevyeri->setSelectionMode(QAbstractItemView::SingleSelection);
    tablo_gorevyeri->setSelectionBehavior(QAbstractItemView::SelectRows);
    splitter->addWidget(tablo_gorevyeri);

    gridLayout->addWidget(splitter, 2, 0, 1, 7);

    label_5 = new QLabel(FormPersonelGorev);
    label_5->setObjectName(QString::fromUtf8("label_5"));

    gridLayout->addWidget(label_5, 3, 0, 1, 2);

    LePersonel = new QLineEdit(FormPersonelGorev);
    LePersonel->setObjectName(QString::fromUtf8("LePersonel"));

    gridLayout->addWidget(LePersonel, 3, 2, 1, 1);

    label_6 = new QLabel(FormPersonelGorev);
    label_6->setObjectName(QString::fromUtf8("label_6"));

    gridLayout->addWidget(label_6, 3, 3, 1, 2);

    LeGorevYeri = new QLineEdit(FormPersonelGorev);
    LeGorevYeri->setObjectName(QString::fromUtf8("LeGorevYeri"));

    gridLayout->addWidget(LeGorevYeri, 3, 6, 1, 1);

    label_8 = new QLabel(FormPersonelGorev);
    label_8->setObjectName(QString::fromUtf8("label_8"));

    gridLayout->addWidget(label_8, 4, 0, 1, 1);

    label_9 = new QLabel(FormPersonelGorev);
    label_9->setObjectName(QString::fromUtf8("label_9"));

    gridLayout->addWidget(label_9, 4, 2, 1, 2);

    label_10 = new QLabel(FormPersonelGorev);
    label_10->setObjectName(QString::fromUtf8("label_10"));

    gridLayout->addWidget(label_10, 4, 4, 1, 3);

    DeAtanma = new QDateEdit(FormPersonelGorev);
    DeAtanma->setObjectName(QString::fromUtf8("DeAtanma"));
    DeAtanma->setCalendarPopup(true);

    gridLayout->addWidget(DeAtanma, 5, 0, 1, 2);

    DeKatilma = new QDateEdit(FormPersonelGorev);
    DeKatilma->setObjectName(QString::fromUtf8("DeKatilma"));
    DeKatilma->setCalendarPopup(true);

    gridLayout->addWidget(DeKatilma, 5, 2, 1, 2);

    DeAyrilma = new QDateEdit(FormPersonelGorev);
    DeAyrilma->setObjectName(QString::fromUtf8("DeAyrilma"));
    DeAyrilma->setCalendarPopup(true);

    gridLayout->addWidget(DeAyrilma, 5, 4, 1, 3);

    PbAta = new QPushButton(FormPersonelGorev);
    PbAta->setObjectName(QString::fromUtf8("PbAta"));
    const QIcon icon2 = QIcon(QString::fromUtf8(":/ikonlar/onayla.png"));
    PbAta->setIcon(icon2);

    gridLayout->addWidget(PbAta, 6, 0, 1, 7);

    label_4 = new QLabel(FormPersonelGorev);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    gridLayout->addWidget(label_4, 7, 0, 1, 7);

    tablo_mevcut_gorevler = new QTableView(FormPersonelGorev);
    tablo_mevcut_gorevler->setObjectName(QString::fromUtf8("tablo_mevcut_gorevler"));
    tablo_mevcut_gorevler->setMouseTracking(true);
    tablo_mevcut_gorevler->setFocusPolicy(Qt::WheelFocus);
    tablo_mevcut_gorevler->setContextMenuPolicy(Qt::ActionsContextMenu);
    tablo_mevcut_gorevler->setEditTriggers(QAbstractItemView::AllEditTriggers);
    tablo_mevcut_gorevler->setTabKeyNavigation(false);
    tablo_mevcut_gorevler->setAlternatingRowColors(true);
    tablo_mevcut_gorevler->setSelectionMode(QAbstractItemView::SingleSelection);
    tablo_mevcut_gorevler->setSelectionBehavior(QAbstractItemView::SelectRows);
    tablo_mevcut_gorevler->setSortingEnabled(true);

    gridLayout->addWidget(tablo_mevcut_gorevler, 8, 0, 1, 7);


    retranslateUi(FormPersonelGorev);

    QMetaObject::connectSlotsByName(FormPersonelGorev);
    } // setupUi

    void retranslateUi(QWidget *FormPersonelGorev)
    {
    FormPersonelGorev->setWindowTitle(QApplication::translate("FormPersonelGorev", "Personel G\303\266rev Yeri E\305\237le\305\237tirme", 0, QApplication::UnicodeUTF8));
    actionSil->setText(QApplication::translate("FormPersonelGorev", "sil", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("FormPersonelGorev", "Personel Ara :", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("FormPersonelGorev", "G\303\266rev Ara:", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("FormPersonelGorev", "Personel :", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("FormPersonelGorev", "G\303\266rev Yeri/Ad\304\261 :", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    tablo_gorevyeri->setToolTip(QApplication::translate("FormPersonelGorev", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Arad\304\261\304\237\304\261n\304\261z G\303\266rev Yeri Yoksa \"<span style=\" color:#ff0000;\">Sabit Veriler</span>\" den Ekleyiniz.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    label_5->setText(QApplication::translate("FormPersonelGorev", "Se\303\247ilenPersonel::", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("FormPersonelGorev", "Se\303\247ilen G\303\266rev:", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("FormPersonelGorev", "Atanma Tarihi:", 0, QApplication::UnicodeUTF8));
    label_9->setText(QApplication::translate("FormPersonelGorev", "Kat\304\261lma Tarihi :", 0, QApplication::UnicodeUTF8));
    label_10->setText(QApplication::translate("FormPersonelGorev", "Ayr\304\261lma Tarihi :", 0, QApplication::UnicodeUTF8));
    PbAta->setText(QApplication::translate("FormPersonelGorev", "Onayla", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("FormPersonelGorev", "Personelin G\303\266rev Yerleri :", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(FormPersonelGorev);
    } // retranslateUi

};

namespace Ui {
    class FormPersonelGorev: public Ui_FormPersonelGorev {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPERSONELGOREV_H
