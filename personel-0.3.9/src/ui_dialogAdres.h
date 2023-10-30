/********************************************************************************
** Form generated from reading ui file 'dialogAdres.ui'
**
** Created: Sat Jul 19 11:19:45 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DIALOGADRES_H
#define UI_DIALOGADRES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogAdres
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *TeDaimiAdres;
    QTextEdit *TeGeciciAdres;
    QPushButton *PbOnayla;
    QPushButton *Pbiptal;

    void setupUi(QDialog *DialogAdres)
    {
    if (DialogAdres->objectName().isEmpty())
        DialogAdres->setObjectName(QString::fromUtf8("DialogAdres"));
    DialogAdres->setWindowModality(Qt::WindowModal);
    DialogAdres->resize(430, 234);
    const QIcon icon = QIcon(QString::fromUtf8(":/ikonlar/contents.png"));
    DialogAdres->setWindowIcon(icon);
    gridLayout = new QGridLayout(DialogAdres);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(DialogAdres);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    label_2 = new QLabel(DialogAdres);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 0, 1, 1, 1);

    TeDaimiAdres = new QTextEdit(DialogAdres);
    TeDaimiAdres->setObjectName(QString::fromUtf8("TeDaimiAdres"));

    gridLayout->addWidget(TeDaimiAdres, 1, 0, 1, 1);

    TeGeciciAdres = new QTextEdit(DialogAdres);
    TeGeciciAdres->setObjectName(QString::fromUtf8("TeGeciciAdres"));

    gridLayout->addWidget(TeGeciciAdres, 1, 1, 1, 1);

    PbOnayla = new QPushButton(DialogAdres);
    PbOnayla->setObjectName(QString::fromUtf8("PbOnayla"));

    gridLayout->addWidget(PbOnayla, 2, 0, 1, 1);

    Pbiptal = new QPushButton(DialogAdres);
    Pbiptal->setObjectName(QString::fromUtf8("Pbiptal"));

    gridLayout->addWidget(Pbiptal, 2, 1, 1, 1);


    retranslateUi(DialogAdres);

    QMetaObject::connectSlotsByName(DialogAdres);
    } // setupUi

    void retranslateUi(QDialog *DialogAdres)
    {
    DialogAdres->setWindowTitle(QApplication::translate("DialogAdres", "Adres Bilgileri", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("DialogAdres", "Daimi Adres:", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("DialogAdres", "Ge\303\247ici Adres:", 0, QApplication::UnicodeUTF8));
    PbOnayla->setText(QApplication::translate("DialogAdres", "Onayla", 0, QApplication::UnicodeUTF8));
    Pbiptal->setText(QApplication::translate("DialogAdres", "\304\260ptal", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(DialogAdres);
    } // retranslateUi

};

namespace Ui {
    class DialogAdres: public Ui_DialogAdres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADRES_H
